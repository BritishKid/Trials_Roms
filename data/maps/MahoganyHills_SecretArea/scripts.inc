MahoganyHills_SecretArea_MapScripts::
	.byte 0


MahoganyHills_SecretArea_EventScript_SecretDome1::
	lockall
	goto_if_unset FLAG_MAHOGANY_HILLS_BUTTON_1_PRESSED, MahoganyHills_SecretArea_EventScript_SecretDome1_2
	msgbox MahoganyHills_SecretArea_EventScript_SecretDome1_Text_3
MahoganyHills_SecretArea_EventScript_SecretDome1_1:
	releaseall
	return

MahoganyHills_SecretArea_EventScript_SecretDome1_2:
	msgbox MahoganyHills_SecretArea_EventScript_SecretDome1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_SecretArea_EventScript_SecretDome1_6
MahoganyHills_SecretArea_EventScript_SecretDome1_5:
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills_SecretArea_EventScript_SecretDome1_8
	goto MahoganyHills_SecretArea_EventScript_SecretDome1_1

MahoganyHills_SecretArea_EventScript_SecretDome1_6:
	msgbox MahoganyHills_SecretArea_EventScript_SecretDome1_Text_1
	setvar VAR_MAHOGANCYHILLS_BUTTONS_PRESSED, VAR_MAHOGANCYHILLS_BUTTONS_PRESSED + 1
	setflag FLAG_MAHOGANY_HILLS_BUTTON_1_PRESSED
	goto MahoganyHills_SecretArea_EventScript_SecretDome1_5

MahoganyHills_SecretArea_EventScript_SecretDome1_8:
	msgbox MahoganyHills_SecretArea_EventScript_SecretDome1_Text_2
	goto MahoganyHills_SecretArea_EventScript_SecretDome1_1


MahoganyScript_EventScript_HiddenArea_Leaving::
	lockall
	warp MAP_MAHOGANY_HILLS_1, 27, 26
	releaseall
	return


MahoganyHills_SecretArea_EventScript_SecretDome1_Text_0:
	.string "It's covered in moss but you can make\n"
	.string "out a button on it.\p"
	.string "Press the button?$"

MahoganyHills_SecretArea_EventScript_SecretDome1_Text_1:
	.string "You press the button$"

MahoganyHills_SecretArea_EventScript_SecretDome1_Text_2:
	.string "Probably the smart choice.$"

MahoganyHills_SecretArea_EventScript_SecretDome1_Text_3:
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"
