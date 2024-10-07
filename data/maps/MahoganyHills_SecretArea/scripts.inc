MahoganyHills_SecretArea_MapScripts::
	.byte 0


MahoganyHills_SecretArea_EventScript_SecretDome1::
# 4 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	lockall
# 5 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	goto_if_unset FLAG_MAHOGANY_HILLS_BUTTON_1_PRESSED, MahoganyHills_SecretArea_EventScript_SecretDome1_2
# 17 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	msgbox MahoganyHills_SecretArea_EventScript_SecretDome1_Text_3
MahoganyHills_SecretArea_EventScript_SecretDome1_1:
# 19 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	releaseall
	return

MahoganyHills_SecretArea_EventScript_SecretDome1_2:
# 6 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	msgbox MahoganyHills_SecretArea_EventScript_SecretDome1_Text_0, MSGBOX_YESNO
# 7 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_SecretArea_EventScript_SecretDome1_6
MahoganyHills_SecretArea_EventScript_SecretDome1_5:
# 12 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills_SecretArea_EventScript_SecretDome1_8
	goto MahoganyHills_SecretArea_EventScript_SecretDome1_1

MahoganyHills_SecretArea_EventScript_SecretDome1_6:
# 8 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	msgbox MahoganyHills_SecretArea_EventScript_SecretDome1_Text_1
# 9 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	setvar VAR_MAHOGANCYHILLS_BUTTONS_PRESSED, VAR_MAHOGANCYHILLS_BUTTONS_PRESSED + 1
# 10 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	setflag FLAG_MAHOGANY_HILLS_BUTTON_1_PRESSED
	goto MahoganyHills_SecretArea_EventScript_SecretDome1_5

MahoganyHills_SecretArea_EventScript_SecretDome1_8:
# 13 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	msgbox MahoganyHills_SecretArea_EventScript_SecretDome1_Text_2
	goto MahoganyHills_SecretArea_EventScript_SecretDome1_1


MahoganyScript_EventScript_HiddenArea_Leaving::
# 23 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	lockall
# 24 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	warp MAP_MAHOGANY_HILLS_1, 27, 26
# 25 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	releaseall
	return


MahoganyHills_SecretArea_EventScript_SecretDome1_Text_0:
# 6 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	.string "It's covered in moss but you can make\n"
	.string "out a button on it.\p"
	.string "Press the button?$"

MahoganyHills_SecretArea_EventScript_SecretDome1_Text_1:
# 8 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	.string "You press the button$"

MahoganyHills_SecretArea_EventScript_SecretDome1_Text_2:
# 13 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	.string "Probably the smart choice.$"

MahoganyHills_SecretArea_EventScript_SecretDome1_Text_3:
# 17 "data/maps/MahoganyHills_SecretArea/scripts.pory"
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"
