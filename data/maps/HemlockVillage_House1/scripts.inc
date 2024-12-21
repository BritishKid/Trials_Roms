HemlockVillage_House1_MapScripts::
	.byte 0


HemlockVillage_House1_EventScript_BlackBelt::
# 5 "data/maps/HemlockVillage_House1/scripts.pory"
	lockall
# 6 "data/maps/HemlockVillage_House1/scripts.pory"
	faceplayer
# 8 "data/maps/HemlockVillage_House1/scripts.pory"
	goto_if_unset FLAG_REMOVED_MOSSDEEP_ROCK, HemlockVillage_House1_EventScript_BlackBelt_2
HemlockVillage_House1_EventScript_BlackBelt_1:
# 25 "data/maps/HemlockVillage_House1/scripts.pory"
	goto_if_set FLAG_REMOVED_MOSSDEEP_ROCK, HemlockVillage_House1_EventScript_BlackBelt_5
HemlockVillage_House1_EventScript_BlackBelt_4:
# 29 "data/maps/HemlockVillage_House1/scripts.pory"
	releaseall
	return

HemlockVillage_House1_EventScript_BlackBelt_2:
# 9 "data/maps/HemlockVillage_House1/scripts.pory"
	checkitem ITEM_PICKAXE, 1
# 10 "data/maps/HemlockVillage_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HemlockVillage_House1_EventScript_BlackBelt_8
HemlockVillage_House1_EventScript_BlackBelt_7:
# 21 "data/maps/HemlockVillage_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HemlockVillage_House1_EventScript_BlackBelt_10
	goto HemlockVillage_House1_EventScript_BlackBelt_1

HemlockVillage_House1_EventScript_BlackBelt_5:
# 26 "data/maps/HemlockVillage_House1/scripts.pory"
	msgbox HemlockVillage_House1_EventScript_BlackBelt_Text_5
# 27 "data/maps/HemlockVillage_House1/scripts.pory"
	giveitem ITEM_TM53
	goto HemlockVillage_House1_EventScript_BlackBelt_4

HemlockVillage_House1_EventScript_BlackBelt_8:
# 11 "data/maps/HemlockVillage_House1/scripts.pory"
	msgbox HemlockVillage_House1_EventScript_BlackBelt_Text_0, MSGBOX_YESNO
# 12 "data/maps/HemlockVillage_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq HemlockVillage_House1_EventScript_BlackBelt_13
HemlockVillage_House1_EventScript_BlackBelt_12:
# 15 "data/maps/HemlockVillage_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HemlockVillage_House1_EventScript_BlackBelt_15
	goto HemlockVillage_House1_EventScript_BlackBelt_7

HemlockVillage_House1_EventScript_BlackBelt_10:
# 22 "data/maps/HemlockVillage_House1/scripts.pory"
	msgbox HemlockVillage_House1_EventScript_BlackBelt_Text_4
	goto HemlockVillage_House1_EventScript_BlackBelt_1

HemlockVillage_House1_EventScript_BlackBelt_13:
# 13 "data/maps/HemlockVillage_House1/scripts.pory"
	msgbox HemlockVillage_House1_EventScript_BlackBelt_Text_1
	goto HemlockVillage_House1_EventScript_BlackBelt_12

HemlockVillage_House1_EventScript_BlackBelt_15:
# 16 "data/maps/HemlockVillage_House1/scripts.pory"
	msgbox HemlockVillage_House1_EventScript_BlackBelt_Text_2
# 17 "data/maps/HemlockVillage_House1/scripts.pory"
	msgbox HemlockVillage_House1_EventScript_BlackBelt_Text_3
# 18 "data/maps/HemlockVillage_House1/scripts.pory"
	giveitem ITEM_PICKAXE, 1
	goto HemlockVillage_House1_EventScript_BlackBelt_7


HemlockVillage_House1_EventScript_Woman::
# 33 "data/maps/HemlockVillage_House1/scripts.pory"
	lockall
# 34 "data/maps/HemlockVillage_House1/scripts.pory"
	faceplayer
# 35 "data/maps/HemlockVillage_House1/scripts.pory"
	msgbox HemlockVillage_House1_EventScript_Woman_Text_0
# 36 "data/maps/HemlockVillage_House1/scripts.pory"
	releaseall
	return


HemlockVillage_House1_EventScript_BlackBelt_Text_0:
# 11 "data/maps/HemlockVillage_House1/scripts.pory"
	.string "Have you see that guy outside trying to\n"
	.string "break rocks?$"

HemlockVillage_House1_EventScript_BlackBelt_Text_1:
# 13 "data/maps/HemlockVillage_House1/scripts.pory"
	.string "Oh nevermind then.$"

HemlockVillage_House1_EventScript_BlackBelt_Text_2:
# 16 "data/maps/HemlockVillage_House1/scripts.pory"
	.string "It's my brother, he thinks I can smash\n"
	.string "rocks with my fists but really I just\l"
	.string "use a tool.$"

HemlockVillage_House1_EventScript_BlackBelt_Text_3:
# 17 "data/maps/HemlockVillage_House1/scripts.pory"
	.string "Why don't you take it and go mess with\n"
	.string "him.$"

HemlockVillage_House1_EventScript_BlackBelt_Text_4:
# 22 "data/maps/HemlockVillage_House1/scripts.pory"
	.string "Smash that rock in front of him, he\n"
	.string "won't know what to do.$"

HemlockVillage_House1_EventScript_BlackBelt_Text_5:
# 26 "data/maps/HemlockVillage_House1/scripts.pory"
	.string "You did it! I bet his face was a picture.\p"
	.string "Please take this as a thanks.$"

HemlockVillage_House1_EventScript_Woman_Text_0:
# 35 "data/maps/HemlockVillage_House1/scripts.pory"
	.string "I wish my Husband and his brother would\n"
	.string "grow up.$"
