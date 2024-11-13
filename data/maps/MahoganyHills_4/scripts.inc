MahoganyHills_4_MapScripts::
	.byte 0


MahoganyHills_Secret_MapScripts_SecretButton1::
# 5 "data/maps/MahoganyHills_4/scripts.pory"
	lockall
# 6 "data/maps/MahoganyHills_4/scripts.pory"
	goto_if_unset FLAG_MAHOGANY_HILLS_BUTTON_1_PRESSED, MahoganyHills_Secret_MapScripts_SecretButton1_2
MahoganyHills_Secret_MapScripts_SecretButton1_1:
# 17 "data/maps/MahoganyHills_4/scripts.pory"
	goto_if_set FLAG_MAHOGANY_HILLS_BUTTON_1_PRESSED, MahoganyHills_Secret_MapScripts_SecretButton1_5
MahoganyHills_Secret_MapScripts_SecretButton1_4:
# 20 "data/maps/MahoganyHills_4/scripts.pory"
	releaseall
	return

MahoganyHills_Secret_MapScripts_SecretButton1_2:
# 7 "data/maps/MahoganyHills_4/scripts.pory"
	msgbox MahoganyHills_Secret_MapScripts_SecretButton1_Text_0, MSGBOX_YESNO
# 8 "data/maps/MahoganyHills_4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_Secret_MapScripts_SecretButton1_8
MahoganyHills_Secret_MapScripts_SecretButton1_7:
# 13 "data/maps/MahoganyHills_4/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills_Secret_MapScripts_SecretButton1_10
	goto MahoganyHills_Secret_MapScripts_SecretButton1_1

MahoganyHills_Secret_MapScripts_SecretButton1_5:
# 18 "data/maps/MahoganyHills_4/scripts.pory"
	msgbox MahoganyHills_Secret_MapScripts_SecretButton1_Text_3
	goto MahoganyHills_Secret_MapScripts_SecretButton1_4

MahoganyHills_Secret_MapScripts_SecretButton1_8:
# 9 "data/maps/MahoganyHills_4/scripts.pory"
	msgbox MahoganyHills_Secret_MapScripts_SecretButton1_Text_1
# 10 "data/maps/MahoganyHills_4/scripts.pory"
	addvar VAR_MAHOGANYHILLS_BUTTONS_PRESSED, 1
# 11 "data/maps/MahoganyHills_4/scripts.pory"
	setflag FLAG_MAHOGANY_HILLS_BUTTON_1_PRESSED
	goto MahoganyHills_Secret_MapScripts_SecretButton1_7

MahoganyHills_Secret_MapScripts_SecretButton1_10:
# 14 "data/maps/MahoganyHills_4/scripts.pory"
	msgbox MahoganyHills_Secret_MapScripts_SecretButton1_Text_2
	goto MahoganyHills_Secret_MapScripts_SecretButton1_1


MahoganyHills_Secret_MapScripts_SecretButton1_Text_0:
# 7 "data/maps/MahoganyHills_4/scripts.pory"
	.string "It's covered in moss but you can make\n"
	.string "out some kind of button.\n"
	.string "Press the button?$"

MahoganyHills_Secret_MapScripts_SecretButton1_Text_1:
# 9 "data/maps/MahoganyHills_4/scripts.pory"
	.string "You press the button.$"

MahoganyHills_Secret_MapScripts_SecretButton1_Text_2:
# 14 "data/maps/MahoganyHills_4/scripts.pory"
	.string "Probably the smart choice.$"

MahoganyHills_Secret_MapScripts_SecretButton1_Text_3:
# 18 "data/maps/MahoganyHills_4/scripts.pory"
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"
