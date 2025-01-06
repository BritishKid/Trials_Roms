MauvilleCity_House2_MapScripts::
	.byte 0


MauvilleCity_House2_EventScript_CraftingTable::
# 6 "data/maps/MauvilleCity_House2/scripts.pory"
	lockall
# 7 "data/maps/MauvilleCity_House2/scripts.pory"
	call CraftTutorial_EventScript_Table
# 8 "data/maps/MauvilleCity_House2/scripts.pory"
	releaseall
	return


MauvilleCity_House2_EventScript_Woman::
# 13 "data/maps/MauvilleCity_House2/scripts.pory"
	lockall
# 14 "data/maps/MauvilleCity_House2/scripts.pory"
	faceplayer
# 15 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_set FLAG_ACRO_BIKE, MauvilleCity_House2_EventScript_Woman_2
MauvilleCity_House2_EventScript_Woman_1:
# 18 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_unset FLAG_ACRO_BIKE, MauvilleCity_House2_EventScript_Woman_5
MauvilleCity_House2_EventScript_Woman_4:
# 24 "data/maps/MauvilleCity_House2/scripts.pory"
	releaseall
	return

MauvilleCity_House2_EventScript_Woman_2:
# 16 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_EventScript_Woman_Text_0
	goto MauvilleCity_House2_EventScript_Woman_1

MauvilleCity_House2_EventScript_Woman_5:
# 19 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_EventScript_Woman_Text_1
# 20 "data/maps/MauvilleCity_House2/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 21 "data/maps/MauvilleCity_House2/scripts.pory"
	setflag FLAG_ACRO_BIKE
# 22 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_EventScript_Woman_Text_2
	goto MauvilleCity_House2_EventScript_Woman_4


MauvilleCity_House2_EventScript_Woman_Text_0:
# 16 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "I wonder where the thugs ran off to.$"

MauvilleCity_House2_EventScript_Woman_Text_1:
# 19 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh you're the one that kicked the thugs\n"
	.string "out of here. Please take this!$"

MauvilleCity_House2_EventScript_Woman_Text_2:
# 22 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "The ACRO BIKE can be used to reach new\n"
	.string "places around the region.$"
