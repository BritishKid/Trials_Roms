Route4_MapScripts::
	.byte 0


Route4_TrainerBattle_Jakobi::
# 5 "data/maps/Route4/scripts.pory"
	trainerbattle_single ROUTE4_COOLTRAINER_JAKOBI, Jakobi_Intro, Jakobi_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Route4/scripts.pory"
	msgbox Jakobi_Postbattle, MSGBOX_DEFAULT
	end


Route4_TrainerBattle_ToughBug::
# 11 "data/maps/Route4/scripts.pory"
	trainerbattle_single ROUTE4_BUGCATCHER, Route4Bug_Intro, Route4Bug_Outro, Increase_Trainers_Beaten
# 12 "data/maps/Route4/scripts.pory"
	msgbox Route4Bug_Postbattle, MSGBOX_DEFAULT
	end


Jakobi_Intro::
# 18 "data/maps/Route4/scripts.pory"
	.string "Should never came here pal.$"

Jakobi_Outro::
# 22 "data/maps/Route4/scripts.pory"
	.string "How could i lose these Pokemon were so\n"
	.string "expensive.$"

Jakobi_Postbattle::
# 26 "data/maps/Route4/scripts.pory"
	.string "How much did your Pokemon Cost?$"

Route4Bug_Intro::
# 30 "data/maps/Route4/scripts.pory"
	.string "I love feeding powerful berries to my\n"
	.string "bug Pokemon$"

Route4Bug_Outro::
# 34 "data/maps/Route4/scripts.pory"
	.string "Fine then I will share the berries.$"

Route4Bug_Postbattle::
# 38 "data/maps/Route4/scripts.pory"
	.string "Make good use of it.$"
