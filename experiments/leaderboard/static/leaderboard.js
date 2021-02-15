var stb_leaderboard = {
	'load_ranking': function() {
		let ranking_request = new XMLHttpRequest();
		ranking_request.open('GET', '/api/leaderboard', true);
		ranking_request.onload = function(e) {
			if (ranking_request.readyState === 4) {
				if (ranking_request.status == 200) {
					stb_leaderboard.refresh_table(JSON.parse(ranking_request.responseText).ranking);
				}else {
					console.error(ranking_request.statusText);
				}
			}
		};
		ranking_request.onerror = function(e) {
			console.error(ranking_request.statusText);
		};
		ranking_request.send(null);
	},

	'refresh_table': function(data) {
		let rank_table = document.getElementById('ranking');
		rank_table.innerHTML = `
			<tr>
			<th scope="col"></th>
			<th scope="col" class="big">Player</th>
			<th scope="col">MMR</th>
			<th scope="col">Medals</th>
			</tr>
		`;
		for (let i = 0; i < data.length; ++i) {
			let field = data[i];
			rank_table.innerHTML += `
				<tr>
				<td>${i+1}</td>
				<td class="big"><img class="region_flag" src="/static/imgs/flag_eu.svg" alt="Europe" />${field.user_name}</td>
				<td>${field.mmr}</td>
				<td><img class="medal" src="imgs/medal_king.svg" alt="King" title="King of Europe server" /></td>
				</tr>
			`;
		}
	},
};

document.addEventListener('DOMContentLoaded', stb_leaderboard.load_ranking, false);
