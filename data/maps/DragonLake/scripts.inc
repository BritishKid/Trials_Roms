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


DragonLake_Camper::
	trainerbattle_single DRAGONLAKE_CAMPER, DragonLake_Camper_Intro, DragonLake_Camper_Outro, Increase_Trainers_Beaten
	msgbox DragonLake_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


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
	setflag P_FLAG_FORCE_SHINY
	special StartRedGyradosEncounter
	clearflag P_FLAG_FORCE_SHINY
	removeobject 2
	setvar VAR_SALTS7_QUEST_STATE, 3
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SALT_RED_GYRADOS
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


GiantGyradosScript::
	lockall
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_GIANT_FISH
	compare VAR_RESULT, 0
	goto_if_ne GiantGyradosScript_4
GiantGyradosScript_3:
	msgbox GiantGyradosScript_Text_3
GiantGyradosScript_1:
	releaseall
	return

GiantGyradosScript_2:
	msgbox GiantGyradosScript_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiantGyradosScript_7
	end

GiantGyradosScript_4:
	goto_if_unset FLAG_GIANT_GYRADOS_BEATEN, GiantGyradosScript_2
	goto GiantGyradosScript_3

GiantGyradosScript_7:
	setflag FLAG_CANT_CATCH_MON
	setflag FLAG_CANNOT_RUN_FROM_BATTLE
	msgbox GiantGyradosScript_Text_1
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
	setwildbattle SPECIES_GYARADOS, 35, ITEM_WACAN_BERRY
	dowildbattle
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_GIANT_FISH_1
	msgbox GiantGyradosScript_Text_2
	giveitem ITEM_DRAGON_SCALE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_GIANT_GYRADOS_BEATEN
	clearflag FLAG_CANT_CATCH_MON
	clearflag FLAG_CANNOT_RUN_FROM_BATTLE
	goto GiantGyradosScript_1


DragonLake_ItemBall_TM09::
	finditem ITEM_TM09
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

GiantGyradosScript_Text_0:
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface, do you want to attempt to\l"
	.string "catch it?$"

GiantGyradosScript_Text_1:
	.string "It leaps out at you$"

GiantGyradosScript_Text_2:
	.string "The Gyrados flees and leaves something\n"
	.string "behind$"

GiantGyradosScript_Text_3:
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface$"

DragonLake_Camper_Intro::
	.string "Lots of rare Pokemon can be found\n"
	.string "around here$"

DragonLake_Camper_Outro::
	.string "Have you already caught them?$"

DragonLake_Camper_PostBattle::
	.string "I'm sure if I find the original dragon\n"
	.string "I'll be able to beat you$"
