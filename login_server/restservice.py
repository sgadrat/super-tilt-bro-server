import http.server
import json
import logindb
import re
import sys
import time

#
# Configurable constants
#

RE_URL_PATTERN = re.compile('^/api/login/(?P<req>[^/]+)(?P<params>/.*)$')

#
# Utils
#

class AuthError(Exception):
	pass

class InvalidRequest(Exception):
	pass

def log(m):
	sys.stderr.write('[{}] {}\n'.format(time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime()), m))

def answer(request, message, code = 200):
	request.send_response(code)
	request.end_headers()
	request.wfile.write(bytes(json.dumps(message), 'utf-8'))
	request._handled = True

def success(request, message):
	answer(request, message, 200)

#
# Public API
#

def get_user_name(request, url_params):
	log('get_user_name: "{}"'.format(url_params))
	if len(url_params) == 1:
		user_id = int(url_params[0])
		user_name = logindb.get_user_name(user_id)
		success(request, user_name)

#
# Server logic
#

class RequestHandler(http.server.BaseHTTPRequestHandler):
	def _check_addr(self):
		if self.server._addr_white_list is not None and self.client_address[0] not in self.server._addr_white_list:
			raise AuthError()

	def log_request(code='-', size='-'):
		pass

	def handle_request(self, method):
		self._handled = False

		try:
			m = RE_URL_PATTERN.match(self.path)
			if m is None:
				raise InvalidRequest('bad path')

			handler_func_name = '{}_{}'.format(method, m.group('req'))
			url_params = m.group('params')[1:].split('/') if len(m.group('params')) > 1 else []

			if handler_func_name not in globals():
				raise InvalidRequest('bad endpoint')

			handler_func = globals()[handler_func_name]
			handler_func(self, url_params)
		except InvalidRequest as e:
			if not self._handled:
				answer(self, 'invalid request: {}'.format(e), 400)
		finally:
			if not self._handled:
				answer(self, 'unhandled request', 500)

	def do_POST(self):
		try:
			self._check_addr()
			self.handle_request('post')
		except AuthError:
			pass
		except Exception as e:
			log('failed handling request on "{}": {}'.format(self.path, e))

	def do_GET(self):
		try:
			self._check_addr()
			self.handle_request('get')
		except AuthError:
			pass

def serve(port, whitelist=None):
	server_address = ('', port)
	httpd = http.server.ThreadingHTTPServer(server_address, RequestHandler)
	httpd._addr_white_list = whitelist
	httpd.serve_forever()
