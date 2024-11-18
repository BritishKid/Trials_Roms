Route3b_MapScripts::
	.byte 0


Rotue3b_TrainerBattle_LassAlex::
# 5 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3LASSALEX, LassAlex_Intro, LassAlex_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Route3b/scripts.pory"
	msgbox LassAlex_PostBattle, MSGBOX_AUTOCLOSE
	return


LassAlex_Intro::
# 14 "data/maps/Route3b/scripts.pory"
	.string "Hey there! I'm Lass Alex, braving the\n"
	.string "heights for a mountainous Pokémon\l"
	.string "battle. Ready to take on the challenge?$"

LassAlex_Outro::
# 18 "data/maps/Route3b/scripts.pory"
	.string "Wow, you really conquered the summit of\n"
	.string "this battle! Your skills shine like the\l"
	.string "mountain peak. Keep that determination\l"
	.string "on your journey!$"

LassAlex_PostBattle::
# 22 "data/maps/Route3b/scripts.pory"
	.string "Fantastic battle! If you ever want to\n"
	.string "climb to new heights in Pokémon battles\l"
	.string "or just chat, find me along your\l"
	.string "mountainous journey.$"
