MahoganyHills_5_MapScripts::
	.byte 0


MahoganyHills5_MapScripts_SecretButton3::
# 5 "data/maps/MahoganyHills_5/scripts.pory"
	lockall
# 6 "data/maps/MahoganyHills_5/scripts.pory"
	goto_if_unset FLAG_MAHOGANY_HILLS_BUTTON_3_PRESSED, MahoganyHills5_MapScripts_SecretButton3_2
MahoganyHills5_MapScripts_SecretButton3_1:
# 17 "data/maps/MahoganyHills_5/scripts.pory"
	goto_if_set FLAG_MAHOGANY_HILLS_BUTTON_3_PRESSED, MahoganyHills5_MapScripts_SecretButton3_5
MahoganyHills5_MapScripts_SecretButton3_4:
# 20 "data/maps/MahoganyHills_5/scripts.pory"
	releaseall
	return

MahoganyHills5_MapScripts_SecretButton3_2:
# 7 "data/maps/MahoganyHills_5/scripts.pory"
	msgbox MahoganyHills5_MapScripts_SecretButton3_Text_0, MSGBOX_YESNO
# 8 "data/maps/MahoganyHills_5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills5_MapScripts_SecretButton3_8
MahoganyHills5_MapScripts_SecretButton3_7:
# 13 "data/maps/MahoganyHills_5/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills5_MapScripts_SecretButton3_10
	goto MahoganyHills5_MapScripts_SecretButton3_1

MahoganyHills5_MapScripts_SecretButton3_5:
# 18 "data/maps/MahoganyHills_5/scripts.pory"
	msgbox MahoganyHills5_MapScripts_SecretButton3_Text_3
	goto MahoganyHills5_MapScripts_SecretButton3_4

MahoganyHills5_MapScripts_SecretButton3_8:
# 9 "data/maps/MahoganyHills_5/scripts.pory"
	msgbox MahoganyHills5_MapScripts_SecretButton3_Text_1
# 10 "data/maps/MahoganyHills_5/scripts.pory"
	addvar VAR_MAHOGANYHILLS_BUTTONS_PRESSED, 1
# 11 "data/maps/MahoganyHills_5/scripts.pory"
	setflag FLAG_MAHOGANY_HILLS_BUTTON_3_PRESSED
	goto MahoganyHills5_MapScripts_SecretButton3_7

MahoganyHills5_MapScripts_SecretButton3_10:
# 14 "data/maps/MahoganyHills_5/scripts.pory"
	msgbox MahoganyHills5_MapScripts_SecretButton3_Text_2
	goto MahoganyHills5_MapScripts_SecretButton3_1


MahoganyHills5_MapScripts_SecretButton3_Text_0:
# 7 "data/maps/MahoganyHills_5/scripts.pory"
	.string "It's covered in moss but you can make\n"
	.string "out some kind of button.\n"
	.string "Press the button?$"

MahoganyHills5_MapScripts_SecretButton3_Text_1:
# 9 "data/maps/MahoganyHills_5/scripts.pory"
	.string "You press the button.$"

MahoganyHills5_MapScripts_SecretButton3_Text_2:
# 14 "data/maps/MahoganyHills_5/scripts.pory"
	.string "Probably the smart choice.$"

MahoganyHills5_MapScripts_SecretButton3_Text_3:
# 18 "data/maps/MahoganyHills_5/scripts.pory"
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"
