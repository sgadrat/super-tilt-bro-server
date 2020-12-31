#pragma once

#include "network.hpp"
#include "utils.hpp"

#include <array>
#include <atomic>

/** Instance of a game match between two players */
class GameInstance {
public:
	/** Constructors necessary as atomic is not copy-constructible (and we want GameInstance to be)*/
	GameInstance() = default;
	GameInstance(GameInstance const& o)
	: keep_running(o.keep_running.load()), over(o.over.load())
	{}

	/** Info usedful to distinguish between clients */
	struct ClientInfo {
		boost::asio::ip::udp::endpoint endpoint;
		uint32_t id;
	};

	/** Info about the game to be played */
	struct GameSettings {
		uint8_t stage_id;
		std::array<uint8_t, 2> characters;
	};

	/** Information about a finished game */
	struct GameInfo {
		uint32_t player_a_id; ///< Client ID of the player A
		uint32_t player_b_id; ///< Client ID of the player B
		uint32_t winner; ///< Client ID of the winner
	};

	/**
	 * @brief Run the game
	 *
	 * Does not return until the game is over.
	 */
	void run(
		std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
		std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
		std::shared_ptr<ThreadSafeFifo<GameInfo>> game_info_queue,
		uint32_t antilag_prediction,
		ClientInfo client_a,
		ClientInfo client_b,
		GameSettings game_settings
	);

	/** Abort the game */
	void stop();

	/** Tell if run() has finished */
	bool is_over() const;

private:
	std::atomic<bool> keep_running;
	std::atomic<bool> over;
};
