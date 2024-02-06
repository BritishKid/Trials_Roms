MahoganyHills_3_MapScripts::
	.byte 0


MahoganyHills3_EventScript_Darwin::
	lockall
	faceplayer
	goto_if_unset FLAG_CHOSE_FOSSIL, MahoganyHills3_EventScript_Darwin_2
	msgbox MahoganyHills3_EventScript_Darwin_Text_3
MahoganyHills3_EventScript_Darwin_1:
	releaseall
	return

MahoganyHills3_EventScript_Darwin_2:
	msgbox MahoganyHills3_EventScript_Darwin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_Darwin_5
	msgbox MahoganyHills3_EventScript_Darwin_Text_2
	goto MahoganyHills3_EventScript_Darwin_1

MahoganyHills3_EventScript_Darwin_5:
	msgbox MahoganyHills3_EventScript_Darwin_Text_1
	setvar VAR_FIRST_FOSSIL_SELECTION, 1
	goto MahoganyHills3_EventScript_Darwin_1


MahoganyHills3_EventScript_AnorithFossil::
	lockall
	goto_if_unset FLAG_CHOSE_FOSSIL, MahoganyHills3_EventScript_AnorithFossil_2
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_3
MahoganyHills3_EventScript_AnorithFossil_1:
	releaseall
	return

MahoganyHills3_EventScript_AnorithFossil_2:
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_AnorithFossil_5
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_2
	goto MahoganyHills3_EventScript_AnorithFossil_1

MahoganyHills3_EventScript_AnorithFossil_5:
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_1
	giveitem ITEM_CLAW_FOSSIL, 1
	setvar VAR_FIRST_FOSSIL_SELECTION, 2
	setflag FLAG_CHOSE_FOSSIL
	removeobject 2
	goto MahoganyHills3_EventScript_AnorithFossil_1


MahoganyHills3_EventScript_LileepFossil::
	lockall
	goto_if_unset FLAG_CHOSE_FOSSIL, MahoganyHills3_EventScript_LileepFossil_2
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_3
MahoganyHills3_EventScript_LileepFossil_1:
	releaseall
	return

MahoganyHills3_EventScript_LileepFossil_2:
	msgbox MahoganyHills3_EventScript_LileepFossil_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills3_EventScript_LileepFossil_5
	msgbox MahoganyHills3_EventScript_AnorithFossil_Text_2
	goto MahoganyHills3_EventScript_LileepFossil_1

MahoganyHills3_EventScript_LileepFossil_5:
	msgbox MahoganyHills3_EventScript_LileepFossil_Text_1
	giveitem ITEM_ROOT_FOSSIL, 1
	setvar VAR_FIRST_FOSSIL_SELECTION, 3
	setflag FLAG_CHOSE_FOSSIL
	removeobject 3
	goto MahoganyHills3_EventScript_LileepFossil_1


Oshawott_Hidden_Grotto_Entrance::
	goto_if_set FLAG_CHOSE_FOSSIL, Oshawott_Hidden_Grotto_Entrance_1
	return

Oshawott_Hidden_Grotto_Entrance_1:
	msgbox Oshawott_Hidden_Grotto_Entrance_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Oshawott_Hidden_Grotto_Entrance_3
	return

Oshawott_Hidden_Grotto_Entrance_3:
	warp MAP_OSHAWOTT_GROTTO, 10, 15
	return


MahoganyHills3_EventScript_Darwin_Text_0:
	.string "Oh hello. Are you interested in fossils\n"
	.string "to?$"

MahoganyHills3_EventScript_Darwin_Text_1:
	.string "That's brilliant here you should take\n"
	.string "one!$"

MahoganyHills3_EventScript_Darwin_Text_2:
	.string "Oh that's a shame. They are just\n"
	.string "fantastic.$"

MahoganyHills3_EventScript_Darwin_Text_3:
	.string "Come find me and I'll revive that fossil\n"
	.string "for you.$"

MahoganyHills3_EventScript_AnorithFossil_Text_0:
	.string "Do you want to select the Claw fossil?$"

MahoganyHills3_EventScript_AnorithFossil_Text_1:
	.string "{PLAYER} selected the Claw Fossil$"

MahoganyHills3_EventScript_AnorithFossil_Text_2:
	.string "Maybe not then$"

MahoganyHills3_EventScript_AnorithFossil_Text_3:
	.string "I can't take both, that would be greedy$"

MahoganyHills3_EventScript_LileepFossil_Text_0:
	.string "Do you want to select the Root fossil?$"

MahoganyHills3_EventScript_LileepFossil_Text_1:
	.string "{PLAYER} selected the Root Fossil$"

Oshawott_Hidden_Grotto_Entrance_Text_0:
	.string "There seems to be a gap in the trees\n"
	.string "Would you like to squeeze through?$"
