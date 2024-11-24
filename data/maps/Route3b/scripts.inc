Route3b_MapScripts::
	.byte 0


Rotue3b_TrainerBattle_LassAlex::
# 4 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3LASSALEX, LassAlex_Intro, LassAlex_Outro, Increase_Trainers_Beaten
# 5 "data/maps/Route3b/scripts.pory"
	msgbox LassAlex_PostBattle, MSGBOX_AUTOCLOSE
	return


Route3b_TrainerBattle_FishermanNeet::
# 9 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_FISHERMAN_NEET, FishermanNeet_Intro, FishermanNeet_Outro, Increase_Trainers_Beaten
# 10 "data/maps/Route3b/scripts.pory"
	msgbox FishermanNeet_Postbattle, MSGBOX_AUTOCLOSE
	return


Route3b_TrainerBattle_CamperDave::
# 14 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_CAMPER_DAVE, CamperDave_Intro, CamperDave_Outro, Increase_Trainers_Beaten
# 15 "data/maps/Route3b/scripts.pory"
	msgbox CamperDave_Postbattle, MSGBOX_AUTOCLOSE
	return


Route3b_TrainerBattle_Rose::
# 19 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_ROSE, Rose_Intro, Rose_Outro, Increase_Trainers_Beaten
# 20 "data/maps/Route3b/scripts.pory"
	msgbox Rose_Postbattle, MSGBOX_AUTOCLOSE
	return


Route3b_TrainerBattle_Lily::
# 24 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_LILY, Lily_Intro, Lily_Outro, Increase_Trainers_Beaten
# 25 "data/maps/Route3b/scripts.pory"
	msgbox Lily_Postbattle, MSGBOX_AUTOCLOSE
	return


LassAlex_Intro::
# 31 "data/maps/Route3b/scripts.pory"
	.string "Hey there! I'm Lass Alex, braving the\n"
	.string "heights for a mountainous Pokémon\l"
	.string "battle. Ready to take on the challenge?$"

LassAlex_Outro::
# 35 "data/maps/Route3b/scripts.pory"
	.string "Wow, you really conquered the summit of\n"
	.string "this battle! Your skills shine like the\l"
	.string "mountain peak. Keep that determination\l"
	.string "on your journey!$"

LassAlex_PostBattle::
# 39 "data/maps/Route3b/scripts.pory"
	.string "Fantastic battle! If you ever want to\n"
	.string "climb to new heights in Pokémon battles\l"
	.string "or just chat, find me along your\l"
	.string "mountainous journey.$"

FishermanNeet_Intro::
# 43 "data/maps/Route3b/scripts.pory"
	.string "I'm going to go and catch a Totodile.$"

FishermanNeet_Outro::
# 47 "data/maps/Route3b/scripts.pory"
	.string "Now I have to go to Clay Haven on the\n"
	.string "way$"

FishermanNeet_Postbattle::
# 51 "data/maps/Route3b/scripts.pory"
	.string "Totodile Island is meant to be on Route\n"
	.string "1.$"

CamperDave_Intro::
# 55 "data/maps/Route3b/scripts.pory"
	.string "It's a long way down!$"

CamperDave_Outro::
# 59 "data/maps/Route3b/scripts.pory"
	.string "I was distracted by the drop.$"

CamperDave_Postbattle::
# 63 "data/maps/Route3b/scripts.pory"
	.string "Imagine flying through the valley.$"

Rose_Intro::
# 67 "data/maps/Route3b/scripts.pory"
	.string "My sister told she found rare Pokemon\n"
	.string "here.$"

Rose_Outro::
# 71 "data/maps/Route3b/scripts.pory"
	.string "She is probably just confused.$"

Rose_Postbattle::
# 75 "data/maps/Route3b/scripts.pory"
	.string "I'm never going to find it...$"

Lily_Intro::
# 79 "data/maps/Route3b/scripts.pory"
	.string "Did you see Bulbsaur anywhere?$"

Lily_Outro::
# 83 "data/maps/Route3b/scripts.pory"
	.string "They must be close.$"

Lily_Postbattle::
# 87 "data/maps/Route3b/scripts.pory"
	.string "I caught one here years ago, but it's\n"
	.string "changed so much.$"
