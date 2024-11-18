Route3_MapScripts::
	.byte 0


Route3_TrainerBattle_Genki::
# 4 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_GENKI, Route2_Genki_Intro, Route2_Genki_Outro, Increase_Trainers_Beaten
# 5 "data/maps/Route3/scripts.pory"
	msgbox PostBattle_Route2_Genki, MSGBOX_AUTOCLOSE
	return


Route3_TrainerBattle_HikerMark::
# 9 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_HIKERMARK, Route3_HikerIntro, Route3_HikerOutro, Increase_Trainers_Beaten
# 10 "data/maps/Route3/scripts.pory"
	msgbox Route3_HikerPostbattle, MSGBOX_DEFAULT
	return


Route2_Genki_Intro::
# 14 "data/maps/Route3/scripts.pory"
	.string "Let's have a quackin' good time!.$"

Route2_Genki_Outro::
# 18 "data/maps/Route3/scripts.pory"
	.string "Ducks ducks.$"

PostBattle_Route2_Genki::
# 22 "data/maps/Route3/scripts.pory"
	.string "I'll have to go get more ducks.$"

Route3_HikerIntro::
# 26 "data/maps/Route3/scripts.pory"
	.string "I thought my Rock Pokemon would have\n"
	.string "made the gym easy, but it was still\l"
	.string "tough.$"

Route3_HikerOutro::
# 30 "data/maps/Route3/scripts.pory"
	.string "You probably had no issue with the gym.$"

Route3_HikerPostbattle::
# 34 "data/maps/Route3/scripts.pory"
	.string "From what I've been told I'll struggle\n"
	.string "alot with the gym near Coral Port.$"
