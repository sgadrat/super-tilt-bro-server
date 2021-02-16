var stb_leaderboard = {
	'players': {
		'roger': {
			'region': 'eu',
			'medals': ['eu_king', 'fallen_king']
		}
	},

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
		const flag_imgs = {
			'eu': '<img class="region_flag" src="imgs/flag_eu.svg" alt="Europe" />',
			'na': '<img class="region_flag" src="imgs/flag_us.svg" alt="North America" />',
			'unknown': '',
		};
		const medal_imgs = {
			'eu_king': '<img class="medal" src="imgs/medal_king.svg" alt="King" title="King of Europe server" />',
			'na_king': '<img class="medal" src="imgs/medal_king.svg" alt="King" title="King of North America server" />',
			'fallen_king': '<img class="medal" src="imgs/medal_fallen_king.svg" alt="Former king" title="Former king" />',
		};

		let get_flag_img = function(user) {
			if (!(user in stb_leaderboard['players'])) {
				return flag_imgs['unknown'];
			}
			let region = stb_leaderboard['players'][user]['region'];
			return flag_imgs[region];
		};

		let get_medals = function(user) {
			if (!(user in stb_leaderboard['players'])) {
				return '';
			}
			let medals = stb_leaderboard['players'][user]['medals'];
			let medals_html = '';
			for (let i = 0; i < medals.length; ++i) {
				medals_html += medal_imgs[medals[i]];
			}
			return medals_html;
		};

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
				<td class="big">${get_flag_img(field.user_name)}${field.user_name}</td>
				<td>${field.mmr}</td>
				<td>${get_medals(field.user_name)}</td>
				</tr>
			`;
		}
	},
};

document.addEventListener('DOMContentLoaded', stb_leaderboard.load_ranking, false);
