Route4b_MapScripts::
	.byte 0


Route4b_TrainerBattle_Lando::
# 5 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_LANDO, Lando_Intro, Lando_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Route4b/scripts.pory"
	msgbox Lando_Postbattle, MSGBOX_DEFAULT
	return


Lando_Intro::
# 12 "data/maps/Route4b/scripts.pory"
	.string "You came to the wrong hill!$"

Lando_Outro::
# 16 "data/maps/Route4b/scripts.pory"
	.string "You can have this hill.$"

Lando_Postbattle::
# 20 "data/maps/Route4b/scripts.pory"
	.string "I'm leaving, I'm leaving.$"
