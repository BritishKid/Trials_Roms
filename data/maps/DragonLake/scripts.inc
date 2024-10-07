DragonLake_MapScripts::
# 2 "data/maps/DragonLake/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DragonLake_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DragonLake_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DragonLake/scripts.pory"
	setflag FLAG_ROUTE_DRAGON_LAKE_HIDE_SALTS
# 4 "data/maps/DragonLake/scripts.pory"
	compare VAR_SALTS7_QUEST_STATE, 2
	goto_if_eq DragonLake_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DragonLake_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/DragonLake/scripts.pory"
	clearflag FLAG_ROUTE_DRAGON_LAKE_HIDE_SALTS
	return


DragonLake_Camper::
# 11 "data/maps/DragonLake/scripts.pory"
	trainerbattle_single DRAGONLAKE_CAMPER, DragonLake_Camper_Intro, DragonLake_Camper_Outro, Increase_Trainers_Beaten
# 12 "data/maps/DragonLake/scripts.pory"
	msgbox DragonLake_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


Salt7_MeetingRedGyrados::
# 17 "data/maps/DragonLake/scripts.pory"
	lock
# 18 "data/maps/DragonLake/scripts.pory"
	faceplayer
# 19 "data/maps/DragonLake/scripts.pory"
	msgbox Salt7_MeetingRedGyrados_Text_0
# 20 "data/maps/DragonLake/scripts.pory"
	msgbox Salt7_MeetingRedGyrados_Text_1
# 21 "data/maps/DragonLake/scripts.pory"
	applymovement 1, DragonLakeEmoteSurpirse
# 22 "data/maps/DragonLake/scripts.pory"
	waitmovement 1
# 23 "data/maps/DragonLake/scripts.pory"
	msgbox Salt7_MeetingRedGyrados_Text_2
# 24 "data/maps/DragonLake/scripts.pory"
	applymovement 2, Movement_RedGyrados
# 25 "data/maps/DragonLake/scripts.pory"
	waitmovement 2
# 26 "data/maps/DragonLake/scripts.pory"
	msgbox Salt7_MeetingRedGyrados_Text_3
# 27 "data/maps/DragonLake/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 28 "data/maps/DragonLake/scripts.pory"
	special StartRedGyradosEncounter
# 29 "data/maps/DragonLake/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 30 "data/maps/DragonLake/scripts.pory"
	removeobject 2
# 31 "data/maps/DragonLake/scripts.pory"
	setvar VAR_SALTS7_QUEST_STATE, 3
# 32 "data/maps/DragonLake/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SALT_RED_GYRADOS
# 33 "data/maps/DragonLake/scripts.pory"
	msgbox Salt7_MeetingRedGyrados_Text_4
# 34 "data/maps/DragonLake/scripts.pory"
	msgbox Salt7_MeetingRedGyrados_Text_5
# 35 "data/maps/DragonLake/scripts.pory"
	msgbox Salt7_MeetingRedGyrados_Text_6
# 36 "data/maps/DragonLake/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DragonLake_MovePlayer
# 37 "data/maps/DragonLake/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 38 "data/maps/DragonLake/scripts.pory"
	applymovement 1, Movement_Salt7_Leaving
# 39 "data/maps/DragonLake/scripts.pory"
	waitmovement 1
# 40 "data/maps/DragonLake/scripts.pory"
	removeobject 1
# 41 "data/maps/DragonLake/scripts.pory"
	release
	return


GiantGyradosScript::
# 45 "data/maps/DragonLake/scripts.pory"
	lockall
# 46 "data/maps/DragonLake/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_GIANT_FISH
# 47 "data/maps/DragonLake/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GiantGyradosScript_4
GiantGyradosScript_3:
# 69 "data/maps/DragonLake/scripts.pory"
	msgbox GiantGyradosScript_Text_3
GiantGyradosScript_1:
# 71 "data/maps/DragonLake/scripts.pory"
	releaseall
	return

GiantGyradosScript_2:
# 48 "data/maps/DragonLake/scripts.pory"
	msgbox GiantGyradosScript_Text_0, MSGBOX_YESNO
# 49 "data/maps/DragonLake/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiantGyradosScript_7
	end

GiantGyradosScript_4:
# 47 "data/maps/DragonLake/scripts.pory"
	goto_if_unset FLAG_GIANT_GYRADOS_BEATEN, GiantGyradosScript_2
	goto GiantGyradosScript_3

GiantGyradosScript_7:
# 50 "data/maps/DragonLake/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 51 "data/maps/DragonLake/scripts.pory"
	setflag FLAG_CANNOT_RUN_FROM_BATTLE
# 52 "data/maps/DragonLake/scripts.pory"
	msgbox GiantGyradosScript_Text_1
# 53 "data/maps/DragonLake/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
# 54 "data/maps/DragonLake/scripts.pory"
	setwildbattle SPECIES_GYARADOS, 35, ITEM_WACAN_BERRY
# 55 "data/maps/DragonLake/scripts.pory"
	dowildbattle
# 56 "data/maps/DragonLake/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_GIANT_FISH_1
# 57 "data/maps/DragonLake/scripts.pory"
	msgbox GiantGyradosScript_Text_2
# 58 "data/maps/DragonLake/scripts.pory"
	giveitem ITEM_DRAGON_SCALE
# 59 "data/maps/DragonLake/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/DragonLake/scripts.pory"
	setflag FLAG_GIANT_GYRADOS_BEATEN
# 61 "data/maps/DragonLake/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 62 "data/maps/DragonLake/scripts.pory"
	clearflag FLAG_CANNOT_RUN_FROM_BATTLE
	goto GiantGyradosScript_1


DragonLake_ItemBall_TM09::
# 75 "data/maps/DragonLake/scripts.pory"
	finditem ITEM_TM09
	return


# 80 "data/maps/DragonLake/scripts.pory"
DragonLakeEmoteSurpirse:
# 81 "data/maps/DragonLake/scripts.pory"
	emote_exclamation_mark
# 82 "data/maps/DragonLake/scripts.pory"
	face_right
	step_end

# 85 "data/maps/DragonLake/scripts.pory"
Movement_RedGyrados:
# 86 "data/maps/DragonLake/scripts.pory"
	walk_left
# 87 "data/maps/DragonLake/scripts.pory"
	walk_left
# 88 "data/maps/DragonLake/scripts.pory"
	walk_left
# 89 "data/maps/DragonLake/scripts.pory"
	walk_left
# 90 "data/maps/DragonLake/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/DragonLake/scripts.pory"
Movement_DragonLake_MovePlayer:
# 94 "data/maps/DragonLake/scripts.pory"
	emote_exclamation_mark
# 95 "data/maps/DragonLake/scripts.pory"
	jump_left
	step_end

# 98 "data/maps/DragonLake/scripts.pory"
Movement_Salt7_Leaving:
# 99 "data/maps/DragonLake/scripts.pory"
	walk_fast_left
# 100 "data/maps/DragonLake/scripts.pory"
	walk_fast_left
# 101 "data/maps/DragonLake/scripts.pory"
	walk_fast_down
# 102 "data/maps/DragonLake/scripts.pory"
	walk_fast_down
# 103 "data/maps/DragonLake/scripts.pory"
	walk_fast_down
# 104 "data/maps/DragonLake/scripts.pory"
	walk_fast_down
# 105 "data/maps/DragonLake/scripts.pory"
	walk_fast_down
# 106 "data/maps/DragonLake/scripts.pory"
	walk_fast_down
# 107 "data/maps/DragonLake/scripts.pory"
	walk_fast_down
# 108 "data/maps/DragonLake/scripts.pory"
	walk_fast_down
	step_end

Salt7_MeetingRedGyrados_Text_0:
# 19 "data/maps/DragonLake/scripts.pory"
	.string "Hi friend! I've heard word Dragon Lake\n"
	.string "is the best place to raise my Gyrados!$"

Salt7_MeetingRedGyrados_Text_1:
# 20 "data/maps/DragonLake/scripts.pory"
	.string "One day I'm going to have a team of them\n"
	.string "so powerful that you'll never beat me!$"

Salt7_MeetingRedGyrados_Text_2:
# 23 "data/maps/DragonLake/scripts.pory"
	.string "What is that!$"

Salt7_MeetingRedGyrados_Text_3:
# 26 "data/maps/DragonLake/scripts.pory"
	.string "They were right it's a Red Gyrados!$"

Salt7_MeetingRedGyrados_Text_4:
# 33 "data/maps/DragonLake/scripts.pory"
	.string "I did it. I caught a Red Gyrados!$"

Salt7_MeetingRedGyrados_Text_5:
# 34 "data/maps/DragonLake/scripts.pory"
	.string "Who knew they came it such awesome\n"
	.string "colours. I need to explore the world and\l"
	.string "find all the different ones I can!$"

Salt7_MeetingRedGyrados_Text_6:
# 35 "data/maps/DragonLake/scripts.pory"
	.string "See you next time!$"

GiantGyradosScript_Text_0:
# 48 "data/maps/DragonLake/scripts.pory"
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface, do you want to attempt to\l"
	.string "catch it?$"

GiantGyradosScript_Text_1:
# 52 "data/maps/DragonLake/scripts.pory"
	.string "It leaps out at you$"

GiantGyradosScript_Text_2:
# 57 "data/maps/DragonLake/scripts.pory"
	.string "The Gyrados flees and leaves something\n"
	.string "behind$"

GiantGyradosScript_Text_3:
# 69 "data/maps/DragonLake/scripts.pory"
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface$"

DragonLake_Camper_Intro::
# 114 "data/maps/DragonLake/scripts.pory"
	.string "Lots of rare Pokemon can be found\n"
	.string "around here$"

DragonLake_Camper_Outro::
# 118 "data/maps/DragonLake/scripts.pory"
	.string "Have you already caught them?$"

DragonLake_Camper_PostBattle::
# 122 "data/maps/DragonLake/scripts.pory"
	.string "I'm sure if I find the original dragon\n"
	.string "I'll be able to beat you$"
