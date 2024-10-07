DarkCave_GF_Dessert_MapScripts::
	.byte 0


DarkCave_Steven_Encounter::
	lockall
	faceplayer
	msgbox DarkCave_Steven_Encounter_Text_0
	releaseall
	return


DarkCave_B2F_AceTrainer::
	trainerbattle_single TRAINER_DARKCAVE_ACE, Ace_Intro, Ace_Outro, Increase_Trainers_Beaten
	msgbox Ace_PostBattle, MSGBOX_AUTOCLOSE
	end


DarkCave_B1F_EventScript_RockInsence::
	finditem ITEM_ROCK_INCENSE
	return


DarkCave_DepletedBlueStone::
	lockall
	msgbox DarkCave_DepletedBlueStone_Text_0
	releaseall
	return


DarkCave_Steven_Encounter_Text_0:
	.string "Come back in a future update$"

DarkCave_DepletedBlueStone_Text_0:
	.string "It's been depleted$"

Ace_Intro::
	.string "People used to make lots of money\n"
	.string "selling the blue stones found in this\l"
	.string "cave.$"

Ace_Outro::
	.string "If I had more money I would be able to\n"
	.string "buy what I need to beat you$"

Ace_PostBattle::
	.string "I'm hoping to go deep into the caves to\n"
	.string "find some stones that haven't been\l"
	.string "mined$"
