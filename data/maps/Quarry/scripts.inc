Quarry_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Quarry_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Quarry_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDING_SALTS
	compare VAR_SALTS7_QUEST_STATE, 3
	goto_if_eq Quarry_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Quarry_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	clearflag FLAG_HIDING_SALTS
	return


DeeperQuarrySign::
	lockall
	msgbox DeeperQuarrySign_Text_0
	releaseall
	return


Quarry_MeetingSalt7::
	lockall
	msgbox Quarry_MeetingSalt7_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprised_Quarry
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Movement_Salts_Quarry_Arriving
	waitmovement 1
	call Quarry_SaltBattle
	releaseall
	return


Quarry_SaltBattle::
	trainerbattle_single QUARRY_SALTS7, Salts7Quarry_Intro, Salts7Quarry_Outro, Quarry_Salt7_PostBattle
	return


Quarry_Salt7_PostBattle::
	msgbox Quarry_Salt7_PostBattle_Text_0
	msgbox Quarry_Salt7_PostBattle_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Quarry_MoveAway
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Movement_Salts_Quarry_Leaving
	waitmovement 1
	removeobject 1
	setflag FLAG_HIDING_SALTS
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SALT7_QUARRY
	setvar VAR_SALTS7_QUEST_STATE, 4
	return


Movement_PlayerSurprised_Quarry:
	emote_question_mark
	step_end

Movement_Salts_Quarry_Arriving:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

Movement_Player_Quarry_MoveAway:
	walk_up
	walk_up
	face_down
	step_end

Movement_Salts_Quarry_Leaving:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DeeperQuarrySign_Text_0:
	.string "WARNING: QUARRY WORK CLOSED TILL FURTHER NOTICE\n Pokémon HAVE BEEN DAMAGING MACHINERY$"

Quarry_MeetingSalt7_Text_0:
	.string "Hey it's you ${PLAYER}$"

Quarry_Salt7_PostBattle_Text_0:
	.string "I've been seeing pictures about an\n"
	.string "incredibly strong Green Gyrados that\l"
	.string "can bet even the strongest Pokémon,\l"
	.string "I've heard about the Draconid people\l"
	.string "that know all about this Gyrados so i'm\l"
	.string "heading to their village on Island 3 to\l"
	.string "meet them$"

Quarry_Salt7_PostBattle_Text_1:
	.string "I'll see you again!$"

Salts7Quarry_Intro::
	.string "I've found a ton of different coloured\n"
	.string "Gyrados! Let me show you how strong\l"
	.string "I've gotten.$"

Salts7Quarry_Outro::
	.string "I'm missing some still Gyrados$"
