from flask import Flask
import json
import requests
app = Flask(__name__)

ranking_server = {
	'addr': '127.0.0.1',
	'port': 8123,
}

@app.route('/api/leaderboard')
def raw_leaderboard():
	resp = requests.get('http://{}:{}/api/rankings'.format(ranking_server['addr'], ranking_server['port']))
	if resp.status_code == 200:
		return {'ranking': json.loads(resp.text)}
	flask.abort(500)
