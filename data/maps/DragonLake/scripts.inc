DragonLake_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DragonLake_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DragonLake_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_ROUTE_DRAGON_LAKE_HIDE_SALTS
	compare VAR_SALTS7_QUEST_STATE, 2
	goto_if_eq DragonLake_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DragonLake_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	clearflag FLAG_ROUTE_DRAGON_LAKE_HIDE_SALTS
	return


Salt7_MeetingRedGyrados::
	lock
	faceplayer
	msgbox Salt7_MeetingRedGyrados_Text_0
	msgbox Salt7_MeetingRedGyrados_Text_1
	applymovement 1, DragonLakeEmoteSurpirse
	waitmovement 1
	msgbox Salt7_MeetingRedGyrados_Text_2
	applymovement 2, Movement_RedGyrados
	waitmovement 2
	msgbox Salt7_MeetingRedGyrados_Text_3
	setflag FLAG_FORCE_SHINY
	special StartRedGyradosEncounter
	clearflag FLAG_FORCE_SHINY
	removeobject 2
	setvar VAR_SALTS7_QUEST_STATE, 3
	msgbox Salt7_MeetingRedGyrados_Text_4
	msgbox Salt7_MeetingRedGyrados_Text_5
	msgbox Salt7_MeetingRedGyrados_Text_6
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DragonLake_MovePlayer
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Movement_Salt7_Leaving
	waitmovement 1
	removeobject 1
	release
	return


DragonLakeEmoteSurpirse:
	emote_exclamation_mark
	face_right
	step_end

Movement_RedGyrados:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_DragonLake_MovePlayer:
	emote_exclamation_mark
	jump_left
	step_end

Movement_Salt7_Leaving:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Salt7_MeetingRedGyrados_Text_0:
	.string "Hi friend! I've heard word Dragon Lake\n"
	.string "is the best place to raise my Gyrados!$"

Salt7_MeetingRedGyrados_Text_1:
	.string "One day I'm going to have a team of them\n"
	.string "so powerful that you'll never beat me!$"

Salt7_MeetingRedGyrados_Text_2:
	.string "What is that!$"

Salt7_MeetingRedGyrados_Text_3:
	.string "They were right it's a Red Gyrados!$"

Salt7_MeetingRedGyrados_Text_4:
	.string "I did it. I caught a Red Gyrados!$"

Salt7_MeetingRedGyrados_Text_5:
	.string "Who knew they came it such awesome\n"
	.string "colours. I need to explore the world and\l"
	.string "find all the different ones I can!$"

Salt7_MeetingRedGyrados_Text_6:
	.string "See you next time!$"
