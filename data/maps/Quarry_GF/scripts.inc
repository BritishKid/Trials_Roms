Quarry_GF_MapScripts::
	.byte 0


Quarry_TrainerBattle_Worker1::
# 4 "data/maps/Quarry_GF/scripts.pory"
	trainerbattle_single QUARRY_WORKER1, Quarry_Worker1_Intro, Quarry_Worker1_Outro, Increase_Trainers_Beaten
# 5 "data/maps/Quarry_GF/scripts.pory"
	msgbox Quarry_Worker1_PostBattle, MSGBOX_AUTOCLOSE
# 6 "data/maps/Quarry_GF/scripts.pory"
	releaseall
	return


Quarry_TrainerBattle_Worker2::
# 10 "data/maps/Quarry_GF/scripts.pory"
	trainerbattle_single QUARRY_WORKER2, Quarry_Worker2_Intro, Quarry_Worker2_Outro, Increase_Trainers_Beaten
# 11 "data/maps/Quarry_GF/scripts.pory"
	msgbox Quarry_Worker2_PostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/Quarry_GF/scripts.pory"
	releaseall
	return


Quarry_TrainerBattle_Fisherman::
# 16 "data/maps/Quarry_GF/scripts.pory"
	trainerbattle_single QUARRY_FISHERMAN, Quarry_Fisherman_Intro, Quarry_Fisherman_Outro, Increase_Trainers_Beaten
# 17 "data/maps/Quarry_GF/scripts.pory"
	msgbox Quarry_Fisherman_PostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Quarry_GF/scripts.pory"
	releaseall
	return


Quarry_Trigger_SteelixSounds::
# 22 "data/maps/Quarry_GF/scripts.pory"
	lockall
# 23 "data/maps/Quarry_GF/scripts.pory"
	setvar VAR_0x8004, 1
# 24 "data/maps/Quarry_GF/scripts.pory"
	setvar VAR_0x8005, 1
# 25 "data/maps/Quarry_GF/scripts.pory"
	setvar VAR_0x8006, 8
# 26 "data/maps/Quarry_GF/scripts.pory"
	setvar VAR_0x8007, 0
# 27 "data/maps/Quarry_GF/scripts.pory"
	special ShakeCamera
# 28 "data/maps/Quarry_GF/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
# 29 "data/maps/Quarry_GF/scripts.pory"
	setvar VAR_QUARRY_STATE, 2
# 30 "data/maps/Quarry_GF/scripts.pory"
	releaseall
	return


Quarry_Worker1_Intro::
# 35 "data/maps/Quarry_GF/scripts.pory"
	.string "It's great to get back to work, but I\n"
	.string "can have a break and beat you at a\l"
	.string "battle.$"

Quarry_Worker1_Outro::
# 39 "data/maps/Quarry_GF/scripts.pory"
	.string "Not the best way to spend a break.$"

Quarry_Worker1_PostBattle::
# 43 "data/maps/Quarry_GF/scripts.pory"
	.string "This quarry gets shut down so often\n"
	.string "due to wild Pokemon$"

Quarry_Worker2_Intro::
# 47 "data/maps/Quarry_GF/scripts.pory"
	.string "I've lost my helmet, it should be nearby!$"

Quarry_Worker2_Outro::
# 51 "data/maps/Quarry_GF/scripts.pory"
	.string "Even my helmet wouldn't have protected\n"
	.string "me from that.$"

Quarry_Worker2_PostBattle::
# 55 "data/maps/Quarry_GF/scripts.pory"
	.string "I'll have to get another one from the\n"
	.string "storehouse.$"

Quarry_Fisherman_Intro::
# 59 "data/maps/Quarry_GF/scripts.pory"
	.string "So many unique fish Pokemon can only be\n"
	.string "found in caves.$"

Quarry_Fisherman_Outro::
# 63 "data/maps/Quarry_GF/scripts.pory"
	.string "This is why I'm here looking for new\n"
	.string "Pokemon.$"

Quarry_Fisherman_PostBattle::
# 67 "data/maps/Quarry_GF/scripts.pory"
	.string "I might be lost, I can't find any water.$"
