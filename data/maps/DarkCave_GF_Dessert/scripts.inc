DarkCave_GF_Dessert_MapScripts::
	.byte 0


DarkCave_Steven_Encounter::
# 6 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	lockall
# 7 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	faceplayer
# 8 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	msgbox DarkCave_Steven_Encounter_Text_0
# 9 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	releaseall
	return


DarkCave_B2F_AceTrainer::
# 16 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	trainerbattle_single TRAINER_DARKCAVE_ACE, Ace_Intro, Ace_Outro, Increase_Trainers_Beaten
# 17 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	msgbox Ace_PostBattle, MSGBOX_AUTOCLOSE
	end


DarkCave_B1F_EventScript_RockInsence::
# 22 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	finditem ITEM_ROCK_INCENSE
	return


DarkCave_DepletedBlueStone::
# 42 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	lockall
# 43 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	msgbox DarkCave_DepletedBlueStone_Text_0
# 44 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	releaseall
	return


DarkCave_Steven_Encounter_Text_0:
# 8 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	.string "Come back in a future update$"

DarkCave_DepletedBlueStone_Text_0:
# 43 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	.string "It's been depleted$"

Ace_Intro::
# 28 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	.string "People used to make lots of money\n"
	.string "selling the blue stones found in this\l"
	.string "cave.$"

Ace_Outro::
# 32 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	.string "If I had more money I would be able to\n"
	.string "buy what I need to beat you$"

Ace_PostBattle::
# 36 "data/maps/DarkCave_GF_Dessert/scripts.pory"
	.string "I'm hoping to go deep into the caves to\n"
	.string "find some stones that haven't been\l"
	.string "mined$"
