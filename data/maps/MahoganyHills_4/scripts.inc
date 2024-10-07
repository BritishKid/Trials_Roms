MahoganyHills_4_MapScripts::
	.byte 0


MahoganyHills_4_EventScript_SecretDome2::
	lockall
	goto_if_unset FLAG_MAHOGANY_HILLS_BUTTON_2_PRESSED, MahoganyHills_4_EventScript_SecretDome2_2
	msgbox MahoganyHills_4_EventScript_SecretDome2_Text_3
MahoganyHills_4_EventScript_SecretDome2_1:
	releaseall
	return

MahoganyHills_4_EventScript_SecretDome2_2:
	msgbox MahoganyHills_4_EventScript_SecretDome2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_4_EventScript_SecretDome2_6
MahoganyHills_4_EventScript_SecretDome2_5:
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills_4_EventScript_SecretDome2_8
	goto MahoganyHills_4_EventScript_SecretDome2_1

MahoganyHills_4_EventScript_SecretDome2_6:
	msgbox MahoganyHills_4_EventScript_SecretDome2_Text_1
	setvar VAR_MAHOGANCYHILLS_BUTTONS_PRESSED, VAR_MAHOGANCYHILLS_BUTTONS_PRESSED + 1
	setflag FLAG_MAHOGANY_HILLS_BUTTON_2_PRESSED
	goto MahoganyHills_4_EventScript_SecretDome2_5

MahoganyHills_4_EventScript_SecretDome2_8:
	msgbox MahoganyHills_4_EventScript_SecretDome2_Text_2
	goto MahoganyHills_4_EventScript_SecretDome2_1


MahoganyHills_4_EventScript_SecretDome2_Text_0:
	.string "It's covered in moss but you can make\n"
	.string "out a button on it.\p"
	.string "Press the button?$"

MahoganyHills_4_EventScript_SecretDome2_Text_1:
	.string "You press the button$"

MahoganyHills_4_EventScript_SecretDome2_Text_2:
	.string "Probably the smart choice.$"

MahoganyHills_4_EventScript_SecretDome2_Text_3:
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"
