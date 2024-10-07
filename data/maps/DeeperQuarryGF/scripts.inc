DeeperQuarryGF_MapScripts::
	.byte 0


Trigger_Quarry_Entrance::
	lockall
	applymovement 1, Movement_Quarry_Master_On_Entry
	waitmovement 1
	msgbox Trigger_Quarry_Entrance_Text_0
	msgbox Trigger_Quarry_Entrance_Text_1
	msgbox Trigger_Quarry_Entrance_Text_2
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
	applymovement 1, Movement_QuarryMaster_Scared
	waitmovement 1
	msgbox Trigger_Quarry_Entrance_Text_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Quarry_Player_Moves
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Movement_QuarryMaster_Leaves
	waitmovement 1
	setvar VAR_QUARRY_STATE, 1
	setflag FLAG_HIDE_QUARRY_MASTER_IN_QUARRY
	releaseall
	return


Movement_Quarry_Master_On_Entry:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	emote_question_mark
	step_end

Movement_QuarryMaster_Scared:
	emote_exclamation_mark
	jump_in_place_up
	step_end

Movement_QuarryMaster_Leaves:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Movement_Quarry_Player_Moves:
	walk_left
	face_right
	step_end

Trigger_Quarry_Entrance_Text_0:
	.string "You shouldn't be here! I've had to shut\n"
	.string "down the operation of the quarry as\l"
	.string "some dangerous giant Pokémon have\l"
	.string "started running amuck.$"

Trigger_Quarry_Entrance_Text_1:
	.string "My suggestion is you turn around and\n"
	.string "get out of here but looking at you I\l"
	.string "don't think you're going to listen$"

Trigger_Quarry_Entrance_Text_2:
	.string "I guess if you are going to be crazy\n"
	.string "enough to go in, keep an eye out for\l"
	.string "anyone who might be stuck. I think a\l"
	.string "few of my men might have got caught.$"

Trigger_Quarry_Entrance_Text_3:
	.string "Yeah I am out of here!$"
