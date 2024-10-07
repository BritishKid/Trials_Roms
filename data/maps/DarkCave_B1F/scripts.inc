DarkCave_B1F_MapScripts::
	.byte 0


DarkCave_B1F_Hiker1::
	trainerbattle_single TRAINER_DARKCAVE_HIKER1, Hiker1_Intro, Hiker1_Outro, Increase_Trainers_Beaten
	msgbox Hiker1_PostBattle, MSGBOX_AUTOCLOSE
	end


DarkCave_B1F_Hiker2::
	trainerbattle_single TRAINER_DARKCAVE_HIKER2, Hiker2_Intro, Hiker2_Outro, Increase_Trainers_Beaten
	msgbox Hiker2_PostBattle, MSGBOX_AUTOCLOSE
	end


DarkCave_B1F_EventScript_ItemPPMax::
	finditem ITEM_PP_MAX
	return


DarkCave_B1F_EventScript_TM05::
	finditem ITEM_TM05
	return


Hiker1_Intro::
	.string "It's so dark in here!$"

Hiker1_Outro::
	.string "It's easy to win when I can't see whats\n"
	.string "happening$"

Hiker1_PostBattle::
	.string "I should of brought flash$"

Hiker2_Intro::
	.string "I had to turn back to Ember Dunes, I\n"
	.string "don't have an Acro Bike$"

Hiker2_Outro::
	.string "Good thing I brought lots of water.$"

Hiker2_PostBattle::
	.string "I wanted to get Rock Smash from the\n"
	.string "master in Hemlock$"
