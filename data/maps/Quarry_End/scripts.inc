Quarry_End_MapScripts::
	.byte 0


Steelix_Encounter_Quarry::
# 4 "data/maps/Quarry_End/scripts.pory"
	lockall
# 5 "data/maps/Quarry_End/scripts.pory"
	msgbox Steelix_Encounter_Quarry_Text_0
# 6 "data/maps/Quarry_End/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
# 7 "data/maps/Quarry_End/scripts.pory"
	call GiantSteelixEncounter
# 8 "data/maps/Quarry_End/scripts.pory"
	call FallenWorkerComesIn
# 9 "data/maps/Quarry_End/scripts.pory"
	call MegaSteelixEncounter_Quarry
# 10 "data/maps/Quarry_End/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 11 "data/maps/Quarry_End/scripts.pory"
	msgbox Steelix_Encounter_Quarry_Text_1
# 12 "data/maps/Quarry_End/scripts.pory"
	msgbox Steelix_Encounter_Quarry_Text_2
# 13 "data/maps/Quarry_End/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 14 "data/maps/Quarry_End/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/Quarry_End/scripts.pory"
	setvar VAR_QUARRY_STATE, 3
# 16 "data/maps/Quarry_End/scripts.pory"
	setflag FLAG_HIDE_STEELIX
# 17 "data/maps/Quarry_End/scripts.pory"
	releaseall
	return


FallenWorker_Injured::
# 21 "data/maps/Quarry_End/scripts.pory"
	lockall
# 22 "data/maps/Quarry_End/scripts.pory"
	goto_if_unset FLAG_HIDE_STEELIX, FallenWorker_Injured_2
# 25 "data/maps/Quarry_End/scripts.pory"
	msgbox FallenWorker_Injured_Text_1
FallenWorker_Injured_1:
# 27 "data/maps/Quarry_End/scripts.pory"
	releaseall
	return

FallenWorker_Injured_2:
# 23 "data/maps/Quarry_End/scripts.pory"
	msgbox FallenWorker_Injured_Text_0
	goto FallenWorker_Injured_1


GiantSteelixEncounter::
# 31 "data/maps/Quarry_End/scripts.pory"
	msgbox GiantSteelixEncounter_Text_0
# 32 "data/maps/Quarry_End/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 33 "data/maps/Quarry_End/scripts.pory"
	settotemboost 1, 0, 1, 0, 0, 0, 0, 0
# 34 "data/maps/Quarry_End/scripts.pory"
	setwildbattle SPECIES_STEELIX, 40, ITEM_SITRUS_BERRY
# 35 "data/maps/Quarry_End/scripts.pory"
	dowildbattle
	return


FallenWorkerComesIn::
# 39 "data/maps/Quarry_End/scripts.pory"
	setobjectxy 2, 9, 18
# 40 "data/maps/Quarry_End/scripts.pory"
	msgbox FallenWorkerComesIn_Text_0
# 41 "data/maps/Quarry_End/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
	return


MegaSteelixEncounter_Quarry::
# 45 "data/maps/Quarry_End/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data/maps/Quarry_End/scripts.pory"
	removeobject 1
# 47 "data/maps/Quarry_End/scripts.pory"
	msgbox MegaSteelixEncounter_Quarry_Text_0
# 48 "data/maps/Quarry_End/scripts.pory"
	settotemboost 1, 1, 2, 1, 0, 2, 0, 0
# 49 "data/maps/Quarry_End/scripts.pory"
	setwildbattle SPECIES_STEELIX_MEGA, 45, ITEM_STEELIUM_Z
# 50 "data/maps/Quarry_End/scripts.pory"
	dowildbattle
	return


QuarryEnd_FallDeeper::
# 54 "data/maps/Quarry_End/scripts.pory"
	lockall
# 55 "data/maps/Quarry_End/scripts.pory"
	msgbox QuarryEnd_FallDeeper_Text_0, MSGBOX_YESNO
# 56 "data/maps/Quarry_End/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuarryEnd_FallDeeper_2
QuarryEnd_FallDeeper_1:
# 61 "data/maps/Quarry_End/scripts.pory"
	releaseall
	return

QuarryEnd_FallDeeper_2:
# 57 "data/maps/Quarry_End/scripts.pory"
	msgbox QuarryEnd_FallDeeper_Text_1
# 58 "data/maps/Quarry_End/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/Quarry_End/scripts.pory"
	warp MAP_QUARRY_SECRET, 3, 5
	goto QuarryEnd_FallDeeper_1


Steelix_Encounter_Quarry_Text_0:
# 5 "data/maps/Quarry_End/scripts.pory"
	.string "Let's pretend this is a steelix sprite!$"

Steelix_Encounter_Quarry_Text_1:
# 11 "data/maps/Quarry_End/scripts.pory"
	.string "Wow you're incredible how did you\n"
	.string "manage to beat him?$"

Steelix_Encounter_Quarry_Text_2:
# 12 "data/maps/Quarry_End/scripts.pory"
	.string "Where the Steelix was you find an item$"

FallenWorker_Injured_Text_0:
# 23 "data/maps/Quarry_End/scripts.pory"
	.string "Oh someone else foolish enough to come\n"
	.string "down here?\p"
	.string "I went to try and clear away the\n"
	.string "Pokémon that was causing problems but\l"
	.string "it was too strong for me!$"

FallenWorker_Injured_Text_1:
# 25 "data/maps/Quarry_End/scripts.pory"
	.string "You're an incredible trainer, remind me\n"
	.string "to keep my distance.$"

GiantSteelixEncounter_Text_0:
# 31 "data/maps/Quarry_End/scripts.pory"
	.string "The giant STEELIX lunges at you!$"

FallenWorkerComesIn_Text_0:
# 40 "data/maps/Quarry_End/scripts.pory"
	.string "That wasn't the Steelix I remember\n"
	.string "seeing! That was far too small, like a\l"
	.string "child!$"

MegaSteelixEncounter_Quarry_Text_0:
# 47 "data/maps/Quarry_End/scripts.pory"
	.string "An even larger STEELIX comes out the\n"
	.string "dark towards you!$"

QuarryEnd_FallDeeper_Text_0:
# 55 "data/maps/Quarry_End/scripts.pory"
	.string "You see somethhing sparkling, do you\n"
	.string "want to reach for it?$"

QuarryEnd_FallDeeper_Text_1:
# 57 "data/maps/Quarry_End/scripts.pory"
	.string "You lose your footing trynig to reach\n"
	.string "out$"
