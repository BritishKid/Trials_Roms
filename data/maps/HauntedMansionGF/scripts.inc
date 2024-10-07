HauntedMansionGF_MapScripts::
	.byte 0


HauntedMansion_RotomEncounter::
# 5 "data/maps/HauntedMansionGF/scripts.pory"
	lockall
# 6 "data/maps/HauntedMansionGF/scripts.pory"
	setwildbattle SPECIES_ROTOM, 25
# 7 "data/maps/HauntedMansionGF/scripts.pory"
	dowildbattle
# 8 "data/maps/HauntedMansionGF/scripts.pory"
	releaseall
	return


HauntedHouse_FirstSwitch::
# 12 "data/maps/HauntedMansionGF/scripts.pory"
	lockall
# 13 "data/maps/HauntedMansionGF/scripts.pory"
	msgbox HauntedHouse_FirstSwitch_Text_0, MSGBOX_YESNO
# 14 "data/maps/HauntedMansionGF/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HauntedHouse_FirstSwitch_2
HauntedHouse_FirstSwitch_1:
# 18 "data/maps/HauntedMansionGF/scripts.pory"
	releaseall
	return

HauntedHouse_FirstSwitch_2:
# 15 "data/maps/HauntedMansionGF/scripts.pory"
	msgbox HauntedHouse_FirstSwitch_Text_1
	goto HauntedHouse_FirstSwitch_1


HauntedHouse_FirstSwitch_Text_0:
# 13 "data/maps/HauntedMansionGF/scripts.pory"
	.string "You find a switch behind the poster.\n"
	.string "Press it?$"

HauntedHouse_FirstSwitch_Text_1:
# 15 "data/maps/HauntedMansionGF/scripts.pory"
	.string "You press the switch$"
