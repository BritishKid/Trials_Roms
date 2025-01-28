Quarry_Entrance_MapScripts::
	.byte 0


Quarry_Entrance_Trigger_StartQuest::
# 5 "data/maps/Quarry_Entrance/scripts.pory"
	lockall
# 6 "data/maps/Quarry_Entrance/scripts.pory"
	applymovement 1, Movement_QuarryForeman_On_Entry
# 7 "data/maps/Quarry_Entrance/scripts.pory"
	waitmovement 1
# 8 "data/maps/Quarry_Entrance/scripts.pory"
	msgbox Quarry_Entrance_Trigger_StartQuest_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/Quarry_Entrance/scripts.pory"
	msgbox Quarry_Entrance_Trigger_StartQuest_Text_1, MSGBOX_AUTOCLOSE
# 10 "data/maps/Quarry_Entrance/scripts.pory"
	msgbox Quarry_Entrance_Trigger_StartQuest_Text_2, MSGBOX_AUTOCLOSE
# 11 "data/maps/Quarry_Entrance/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
# 12 "data/maps/Quarry_Entrance/scripts.pory"
	applymovement 1, Movement_QuarryForeman_Scared
# 13 "data/maps/Quarry_Entrance/scripts.pory"
	waitmovement 1
# 14 "data/maps/Quarry_Entrance/scripts.pory"
	msgbox Quarry_Entrance_Trigger_StartQuest_Text_3, MSGBOX_AUTOCLOSE
# 15 "data/maps/Quarry_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Quarry_Player_Moves
# 16 "data/maps/Quarry_Entrance/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 17 "data/maps/Quarry_Entrance/scripts.pory"
	applymovement 1, Movement_QuarryForeman_Leaves
# 18 "data/maps/Quarry_Entrance/scripts.pory"
	waitmovement 1
# 19 "data/maps/Quarry_Entrance/scripts.pory"
	setvar VAR_QUARRY_STATE, 1
# 20 "data/maps/Quarry_Entrance/scripts.pory"
	setflag FLAG_HIDE_QUARRY_FOREMAN_IN_QUARRY
# 22 "data/maps/Quarry_Entrance/scripts.pory"
	setflag FLAG_HIDE_QUARRY_WORKERS
# 23 "data/maps/Quarry_Entrance/scripts.pory"
	removeobject 1
# 24 "data/maps/Quarry_Entrance/scripts.pory"
	releaseall
	return


# 28 "data/maps/Quarry_Entrance/scripts.pory"
Movement_QuarryForeman_On_Entry:
# 29 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 30 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 31 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 32 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 33 "data/maps/Quarry_Entrance/scripts.pory"
	emote_question_mark
	step_end

# 36 "data/maps/Quarry_Entrance/scripts.pory"
Movement_QuarryForeman_Scared:
# 37 "data/maps/Quarry_Entrance/scripts.pory"
	emote_exclamation_mark
# 38 "data/maps/Quarry_Entrance/scripts.pory"
	jump_in_place_up
	step_end

# 41 "data/maps/Quarry_Entrance/scripts.pory"
Movement_Quarry_Player_Moves:
# 42 "data/maps/Quarry_Entrance/scripts.pory"
	walk_left
# 43 "data/maps/Quarry_Entrance/scripts.pory"
	face_right
	step_end

# 46 "data/maps/Quarry_Entrance/scripts.pory"
Movement_QuarryForeman_Leaves:
# 47 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 48 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 49 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 50 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 51 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
# 52 "data/maps/Quarry_Entrance/scripts.pory"
	walk_fast_down
	step_end

Quarry_Entrance_Trigger_StartQuest_Text_0:
# 8 "data/maps/Quarry_Entrance/scripts.pory"
	.string "You shouldn't be in here! I've had to\n"
	.string "shut down the operation of the quarry\l"
	.string "as some dangerous giant Pokemon have\l"
	.string "started running rampant$"

Quarry_Entrance_Trigger_StartQuest_Text_1:
# 9 "data/maps/Quarry_Entrance/scripts.pory"
	.string "I suggest you trun aroudn and get out\n"
	.string "of here, but from the look of you I\l"
	.string "doubt you're going to listen.$"

Quarry_Entrance_Trigger_StartQuest_Text_2:
# 10 "data/maps/Quarry_Entrance/scripts.pory"
	.string "I guess if you are going to be crazy\n"
	.string "enough to go in you could alteast keep\l"
	.string "an eye out for anyone stuck. A few of\l"
	.string "my men haven't been able to escape.$"

Quarry_Entrance_Trigger_StartQuest_Text_3:
# 14 "data/maps/Quarry_Entrance/scripts.pory"
	.string "I'm getting out of here!$"
