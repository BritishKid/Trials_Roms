DeeperQuarryGF_1_MapScripts::
	.byte 0


Quarry_Worker1::
# 4 "data/maps/DeeperQuarryGF_1/scripts.pory"
	trainerbattle_single QUARRY_WORKER1, Quarry_Worker1_Intro, Quarry_Worker1_Outro, Increase_Trainers_Beaten
# 5 "data/maps/DeeperQuarryGF_1/scripts.pory"
	msgbox Quarry_Worker1_Postbattle, MSGBOX_AUTOCLOSE
# 6 "data/maps/DeeperQuarryGF_1/scripts.pory"
	release
	return


Quarry_Worker2::
# 10 "data/maps/DeeperQuarryGF_1/scripts.pory"
	trainerbattle_single QUARRY_WORKER2, Quarry_Worker2_Intro, Quarry_Worker2_Outro, Increase_Trainers_Beaten
# 11 "data/maps/DeeperQuarryGF_1/scripts.pory"
	msgbox Quarry_Worker2_Postbattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/DeeperQuarryGF_1/scripts.pory"
	release
	return


StevePlaceholder::
# 16 "data/maps/DeeperQuarryGF_1/scripts.pory"
	trainerbattle_single QUARRY_FISHERMAN, Quarry_Fisherman_Intro, Quarry_Fisherman_Outro, Increase_Trainers_Beaten
# 17 "data/maps/DeeperQuarryGF_1/scripts.pory"
	msgbox Quarry_Fisherman_Postbattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/DeeperQuarryGF_1/scripts.pory"
	release
	return


ItemBall_Secret_Area::
# 22 "data/maps/DeeperQuarryGF_1/scripts.pory"
	finditem ITEM_TM47
	return


ItemBall_QuarryDeeper1f_Ball1::
# 26 "data/maps/DeeperQuarryGF_1/scripts.pory"
	finditem ITEM_KINGS_ROCK
	return


Trigger_OfSteelix::
# 30 "data/maps/DeeperQuarryGF_1/scripts.pory"
	lockall
# 31 "data/maps/DeeperQuarryGF_1/scripts.pory"
	setvar VAR_0x8004, 1
# 32 "data/maps/DeeperQuarryGF_1/scripts.pory"
	setvar VAR_0x8005, 1
# 33 "data/maps/DeeperQuarryGF_1/scripts.pory"
	setvar VAR_0x8006, 8
# 34 "data/maps/DeeperQuarryGF_1/scripts.pory"
	setvar VAR_0x8007, 0
# 35 "data/maps/DeeperQuarryGF_1/scripts.pory"
	special ShakeCamera
# 36 "data/maps/DeeperQuarryGF_1/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
# 37 "data/maps/DeeperQuarryGF_1/scripts.pory"
	setvar VAR_QUARRY_STATE, 2
# 38 "data/maps/DeeperQuarryGF_1/scripts.pory"
	releaseall
	return


Quarry_Worker1_Intro::
# 42 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "It's great to get back to work, but I\n"
	.string "can have a break and beat you$"

Quarry_Worker1_Outro::
# 46 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "Not the best way to spend a break$"

Quarry_Worker1_Postbattle::
# 50 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "This quarry gets shut down often due\n"
	.string "to wild Pokémon$"

Quarry_Worker2_Intro::
# 54 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "I've lost my helmet, it should be nearby!$"

Quarry_Worker2_Outro::
# 58 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "I guess I won't be quitting my day job$"

Quarry_Worker2_Postbattle::
# 62 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "I'm a good miner, but a rubbish trainer$"

Quarry_Fisherman_Intro::
# 66 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "So many cool fish Poekmon can be found\n"
	.string "in caves$"

Quarry_Fisherman_Outro::
# 70 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "This is why I need to find stronger\n"
	.string "Pokémon$"

Quarry_Fisherman_Postbattle::
# 74 "data/maps/DeeperQuarryGF_1/scripts.pory"
	.string "I might be lost I can't find any water$"
