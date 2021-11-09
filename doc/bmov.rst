Introduction
============

bmov (Binary MOVie) is the replay format for Super Tilt Bro. games.

It is a binary format, made to embed data readily available by the server at the end of a game and to be lightweight. It comes with low CPU cost to create, and negligible bandwidth footprint to transfer between servers.

It contains necessary data to accurately replay a game in debug tools, or create a full-featured replay file in any emulator's native format.

Specification
=============

::

	// Header
	u8  bmov_version
	u32 num_frames
	u8  stage
	u8  character_a
	u8  character_b
	if (bmov_version == 0) {
		u32 client_a
		u32 client_b
	}
	if (bmov_version >= 1) {
		u8  character_a_palette
		u8  character_b_palette
		u8  video system
	}

	// Controller A
	u32 n_entries_controller_a
	for (i = 0; i < n_entries_controller_a ; ++i) {
		u32 frame_number
		u8  controller_state
	}

	// Controller B
	u32 n_entries_controller_b
	for (i = 0; i < n_entries_controller_b ; ++i) {
		u32 frame_number
		u8  controller_state
	}
