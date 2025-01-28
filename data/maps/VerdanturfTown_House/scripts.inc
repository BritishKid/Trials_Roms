VerdanturfTown_House_MapScripts::
	.byte 0


VerdanturfTown_EventScript_CraftingTable::
# 6 "data/maps/VerdanturfTown_House/scripts.pory"
	lockall
# 7 "data/maps/VerdanturfTown_House/scripts.pory"
	call CraftTutorial_EventScript_Table
# 8 "data/maps/VerdanturfTown_House/scripts.pory"
	releaseall
	return


VerdanturfTownHouse_EventScript_OldWoman::
# 13 "data/maps/VerdanturfTown_House/scripts.pory"
	lockall
# 14 "data/maps/VerdanturfTown_House/scripts.pory"
	checkitem ITEM_DOWSING_MACHINE
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VerdanturfTownHouse_EventScript_OldWoman_2
# 19 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTownHouse_EventScript_OldWoman_Text_1
# 20 "data/maps/VerdanturfTown_House/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 21 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTownHouse_EventScript_OldWoman_Text_2
VerdanturfTownHouse_EventScript_OldWoman_1:
# 23 "data/maps/VerdanturfTown_House/scripts.pory"
	releaseall
	return

VerdanturfTownHouse_EventScript_OldWoman_2:
# 16 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTownHouse_EventScript_OldWoman_Text_0
	goto VerdanturfTownHouse_EventScript_OldWoman_1


VerdanturfTownHouse_EventScript_OldWoman_Text_0:
# 16 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Have you found anything out there?$"

VerdanturfTownHouse_EventScript_OldWoman_Text_1:
# 19 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "I used to pick up lots of litter dropped\n"
	.string "by other trainers but as I've got old I\l"
	.string "can't travel so far. My young trainer\l"
	.string "why don't you take this and keep up my\l"
	.string "good work.$"

VerdanturfTownHouse_EventScript_OldWoman_Text_2:
# 21 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "You'll be surprised at what you can\n"
	.string "find.$"
