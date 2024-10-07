MahoganyHills_3_MapScripts::
	.byte 0


MahoganyHills3_EventScript_Darwin::
# 5 "data/maps/MahoganyHills_3/scripts.pory"
	lockall
# 6 "data/maps/MahoganyHills_3/scripts.pory"
	faceplayer
# 7 "data/maps/MahoganyHills_3/scripts.pory"
	goto_if_unset FLAG_CHOSE_FOSSIL, MahoganyHills3_EventScript_Darwin_2
# 16 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_3
MahoganyHills3_EventScript_Darwin_1:
# 18 "data/maps/MahoganyHills_3/scripts.pory"
	releaseall
	return

MahoganyHills3_EventScript_Darwin_2:
# 8 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_0, MSGBOX_YESNO
# 9 "data/maps/MahoganyHills_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_Darwin_5
# 13 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_2
	goto MahoganyHills3_EventScript_Darwin_1

MahoganyHills3_EventScript_Darwin_5:
# 10 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_Darwin_Text_1
# 11 "data/maps/MahoganyHills_3/scripts.pory"
	setvar VAR_FIRST_FOSSIL_SELECTION, 1
	goto MahoganyHills3_EventScript_Darwin_1


MahoganyHills3_EventScript_AnorithFossil::
# 22 "data/maps/MahoganyHills_3/scripts.pory"
	lockall
# 23 "data/maps/MahoganyHills_3/scripts.pory"
	goto_if_unset FLAG_CHOSE_FOSSIL, MahoganyHills3_EventScript_AnorithFossil_2
# 35 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_3
MahoganyHills3_EventScript_AnorithFossil_1:
# 37 "data/maps/MahoganyHills_3/scripts.pory"
	releaseall
	return

MahoganyHills3_EventScript_AnorithFossil_2:
# 24 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_0, MSGBOX_YESNO
# 25 "data/maps/MahoganyHills_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_AnorithFossil_5
# 32 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_2
	goto MahoganyHills3_EventScript_AnorithFossil_1

MahoganyHills3_EventScript_AnorithFossil_5:
# 26 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_1
# 27 "data/maps/MahoganyHills_3/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL, 1
# 28 "data/maps/MahoganyHills_3/scripts.pory"
	setvar VAR_FIRST_FOSSIL_SELECTION, 2
# 29 "data/maps/MahoganyHills_3/scripts.pory"
	setflag FLAG_CHOSE_FOSSIL
# 30 "data/maps/MahoganyHills_3/scripts.pory"
	removeobject 2
	goto MahoganyHills3_EventScript_AnorithFossil_1


MahoganyHills3_EventScript_LileepFossil::
# 41 "data/maps/MahoganyHills_3/scripts.pory"
	lockall
# 42 "data/maps/MahoganyHills_3/scripts.pory"
	goto_if_unset FLAG_CHOSE_FOSSIL, MahoganyHills3_EventScript_LileepFossil_2
# 54 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_3
MahoganyHills3_EventScript_LileepFossil_1:
# 56 "data/maps/MahoganyHills_3/scripts.pory"
	releaseall
	return

MahoganyHills3_EventScript_LileepFossil_2:
# 43 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_LileepFossil_Text_0, MSGBOX_YESNO
# 44 "data/maps/MahoganyHills_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_LileepFossil_5
# 51 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_2
	goto MahoganyHills3_EventScript_LileepFossil_1

MahoganyHills3_EventScript_LileepFossil_5:
# 45 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox MahoganyHills3_EventScript_LileepFossil_Text_1
# 46 "data/maps/MahoganyHills_3/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL, 1
# 47 "data/maps/MahoganyHills_3/scripts.pory"
	setvar VAR_FIRST_FOSSIL_SELECTION, 3
# 48 "data/maps/MahoganyHills_3/scripts.pory"
	setflag FLAG_CHOSE_FOSSIL
# 49 "data/maps/MahoganyHills_3/scripts.pory"
	removeobject 3
	goto MahoganyHills3_EventScript_LileepFossil_1


Oshawott_Hidden_Grotto_Entrance::
# 61 "data/maps/MahoganyHills_3/scripts.pory"
	goto_if_set FLAG_CHOSE_FOSSIL, Oshawott_Hidden_Grotto_Entrance_1
	return

Oshawott_Hidden_Grotto_Entrance_1:
# 62 "data/maps/MahoganyHills_3/scripts.pory"
	msgbox Oshawott_Hidden_Grotto_Entrance_Text_0, MSGBOX_YESNO
# 63 "data/maps/MahoganyHills_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Oshawott_Hidden_Grotto_Entrance_3
	return

Oshawott_Hidden_Grotto_Entrance_3:
# 64 "data/maps/MahoganyHills_3/scripts.pory"
	warp MAP_OSHAWOTT_GROTTO, 10, 15
	return


MahoganyHills3_EventScript_Darwin_Text_0:
# 8 "data/maps/MahoganyHills_3/scripts.pory"
	.string "Oh hello. Are you interested in fossils\n"
	.string "to?$"

MahoganyHills3_EventScript_Darwin_Text_1:
# 10 "data/maps/MahoganyHills_3/scripts.pory"
	.string "That's brilliant here you should take\n"
	.string "one!$"

MahoganyHills3_EventScript_Darwin_Text_2:
# 13 "data/maps/MahoganyHills_3/scripts.pory"
	.string "Oh that's a shame. They are just\n"
	.string "fantastic.$"

MahoganyHills3_EventScript_Darwin_Text_3:
# 16 "data/maps/MahoganyHills_3/scripts.pory"
	.string "Come find me at my lab in Lilycove and\n"
	.string "I'll revive that fossil for you.$"

MahoganyHills3_EventScript_AnorithFossil_Text_0:
# 24 "data/maps/MahoganyHills_3/scripts.pory"
	.string "Do you want to select the Claw fossil?$"

MahoganyHills3_EventScript_AnorithFossil_Text_1:
# 26 "data/maps/MahoganyHills_3/scripts.pory"
	.string "{PLAYER} selected the Claw Fossil$"

MahoganyHills3_EventScript_AnorithFossil_Text_2:
# 32 "data/maps/MahoganyHills_3/scripts.pory"
	.string "Maybe not then$"

MahoganyHills3_EventScript_AnorithFossil_Text_3:
# 35 "data/maps/MahoganyHills_3/scripts.pory"
	.string "I can't take both, that would be greedy$"

MahoganyHills3_EventScript_LileepFossil_Text_0:
# 43 "data/maps/MahoganyHills_3/scripts.pory"
	.string "Do you want to select the Root fossil?$"

MahoganyHills3_EventScript_LileepFossil_Text_1:
# 45 "data/maps/MahoganyHills_3/scripts.pory"
	.string "{PLAYER} selected the Root Fossil$"

Oshawott_Hidden_Grotto_Entrance_Text_0:
# 62 "data/maps/MahoganyHills_3/scripts.pory"
	.string "There seems to be a gap in the trees\n"
	.string "Would you like to squeeze through?$"
