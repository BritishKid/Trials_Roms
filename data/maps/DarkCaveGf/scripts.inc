DarkCaveGf_MapScripts::
	.byte 0


DarkCaveGF_TrainerToWarnDirection::
# 4 "data/maps/DarkCaveGf/scripts.pory"
	trainerbattle_single TRAINER_DARKCAVEGF_WARNINGTRAINER, Darren_Intro, Darren_Outro
# 5 "data/maps/DarkCaveGf/scripts.pory"
	msgbox Darren_PostBattle, MSGBOX_AUTOCLOSE
	end


Darren_Intro::
# 11 "data/maps/DarkCaveGf/scripts.pory"
	.string "I need to get an ACRO BIKE cause\n"
	.string "without it I keep running into deads\l"
	.string "ends$"

Darren_Outro::
# 15 "data/maps/DarkCaveGf/scripts.pory"
	.string "Even getting lost didn't help my\n"
	.string "Pokémon grow enough.$"

Darren_PostBattle::
# 19 "data/maps/DarkCaveGf/scripts.pory"
	.string "You can use an ACRO BIKE to hop over\n"
	.string "that railing to the right, that must be\l"
	.string "the way through.$"
