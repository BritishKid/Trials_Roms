FallHarbour_House2_MapScripts::
	.byte 0


FallHarbour_House2_EventScript_CraftingTable::
# 6 "data/maps/FallHarbour_House2/scripts.pory"
	lockall
# 7 "data/maps/FallHarbour_House2/scripts.pory"
	call CraftTutorial_EventScript_Table
# 8 "data/maps/FallHarbour_House2/scripts.pory"
	releaseall
	return


FallHarbour_House2_EventScript_Woman::
# 13 "data/maps/FallHarbour_House2/scripts.pory"
	lockall
# 14 "data/maps/FallHarbour_House2/scripts.pory"
	faceplayer
# 15 "data/maps/FallHarbour_House2/scripts.pory"
	goto_if_set FLAG_ACRO_BIKE, FallHarbour_House2_EventScript_Woman_2
FallHarbour_House2_EventScript_Woman_1:
# 18 "data/maps/FallHarbour_House2/scripts.pory"
	goto_if_unset FLAG_ACRO_BIKE, FallHarbour_House2_EventScript_Woman_5
FallHarbour_House2_EventScript_Woman_4:
# 24 "data/maps/FallHarbour_House2/scripts.pory"
	releaseall
	return

FallHarbour_House2_EventScript_Woman_2:
# 16 "data/maps/FallHarbour_House2/scripts.pory"
	msgbox FallHarbour_House2_EventScript_Woman_Text_0
	goto FallHarbour_House2_EventScript_Woman_1

FallHarbour_House2_EventScript_Woman_5:
# 19 "data/maps/FallHarbour_House2/scripts.pory"
	msgbox FallHarbour_House2_EventScript_Woman_Text_1
# 20 "data/maps/FallHarbour_House2/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 21 "data/maps/FallHarbour_House2/scripts.pory"
	setflag FLAG_ACRO_BIKE
# 22 "data/maps/FallHarbour_House2/scripts.pory"
	msgbox FallHarbour_House2_EventScript_Woman_Text_2
	goto FallHarbour_House2_EventScript_Woman_4


FallHarbour_House2_EventScript_Woman_Text_0:
# 16 "data/maps/FallHarbour_House2/scripts.pory"
	.string "I wonder where the thugs ran off to.$"

FallHarbour_House2_EventScript_Woman_Text_1:
# 19 "data/maps/FallHarbour_House2/scripts.pory"
	.string "Oh you're the one that kicked the thugs\n"
	.string "out of here. Please take this!$"

FallHarbour_House2_EventScript_Woman_Text_2:
# 22 "data/maps/FallHarbour_House2/scripts.pory"
	.string "The ACRO BIKE can be used to reach new\n"
	.string "places around the region.$"
