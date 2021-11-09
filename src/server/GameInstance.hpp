#pragma once

#include "server/StatisticsSink.hpp"
#include "network.hpp"
#include "src/utils.hpp"

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
		std::array<uint8_t, 2> characters;
		std::array<uint8_t, 2> character_palettes;
		std::array<bool, 2> ranked;
		uint8_t stage_id;
		uint8_t video_system;
	};

	/**
	 * @brief Run the game
	 *
	 * Does not return until the game is over.
	 */
	void run(
		std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
		std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
		std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameInfo>> game_info_queue,
		std::array<std::array<uint32_t, 2>, 2> transit_time,
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
