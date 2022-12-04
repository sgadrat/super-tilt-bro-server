Super Tilt Network Protocol
===========================

Introduction
------------

The Super Tilt Network Protocol (STNP) is a network protocol aimed to enable plays of Super Tilt Bro. over the internet. Its goals are to be low overhead, to cope with limited resources of the NES, low latency and allow local machines to predict the game state, to keep it playable even with more than 16 milliseconds of ping.

STNP considere three peers. Two clients, which are NES machines running Super Tilt Bro., and a server, which is a computer in the network running the serving software. The server keeps the reference state of the game. The two clients connect to the server, send their input, receive the game state and display it. In order to obtain a smooth experience, clients should be able to predict game states and replay recent inputs on received reference game states.

All communications are made of independent messages. Transport mechanisms must allow to separate individual messages, some messages may be lost during transport or be received out of order. While transport of messages is out of scope, this documentation considers that each message is sent over UDP in its own datagram.

Initialization
--------------

Before initialization, the server is idle and clients offline. The goal of this phase is to start a game with clients and server synchronized.

Client1 chooses a 4 bytes identifier, then send a Connection message to the server. The server replies with a Connected message. Client1 may repeat the Connection message until the response is received. The server may repeat the Connected message multiple times, repeated Connected messages must be strictly identical to the original.

The server should send a Connected message each time it receives a Connection message during the initialization phase.

At any time during the initialization phase, the server may send a Disconnected message, in which case the initialization is aborted.

::

	Connection {
		uint8  message_type = 0;
		uint32 client_id;
		uint8 protocol_version;
		uint8[3] ping;
		uint1 framerate;
		uint2 support;
		uint2 release_type;
		uint3 version_major;
		uint8 version_minor;
		uint8 selected_character;
		uint8 selected_palette;
		uint8 selected_stage;
		uint8 ranked_play;
		uint8[16] password;
	}

* **client_id**: Identifier unique to this client.
* **ranked_play**: 0: non-ranked, 1: ranked
* **protocol_version**: Expected version of this protocol. This document describes version 7.
* **ping**: Measures of ICMP echo request from client to server, each measure on one byte. Timescale is four milliseconds per tick (ping_max=3 means 12ms of ping.)
* **framerate**: 0: 50Hz, 1: 60Hz.
* **support**: 0: physical cartridge, 1: native emulator, 2: web emulator, 3: unknown/other
* **release_type**: 0: alpha, 1: beta, 2: release candidate, 3: release
* **version_major**: version's major number
* **version_minor**: version's minor number
* **selected_character**: Character that the player wants to play
* **selected_palette**: Color variant that the player wants to play
* **selected_stage**: Stage on which the player wants to play
* **password**: only players with the same password can be matched together. If absent, should be infered to be zero-filled

.. note::
	Bytes 9 and 10 may be refered as flags and version.

	A client with version "2.alpha-3" running in a PAL emulator would be noted as

	0 01 00 010 00000011 (50Hz, native emulator, alpha, 2, 3)

::

	Connected {
		uint8 message_type = 0;
		uint4 reserved = 0;
		uint4 connection_quality;
	}

* **connection_quality**: Indicator of the quality level of the connection between the player and the server (0: excellent, 1: good, 2: acceptable, 3: bad)

At this stage Client1 may display a message indicating that it is waiting for another player to join the game.

Client2 follows the same steps: sending Connection until a Connected is received.

When both clients are connected, the server sends a StartGame message, ending the initialization phase, starting the in-game phase.

::

	Disconnected {
		uint8 message_type = 4;
		uint8[16*12] reason;
	}

* **reason**: ascii characters explaining why the client is disconnected. Each 16 character sequence is to be displayed as a line on client's screen.

Upon reception of this message, the client should display the message and stop sending connection requests.

::

	StartGame {
		uint8 message_type = 1;
		uint8 stage;
		uint8 stocks;
		uint8 player_number;
		uint4 player_a_connection_quality;
		uint4 player_b_connection_quality;
		uint8 player_a_character;
		uint8 player_b_character;
		uint8 player_a_palette;
		uint8 player_b_palette;
		uint8[3] player_a_ping;
		uint8[3] player_b_ping;
		uint1 player_a_framerate;
		uint1 player_b_framerate;
		uint1 game_framerate;
		uint5 reserved = 0;
	}

* **stage**: Stage on which the game will be played. 0 for Flatland, 1 for The Pit, 2 for Skyride or 3 for The Hunt.
* **stocks**: Initial number of lifes for each opponent.
* **player_number**: Indicates the avatar that this client will control. 0 for player one, 1 for player two.
* **player_a_connection_quality**: Indicator of the quality level of the connection between player one and the server (0: excellent, 1: good, 2: acceptable, 3: bad)
* **player_b_connection_quality**: Indicator of the quality level of the connection between player two and the server (0: excellent, 1: good, 2: acceptable, 3: bad)
* **player_a_character**: Character played by player one.
* **player_b_character**: Character played by player two.
* **player_a_palette**: Color variant of the character played by player one.
* **player_b_palette**: Color variant of the character played by player two.
* **player_a_ping**: Ping values for player one. Timescale is four milliseconds per tick.
* **player_b_ping**: Ping values for player two. Timescale is four milliseconds per tick.
* **player_a_framerate**: Native framerate for player A. 0: 50Hz, 1: 60Hz.
* **player_b_framerate**: Native framerate for player B. 0: 50Hz, 1: 60Hz.
* **game_framerate**: Framerate at which the game will be played. 0: 50Hz, 1: 60Hz.

Uppon reception of this message, clients should start a game on the selected stage. The game should start within a fixed timeframe shared by both clients (eg. the game starts 120 frames after message's reception).

The value of *player_number* must not be the same for Client1 and Client2.

If ``stage``, ``player_*_character`` or ``player_*_palette`` differ from what is requested by clients, info in this message takes precedence. The server may no honor players choices. The client must be able to start the game with configuration from this message.

In-Game
-------

The in-game phase handles the sharing of a common game state. It expects the server to be able to simulate game state's updates and to keep some old states to be able to replay late or out of order inputs. Clients are expected to be able to change their state to a reference one and replay their recent predictions on it. All states and events are timestamped by a frame number, starting at 0 when the stage was initialized, before the first update.

Each time the controller of a client changes state, it should send a ControllerState message. This message can be repeated periodically.

::

	ControllerState {
		uint8  message_type = 1;
		uint32 client_id;
		uint32 timestamp;
		uint1  buttons[8];
	}

* **client_id**: Identifier unique to this client. The same as sent in Connection.
* **timestamp**: Frame number on which the change occured
* **buttons**: New state of each button of the controller, 0 released, 1 pressed. Buttons order is: A, B, select, start, up, down, left, right.

Each time the server receives a ControllerState message, it registers it to be considered four frames later, then computes a new gamestate at *timestamp*. It then sends it to both clients in a NewGameState message.

::

	NewGameState {
		uint8     message_type = 2;
		uint8     prediction_id;
		uint32    timestamp;
		uint8[8]  next_inputs;
		GameState state;
	}

* **prediction_id**: Indicate if this gamestate is derived from the previous one or uses new inputs. This number should be incremented each time the state is computed because of some inputs. It may loop from 255 to 0.
* **timestamp**: Frame number on which this state is associated.
* **next_inputs**: List of inputs registered for delayed execution. Inputs are interleaved for local client and remote client.
* **state**: The new state.

NewGameState messages can be periodically updated then resent. In such case, the server should not change the *prediction_id*, set *timestamp* to an estimate of the current frame number being displayed on devices and *state* to an updated state to this timestamp. Clients may discard NewGameState messages when the *prediction_id* match the last one received.

.. note::
	Expected client behaviour when receiving a NewGameState message.

	Considering a client that maintains a table of input history for each player.
	History ranging from "enough frames" in the past to four frames in the futur.
	"enough frames" means that no reasonably late message will come with a timestamp
	before table's begining.

	Case 1: The message is more than four frames in the past
		copy next_inputs in players' input table at message timestamp
		re-predict inputs between the end of next_inputs and now
		rollback until now

	Case 2: The message is less than four frames in the past
		past predicted frames are the same as in the message
			register futur delayed inputs in opponent's input table

		past predicted frames are not as in the message
			register delayed inputs (past and futur) in opponent's input table
			rollback until now

	Case 3: The message is at current timestamp or in the future
		erase all

Gameover
--------

When the game is over the server must stop to send NewGameState messages. If it receives a ControllerState message, it may reply with a GameOver message.

::

	GameOver {
		uint8 message_type = 3;
		uint8 winner_player_number;
	}

* **winner_player_number**: Number of the player who won the game. May be *255* if unknown.

GameState
---------

The GameState type is not explicitely defined here, is may change from one version of Super Tilt Bro to another. It is expected to be a copy of the memory in the range reserved to the ingame state of Super Tilt Bro.

Global messages
---------------

These messages are independent of the connection's phase.

Ping/pong mechanism to measure roundtrip time from between the client and the server. Ping is emmited by the client, Pong is answered by the server. Ping messages may be emmited at any time, even before the first Connection message. A client must not emmit more than one ping message per second. The server should block any client missbehaving with ping requests, like emmiting more than one request per second or not connecting after a reasonable number of ping requests.

::

	Ping {
		uint8 message_type = 2;
		uint8[9] free_data;
	}

* **free_data**: Data freely chosen by the client.

::

	Pong {
		uint8 message_type = 5;
		uint8[9] client_data;
	}

* **client_data**: Copy **free_data** from related Ping message.
