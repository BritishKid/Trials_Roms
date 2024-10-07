DeeperQuarryGF_1_MapScripts::
	.byte 0


Quarry_Worker1::
	trainerbattle_single QUARRY_WORKER1, Quarry_Worker1_Intro, Quarry_Worker1_Outro, Increase_Trainers_Beaten
	msgbox Quarry_Worker1_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


Quarry_Worker2::
	trainerbattle_single QUARRY_WORKER2, Quarry_Worker2_Intro, Quarry_Worker2_Outro, Increase_Trainers_Beaten
	msgbox Quarry_Worker2_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


StevePlaceholder::
	trainerbattle_single QUARRY_FISHERMAN, Quarry_Fisherman_Intro, Quarry_Fisherman_Outro, Increase_Trainers_Beaten
	msgbox Quarry_Fisherman_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


ItemBall_Secret_Area::
	finditem ITEM_TM47
	return


ItemBall_QuarryDeeper1f_Ball1::
	finditem ITEM_KINGS_ROCK
	return


Trigger_OfSteelix::
	lockall
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 0
	special ShakeCamera
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
	setvar VAR_QUARRY_STATE, 2
	releaseall
	return


Quarry_Worker1_Intro::
	.string "It's great to get back to work, but I\n"
	.string "can have a break and beat you$"

Quarry_Worker1_Outro::
	.string "Not the best way to spend a break$"

Quarry_Worker1_Postbattle::
	.string "This quarry gets shut down often due\n"
	.string "to wild Pokémon$"

Quarry_Worker2_Intro::
	.string "I've lost my helmet, it should be nearby!$"

Quarry_Worker2_Outro::
	.string "I guess I won't be quitting my day job$"

Quarry_Worker2_Postbattle::
	.string "I'm a good miner, but a rubbish trainer$"

Quarry_Fisherman_Intro::
	.string "So many cool fish Poekmon can be found\n"
	.string "in caves$"

Quarry_Fisherman_Outro::
	.string "This is why I need to find stronger\n"
	.string "Pokémon$"

Quarry_Fisherman_Postbattle::
	.string "I might be lost I can't find any water$"
