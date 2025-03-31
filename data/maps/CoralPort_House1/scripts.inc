CoralPort_House1_MapScripts::
	.byte 0


CoralPort_House1_Mat::
# 6 "data/maps/CoralPort_House1/scripts.pory"
	lockall
# 7 "data/maps/CoralPort_House1/scripts.pory"
	faceplayer
# 8 "data/maps/CoralPort_House1/scripts.pory"
	goto_if_set FLAG_HIDE_MAT_CORALPORT, CoralPort_House1_Mat_2
CoralPort_House1_Mat_1:
# 11 "data/maps/CoralPort_House1/scripts.pory"
	goto_if_unset FLAG_HIDE_MAT_CORALPORT, CoralPort_House1_Mat_5
CoralPort_House1_Mat_4:
# 24 "data/maps/CoralPort_House1/scripts.pory"
	releaseall
	return

CoralPort_House1_Mat_2:
# 9 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_Mat_Text_0
	goto CoralPort_House1_Mat_1

CoralPort_House1_Mat_5:
# 12 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_Mat_Text_1
# 13 "data/maps/CoralPort_House1/scripts.pory"
	goto_if_unset FLAG_MAT_ID, CoralPort_House1_Mat_8
CoralPort_House1_Mat_7:
# 16 "data/maps/CoralPort_House1/scripts.pory"
	goto_if_set FLAG_MAT_ID, CoralPort_House1_Mat_10
	goto CoralPort_House1_Mat_4

CoralPort_House1_Mat_8:
# 14 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_Mat_Text_2
	goto CoralPort_House1_Mat_7

CoralPort_House1_Mat_10:
# 17 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_Mat_Text_3
# 18 "data/maps/CoralPort_House1/scripts.pory"
	giveitem ITEM_TM_RETURN
# 19 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_Mat_Text_4
# 20 "data/maps/CoralPort_House1/scripts.pory"
	setflag FLAG_HIDE_MAT_CORALPORT
# 21 "data/maps/CoralPort_House1/scripts.pory"
	clearflag FLAG_HIDE_MAT_MEGA_MANSION
	goto CoralPort_House1_Mat_4


CoralPort_House1_Mat_Text_0:
# 9 "data/maps/CoralPort_House1/scripts.pory"
	.string "Once I've finished packing I'll be on my\n"
	.string "way.$"

CoralPort_House1_Mat_Text_1:
# 12 "data/maps/CoralPort_House1/scripts.pory"
	.string "Hello again! I'm heading across the\n"
	.string "water soon now I've finished school I\l"
	.string "want to get my Mega Stone! There is a\l"
	.string "giant tower in Breakwater Port with a\l"
	.string "really tough challenge, but I think I\l"
	.string "can do it!$"

CoralPort_House1_Mat_Text_2:
# 14 "data/maps/CoralPort_House1/scripts.pory"
	.string "Before I go I need to find something\n"
	.string "I've lost...$"

CoralPort_House1_Mat_Text_3:
# 17 "data/maps/CoralPort_House1/scripts.pory"
	.string "Wow you found my ID! Thank you so much,\n"
	.string "please take this.$"

CoralPort_House1_Mat_Text_4:
# 19 "data/maps/CoralPort_House1/scripts.pory"
	.string "It's Return, a good trainer like you can\n"
	.string "use it to get the best out of their\l"
	.string "Pokemon.$"
