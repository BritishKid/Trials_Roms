MauvillCity_Harbour_MapScripts::
	.byte 0


ThugCity_Harbour_EventScript_ThugCommander::
# 5 "data/maps/MauvillCity_Harbour/scripts.pory"
	lockall
# 6 "data/maps/MauvillCity_Harbour/scripts.pory"
	msgbox ThugCity_Harbour_EventScript_ThugCommander_Text_0
# 7 "data/maps/MauvillCity_Harbour/scripts.pory"
	trainerbattle_single THUGCITY_COMMANDER, ThugCommander_Intro, ThugCommander_Outro, ThugCommander_PostScript
# 8 "data/maps/MauvillCity_Harbour/scripts.pory"
	releaseall
	return


ThugCommander_PostScript::
# 12 "data/maps/MauvillCity_Harbour/scripts.pory"
	msgbox ThugCommander_PostScript_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/MauvillCity_Harbour/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerOutWay_Harbour_ThugCity
# 14 "data/maps/MauvillCity_Harbour/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 15 "data/maps/MauvillCity_Harbour/scripts.pory"
	applymovement 1, Movement_CommanderLeaves
# 16 "data/maps/MauvillCity_Harbour/scripts.pory"
	applymovement 2, Movement_BossToPlayer
# 17 "data/maps/MauvillCity_Harbour/scripts.pory"
	waitmovement 1
# 18 "data/maps/MauvillCity_Harbour/scripts.pory"
	msgbox ThugCommander_PostScript_Text_1, MSGBOX_AUTOCLOSE
# 19 "data/maps/MauvillCity_Harbour/scripts.pory"
	applymovement 2, Movement_CommanderLeaves
# 20 "data/maps/MauvillCity_Harbour/scripts.pory"
	waitmovement 2
# 21 "data/maps/MauvillCity_Harbour/scripts.pory"
	setflag FLAG_HIDE_ALL_THUG_CITY_THUGS
# 22 "data/maps/MauvillCity_Harbour/scripts.pory"
	clearflag FLAG_HIDE_THUG_CITY_OVERWORLD_INHABITANTS
# 23 "data/maps/MauvillCity_Harbour/scripts.pory"
	removeobject 1
# 24 "data/maps/MauvillCity_Harbour/scripts.pory"
	removeobject 2
# 25 "data/maps/MauvillCity_Harbour/scripts.pory"
	releaseall
	return


ThugCity_Island2Boat::
# 29 "data/maps/MauvillCity_Harbour/scripts.pory"
	lockall
# 30 "data/maps/MauvillCity_Harbour/scripts.pory"
	faceplayer
# 31 "data/maps/MauvillCity_Harbour/scripts.pory"
	msgbox ThugCity_Island2Boat_Text_0, MSGBOX_YESNO
# 32 "data/maps/MauvillCity_Harbour/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ThugCity_Island2Boat_2
ThugCity_Island2Boat_1:
# 35 "data/maps/MauvillCity_Harbour/scripts.pory"
	releaseall
	return

ThugCity_Island2Boat_2:
# 33 "data/maps/MauvillCity_Harbour/scripts.pory"
	warp MAP_CORAL_PORT_HARBOR, 8, 11
	goto ThugCity_Island2Boat_1


# 50 "data/maps/MauvillCity_Harbour/scripts.pory"
Movement_PlayerOutWay_Harbour_ThugCity:
# 51 "data/maps/MauvillCity_Harbour/scripts.pory"
	jump_right
	step_end

# 54 "data/maps/MauvillCity_Harbour/scripts.pory"
Movement_CommanderLeaves:
# 55 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_down_fast
# 56 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_down_fast
# 57 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_down_fast
# 58 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
# 59 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
# 60 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
# 61 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
# 62 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
# 63 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
# 64 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
# 65 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
# 66 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_right_fast
	step_end

# 69 "data/maps/MauvillCity_Harbour/scripts.pory"
Movement_BossToPlayer:
# 70 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_left
# 71 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_down
# 72 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_down
# 73 "data/maps/MauvillCity_Harbour/scripts.pory"
	walk_down
# 74 "data/maps/MauvillCity_Harbour/scripts.pory"
	face_right
	step_end

ThugCity_Harbour_EventScript_ThugCommander_Text_0:
# 6 "data/maps/MauvillCity_Harbour/scripts.pory"
	.string "No one is allowed to see the boss while\n"
	.string "he works.$"

ThugCommander_PostScript_Text_0:
# 12 "data/maps/MauvillCity_Harbour/scripts.pory"
	.string "Boss has finished his work so we got all\n"
	.string "the information we need.$"

ThugCommander_PostScript_Text_1:
# 18 "data/maps/MauvillCity_Harbour/scripts.pory"
	.string "Next time we won't be so nice.$"

ThugCity_Island2Boat_Text_0:
# 31 "data/maps/MauvillCity_Harbour/scripts.pory"
	.string "Would you like to travel to Island 1?$"

ThugCommander_Intro::
# 40 "data/maps/MauvillCity_Harbour/scripts.pory"
	.string "Persistent one huh, fine let me show\n"
	.string "you how this will happen.$"

ThugCommander_Outro::
# 44 "data/maps/MauvillCity_Harbour/scripts.pory"
	.string "It doesn't matter you're too late.$"
