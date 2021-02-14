import http.server
import json
import rankingdb
import sys
import time

class AuthError(Exception):
	pass

def log(m):
	sys.stderr.write('[{}] {}\n'.format(time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime()), m))

class RequestHandler(http.server.BaseHTTPRequestHandler):
	def _check_addr(self):
		if self.client_address[0] not in self.server._addr_white_list:
			raise AuthError()

	def log_request(code='-', size='-'):
		pass

	def do_POST(self):
		try:
			self._check_addr()
			if self.path == '/api/rankings' and 'Content-Length' in self.headers:
				data = self.rfile.read(int(self.headers['Content-Length']))
				msg = json.loads(data)
				rankingdb.push_games(msg)

				self.send_response(200)
				self.end_headers()
				self.wfile.write(b'{"status": "ok"}')
		except AuthError:
			pass
		except Exception as e:
			log('failed handling request on "{}": {}'.format(self.path, e))

	def do_GET(self):
		try:
			self._check_addr()
			if self.path == '/api/rankings':
				self.send_response(200)
				self.end_headers()
				self.wfile.write(bytes(json.dumps(rankingdb.get_ladder()), 'utf-8'))
		except AuthError:
			pass

def serve(port, whitelist):
	server_address = ('', port)
	httpd = http.server.ThreadingHTTPServer(server_address, RequestHandler)
	httpd._addr_white_list = whitelist
	httpd.serve_forever()
