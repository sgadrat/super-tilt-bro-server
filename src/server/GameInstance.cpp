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
	return GameState(settings.stage_id, settings.characters, [](std::string const& m) {syslog(LOG_WARNING, "GameState: %s", m.c_str());});
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
	using std::chrono::nanoseconds;
	using std::chrono::steady_clock;

	std::map<uint32_t, GameState>::const_iterator gamestate_history_entry = gamestate_history.upper_bound(target_time);
	assert(gamestate_history_entry != gamestate_history.begin()); // Upper bound, and gamestate history must not be empty (initial gamestate is here)
	--gamestate_history_entry;

	std::pair<uint32_t, GameState> result = *gamestate_history_entry;
	uint32_t& gamestate_time = result.first;
	GameState& gamestate = result.second;
	bool gameover = false;

#ifdef LOG_FLOOD
	nanoseconds total_time(0);
	uint32_t const n_ticks = target_time - gamestate_time;
#endif

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
		total_time += duration_cast<nanoseconds>(tick_end - tick_begin);
#endif
		++gamestate_time;
	}

#ifdef LOG_FLOOD
	// Dump stats
	srv_dbg(LOG_DEBUG, "%u ticks in %lu us : %lu us/tick", n_ticks, total_time.count() / 1000, n_ticks > 0 ? (total_time.count() / 1000) / n_ticks : 0);
#endif

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

std::vector<uint8_t> serialize_new_game_state_msg(
	uint8_t prediction_id,
	uint32_t gamestate_time,
	GameState& gamestate,
	std::map<uint32_t, GameState::ControllerState> const& controller_history
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
		new_gamestate_msg.next_opponent_inputs.push_back(get_history_value_at(controller_history, i).getRaw());
	}

	stnp::message::MessageSerializer serializer;
	new_gamestate_msg.serial(serializer);
	return serializer.serialized();
}
}

void GameInstance::run(
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
	std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
	std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameSummary>> game_info_queue,
	uint32_t antilag_prediction,
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

		std::shared_ptr<StatisticsSink::GameSummary> game_info(new StatisticsSink::GameSummary);
		::uuid_generate(game_info->game_id);
		game_info->game_begin = std::chrono::system_clock::now();
		game_info->game_end = game_info->game_begin;
		game_info->client_a_id = client_a.id;
		game_info->client_b_id = client_b.id;
		game_info->character_a = game_settings.characters.at(0);
		game_info->character_b = game_settings.characters.at(1);
		game_info->stage = game_settings.stage_id;
		game_info->winner = 255;
		game_info->player_a_ranked = game_settings.ranked.at(0);
		game_info->player_b_ranked = game_settings.ranked.at(1);

		std::shared_ptr<network::IncommingUdpMessage> in_message = nullptr;
		std::vector<boost::asio::ip::udp::endpoint> clients({client_a.endpoint, client_b.endpoint});

		std::map<uint32_t, GameState> gamestate_history{
			{0, initial_gamestate(game_settings)}
		};
		std::map<uint32_t, GameState::ControllerState> controller_a_history{
			{0, GameState::ControllerState()}
		};
		std::map<uint32_t, GameState::ControllerState> controller_b_history{
			{0, GameState::ControllerState()}
		};

		uint8_t prediction_id = 0;

		steady_clock::time_point last_input_clock_time = steady_clock::now();
		uint32_t last_gamestate_sent_time = 0;

		// Variables reset each time a state is sent
		bool new_input_batch = true;
		std::array<bool, 2> impacted_clients = {false, false}; // For each client, true if the state has to be sent
		steady_clock::time_point input_batch_begin;

		// Process incoming messages
		while (this->keep_running) {
			// Reconstruct gamestate history according to bufferized messages
			bool handled_message = false;
			while (this->keep_running) {
				// Get next incomming message
				try {
					in_message = in_messages->pop_block(microseconds(1'000'000));
					last_input_clock_time = steady_clock::now();
					if (new_input_batch) {
						input_batch_begin = last_input_clock_time;
						new_input_batch = false;
					}
					handled_message = true;
				}catch(std::exception const& e) {
					in_message = nullptr;
				}

				// Process message
				if (in_message == nullptr) {
					uint32_t const last_input_time = std::max(controller_a_history.rbegin()->first, controller_b_history.rbegin()->first);
					uint32_t n_frames_since_last_input = duration_cast<microseconds>(steady_clock::now() - last_input_clock_time).count() / 20'000;
					uint32_t const current_time = last_input_time + n_frames_since_last_input;

					srv_dbg(LOG_DEBUG, "pred compute: %d", current_time + (antilag_prediction / 2));
					std::pair<uint32_t, GameState> const computed_gamestate = compute_game_state_at(
						current_time + (antilag_prediction / 2),
						gamestate_history, controller_a_history, controller_b_history
					);
					if (computed_gamestate.second.is_gameover() && n_frames_since_last_input > 500) {
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
					GameState::ControllerState controller_state = controller_state_from_message(message);
					std::map<uint32_t, GameState::ControllerState>& sender_controller_history = (message.client_id == client_a.id ? controller_a_history : controller_b_history);
					sender_controller_history[message.timestamp + INPUT_LAG] = controller_state;

					// Invalidate gamestate history from message's timestamp
					//  Note we don't want to keep states after that, even if still valid because of input delay.
					//  Not keeping it allows to ensure that the last computed gamestate is the one to send in the message (matching delayed frames)
					std::map<uint32_t, GameState>::iterator first_invalid_gamestate(gamestate_history.lower_bound(message.timestamp));
					bool const history_rewrite = first_invalid_gamestate != gamestate_history.end();
					bool const sent_state_rewrite = (history_rewrite && first_invalid_gamestate->first <= last_gamestate_sent_time);
					if (history_rewrite) {
						if (first_invalid_gamestate->first == 0) {
							syslog(LOG_WARNING, "GameInstance: warning: prevented modification of initial gamestate");
						}else {
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

					// Compute gamestate at the last input in history (minus delayed frames)
					{
						uint32_t const last_input_time = std::max(controller_a_history.rbegin()->first, controller_b_history.rbegin()->first);
						assert(last_input_time >= INPUT_LAG);
						uint32_t const current_gamestate_time = last_input_time - INPUT_LAG;

						std::pair<uint32_t, GameState> const computed_gamestate = compute_game_state_at(
							current_gamestate_time + antilag_prediction,
							gamestate_history, controller_a_history, controller_b_history
						);

						// Stop procesing if the game is over (we don't want to send this state, better send a GameOver message)
						if (computed_gamestate.second.is_gameover()) {
							this->keep_running = false;
							break;
						}

						gamestate_history.insert(computed_gamestate);
					}

					// Increment prediction ID
					++prediction_id;

					// Send current state to clients when there is no more message waiting to be processed
					if (in_messages->empty()) {
						// Send the new game state to impacted clients
						for (size_t client_index = 0; client_index < clients.size(); ++client_index) {
							if (impacted_clients[client_index]) {
								// Get gamestate
								// TODO messages to sender should use a specific antilag derived only from its ping (full rational: git blame this line)
								GameState& gamestate = gamestate_history.rbegin()->second;
								uint32_t const gamestate_time = gamestate_history.rbegin()->first;
								std::map<uint32_t, GameState::ControllerState>& opponent_controller_history = (client_index == 0 ? controller_b_history : controller_a_history);

								// Send message
								boost::asio::ip::udp::endpoint const& client_endpoint = clients.at(client_index);
								std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
								out_message->destination = client_endpoint;
								out_message->data = serialize_new_game_state_msg(prediction_id, gamestate_time, gamestate, opponent_controller_history);
								out_messages->push(out_message);
								srv_dbg(
									LOG_DEBUG, "%lu send %s to %s:%d",
									wall_clock_milli(),
									client_index != sender_index ? "state" : "eratum",
									client_endpoint.address().to_string().c_str(),
									client_endpoint.port()
								);

								// Update info about sends
								last_gamestate_sent_time = gamestate_time;
							}
						}

						// Log time spent computing states
						microseconds const time_spent_in_batch = duration_cast<microseconds>(steady_clock::now() - input_batch_begin);
						srv_dbg(LOG_DEBUG, "GameInstance: Time spent in input batch: %ld us", time_spent_in_batch.count());
						if (time_spent_in_batch > microseconds(10'000)) {
							syslog(LOG_WARNING, "GameInstance: Long time spent in input batch: %ld us", time_spent_in_batch.count());
						}

						// Reset variables for this batch of incomming messages
						impacted_clients = {false, false};
						new_input_batch = true;
					}
				}
			}
		}

		// Send game's result
		syslog(LOG_INFO, "GameInstance: game over");
		if (game_info_queue) {
			game_info->game_end = std::chrono::system_clock::now();
			game_info->winner = gamestate_history.rbegin()->second.winner();
			game_info_queue->push(game_info);
		}
	}catch(std::exception const& e) {
		syslog(LOG_ERR, "GameInstance: game crashed: %s", e.what());
	}

	//TODO Remove clients from routing table (or better, send an event in game_info_queue and let somebody else clean things like the routing table)
	this->over = true;
}

void GameInstance::stop() {
	this->keep_running = false;
}

bool GameInstance::is_over() const {
	return this->over;
}
