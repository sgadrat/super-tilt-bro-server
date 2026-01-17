#include "server/GameInstance.hpp"

#include "server/utils.hpp"
#include "GameState.hpp"
#include "network.hpp"
#include <libstnp/libstnp.hpp>

#include <chrono>
#include <sstream>
#include <syslog.h>

namespace  {

uint32_t constexpr INPUT_LAG = 4;

GameState initial_gamestate(GameInstance::GameSettings const& settings) {
	return GameState(
		settings.stage_id,
		settings.characters,
		static_cast<GameState::VideoSystem>(settings.video_system),
		[](std::string const& m) {syslog(LOG_WARNING, "GameState: %s", m.c_str());}
	);
}

GameState::ControllerState controller_state_from_message(stnp::message::ControllerState const& message) {
	GameState::ControllerState controller_state;
	controller_state.a_pressed = message.a_pressed;
	controller_state.b_pressed = message.b_pressed;
	controller_state.select_pressed = message.select_pressed;
	controller_state.start_pressed = message.start_pressed;
	controller_state.up_pressed = message.up_pressed;
	controller_state.down_pressed = message.down_pressed;
	controller_state.left_pressed = message.left_pressed;
	controller_state.right_pressed = message.right_pressed;
	return controller_state;
}

GameState::ControllerState const& get_history_value_at(std::map<uint32_t, GameState::ControllerState> const& history, uint32_t i) {
	assert(!history.empty());
	std::map<uint32_t, GameState::ControllerState>::const_iterator history_entry = history.upper_bound(i);
	if (history_entry != history.begin()) --history_entry;
	return history_entry->second;
}


void debug_log_msg([[maybe_unused]] std::shared_ptr<network::IncommingUdpMessage> const& in_message) {
#ifdef VERBOSE_DEBUG
	std::ostringstream oss;
	oss << "GameInstance: got a message from " << in_message->sender.address() << ":" << in_message->sender.port() << "\n";
	oss << in_message->data.size() << " B" << "\n";
	oss << std::hex;
	for (uint8_t b : in_message->data) {
		oss << std::setfill('0') << std::setw(2) << (uint16_t)b << ' ';
	}
	srv_dbg(LOG_DEBUG, oss.str().c_str());
#endif
}

std::pair<uint32_t, GameState> compute_game_state_at(
	uint32_t target_time,
	std::map<uint32_t, GameState> const& gamestate_history,
	std::map<uint32_t, GameState::ControllerState> const& controller_a_history,
	std::map<uint32_t, GameState::ControllerState> const& controller_b_history
)
{
	using std::chrono::duration_cast;
	using std::chrono::microseconds;
	using std::chrono::nanoseconds;
	using std::chrono::steady_clock;

	// Compute game state at target time
	std::map<uint32_t, GameState>::const_iterator gamestate_history_entry = gamestate_history.upper_bound(target_time);
	assert(gamestate_history_entry != gamestate_history.begin()); // Upper bound, and gamestate history must not be empty (initial gamestate is here)
	--gamestate_history_entry;

	std::pair<uint32_t, GameState> result = *gamestate_history_entry;
	uint32_t& gamestate_time = result.first;
	GameState& gamestate = result.second;
	bool gameover = false;

#ifdef LOG_FLOOD
	nanoseconds ticks_time(0);
#endif
	uint32_t const n_ticks = target_time - gamestate_time;

	steady_clock::time_point const loop_begin = steady_clock::now();
	while (!gameover && gamestate_time < target_time) {
		// Apply inputs
		std::map<uint32_t, GameState::ControllerState>::const_iterator controller_history_entry(controller_a_history.find(gamestate_time));
		if (controller_history_entry != controller_a_history.end()) {
			gamestate.setControllerAState(controller_history_entry->second);
		}

		controller_history_entry = controller_b_history.find(gamestate_time);
		if (controller_history_entry != controller_b_history.end()) {
			gamestate.setControllerBState(controller_history_entry->second);
		}

		// Tick Simulation
#ifdef LOG_FLOOD
		steady_clock::time_point const tick_begin = steady_clock::now();
#endif
		if (!gamestate.tick()) {
			gameover = true;
		}
#ifdef LOG_FLOOD
		auto const tick_end = steady_clock::now();
		ticks_time += duration_cast<nanoseconds>(tick_end - tick_begin);
#endif
		++gamestate_time;
	}

	// Dump stats
#ifdef LOG_FLOOD
	srv_dbg(
		LOG_DEBUG, "%u ticks in %lu us : %lu us/tick",
		n_ticks, ticks_time.count() / 1000, n_ticks > 0 ? (ticks_time.count() / 1000) / n_ticks : 0
	);
#endif

	microseconds loop_time = duration_cast<microseconds>(steady_clock::now() - loop_begin);
	if (loop_time > microseconds(10'000)) {
		syslog(
			LOG_WARNING, "GameInstance: long time spent emulating frames: %u ticks in %lu us (%lu us/tick)",
			n_ticks, loop_time.count(), n_ticks > 0 ? loop_time.count() / n_ticks : 0
		);
	}

	// Apply inputs for the final state
	std::map<uint32_t, GameState::ControllerState>::const_iterator controller_history_entry(controller_a_history.find(gamestate_time));
	if (controller_history_entry != controller_a_history.end()) {
		gamestate.setControllerAState(controller_history_entry->second);
	}

	controller_history_entry = controller_b_history.find(gamestate_time);
	if (controller_history_entry != controller_b_history.end()) {
		gamestate.setControllerBState(controller_history_entry->second);
	}

	// Return computed state
	return result;
}

/** Return an iterator on the gamestate history entry at specified time, compute it if necessary */
std::map<uint32_t, GameState>::iterator get_game_state_at(
	uint32_t target_time,
	std::map<uint32_t, GameState>& gamestate_history,
	std::map<uint32_t, GameState::ControllerState> const& controller_a_history,
	std::map<uint32_t, GameState::ControllerState> const& controller_b_history
)
{
	std::map<uint32_t, GameState>::iterator gamestate = gamestate_history.find(target_time);
	if (gamestate == gamestate_history.end()) {
		std::pair<uint32_t, GameState> new_entry = compute_game_state_at(target_time, gamestate_history, controller_a_history, controller_b_history);
		std::pair<std::map<uint32_t, GameState>::iterator, bool> insert_info = gamestate_history.insert(new_entry);
		assert(insert_info.second == true); /* We checked that there was no element for this time, it must be inserted successfuly */
		gamestate = insert_info.first;
	}
	return gamestate;
}

std::vector<uint8_t> serialize_new_game_state_msg(
	uint8_t prediction_id,
	uint32_t gamestate_time,
	GameState& gamestate,
	std::map<uint32_t, GameState::ControllerState> const& client_controller_history,
	std::map<uint32_t, GameState::ControllerState> const& opponent_controller_history
)
{
	stnp::message::NewGameState new_gamestate_msg;
	new_gamestate_msg.timestamp = gamestate_time;
	new_gamestate_msg.prediction_id = prediction_id;
	stnp::message::MessageSerializer state_serializer;
	gamestate.serial(state_serializer);
	new_gamestate_msg.state = state_serializer.serialized();

	new_gamestate_msg.next_opponent_inputs.reserve(INPUT_LAG);
	for (uint32_t i = gamestate_time + 1; i <= gamestate_time + INPUT_LAG; ++i) {
		new_gamestate_msg.next_local_inputs.push_back(get_history_value_at(client_controller_history, i).getRaw());
		new_gamestate_msg.next_opponent_inputs.push_back(get_history_value_at(opponent_controller_history, i).getRaw());
	}

	stnp::message::MessageSerializer serializer;
	new_gamestate_msg.serial(serializer, stnp::LAST_VERSION);
	return serializer.serialized();
}

std::vector<uint8_t> serialize_gameover_msg(uint8_t winner_player_number) {
	assert(winner_player_number < 2);
	stnp::message::GameOver gameover_msg{
		.winner_player_number = winner_player_number
	};
	stnp::message::MessageSerializer serializer;
	gameover_msg.serial(serializer);
	return serializer.serialized();
}
}

void GameInstance::run(
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
	std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
	std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameInfo>> game_info_queue,
	std::shared_ptr<ClientsDatagramRouting> clients_routing,
	std::array<std::array<uint32_t, 2>, 2> transit_time,
	ClientInfo client_a,
	ClientInfo client_b,
	GameSettings game_settings
)
{
	using std::chrono::duration_cast;
	using std::chrono::microseconds;
	using std::chrono::steady_clock;

	try {
		// Variables with lifetime spanning entire run() duration
		this->keep_running = true;
		this->over = false;

		std::shared_ptr<StatisticsSink::GameInfo> game_info(new StatisticsSink::GameInfo);
		::uuid_generate(game_info->game_id);
		game_info->game_begin = std::chrono::system_clock::now();
		game_info->game_end = game_info->game_begin;
		game_info->client_a_id = client_a.id;
		game_info->client_b_id = client_b.id;
		game_info->character_a = game_settings.characters.at(0);
		game_info->character_b = game_settings.characters.at(1);
		game_info->character_a_palette = game_settings.character_palettes.at(0);
		game_info->character_b_palette = game_settings.character_palettes.at(1);
		game_info->stage = game_settings.stage_id;
		game_info->video_system = game_settings.video_system;
		game_info->winner = 255;
		game_info->player_a_ranked = game_settings.ranked.at(0);
		game_info->player_b_ranked = game_settings.ranked.at(1);

		std::shared_ptr<network::IncommingUdpMessage> in_message = nullptr;
		std::vector<boost::asio::ip::udp::endpoint> clients({client_a.endpoint, client_b.endpoint});

		std::map<uint32_t, GameState> gamestate_history{
			{0, initial_gamestate(game_settings)}
		};
		std::shared_ptr<std::map<uint32_t, GameState::ControllerState>> controller_a_history_ptr(new std::map<uint32_t, GameState::ControllerState>{
			{0, GameState::ControllerState()}
		});
		std::shared_ptr<std::map<uint32_t, GameState::ControllerState>> controller_b_history_ptr(new std::map<uint32_t, GameState::ControllerState>{
			{0, GameState::ControllerState()}
		});
		std::map<uint32_t, GameState::ControllerState>& controller_a_history = *controller_a_history_ptr;
		std::map<uint32_t, GameState::ControllerState>& controller_b_history = *controller_b_history_ptr;

		uint8_t prediction_id = 0;

		steady_clock::time_point last_input_clock_time = steady_clock::now();
		std::array<uint32_t, 2> last_gamestate_sent_time = {0, 0}; // For each client, timestamp of the last gamestate sent

		uint8_t const frame_rate = (
			static_cast<GameState::VideoSystem>(game_settings.video_system) == GameState::VideoSystem::NTSC ?
			60 :
			50
		);

		// Variables reset each time a state is sent
		bool new_input_batch = true;
		std::array<bool, 2> impacted_clients = {false, false}; // For each client, true if the state has to be sent
		steady_clock::time_point input_batch_begin;
		unsigned int batch_size = 0;

		// Process incoming messages
		while (this->keep_running) {
			// Reconstruct gamestate history according to bufferized messages
			while (this->keep_running) {
				// Get next incomming message
				try {
					in_message = in_messages->pop_block(microseconds(100'000));
					last_input_clock_time = steady_clock::now();
					++batch_size;
					if (new_input_batch) {
						input_batch_begin = last_input_clock_time;
						new_input_batch = false;
					}
				}catch(std::exception const& e) {
					in_message = nullptr;
				}

				game_info->game_log.new_net_message(last_input_clock_time, in_message, batch_size == 1);

				// Process message
				if (in_message == nullptr) {
					// No message received, compute some frames in the history to have it at hand when a message finally comes.
					microseconds const frame_duration((1'000'000 + frame_rate/2) / frame_rate);
					uint32_t const last_input_time = std::max(controller_a_history.rbegin()->first, controller_b_history.rbegin()->first);
					uint32_t n_frames_since_last_input = duration_cast<microseconds>(steady_clock::now() - last_input_clock_time).count() / frame_duration.count();
					uint32_t const current_time = last_input_time + n_frames_since_last_input;

					srv_dbg(LOG_DEBUG, "pred compute: %d", current_time);
					std::pair<uint32_t, GameState> const computed_gamestate = compute_game_state_at(
						current_time,
						gamestate_history, controller_a_history, controller_b_history
					);

					uint32_t const gameover_delay = 32; // Arbitraty number, reasoning for "32" is that it match the client's input buffer size
					if (computed_gamestate.second.is_gameover() && n_frames_since_last_input > gameover_delay) {
						syslog(LOG_INFO, "GameInstance: gameover found while emulating inactivity");
						this->keep_running = false;
						break;
					}

					gamestate_history.insert(computed_gamestate);

					break; //TODO simplify uselessly doubled while loop
				}else {
					// Print received message
					debug_log_msg(in_message);

					// Parse message
					stnp::message::ControllerState message;
					stnp::message::MessageDeserializer deserializer(in_message->data);
					try {
						message.serial(deserializer);
					}catch (std::runtime_error const& e) {
						syslog(LOG_WARNING, "GameInstance: failed to parse message from %s:%d: %s", in_message->sender.address().to_string().c_str(), in_message->sender.port(), e.what());
						continue;
					}

					// Mark the other client as impacted
					uint8_t const sender_index = (message.client_id == client_a.id ? 0 : 1);
					uint8_t const opponent_index = (message.client_id == client_a.id ? 1 : 0);
					impacted_clients[opponent_index] = true;

					// Update inputs history
					{
						microseconds const frame_duration((1'000'000 + frame_rate/2) / frame_rate);
						uint32_t const last_input_time = std::max(controller_a_history.rbegin()->first, controller_b_history.rbegin()->first);
						uint32_t n_frames_since_last_input = duration_cast<microseconds>(steady_clock::now() - last_input_clock_time).count() / frame_duration.count();
						uint32_t const current_time = last_input_time + n_frames_since_last_input;
						uint32_t const max_delay = 5;
						if (current_time > max_delay + INPUT_LAG && message.timestamp + INPUT_LAG < current_time - max_delay) {
							syslog(
								LOG_WARNING, "GameInstance: warning: replaced late input: sender=%u, message_time=%u, current_time=%u, late_by=%u",
								uint32_t(sender_index), message.timestamp, current_time, current_time - message.timestamp + INPUT_LAG
							);
							message.timestamp = current_time - max_delay - INPUT_LAG;
							impacted_clients[sender_index] = true;
						}
					}
					GameState::ControllerState controller_state = controller_state_from_message(message);
					std::map<uint32_t, GameState::ControllerState>& sender_controller_history = (message.client_id == client_a.id ? controller_a_history : controller_b_history);
					sender_controller_history[message.timestamp + INPUT_LAG] = controller_state;

					// Invalidate gamestate history from message's timestamp
					//  Note we don't want to keep states after that, even if still valid because of input delay.
					//  Not keeping it allows to ensure that the last computed gamestate is the one to send in the message (matching delayed frames)
					//  TODO this note is no more valid, we compute per-client state. Investigate if we should avoid invalidating states before input lag.
					//       Food for though: as we send input history in states, it may be nice to resend it
					std::map<uint32_t, GameState>::iterator first_invalid_gamestate(gamestate_history.lower_bound(message.timestamp));
					bool const history_rewrite = first_invalid_gamestate != gamestate_history.end();
					bool const sent_state_rewrite = (history_rewrite && first_invalid_gamestate->first <= last_gamestate_sent_time[sender_index]);
					if (history_rewrite) {
						if (first_invalid_gamestate->first == 0) {
							syslog(LOG_WARNING, "GameInstance: warning: prevented modification of initial gamestate");
						}else {
							srv_dbg(
								LOG_DEBUG, "GameInstance: history rewrite: message_time=%u, last_sent=%u, first_invalid=%u, rewrite=%s, erratum=%s",
								message.timestamp, last_gamestate_sent_time[sender_index], first_invalid_gamestate->first,
								history_rewrite?"true":"false", sent_state_rewrite?"true":"false"
							);
							gamestate_history.erase(first_invalid_gamestate, gamestate_history.end());
						}
					}

					// If history was rewriten, we must refresh sender's state as we may have sent him a misspredicted one last time
					if (sent_state_rewrite) {
						impacted_clients[sender_index] = true;
					}

					// Avoid computing states if there are other inputs to considere
					if (!in_messages->empty()) {
						continue;
					}

					// Increment prediction ID
					++prediction_id;

					// Send current state to clients when there is no more message waiting to be processed
					if (in_messages->empty()) {
						// Compute current gamestate time (estimated as "higest received timestamp")
						uint32_t const last_input_time = std::max(controller_a_history.rbegin()->first, controller_b_history.rbegin()->first);
						assert(last_input_time >= INPUT_LAG);
						uint32_t const current_gamestate_time = last_input_time - INPUT_LAG;
						uint32_t const last_input_client = [&]() {
							uint32_t const client_a_input_time = controller_a_history.rbegin()->first;
							uint32_t const client_b_input_time = controller_b_history.rbegin()->first;
							// Return the client that has the last registered input
							if (client_a_input_time > client_b_input_time) {
								return 0;
							}else if (client_b_input_time > client_a_input_time) {
								return 1;
							}
							// In case of equality use the one with lowest transit time (to minimise over-prediction)
							if (transit_time[0][0] < transit_time[1][1]) {
								return 0;
							}else {
								return 1;
							}
						}();

						// Send the new game state to impacted clients
						for (size_t client_index = 0; client_index < clients.size(); ++client_index) {
							if (impacted_clients[client_index]) {
								// Estimate client's local timestamp when it will receive this message
								uint32_t const client_time = current_gamestate_time + transit_time[last_input_client][client_index];

								// Get gamestate
								std::map<uint32_t, GameState>::iterator gamestate_it = get_game_state_at(
									client_time,
									gamestate_history, controller_a_history, controller_b_history
								);
								GameState& gamestate = gamestate_it->second;
								uint32_t const gamestate_time = gamestate_it->first;
								std::map<uint32_t, GameState::ControllerState>& opponent_controller_history = (client_index == 0 ? controller_b_history : controller_a_history);
								std::map<uint32_t, GameState::ControllerState>& client_controller_history = (client_index == 0 ? controller_a_history : controller_b_history);

								// Stop procesing if the game is over (we don't want to send this state, better send a GameOver message)
								if (gamestate.is_gameover()) {
									syslog(LOG_INFO, "GameInstance: gameover found while emulating client #%lu state", client_index);
									this->keep_running = false;
									continue;
								}

								// Send message
								boost::asio::ip::udp::endpoint const& client_endpoint = clients.at(client_index);
								std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
								out_message->destination = client_endpoint;
								out_message->data = serialize_new_game_state_msg(
									prediction_id, gamestate_time, gamestate,
									client_controller_history, opponent_controller_history
								);
								out_messages->push(out_message);
								srv_dbg(
									LOG_DEBUG, "%lu send %s to %s:%d (client_time=%u, gamestate_time=%u)",
									wall_clock_milli(),
									client_index != sender_index ? "state" : "eratum",
									client_endpoint.address().to_string().c_str(),
									client_endpoint.port(),
									client_time,
									gamestate_time
								);

								// Update info about sends
								last_gamestate_sent_time[client_index] = gamestate_time;
							}
						}

						// Log time spent computing states
						microseconds const time_spent_in_batch = duration_cast<microseconds>(steady_clock::now() - input_batch_begin);
						srv_dbg(
							LOG_DEBUG,
							"GameInstance: Time spent in input batch: %ld us - batch size: %d inputs",
							time_spent_in_batch.count(), batch_size
						);
						if (time_spent_in_batch > microseconds(10'000)) {
							syslog(
								LOG_WARNING,
								"GameInstance: Long time spent in input batch: %ld us - batch size: %d inputs",
								time_spent_in_batch.count(), batch_size
							);
						}

						// Reset variables for this batch of incomming messages
						impacted_clients = {false, false};
						new_input_batch = true;
						batch_size = 0;
					}
				}
			}
		}

		// Send GameOver message to clients
		syslog(LOG_INFO, "GameInstance: game over");
		std::vector<uint8_t> gameover_data = serialize_gameover_msg(gamestate_history.rbegin()->second.winner() % 2);
		for (size_t client_index = 0; client_index < clients.size(); ++client_index) {
			boost::asio::ip::udp::endpoint const& client_endpoint = clients.at(client_index);
			std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
			out_message->destination = client_endpoint;
			out_message->data = gameover_data;
			out_messages->push(out_message);
			srv_dbg(
				LOG_DEBUG, "%lu send %s to %s:%d",
				wall_clock_milli(),
				"gameover",
				client_endpoint.address().to_string().c_str(),
				client_endpoint.port()
			);
		}

		// Send game's result to game info
		if (game_info_queue) {
			game_info->game_end = std::chrono::system_clock::now();
			game_info->winner = gamestate_history.rbegin()->second.winner() % 2;
			game_info->controller_a_history = controller_a_history_ptr;
			game_info->controller_b_history = controller_b_history_ptr;
			//HACK
			// Adding frame_rate is a teribly hardcoded worst case, it comes from the fact that
			//  - message pop timeouts every second
			//  - on timeout, frames are emulated to avoid being too late from clients' time
			//  - if one of these maintenance simulation tick is a gameover, the simulation ends
			//  - we ignore the fact that a client can send inputs far in the past
			game_info->num_ticks_in_game = gamestate_history.rbegin()->first + frame_rate;
			game_info_queue->push(game_info);
		}
	}catch(std::exception const& e) {
		syslog(LOG_ERR, "GameInstance: game crashed: %s", e.what());
	}

	// Disconnect clients
	srv_dbg(LOG_DEBUG, "GameInstance: deconnecting clients from server");
	clients_routing->remove_client(client_a.endpoint);
	clients_routing->remove_client(client_b.endpoint);

	this->over = true;
}

void GameInstance::stop() {
	this->keep_running = false;
}

bool GameInstance::is_over() const {
	return this->over;
}
