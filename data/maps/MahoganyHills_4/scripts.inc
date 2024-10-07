MahoganyHills_4_MapScripts::
	.byte 0


MahoganyHills_4_EventScript_SecretDome2::
# 4 "data/maps/MahoganyHills_4/scripts.pory"
	lockall
# 5 "data/maps/MahoganyHills_4/scripts.pory"
	goto_if_unset FLAG_MAHOGANY_HILLS_BUTTON_2_PRESSED, MahoganyHills_4_EventScript_SecretDome2_2
# 17 "data/maps/MahoganyHills_4/scripts.pory"
	msgbox MahoganyHills_4_EventScript_SecretDome2_Text_3
MahoganyHills_4_EventScript_SecretDome2_1:
# 19 "data/maps/MahoganyHills_4/scripts.pory"
	releaseall
	return

MahoganyHills_4_EventScript_SecretDome2_2:
# 6 "data/maps/MahoganyHills_4/scripts.pory"
	msgbox MahoganyHills_4_EventScript_SecretDome2_Text_0, MSGBOX_YESNO
# 7 "data/maps/MahoganyHills_4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_4_EventScript_SecretDome2_6
MahoganyHills_4_EventScript_SecretDome2_5:
# 12 "data/maps/MahoganyHills_4/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills_4_EventScript_SecretDome2_8
	goto MahoganyHills_4_EventScript_SecretDome2_1

MahoganyHills_4_EventScript_SecretDome2_6:
# 8 "data/maps/MahoganyHills_4/scripts.pory"
	msgbox MahoganyHills_4_EventScript_SecretDome2_Text_1
# 9 "data/maps/MahoganyHills_4/scripts.pory"
	setvar VAR_MAHOGANCYHILLS_BUTTONS_PRESSED, VAR_MAHOGANCYHILLS_BUTTONS_PRESSED + 1
# 10 "data/maps/MahoganyHills_4/scripts.pory"
	setflag FLAG_MAHOGANY_HILLS_BUTTON_2_PRESSED
	goto MahoganyHills_4_EventScript_SecretDome2_5

MahoganyHills_4_EventScript_SecretDome2_8:
# 13 "data/maps/MahoganyHills_4/scripts.pory"
	msgbox MahoganyHills_4_EventScript_SecretDome2_Text_2
	goto MahoganyHills_4_EventScript_SecretDome2_1


MahoganyHills_4_EventScript_SecretDome2_Text_0:
# 6 "data/maps/MahoganyHills_4/scripts.pory"
	.string "It's covered in moss but you can make\n"
	.string "out a button on it.\p"
	.string "Press the button?$"

MahoganyHills_4_EventScript_SecretDome2_Text_1:
# 8 "data/maps/MahoganyHills_4/scripts.pory"
	.string "You press the button$"

MahoganyHills_4_EventScript_SecretDome2_Text_2:
# 13 "data/maps/MahoganyHills_4/scripts.pory"
	.string "Probably the smart choice.$"

MahoganyHills_4_EventScript_SecretDome2_Text_3:
# 17 "data/maps/MahoganyHills_4/scripts.pory"
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"
