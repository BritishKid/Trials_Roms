MahogonyHills_3_MapScripts::
	.byte 0


MahoganyHills3_EventScript_Darwin::
# 5 "data/maps/MahogonyHills_3/scripts.pory"
	lockall
# 6 "data/maps/MahogonyHills_3/scripts.pory"
	faceplayer
# 7 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 1
	goto_if_eq MahoganyHills3_EventScript_Darwin_2
MahoganyHills3_EventScript_Darwin_1:
# 10 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 2
	goto_if_eq MahoganyHills3_EventScript_Darwin_5
MahoganyHills3_EventScript_Darwin_4:
# 13 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 0
	goto_if_eq MahoganyHills3_EventScript_Darwin_8
MahoganyHills3_EventScript_Darwin_7:
# 23 "data/maps/MahogonyHills_3/scripts.pory"
	releaseall
	return

MahoganyHills3_EventScript_Darwin_2:
# 8 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_0
	goto MahoganyHills3_EventScript_Darwin_1

MahoganyHills3_EventScript_Darwin_5:
# 11 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_1
	goto MahoganyHills3_EventScript_Darwin_4

MahoganyHills3_EventScript_Darwin_8:
# 14 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_2, MSGBOX_YESNO
# 15 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_Darwin_10
# 20 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_4
	goto MahoganyHills3_EventScript_Darwin_7

MahoganyHills3_EventScript_Darwin_10:
# 16 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_3
# 17 "data/maps/MahogonyHills_3/scripts.pory"
	setvar VAR_MAHOGONY_FOSSIL_SELECTION, 1
	goto MahoganyHills3_EventScript_Darwin_7


MahoganyHills3_EventScript_ClawFossil::
# 27 "data/maps/MahogonyHills_3/scripts.pory"
	lockall
# 28 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 1
	goto_if_gt MahoganyHills3_EventScript_ClawFossil_2
MahoganyHills3_EventScript_ClawFossil_1:
# 31 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 0
	goto_if_eq MahoganyHills3_EventScript_ClawFossil_5
MahoganyHills3_EventScript_ClawFossil_4:
# 34 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 1
	goto_if_eq MahoganyHills3_EventScript_ClawFossil_8
MahoganyHills3_EventScript_ClawFossil_7:
# 44 "data/maps/MahogonyHills_3/scripts.pory"
	releaseall
	return

MahoganyHills3_EventScript_ClawFossil_2:
# 29 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_ClawFossil_Text_0
	goto MahoganyHills3_EventScript_ClawFossil_1

MahoganyHills3_EventScript_ClawFossil_5:
# 32 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_ClawFossil_Text_1
	goto MahoganyHills3_EventScript_ClawFossil_4

MahoganyHills3_EventScript_ClawFossil_8:
# 35 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_ClawFossil_Text_2, MSGBOX_YESNO
# 36 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_ClawFossil_10
	goto MahoganyHills3_EventScript_ClawFossil_7

MahoganyHills3_EventScript_ClawFossil_10:
# 37 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_ClawFossil_Text_3
# 38 "data/maps/MahogonyHills_3/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 39 "data/maps/MahogonyHills_3/scripts.pory"
	removeobject 2
# 40 "data/maps/MahogonyHills_3/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 41 "data/maps/MahogonyHills_3/scripts.pory"
	setvar VAR_MAHOGONY_FOSSIL_SELECTION, 2
	goto MahoganyHills3_EventScript_ClawFossil_7


MahoganyHills3_EventScript_RootFossil::
# 49 "data/maps/MahogonyHills_3/scripts.pory"
	lockall
# 50 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 1
	goto_if_gt MahoganyHills3_EventScript_RootFossil_2
MahoganyHills3_EventScript_RootFossil_1:
# 53 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 0
	goto_if_eq MahoganyHills3_EventScript_RootFossil_5
MahoganyHills3_EventScript_RootFossil_4:
# 56 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_MAHOGONY_FOSSIL_SELECTION, 1
	goto_if_eq MahoganyHills3_EventScript_RootFossil_8
MahoganyHills3_EventScript_RootFossil_7:
# 66 "data/maps/MahogonyHills_3/scripts.pory"
	releaseall
	return

MahoganyHills3_EventScript_RootFossil_2:
# 51 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_ClawFossil_Text_0
	goto MahoganyHills3_EventScript_RootFossil_1

MahoganyHills3_EventScript_RootFossil_5:
# 54 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_RootFossil_Text_0
	goto MahoganyHills3_EventScript_RootFossil_4

MahoganyHills3_EventScript_RootFossil_8:
# 57 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_RootFossil_Text_1, MSGBOX_YESNO
# 58 "data/maps/MahogonyHills_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_RootFossil_10
	goto MahoganyHills3_EventScript_RootFossil_7

MahoganyHills3_EventScript_RootFossil_10:
# 59 "data/maps/MahogonyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_RootFossil_Text_2
# 60 "data/maps/MahogonyHills_3/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 61 "data/maps/MahogonyHills_3/scripts.pory"
	removeobject 3
# 62 "data/maps/MahogonyHills_3/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 63 "data/maps/MahogonyHills_3/scripts.pory"
	setvar VAR_MAHOGONY_FOSSIL_SELECTION, 2
	goto MahoganyHills3_EventScript_RootFossil_7


MahoganyHills3_EventScript_Darwin_Text_0:
# 8 "data/maps/MahogonyHills_3/scripts.pory"
	.string "Go ahead pick a fossil.$"

MahoganyHills3_EventScript_Darwin_Text_1:
# 11 "data/maps/MahogonyHills_3/scripts.pory"
	.string "Come find me in my lab I'll be able to\n"
	.string "revive it for you.$"

MahoganyHills3_EventScript_Darwin_Text_2:
# 14 "data/maps/MahogonyHills_3/scripts.pory"
	.string "Oh hello. Are you interested in fossils\n"
	.string "aswell?$"

MahoganyHills3_EventScript_Darwin_Text_3:
# 16 "data/maps/MahogonyHills_3/scripts.pory"
	.string "Oh lovely. Why don't you pick one to\n"
	.string "have.$"

MahoganyHills3_EventScript_Darwin_Text_4:
# 20 "data/maps/MahogonyHills_3/scripts.pory"
	.string "That's a shame, they are just\n"
	.string "fantastic.$"

MahoganyHills3_EventScript_ClawFossil_Text_0:
# 29 "data/maps/MahogonyHills_3/scripts.pory"
	.string "I can't take both.$"

MahoganyHills3_EventScript_ClawFossil_Text_1:
# 32 "data/maps/MahogonyHills_3/scripts.pory"
	.string "It's a fossil in the shape of a claw.$"

MahoganyHills3_EventScript_ClawFossil_Text_2:
# 35 "data/maps/MahogonyHills_3/scripts.pory"
	.string "It's a fossil in the shape of a claw, do\n"
	.string "you want to take it?$"

MahoganyHills3_EventScript_ClawFossil_Text_3:
# 37 "data/maps/MahogonyHills_3/scripts.pory"
	.string "{PLAYER} took the Claw Fossil$"

MahoganyHills3_EventScript_RootFossil_Text_0:
# 54 "data/maps/MahogonyHills_3/scripts.pory"
	.string "It's a fossil in the shape of a root.$"

MahoganyHills3_EventScript_RootFossil_Text_1:
# 57 "data/maps/MahogonyHills_3/scripts.pory"
	.string "It's a fossil in the shape of a root, do\n"
	.string "you want to take it?$"

MahoganyHills3_EventScript_RootFossil_Text_2:
# 59 "data/maps/MahogonyHills_3/scripts.pory"
	.string "{PLAYER} took the Root Fossil$"
