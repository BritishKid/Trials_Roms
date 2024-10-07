MahoganyHills_5_MapScripts::
	.byte 0


MahoganyHills_5_EventScript_SecretDome3::
	lockall
	goto_if_unset FLAG_MAHOGANY_HILLS_BUTTON_3_PRESSED, MahoganyHills_5_EventScript_SecretDome3_2
	msgbox MahoganyHills_5_EventScript_SecretDome3_Text_3
MahoganyHills_5_EventScript_SecretDome3_1:
	releaseall
	return

MahoganyHills_5_EventScript_SecretDome3_2:
	msgbox MahoganyHills_5_EventScript_SecretDome3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_5_EventScript_SecretDome3_6
MahoganyHills_5_EventScript_SecretDome3_5:
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills_5_EventScript_SecretDome3_8
	goto MahoganyHills_5_EventScript_SecretDome3_1

MahoganyHills_5_EventScript_SecretDome3_6:
	msgbox MahoganyHills_5_EventScript_SecretDome3_Text_1
	setvar VAR_MAHOGANCYHILLS_BUTTONS_PRESSED, VAR_MAHOGANCYHILLS_BUTTONS_PRESSED + 1
	setflag FLAG_MAHOGANY_HILLS_BUTTON_3_PRESSED
	goto MahoganyHills_5_EventScript_SecretDome3_5

MahoganyHills_5_EventScript_SecretDome3_8:
	msgbox MahoganyHills_5_EventScript_SecretDome3_Text_2
	goto MahoganyHills_5_EventScript_SecretDome3_1


MahoganyHills_5_EventScript_SecretDome3_Text_0:
	.string "It's covered in moss but you can make\n"
	.string "out a button on it.\p"
	.string "Press the button?$"

MahoganyHills_5_EventScript_SecretDome3_Text_1:
	.string "You press the button$"

MahoganyHills_5_EventScript_SecretDome3_Text_2:
	.string "Probably the smart choice.$"

MahoganyHills_5_EventScript_SecretDome3_Text_3:
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"
