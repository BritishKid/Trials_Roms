EmberfallTown_House_MapScripts::
	.byte 0


EmberfallTown_EventScript_CraftingTable::
# 6 "data/maps/EmberfallTown_House/scripts.pory"
	lockall
# 7 "data/maps/EmberfallTown_House/scripts.pory"
	call CraftTutorial_EventScript_Table
# 8 "data/maps/EmberfallTown_House/scripts.pory"
	releaseall
	return


EmberfallTownHouse_EventScript_OldWoman::
# 13 "data/maps/EmberfallTown_House/scripts.pory"
	lockall
# 14 "data/maps/EmberfallTown_House/scripts.pory"
	checkitem ITEM_DOWSING_MACHINE
# 15 "data/maps/EmberfallTown_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EmberfallTownHouse_EventScript_OldWoman_2
# 19 "data/maps/EmberfallTown_House/scripts.pory"
	msgbox EmberfallTownHouse_EventScript_OldWoman_Text_1
# 20 "data/maps/EmberfallTown_House/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 21 "data/maps/EmberfallTown_House/scripts.pory"
	msgbox EmberfallTownHouse_EventScript_OldWoman_Text_2
EmberfallTownHouse_EventScript_OldWoman_1:
# 23 "data/maps/EmberfallTown_House/scripts.pory"
	releaseall
	return

EmberfallTownHouse_EventScript_OldWoman_2:
# 16 "data/maps/EmberfallTown_House/scripts.pory"
	msgbox EmberfallTownHouse_EventScript_OldWoman_Text_0
	goto EmberfallTownHouse_EventScript_OldWoman_1


EmberfallTownHouse_EventScript_OldWoman_Text_0:
# 16 "data/maps/EmberfallTown_House/scripts.pory"
	.string "Have you found anything out there?$"

EmberfallTownHouse_EventScript_OldWoman_Text_1:
# 19 "data/maps/EmberfallTown_House/scripts.pory"
	.string "I used to pick up lots of litter dropped\n"
	.string "by other trainers but as I've got old I\l"
	.string "can't travel so far. My young trainer\l"
	.string "why don't you take this and keep up my\l"
	.string "good work.$"

EmberfallTownHouse_EventScript_OldWoman_Text_2:
# 21 "data/maps/EmberfallTown_House/scripts.pory"
	.string "You'll be surprised at what you can\n"
	.string "find.$"
