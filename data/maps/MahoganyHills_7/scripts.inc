MahoganyHills_7_MapScripts::
	.byte 0


MahoganyHills_7_EventScript_Boy1::
# 9 "data/maps/MahoganyHills_7/scripts.pory"
	lockall
# 10 "data/maps/MahoganyHills_7/scripts.pory"
	msgbox MahoganyHills_7_EventScript_Boy1_Text_0
# 11 "data/maps/MahoganyHills_7/scripts.pory"
	releaseall
	return


MahoganyHills_7_EventScript_Boy2::
# 15 "data/maps/MahoganyHills_7/scripts.pory"
	lockall
# 16 "data/maps/MahoganyHills_7/scripts.pory"
	msgbox MahoganyHills_7_EventScript_Boy2_Text_0
# 17 "data/maps/MahoganyHills_7/scripts.pory"
	releaseall
	return


MahoganyHills_7_TriggerScript_ScareThemOff::
# 21 "data/maps/MahoganyHills_7/scripts.pory"
	lockall
# 22 "data/maps/MahoganyHills_7/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_ENCOUNTER
# 23 "data/maps/MahoganyHills_7/scripts.pory"
	applymovement 1, Movement_SurprisedMahogany7_TopBoy
# 24 "data/maps/MahoganyHills_7/scripts.pory"
	waitmovement 1
# 25 "data/maps/MahoganyHills_7/scripts.pory"
	msgbox MahoganyHills_7_TriggerScript_ScareThemOff_Text_0
# 26 "data/maps/MahoganyHills_7/scripts.pory"
	applymovement 2, Movement_SurprisedMahogany7_BottomBoy
# 27 "data/maps/MahoganyHills_7/scripts.pory"
	waitmovement 2
# 28 "data/maps/MahoganyHills_7/scripts.pory"
	msgbox MahoganyHills_7_TriggerScript_ScareThemOff_Text_1
# 29 "data/maps/MahoganyHills_7/scripts.pory"
	setflag FLAG_HIDE_BOYS_BLOCKING_GYM_SHORTCUT
# 30 "data/maps/MahoganyHills_7/scripts.pory"
	clearflag FLAG_HIDE_BOYS_CLAYHAVEN
# 31 "data/maps/MahoganyHills_7/scripts.pory"
	applymovement 1, Movement_Mahogany7_BoysFlee
# 32 "data/maps/MahoganyHills_7/scripts.pory"
	applymovement 2, Movement_Mahogany7_BoysFlee
# 33 "data/maps/MahoganyHills_7/scripts.pory"
	waitmovement 2
# 34 "data/maps/MahoganyHills_7/scripts.pory"
	removeobject 1
# 35 "data/maps/MahoganyHills_7/scripts.pory"
	removeobject 2
# 36 "data/maps/MahoganyHills_7/scripts.pory"
	clearflag FLAG_HIDE_ZORUA
# 37 "data/maps/MahoganyHills_7/scripts.pory"
	applymovement 3, MahoganyHills_ZoruaAppearsFirstTime
# 38 "data/maps/MahoganyHills_7/scripts.pory"
	waitmovement 3
# 39 "data/maps/MahoganyHills_7/scripts.pory"
	setvar VAR_ZORUA_QUEST_STATE, 1
# 40 "data/maps/MahoganyHills_7/scripts.pory"
	setflag FLAG_HIDE_ZORUA
# 41 "data/maps/MahoganyHills_7/scripts.pory"
	removeobject 3
# 42 "data/maps/MahoganyHills_7/scripts.pory"
	releaseall
	return


MahoganyHills_7_EventScript_ZoruaBoy::
# 46 "data/maps/MahoganyHills_7/scripts.pory"
	lockall
# 48 "data/maps/MahoganyHills_7/scripts.pory"
	releaseall
	return


# 53 "data/maps/MahoganyHills_7/scripts.pory"
Movement_SurprisedMahogany7_TopBoy:
# 54 "data/maps/MahoganyHills_7/scripts.pory"
	emote_question_mark
# 55 "data/maps/MahoganyHills_7/scripts.pory"
	face_down
	step_end

# 59 "data/maps/MahoganyHills_7/scripts.pory"
Movement_SurprisedMahogany7_BottomBoy:
# 60 "data/maps/MahoganyHills_7/scripts.pory"
	emote_exclamation_mark
# 61 "data/maps/MahoganyHills_7/scripts.pory"
	face_up
	step_end

# 64 "data/maps/MahoganyHills_7/scripts.pory"
Movement_Mahogany7_BoysFlee:
# 65 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_left
# 66 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_left
# 67 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_left
# 68 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_left
# 69 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_left
# 70 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_left
# 71 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_left
# 72 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_left
	step_end

# 75 "data/maps/MahoganyHills_7/scripts.pory"
MahoganyHills_ZoruaAppearsFirstTime:
# 76 "data/maps/MahoganyHills_7/scripts.pory"
	walk_right
# 77 "data/maps/MahoganyHills_7/scripts.pory"
	walk_right
# 78 "data/maps/MahoganyHills_7/scripts.pory"
	walk_right
# 79 "data/maps/MahoganyHills_7/scripts.pory"
	walk_right
# 80 "data/maps/MahoganyHills_7/scripts.pory"
	walk_right
# 81 "data/maps/MahoganyHills_7/scripts.pory"
	face_left
# 82 "data/maps/MahoganyHills_7/scripts.pory"
	face_down
# 83 "data/maps/MahoganyHills_7/scripts.pory"
	face_right
# 84 "data/maps/MahoganyHills_7/scripts.pory"
	emote_exclamation_mark
# 85 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_up
# 86 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_up
# 87 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_up
# 88 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_up
# 89 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_up
# 90 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_up
# 91 "data/maps/MahoganyHills_7/scripts.pory"
	walk_fast_up
	step_end

MahoganyHills_7_EventScript_Boy1_Text_0:
# 10 "data/maps/MahoganyHills_7/scripts.pory"
	.string "There's a strong scary Pokemon up here,\n"
	.string "we can't let you through. It's not safe.$"

MahoganyHills_7_EventScript_Boy2_Text_0:
# 16 "data/maps/MahoganyHills_7/scripts.pory"
	.string "We saw a Pokemon with sharp black\n"
	.string "spikey fur, it's really scary.$"

MahoganyHills_7_TriggerScript_ScareThemOff_Text_0:
# 25 "data/maps/MahoganyHills_7/scripts.pory"
	.string "Oh no! It's found us!$"

MahoganyHills_7_TriggerScript_ScareThemOff_Text_1:
# 28 "data/maps/MahoganyHills_7/scripts.pory"
	.string "RUN!$"
