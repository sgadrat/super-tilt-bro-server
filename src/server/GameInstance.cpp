#include "server/GameInstance.hpp"

#include "server/utils.hpp"
#include "GameState.hpp"
#include "network.hpp"
#include <libstnp/libstnp.hpp>

#include <sstream>
#include <syslog.h>

namespace  {

uint32_t constexpr INPUT_LAG = 4;

GameState initial_gamestate(uint8_t stage_id) {
	Stage stage;
	switch (stage_id) {
		case 0:
			//stage_plateau_data:
			//STAGE_HEADER($4000, $a000, $80ff, $80ff, $7000, $6000) ; player_a_x, player_b_x, player_a_y, player_b_y, respawn_x, respawn_y
			//stage_plateau_elements:
			//PLATFORM($29, $cf, $81, $ff) ; left, right, top, bot
			//END_OF_STAGE
			stage.spawn_player_a = Stage::Spawn{ .x = 0x4000, .y = 0x80ff };
			stage.spawn_player_b = Stage::Spawn{ .x = 0xa000, .y = 0x80ff };
			stage.respawn = Stage::Spawn{ .x = 0x7000, .y = 0x6000 },
			stage.platforms = std::vector<Stage::Platform>{
				Stage::Platform{
					.position = { .left = 0x29, .right = 0xcf, .top = 0x81, .bottom = 0xff },
					.is_smooth = false,
				},
			};
			break;
		case 2:
			//stage_shelf_data:
			//STAGE_HEADER($4000, $a000, $80ff, $80ff, $8000, $9000) ; player_a_x, player_b_x, player_a_y, player_b_y, respawn_x, respawn_y
			//stage_shelf_elements:
			//PLATFORM($29, $cf, $a9, $ff) ; left, right, top, bot
			//SMOOTH_PLATFORM($19, $67, $81) ; left, right, top
			//SMOOTH_PLATFORM($91, $df, $81) ; left, right, top
			//SMOOTH_PLATFORM($49, $af, $51) ; left, right, top
			//END_OF_STAGE
			stage.spawn_player_a = Stage::Spawn{ .x = 0x4000, .y = 0x80ff };
			stage.spawn_player_b = Stage::Spawn{ .x = 0xa000, .y = 0x80ff };
			stage.respawn = Stage::Spawn{ .x = 0x8000, .y = 0x9000 },
			stage.platforms = std::vector<Stage::Platform>{
				Stage::Platform{
					.position = { .left = 0x29, .right = 0xcf, .top = 0xa9, .bottom = 0xff },
					.is_smooth = false,
				},
				Stage::Platform{
					.position = { .left = 0x19, .right = 0x67, .top = 0x81, .bottom = 0xff },
					.is_smooth = true,
				},
				Stage::Platform{
					.position = { .left = 0x91, .right = 0xdf, .top = 0x81, .bottom = 0xff },
					.is_smooth = true,
				},
				Stage::Platform{
					.position = { .left = 0x49, .right = 0xaf, .top = 0x51, .bottom = 0xff },
					.is_smooth = true,
				},
			};
			break;
		default: {
			std::ostringstream oss;
			oss << "unable to create stage with id " << uint16_t(stage_id);
			throw std::runtime_error(oss.str());
		}
	}
	return GameState(stage);
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

}

void GameInstance::run(
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
	std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
	std::shared_ptr<ThreadSafeFifo<GameInfo>> game_info_queue,
	uint32_t antilag_prediction,
	ClientInfo client_a,
	ClientInfo client_b,
	uint8_t stage
)
{
	try {
		// Process incoming messages
		this->keep_running = true;
		this->over = false;
		std::shared_ptr<network::IncommingUdpMessage> in_message = nullptr;
		std::vector<boost::asio::ip::udp::endpoint> clients({client_a.endpoint, client_b.endpoint});
		std::map<uint32_t, GameState> gamestate_history{
			{0, initial_gamestate(stage)}
		};
		std::map<uint32_t, GameState::ControllerState> controller_a_history{
			{0, GameState::ControllerState()}
		};
		std::map<uint32_t, GameState::ControllerState> controller_b_history{
			{0, GameState::ControllerState()}
		};
		uint8_t prediction_id = 0;
		while (this->keep_running) {
			// Reconstruct gamestate history according to bufferized messages
			bool handled_message = false;
			while (this->keep_running) {
				// Get next incomming message
				try {
					in_message = in_messages->pop_block(std::chrono::microseconds(1'000'000));
					handled_message = true;
				}catch(std::exception const& e) {
					in_message = nullptr;
				}

				// Process message
				if (in_message == nullptr) {
					break;
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

					// Update inputs history
					GameState::ControllerState controller_state = controller_state_from_message(message);
					std::map<uint32_t, GameState::ControllerState>& sender_controller_history = (message.client_id == client_a.id ? controller_a_history : controller_b_history);
					sender_controller_history[message.timestamp + INPUT_LAG] = controller_state;

					// Invalidate gamestate history from message's timestamp
					//  Note we don't want to keep states after that, even if still valid because of input delay.
					//  Not keeping it allows to ensure that the last computed gamestate is the one to send in the message (matching delayed frames)
					std::map<uint32_t, GameState>::iterator first_invalid_gamestate(gamestate_history.lower_bound(message.timestamp));
					if (first_invalid_gamestate != gamestate_history.end()) {
						if (first_invalid_gamestate->first == 0) {
							syslog(LOG_WARNING, "GameInstance: warning: prevented modification of initial gamestate");
						}else {
							gamestate_history.erase(first_invalid_gamestate, gamestate_history.end());
						}
					}

					// Compute gamestate at the last input in history (minus delayed frames)
					{
						uint32_t gamestate_time = gamestate_history.rbegin()->first;
						GameState gamestate = gamestate_history.rbegin()->second;
						uint32_t last_input_time = sender_controller_history.rbegin()->first;
						assert(last_input_time >= INPUT_LAG);
						uint32_t current_gamestate_time = last_input_time - INPUT_LAG;
						bool gameover = false;

						while (!gameover && gamestate_time < current_gamestate_time + antilag_prediction) {
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
							if (!gamestate.tick()) {
								gameover = true;
							}
							++gamestate_time;
						}

						// Stop procesing if the game is over (we don't want to send this state, better send a GameOver message)
						if (gameover) {
							this->keep_running = false;
							break;
						}

						// Apply inputs (for physical input to match with history)
						//TODO find a cleaner way (like removing physical inputs from gamestate and integrating it in delayed inputs)
						std::map<uint32_t, GameState::ControllerState>::const_iterator controller_history_entry(controller_a_history.find(gamestate_time));
						if (controller_history_entry != controller_a_history.end()) {
							gamestate.setControllerAState(controller_history_entry->second);
						}

						controller_history_entry = controller_b_history.find(gamestate_time);
						if (controller_history_entry != controller_b_history.end()) {
							gamestate.setControllerBState(controller_history_entry->second);
						}

						gamestate_history.insert(std::pair<uint32_t, GameState>(gamestate_time, gamestate));
					}

					// Increment prediction ID
					++prediction_id;

					// Serialize new gamestate message with sender's delayed inputs
					stnp::message::NewGameState gamestate;

					gamestate.timestamp = gamestate_history.rbegin()->first;
					gamestate.prediction_id = prediction_id;
					stnp::message::MessageSerializer state_serializer;
					gamestate_history.rbegin()->second.serial(state_serializer);
					gamestate.state = state_serializer.serialized();

					gamestate.next_opponent_inputs.reserve(INPUT_LAG);
					for (uint32_t i = gamestate.timestamp + 1; i <= gamestate.timestamp + INPUT_LAG; ++i) {
						gamestate.next_opponent_inputs.push_back(get_history_value_at(sender_controller_history, i).getRaw());
					}

					stnp::message::MessageSerializer serializer;
					gamestate.serial(serializer);

					// Send the new game state to impacted clients
					for (boost::asio::ip::udp::endpoint const& client_endpoint : clients) {
						if (!(client_endpoint == in_message->sender)) {
							std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
							out_message->destination = client_endpoint;
							out_message->data = serializer.serialized();
							out_messages->push(out_message);
							srv_dbg(LOG_DEBUG, "send state to %s:%d", client_endpoint.address(), client_endpoint.port());
						}
					}
				}
			}
		}

		// Send game's result
		syslog(LOG_INFO, "GameInstance: game over");
		if (game_info_queue) {
			std::shared_ptr<GameInfo> game_info;
			game_info->player_a_id = client_a.id;
			game_info->player_b_id = client_b.id;
			game_info->winner = (clients.at(gamestate_history.rbegin()->second.winner()) == client_a.endpoint ? client_a.id : client_b.id);
			game_info_queue->push(game_info);
		}
	}catch(std::exception const& e) {
		syslog(LOG_ERR, "GameInstance: game crashed: %s", e.what());
	}

	//TODO Remove clients from routing table (or better, send an event in game_info_queue and let someby else cleaning things like the routing table)
	this->over = true;
}

void GameInstance::stop() {
	this->keep_running = false;
}

bool GameInstance::is_over() const {
	return this->over;
}
