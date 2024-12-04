MossdeepCity_House1_MapScripts::
	.byte 0


MossdeepCity_House1_EventScript_BlackBelt::
# 5 "data/maps/MossdeepCity_House1/scripts.pory"
	lockall
# 6 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 7 "data/maps/MossdeepCity_House1/scripts.pory"
	checkitem ITEM_PICKAXE, 1
# 9 "data/maps/MossdeepCity_House1/scripts.pory"
	goto_if_unset FLAG_REMOVED_MOSSDEEP_ROCK, MossdeepCity_House1_EventScript_BlackBelt_2
MossdeepCity_House1_EventScript_BlackBelt_1:
# 25 "data/maps/MossdeepCity_House1/scripts.pory"
	goto_if_set FLAG_REMOVED_MOSSDEEP_ROCK, MossdeepCity_House1_EventScript_BlackBelt_5
MossdeepCity_House1_EventScript_BlackBelt_4:
# 29 "data/maps/MossdeepCity_House1/scripts.pory"
	releaseall
	return

MossdeepCity_House1_EventScript_BlackBelt_2:
# 10 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_House1_EventScript_BlackBelt_8
MossdeepCity_House1_EventScript_BlackBelt_7:
# 21 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_House1_EventScript_BlackBelt_10
	goto MossdeepCity_House1_EventScript_BlackBelt_1

MossdeepCity_House1_EventScript_BlackBelt_5:
# 26 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_5
# 27 "data/maps/MossdeepCity_House1/scripts.pory"
	giveitem ITEM_TM53
	goto MossdeepCity_House1_EventScript_BlackBelt_4

MossdeepCity_House1_EventScript_BlackBelt_8:
# 11 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_0, MSGBOX_YESNO
# 12 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_House1_EventScript_BlackBelt_13
MossdeepCity_House1_EventScript_BlackBelt_12:
# 15 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_House1_EventScript_BlackBelt_15
	goto MossdeepCity_House1_EventScript_BlackBelt_7

MossdeepCity_House1_EventScript_BlackBelt_10:
# 22 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_4
	goto MossdeepCity_House1_EventScript_BlackBelt_1

MossdeepCity_House1_EventScript_BlackBelt_13:
# 13 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_1
	goto MossdeepCity_House1_EventScript_BlackBelt_12

MossdeepCity_House1_EventScript_BlackBelt_15:
# 16 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_2
# 17 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_3
# 18 "data/maps/MossdeepCity_House1/scripts.pory"
	giveitem ITEM_PICKAXE, 1
	goto MossdeepCity_House1_EventScript_BlackBelt_7


MossdeepCity_House1_EventScript_Woman::
# 33 "data/maps/MossdeepCity_House1/scripts.pory"
	lockall
# 34 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 35 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_Woman_Text_0
# 36 "data/maps/MossdeepCity_House1/scripts.pory"
	releaseall
	return


MossdeepCity_House1_EventScript_BlackBelt_Text_0:
# 11 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Have you see that guy outside trying to\n"
	.string "break rocks?$"

MossdeepCity_House1_EventScript_BlackBelt_Text_1:
# 13 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Oh nevermind then.$"

MossdeepCity_House1_EventScript_BlackBelt_Text_2:
# 16 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It's my brother, he thinks I can smash\n"
	.string "rocks with my fists but really I just\l"
	.string "use a tool.$"

MossdeepCity_House1_EventScript_BlackBelt_Text_3:
# 17 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Why don't you take it and go mess with\n"
	.string "him.$"

MossdeepCity_House1_EventScript_BlackBelt_Text_4:
# 22 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Smash that rock in front of him, he\n"
	.string "won't know what to do.$"

MossdeepCity_House1_EventScript_BlackBelt_Text_5:
# 26 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "You did it! I bet his face was a picture.\p"
	.string "Please take this as a thanks.$"

MossdeepCity_House1_EventScript_Woman_Text_0:
# 35 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "I wish my Husband and his brother would\n"
	.string "grow up.$"
