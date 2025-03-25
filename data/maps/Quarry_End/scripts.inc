Quarry_End_MapScripts::
	.byte 0


Steelix_Encounter_Quarry::
# 4 "data/maps/Quarry_End/scripts.pory"
	lockall
# 5 "data/maps/Quarry_End/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
# 6 "data/maps/Quarry_End/scripts.pory"
	call GiantSteelixEncounter
# 7 "data/maps/Quarry_End/scripts.pory"
	call FallenWorkerComesIn
# 8 "data/maps/Quarry_End/scripts.pory"
	call MegaSteelixEncounter_Quarry
# 9 "data/maps/Quarry_End/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 10 "data/maps/Quarry_End/scripts.pory"
	msgbox Steelix_Encounter_Quarry_Text_0
# 11 "data/maps/Quarry_End/scripts.pory"
	msgbox Steelix_Encounter_Quarry_Text_1
# 12 "data/maps/Quarry_End/scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 13 "data/maps/Quarry_End/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 14 "data/maps/Quarry_End/scripts.pory"
	setvar VAR_QUARRY_STATE, 3
# 15 "data/maps/Quarry_End/scripts.pory"
	removeobject 2
# 16 "data/maps/Quarry_End/scripts.pory"
	setflag FLAG_HIDE_STEELIX
# 17 "data/maps/Quarry_End/scripts.pory"
	releaseall
	return


FallenWorker_Injured::
# 21 "data/maps/Quarry_End/scripts.pory"
	lockall
# 22 "data/maps/Quarry_End/scripts.pory"
	faceplayer
# 23 "data/maps/Quarry_End/scripts.pory"
	goto_if_unset FLAG_HIDE_STEELIX, FallenWorker_Injured_2
# 26 "data/maps/Quarry_End/scripts.pory"
	msgbox FallenWorker_Injured_Text_1
FallenWorker_Injured_1:
# 28 "data/maps/Quarry_End/scripts.pory"
	releaseall
	return

FallenWorker_Injured_2:
# 24 "data/maps/Quarry_End/scripts.pory"
	msgbox FallenWorker_Injured_Text_0
	goto FallenWorker_Injured_1


GiantSteelixEncounter::
# 32 "data/maps/Quarry_End/scripts.pory"
	msgbox GiantSteelixEncounter_Text_0
# 33 "data/maps/Quarry_End/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 34 "data/maps/Quarry_End/scripts.pory"
	settotemboost 1, 0, 1, 0, 0, 0, 0, 0
# 35 "data/maps/Quarry_End/scripts.pory"
	setwildbattle SPECIES_STEELIX, 40, ITEM_SITRUS_BERRY
# 36 "data/maps/Quarry_End/scripts.pory"
	dowildbattle
	return


FallenWorkerComesIn::
# 40 "data/maps/Quarry_End/scripts.pory"
	setobjectxy 1, 9, 18
# 41 "data/maps/Quarry_End/scripts.pory"
	removeobject 2
# 42 "data/maps/Quarry_End/scripts.pory"
	msgbox FallenWorkerComesIn_Text_0
# 43 "data/maps/Quarry_End/scripts.pory"
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
	return


MegaSteelixEncounter_Quarry::
# 47 "data/maps/Quarry_End/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/Quarry_End/scripts.pory"
	removeobject 1
# 49 "data/maps/Quarry_End/scripts.pory"
	msgbox MegaSteelixEncounter_Quarry_Text_0
# 50 "data/maps/Quarry_End/scripts.pory"
	settotemboost 1, 1, 2, 1, 0, 2, 0, 0
# 51 "data/maps/Quarry_End/scripts.pory"
	setwildbattle SPECIES_STEELIX_MEGA, 45, ITEM_STEELIUM_Z
# 52 "data/maps/Quarry_End/scripts.pory"
	dowildbattle
	return


QuarryEnd_FallDeeper::
# 56 "data/maps/Quarry_End/scripts.pory"
	lockall
# 57 "data/maps/Quarry_End/scripts.pory"
	msgbox QuarryEnd_FallDeeper_Text_0, MSGBOX_YESNO
# 58 "data/maps/Quarry_End/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuarryEnd_FallDeeper_2
QuarryEnd_FallDeeper_1:
# 63 "data/maps/Quarry_End/scripts.pory"
	releaseall
	return

QuarryEnd_FallDeeper_2:
# 59 "data/maps/Quarry_End/scripts.pory"
	msgbox QuarryEnd_FallDeeper_Text_1
# 60 "data/maps/Quarry_End/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/Quarry_End/scripts.pory"
	warp MAP_QUARRY_SECRET, 3, 5
	goto QuarryEnd_FallDeeper_1


Steelix_Encounter_Quarry_Text_0:
# 10 "data/maps/Quarry_End/scripts.pory"
	.string "Wow you're incredible how did you\n"
	.string "manage to beat him?$"

Steelix_Encounter_Quarry_Text_1:
# 11 "data/maps/Quarry_End/scripts.pory"
	.string "You see something glistening where the\n"
	.string "Steelix was.$"

FallenWorker_Injured_Text_0:
# 24 "data/maps/Quarry_End/scripts.pory"
	.string "Oh someone else foolish enough to come\n"
	.string "down here?\p"
	.string "I went to try and clear away the\n"
	.string "Pokémon that was causing problems but\l"
	.string "it was too strong for me!$"

FallenWorker_Injured_Text_1:
# 26 "data/maps/Quarry_End/scripts.pory"
	.string "You're an incredible trainer, remind me\n"
	.string "to keep my distance.$"

GiantSteelixEncounter_Text_0:
# 32 "data/maps/Quarry_End/scripts.pory"
	.string "The giant Steelix lunges at you!$"

FallenWorkerComesIn_Text_0:
# 42 "data/maps/Quarry_End/scripts.pory"
	.string "That wasn't the Steelix I remember\n"
	.string "seeing! That was far too small, like a\l"
	.string "child!$"

MegaSteelixEncounter_Quarry_Text_0:
# 49 "data/maps/Quarry_End/scripts.pory"
	.string "An even larger STEELIX comes out the\n"
	.string "dark towards you!$"

QuarryEnd_FallDeeper_Text_0:
# 57 "data/maps/Quarry_End/scripts.pory"
	.string "You see somethhing sparkling, do you\n"
	.string "want to reach for it?$"

QuarryEnd_FallDeeper_Text_1:
# 59 "data/maps/Quarry_End/scripts.pory"
	.string "You lose your footing trynig to reach\n"
	.string "out$"
