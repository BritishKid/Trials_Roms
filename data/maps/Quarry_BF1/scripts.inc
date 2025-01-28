Quarry_BF1_MapScripts::
	.byte 0


QuarryWorker_Stuck1::
# 6 "data/maps/Quarry_BF1/scripts.pory"
	lockall
# 7 "data/maps/Quarry_BF1/scripts.pory"
	goto_if_set FLAG_HIDE_QUARRY_WORKERS, QuarryWorker_Stuck1_2
# 10 "data/maps/Quarry_BF1/scripts.pory"
	trainerbattle_single TRAINER_QUARRYWORKER_STUCK1, QuarryWorker_Stuck1_Intro, QuarryWorker_Stuck1_Outro, Increase_Trainers_Beaten
# 11 "data/maps/Quarry_BF1/scripts.pory"
	msgbox QuarryWorker_Stuck1_PostBattle, MSGBOX_AUTOCLOSE
QuarryWorker_Stuck1_1:
# 13 "data/maps/Quarry_BF1/scripts.pory"
	releaseall
	return

QuarryWorker_Stuck1_2:
# 8 "data/maps/Quarry_BF1/scripts.pory"
	msgbox QuarryWorker_Stuck1_Text_0
	goto QuarryWorker_Stuck1_1


QuarryWorker_Stuck1_Text_0:
# 8 "data/maps/Quarry_BF1/scripts.pory"
	.string "Is it safe? I had to dive out the way\n"
	.string "when a giant Pokémon came burrowing\l"
	.string "through$"

QuarryWorker_Stuck1_Intro::
# 18 "data/maps/Quarry_BF1/scripts.pory"
	.string "I heard you managed to take out that\n"
	.string "massive Pokémon! My word you must be\l"
	.string "strong$"

QuarryWorker_Stuck1_Outro::
# 22 "data/maps/Quarry_BF1/scripts.pory"
	.string "You really are awesome!$"

QuarryWorker_Stuck1_PostBattle::
# 26 "data/maps/Quarry_BF1/scripts.pory"
	.string "Have you spoken to the boss? I'm sure\n"
	.string "he could reward you for getting the\l"
	.string "quarry up again$"
