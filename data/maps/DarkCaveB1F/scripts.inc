DarkCaveB1F_MapScripts::
	.byte 0


DarkCaveB1F_TrainerBattle_Scientist::
# 5 "data/maps/DarkCaveB1F/scripts.pory"
	trainerbattle_single DARKCAVEB1F_SCIENTIST, DarkCaveB1F_Scientist_Intro, DarkCaveB1F_Scientist_Outro, Increase_Trainers_Beaten
# 6 "data/maps/DarkCaveB1F/scripts.pory"
	msgbox DarkCaveB1F_Scientist_PostBattle, MSGBOX_AUTOCLOSE
	return


DarkCaveB1F_TrainerBattle_CoolTrainer::
# 10 "data/maps/DarkCaveB1F/scripts.pory"
	trainerbattle_single DARKCAVEB1F_COOLTRAINER, DarkCaveB1F_CoolTrainer_Intro, DarkCaveB1F_CoolTrainer_Outro, Increase_Trainers_Beaten
# 11 "data/maps/DarkCaveB1F/scripts.pory"
	msgbox DarkCaveB1F_CoolTrainer_PostBattle, MSGBOX_AUTOCLOSE
	return


Route120_EventScript_Jennifer::
# 15 "data/maps/DarkCaveB1F/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 16 "data/maps/DarkCaveB1F/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	return


DarkCaveB1F_Scientist_Intro::
# 20 "data/maps/DarkCaveB1F/scripts.pory"
	.string "I've been hearing about powerful\n"
	.string "Pokémon somewhere nearby.$"

DarkCaveB1F_Scientist_Outro::
# 24 "data/maps/DarkCaveB1F/scripts.pory"
	.string "Maybe I should reserach you instead of\n"
	.string "Pokémon.$"

DarkCaveB1F_Scientist_PostBattle::
# 28 "data/maps/DarkCaveB1F/scripts.pory"
	.string "The strongest Pokémon are always the\n"
	.string "hardest to find.$"

DarkCaveB1F_CoolTrainer_Intro::
# 32 "data/maps/DarkCaveB1F/scripts.pory"
	.string "My Pokémon is the strongest.$"

DarkCaveB1F_CoolTrainer_Outro::
# 36 "data/maps/DarkCaveB1F/scripts.pory"
	.string "You used more than one Pokémon, that's\n"
	.string "not fair.$"

DarkCaveB1F_CoolTrainer_PostBattle::
# 40 "data/maps/DarkCaveB1F/scripts.pory"
	.string "Must get stronger...$"
