Route7_MapScripts::
	.byte 0


Route7_TrainerBattle_Mai::
# 4 "data/maps/Route7/scripts.pory"
	trainerbattle_single ROUTE7_MAI, Route7_Mai_Intro, Route7_Mai_Outro, Increase_Trainers_Beaten
# 5 "data/maps/Route7/scripts.pory"
	msgbox Route7_Mai_Postbattle, MSGBOX_AUTOCLOSE
	return


Route7_CoolTrainer_Sean::
# 9 "data/maps/Route7/scripts.pory"
	trainerbattle_single ROUTE7_SEAN, Route7_Sean_Intro, Route7_Sean_Outro, Increase_Trainers_Beaten
# 10 "data/maps/Route7/scripts.pory"
	msgbox Route7_Sean_Postbattle, MSGBOX_AUTOCLOSE
	return


Route7_HappyDad::
# 14 "data/maps/Route7/scripts.pory"
	trainerbattle_single ROUTE7_HAPPYDAD, Route7_HappyDad_Intro, Route7_HappyDad_Outro, Increase_Trainers_Beaten
# 15 "data/maps/Route7/scripts.pory"
	msgbox Route7_HappyDad_Postbattle, MSGBOX_AUTOCLOSE
	return


Route7_Mai_Intro::
# 24 "data/maps/Route7/scripts.pory"
	.string "I spent ages trying to get this special\n"
	.string "Altaria.$"

Route7_Mai_Outro::
# 28 "data/maps/Route7/scripts.pory"
	.string "I still have to finish training it.$"

Route7_Mai_Postbattle::
# 32 "data/maps/Route7/scripts.pory"
	.string "4 weeks and they lost their first\n"
	.string "fight...$"

Route7_Sean_Intro::
# 36 "data/maps/Route7/scripts.pory"
	.string "This is my private berry patch, I use it\n"
	.string "to grow the rarest of berries.$"

Route7_Sean_Outro::
# 40 "data/maps/Route7/scripts.pory"
	.string "That never happens.$"

Route7_Sean_Postbattle::
# 44 "data/maps/Route7/scripts.pory"
	.string "Fine, you can use these berry patches.\n"
	.string "Just don't tell anyone you beat me.$"

Route7_HappyDad_Intro::
# 48 "data/maps/Route7/scripts.pory"
	.string "$"

Route7_HappyDad_Outro::
# 52 "data/maps/Route7/scripts.pory"
	.string "$"

Route7_HappyDad_Postbattle::
# 56 "data/maps/Route7/scripts.pory"
	.string "$"
