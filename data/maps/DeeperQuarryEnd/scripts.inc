DeeperQuarryEnd_MapScripts::
	.byte 0


Steelix_Encounter_Quarry::
	lockall
	msgbox Steelix_Encounter_Quarry_Text_0
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
	call GiantSteelixEncounter
	call FallenWorkerComesIn
	call MegaSteelixEncounter_Quarry
	clearflag FLAG_CANT_CATCH_MON
	msgbox Steelix_Encounter_Quarry_Text_1
	msgbox Steelix_Encounter_Quarry_Text_2
	giveitem ITEM_STEELIXITE, 1
	playfanfare MUS_OBTAIN_ITEM
	setvar VAR_QUARRY_STATE, 3
	setflag FLAG_HIDE_STEELIX
	releaseall
	return


FallenWorker_Injured::
	lockall
	goto_if_unset FLAG_HIDE_STEELIX, FallenWorker_Injured_2
	msgbox FallenWorker_Injured_Text_1
FallenWorker_Injured_1:
	releaseall
	return

FallenWorker_Injured_2:
	msgbox FallenWorker_Injured_Text_0
	goto FallenWorker_Injured_1


GiantSteelixEncounter::
	msgbox GiantSteelixEncounter_Text_0
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 0, 1, 0, 0, 0, 0, 0
	setwildbattle SPECIES_STEELIX, 40, ITEM_SITRUS_BERRY
	dowildbattle
	return


FallenWorkerComesIn::
	setobjectxy 2, 9, 18
	msgbox FallenWorkerComesIn_Text_0
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
	return


MegaSteelixEncounter_Quarry::
	fadescreen FADE_TO_BLACK
	removeobject 1
	msgbox MegaSteelixEncounter_Quarry_Text_0
	settotemboost 1, 1, 2, 1, 0, 2, 0, 0
	setwildbattle SPECIES_STEELIX_MEGA, 45, ITEM_STEELIUM_Z
	dowildbattle
	return


QuarryEnd_FallDeeper::
	lockall
	msgbox QuarryEnd_FallDeeper_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq QuarryEnd_FallDeeper_2
QuarryEnd_FallDeeper_1:
	releaseall
	return

QuarryEnd_FallDeeper_2:
	msgbox QuarryEnd_FallDeeper_Text_1
	fadescreen FADE_TO_BLACK
	warp MAP_QUARRY_SECRET, 3, 5
	goto QuarryEnd_FallDeeper_1


Steelix_Encounter_Quarry_Text_0:
	.string "Let's pretend this is a steelix sprite!$"

Steelix_Encounter_Quarry_Text_1:
	.string "Wow you're incredible how did you\n"
	.string "manage to beat him?$"

Steelix_Encounter_Quarry_Text_2:
	.string "Where the Steelix was you find an item$"

FallenWorker_Injured_Text_0:
	.string "Oh someone else foolish enough to come\n"
	.string "down here?\p"
	.string "I went to try and clear away the\n"
	.string "Pokémon that was causing problems but\l"
	.string "it was too strong for me!$"

FallenWorker_Injured_Text_1:
	.string "You're an incredible trainer, remind me\n"
	.string "to keep my distance.$"

GiantSteelixEncounter_Text_0:
	.string "The giant STEELIX lunges at you!$"

FallenWorkerComesIn_Text_0:
	.string "That wasn't the Steelix I remember\n"
	.string "seeing! That was far too small, like a\l"
	.string "child!$"

MegaSteelixEncounter_Quarry_Text_0:
	.string "An even larger STEELIX comes out the\n"
	.string "dark towards you!$"

QuarryEnd_FallDeeper_Text_0:
	.string "You see somethhing sparkling, do you\n"
	.string "want to reach for it?$"

QuarryEnd_FallDeeper_Text_1:
	.string "You lose your footing trynig to reach\n"
	.string "out$"
