DeeperQuarryGF_MapScripts::
	.byte 0


Trigger_Quarry_Entrance::
# 5 "data/maps/DeeperQuarryGF/scripts.pory"
	lockall
# 6 "data/maps/DeeperQuarryGF/scripts.pory"
	applymovement 1, Movement_Quarry_Master_On_Entry
# 7 "data/maps/DeeperQuarryGF/scripts.pory"
	waitmovement 1
# 8 "data/maps/DeeperQuarryGF/scripts.pory"
	msgbox Trigger_Quarry_Entrance_Text_0
# 9 "data/maps/DeeperQuarryGF/scripts.pory"
	msgbox Trigger_Quarry_Entrance_Text_1
# 10 "data/maps/DeeperQuarryGF/scripts.pory"
	msgbox Trigger_Quarry_Entrance_Text_2
# 11 "data/maps/DeeperQuarryGF/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
# 12 "data/maps/DeeperQuarryGF/scripts.pory"
	applymovement 1, Movement_QuarryMaster_Scared
# 13 "data/maps/DeeperQuarryGF/scripts.pory"
	waitmovement 1
# 14 "data/maps/DeeperQuarryGF/scripts.pory"
	msgbox Trigger_Quarry_Entrance_Text_3
# 15 "data/maps/DeeperQuarryGF/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Quarry_Player_Moves
# 16 "data/maps/DeeperQuarryGF/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 17 "data/maps/DeeperQuarryGF/scripts.pory"
	applymovement 1, Movement_QuarryMaster_Leaves
# 18 "data/maps/DeeperQuarryGF/scripts.pory"
	waitmovement 1
# 19 "data/maps/DeeperQuarryGF/scripts.pory"
	setvar VAR_QUARRY_STATE, 1
# 20 "data/maps/DeeperQuarryGF/scripts.pory"
	setflag FLAG_HIDE_QUARRY_MASTER_IN_QUARRY
# 26 "data/maps/DeeperQuarryGF/scripts.pory"
	releaseall
	return


# 31 "data/maps/DeeperQuarryGF/scripts.pory"
Movement_Quarry_Master_On_Entry:
# 32 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 33 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 34 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 35 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 36 "data/maps/DeeperQuarryGF/scripts.pory"
	emote_question_mark
	step_end

# 39 "data/maps/DeeperQuarryGF/scripts.pory"
Movement_QuarryMaster_Scared:
# 40 "data/maps/DeeperQuarryGF/scripts.pory"
	emote_exclamation_mark
# 41 "data/maps/DeeperQuarryGF/scripts.pory"
	jump_in_place_up
	step_end

# 44 "data/maps/DeeperQuarryGF/scripts.pory"
Movement_QuarryMaster_Leaves:
# 45 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 46 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 47 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 48 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 49 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
# 50 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_fast_down
	step_end

# 53 "data/maps/DeeperQuarryGF/scripts.pory"
Movement_Quarry_Player_Moves:
# 54 "data/maps/DeeperQuarryGF/scripts.pory"
	walk_left
# 55 "data/maps/DeeperQuarryGF/scripts.pory"
	face_right
	step_end

Trigger_Quarry_Entrance_Text_0:
# 8 "data/maps/DeeperQuarryGF/scripts.pory"
	.string "You shouldn't be here! I've had to shut\n"
	.string "down the operation of the quarry as\l"
	.string "some dangerous giant Pokémon have\l"
	.string "started running amuck.$"

Trigger_Quarry_Entrance_Text_1:
# 9 "data/maps/DeeperQuarryGF/scripts.pory"
	.string "My suggestion is you turn around and\n"
	.string "get out of here but looking at you I\l"
	.string "don't think you're going to listen$"

Trigger_Quarry_Entrance_Text_2:
# 10 "data/maps/DeeperQuarryGF/scripts.pory"
	.string "I guess if you are going to be crazy\n"
	.string "enough to go in, keep an eye out for\l"
	.string "anyone who might be stuck. I think a\l"
	.string "few of my men might have got caught.$"

Trigger_Quarry_Entrance_Text_3:
# 14 "data/maps/DeeperQuarryGF/scripts.pory"
	.string "Yeah I am out of here!$"
