Test_MapScripts::
	.byte 0


LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection::
# 4 "data/maps/Test/scripts.pory"
	lockall
# 5 "data/maps/Test/scripts.pory"
	goto_if_unset FLAG_LEFTOVERS_ORPHANAGE, LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_2
LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_1:
# 21 "data/maps/Test/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_2:
# 6 "data/maps/Test/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 7 "data/maps/Test/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_Text_0, MSGBOX_YESNO
# 8 "data/maps/Test/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_5
LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_4:
# 11 "data/maps/Test/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_8
LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_7:
# 19 "data/maps/Test/scripts.pory"
	hidemonpic
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_1

LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_5:
# 9 "data/maps/Test/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_4

LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_8:
# 12 "data/maps/Test/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_ORAN_BERRY
# 13 "data/maps/Test/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 14 "data/maps/Test/scripts.pory"
	setflag FLAG_RECEIVED_CHARMANDER
# 15 "data/maps/Test/scripts.pory"
	removeobject 8
# 16 "data/maps/Test/scripts.pory"
	setflag FLAG_LEFTOVERS_ORPHANAGE
# 17 "data/maps/Test/scripts.pory"
	setvar VAR_STARTER_SELECTION_STATE, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_7


LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection::
# 25 "data/maps/Test/scripts.pory"
	lockall
# 26 "data/maps/Test/scripts.pory"
	goto_if_unset FLAG_LEFTOVERS_ORPHANAGE, LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_2
LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_1:
# 42 "data/maps/Test/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_2:
# 27 "data/maps/Test/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 28 "data/maps/Test/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_Text_0, MSGBOX_YESNO
# 29 "data/maps/Test/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_5
LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_4:
# 32 "data/maps/Test/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_8
LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_7:
# 40 "data/maps/Test/scripts.pory"
	hidemonpic
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_1

LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_5:
# 30 "data/maps/Test/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_4

LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_8:
# 33 "data/maps/Test/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_ORAN_BERRY
# 34 "data/maps/Test/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/Test/scripts.pory"
	setflag FLAG_RECEIVED_SQUIRTLE
# 36 "data/maps/Test/scripts.pory"
	removeobject 9
# 37 "data/maps/Test/scripts.pory"
	setflag FLAG_LEFTOVERS_ORPHANAGE
# 38 "data/maps/Test/scripts.pory"
	setvar VAR_STARTER_SELECTION_STATE, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_7


LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection::
# 47 "data/maps/Test/scripts.pory"
	lockall
# 48 "data/maps/Test/scripts.pory"
	goto_if_unset FLAG_LEFTOVERS_ORPHANAGE, LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_2
LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_1:
# 65 "data/maps/Test/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_2:
# 49 "data/maps/Test/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 50 "data/maps/Test/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_Text_0, MSGBOX_YESNO
# 51 "data/maps/Test/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_5
LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_4:
# 54 "data/maps/Test/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_8
LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_7:
# 63 "data/maps/Test/scripts.pory"
	hidemonpic
	goto LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_1

LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_5:
# 52 "data/maps/Test/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_4

LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_8:
# 55 "data/maps/Test/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_Text_1, MSGBOX_YESNO
# 56 "data/maps/Test/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, ITEM_ORAN_BERRY, isShiny = VAR_RESULT
# 57 "data/maps/Test/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/Test/scripts.pory"
	setflag FLAG_RECEIVED_BULBSAUR
# 59 "data/maps/Test/scripts.pory"
	removeobject 7
# 60 "data/maps/Test/scripts.pory"
	setflag FLAG_LEFTOVERS_ORPHANAGE
# 61 "data/maps/Test/scripts.pory"
	setvar VAR_STARTER_SELECTION_STATE, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_7


ProffesorLab_Proffesor::
# 69 "data/maps/Test/scripts.pory"
	lockall
# 70 "data/maps/Test/scripts.pory"
	faceplayer
# 71 "data/maps/Test/scripts.pory"
	compare VAR_STARTER_SELECTION_STATE, 1
	goto_if_gt ProffesorLab_Proffesor_2
ProffesorLab_Proffesor_1:
# 74 "data/maps/Test/scripts.pory"
	compare VAR_STARTER_SELECTION_STATE, 1
	goto_if_eq ProffesorLab_Proffesor_5
ProffesorLab_Proffesor_4:
# 77 "data/maps/Test/scripts.pory"
	compare VAR_STARTER_SELECTION_STATE, 0
	goto_if_eq ProffesorLab_Proffesor_8
ProffesorLab_Proffesor_7:
# 81 "data/maps/Test/scripts.pory"
	releaseall
	return

ProffesorLab_Proffesor_2:
# 72 "data/maps/Test/scripts.pory"
	msgbox ProffesorLab_Proffesor_Text_0
	goto ProffesorLab_Proffesor_1

ProffesorLab_Proffesor_5:
# 75 "data/maps/Test/scripts.pory"
	msgbox ProffesorLab_Proffesor_Text_1
	goto ProffesorLab_Proffesor_4

ProffesorLab_Proffesor_8:
# 78 "data/maps/Test/scripts.pory"
	msgbox ProffesorLab_Proffesor_Text_2
# 79 "data/maps/Test/scripts.pory"
	setvar VAR_STARTER_SELECTION_STATE, 1
	goto ProffesorLab_Proffesor_7


ProffessorLab_Trigger_PlayerAttemptsToLeave::
# 85 "data/maps/Test/scripts.pory"
	lockall
# 86 "data/maps/Test/scripts.pory"
	msgbox ProffessorLab_Trigger_PlayerAttemptsToLeave_Text_0
# 87 "data/maps/Test/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ProffesorsLab_PlayerSurprised
# 88 "data/maps/Test/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 89 "data/maps/Test/scripts.pory"
	msgbox ProffessorLab_Trigger_PlayerAttemptsToLeave_Text_1
# 90 "data/maps/Test/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_proffesorsLab_StepUp
# 91 "data/maps/Test/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 92 "data/maps/Test/scripts.pory"
	releaseall
	return


# 95 "data/maps/Test/scripts.pory"
Movement_ProffesorsLab_PlayerSurprised:
# 96 "data/maps/Test/scripts.pory"
	emote_exclamation_mark
# 97 "data/maps/Test/scripts.pory"
	face_up
	step_end

# 100 "data/maps/Test/scripts.pory"
Movement_proffesorsLab_StepUp:
# 101 "data/maps/Test/scripts.pory"
	walk_up
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_Text_0:
# 7 "data/maps/Test/scripts.pory"
	.string "Do you want to select Charmander?$"

LittlerootTown_ProfessorBirchsLab_EventScript_CharmanderSelection_Text_1:
# 9 "data/maps/Test/scripts.pory"
	.string "I'll choose another Pokémon$"

LittlerootTown_ProfessorBirchsLab_EventScript_SquirtleSelection_Text_0:
# 28 "data/maps/Test/scripts.pory"
	.string "Do you want to select Squirtle?$"

LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_Text_0:
# 50 "data/maps/Test/scripts.pory"
	.string "Do you want to select Bulbasaur?$"

LittlerootTown_ProfessorBirchsLab_EventScript_BulbasaurSelection_Text_1:
# 55 "data/maps/Test/scripts.pory"
	.string "Would you like the pokemon to be shiny?$"

ProffesorLab_Proffesor_Text_0:
# 72 "data/maps/Test/scripts.pory"
	.string "Good luck on your adventure.$"

ProffesorLab_Proffesor_Text_1:
# 75 "data/maps/Test/scripts.pory"
	.string "I caught them all myself, they are very\n"
	.string "rare.$"

ProffesorLab_Proffesor_Text_2:
# 78 "data/maps/Test/scripts.pory"
	.string "Please take a Pokémon$"

ProffessorLab_Trigger_PlayerAttemptsToLeave_Text_0:
# 86 "data/maps/Test/scripts.pory"
	.string "HEY WAIT!$"

ProffessorLab_Trigger_PlayerAttemptsToLeave_Text_1:
# 89 "data/maps/Test/scripts.pory"
	.string "You will need Pokémon to continue your\n"
	.string "journey.$"
