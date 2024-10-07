HauntedMansionGF_MapScripts::
	.byte 0


HauntedMansion_RotomEncounter::
	lockall
	setwildbattle SPECIES_ROTOM, 25
	dowildbattle
	releaseall
	return


HauntedHouse_FirstSwitch::
	lockall
	msgbox HauntedHouse_FirstSwitch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq HauntedHouse_FirstSwitch_2
HauntedHouse_FirstSwitch_1:
	releaseall
	return

HauntedHouse_FirstSwitch_2:
	msgbox HauntedHouse_FirstSwitch_Text_1
	goto HauntedHouse_FirstSwitch_1


HauntedHouse_FirstSwitch_Text_0:
	.string "You find a switch behind the poster.\n"
	.string "Press it?$"

HauntedHouse_FirstSwitch_Text_1:
	.string "You press the switch$"
