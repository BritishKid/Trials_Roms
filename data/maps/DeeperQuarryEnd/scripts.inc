DeeperQuarryEnd_MapScripts::
	.byte 0


Steelix_Encounter_Quarry::
# 5 "data/maps/DeeperQuarryEnd/scripts.pory"
	lockall
# 6 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox Steelix_Encounter_Quarry_Text_0
# 7 "data/maps/DeeperQuarryEnd/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
# 8 "data/maps/DeeperQuarryEnd/scripts.pory"
	call GiantSteelixEncounter
# 9 "data/maps/DeeperQuarryEnd/scripts.pory"
	call FallenWorkerComesIn
# 10 "data/maps/DeeperQuarryEnd/scripts.pory"
	call MegaSteelixEncounter_Quarry
# 11 "data/maps/DeeperQuarryEnd/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 12 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox Steelix_Encounter_Quarry_Text_1
# 13 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox Steelix_Encounter_Quarry_Text_2
# 14 "data/maps/DeeperQuarryEnd/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 15 "data/maps/DeeperQuarryEnd/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/DeeperQuarryEnd/scripts.pory"
	setvar VAR_QUARRY_STATE, 3
# 17 "data/maps/DeeperQuarryEnd/scripts.pory"
	setflag FLAG_HIDE_STEELIX
# 18 "data/maps/DeeperQuarryEnd/scripts.pory"
	releaseall
	return


FallenWorker_Injured::
# 22 "data/maps/DeeperQuarryEnd/scripts.pory"
	lockall
# 23 "data/maps/DeeperQuarryEnd/scripts.pory"
	goto_if_unset FLAG_HIDE_STEELIX, FallenWorker_Injured_2
# 26 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox FallenWorker_Injured_Text_1
FallenWorker_Injured_1:
# 28 "data/maps/DeeperQuarryEnd/scripts.pory"
	releaseall
	return

FallenWorker_Injured_2:
# 24 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox FallenWorker_Injured_Text_0
	goto FallenWorker_Injured_1


GiantSteelixEncounter::
# 32 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox GiantSteelixEncounter_Text_0
# 33 "data/maps/DeeperQuarryEnd/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 34 "data/maps/DeeperQuarryEnd/scripts.pory"
	settotemboost 1, 0, 1, 0, 0, 0, 0, 0
# 35 "data/maps/DeeperQuarryEnd/scripts.pory"
	setwildbattle SPECIES_STEELIX, 40, ITEM_SITRUS_BERRY
# 36 "data/maps/DeeperQuarryEnd/scripts.pory"
	dowildbattle
	return


FallenWorkerComesIn::
# 40 "data/maps/DeeperQuarryEnd/scripts.pory"
	setobjectxy 2, 9, 18
# 41 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox FallenWorkerComesIn_Text_0
# 42 "data/maps/DeeperQuarryEnd/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
	return


MegaSteelixEncounter_Quarry::
# 46 "data/maps/DeeperQuarryEnd/scripts.pory"
	fadescreen FADE_TO_BLACK
# 47 "data/maps/DeeperQuarryEnd/scripts.pory"
	removeobject 1
# 48 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox MegaSteelixEncounter_Quarry_Text_0
# 49 "data/maps/DeeperQuarryEnd/scripts.pory"
	settotemboost 1, 1, 2, 1, 0, 2, 0, 0
# 50 "data/maps/DeeperQuarryEnd/scripts.pory"
	setwildbattle SPECIES_STEELIX_MEGA, 45, ITEM_STEELIUM_Z
# 51 "data/maps/DeeperQuarryEnd/scripts.pory"
	dowildbattle
	return


QuarryEnd_FallDeeper::
# 55 "data/maps/DeeperQuarryEnd/scripts.pory"
	lockall
# 56 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox QuarryEnd_FallDeeper_Text_0, MSGBOX_YESNO
# 57 "data/maps/DeeperQuarryEnd/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuarryEnd_FallDeeper_2
QuarryEnd_FallDeeper_1:
# 62 "data/maps/DeeperQuarryEnd/scripts.pory"
	releaseall
	return

QuarryEnd_FallDeeper_2:
# 58 "data/maps/DeeperQuarryEnd/scripts.pory"
	msgbox QuarryEnd_FallDeeper_Text_1
# 59 "data/maps/DeeperQuarryEnd/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/DeeperQuarryEnd/scripts.pory"
	warp MAP_QUARRY_SECRET, 3, 5
	goto QuarryEnd_FallDeeper_1


Steelix_Encounter_Quarry_Text_0:
# 6 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "Let's pretend this is a steelix sprite!$"

Steelix_Encounter_Quarry_Text_1:
# 12 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "Wow you're incredible how did you\n"
	.string "manage to beat him?$"

Steelix_Encounter_Quarry_Text_2:
# 13 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "Where the Steelix was you find an item$"

FallenWorker_Injured_Text_0:
# 24 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "Oh someone else foolish enough to come\n"
	.string "down here?\p"
	.string "I went to try and clear away the\n"
	.string "Pokémon that was causing problems but\l"
	.string "it was too strong for me!$"

FallenWorker_Injured_Text_1:
# 26 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "You're an incredible trainer, remind me\n"
	.string "to keep my distance.$"

GiantSteelixEncounter_Text_0:
# 32 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "The giant STEELIX lunges at you!$"

FallenWorkerComesIn_Text_0:
# 41 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "That wasn't the Steelix I remember\n"
	.string "seeing! That was far too small, like a\l"
	.string "child!$"

MegaSteelixEncounter_Quarry_Text_0:
# 48 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "An even larger STEELIX comes out the\n"
	.string "dark towards you!$"

QuarryEnd_FallDeeper_Text_0:
# 56 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "You see somethhing sparkling, do you\n"
	.string "want to reach for it?$"

QuarryEnd_FallDeeper_Text_1:
# 58 "data/maps/DeeperQuarryEnd/scripts.pory"
	.string "You lose your footing trynig to reach\n"
	.string "out$"
