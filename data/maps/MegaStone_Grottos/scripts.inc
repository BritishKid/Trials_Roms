MegaStone_Grottos_MapScripts::
	.byte 0


MegaStone_Grotto_EventScript_Blastoise_MegaStone::
# 4 "data/maps/MegaStone_Grottos/scripts.pory"
	lock
# 5 "data/maps/MegaStone_Grottos/scripts.pory"
	goto_if_unset FLAG_BLASTOISE_MEGASTONE_FOUND, MegaStone_Grotto_EventScript_Blastoise_MegaStone_2
# 16 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_2
MegaStone_Grotto_EventScript_Blastoise_MegaStone_1:
# 19 "data/maps/MegaStone_Grottos/scripts.pory"
	release
	return

MegaStone_Grotto_EventScript_Blastoise_MegaStone_2:
# 6 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_0
# 7 "data/maps/MegaStone_Grottos/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
# 8 "data/maps/MegaStone_Grottos/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaStoneGrotto_PlayerSurpisedFaceDown
# 9 "data/maps/MegaStone_Grottos/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 10 "data/maps/MegaStone_Grottos/scripts.pory"
	applymovement 1, Movement_BlastoiseArrives
# 11 "data/maps/MegaStone_Grottos/scripts.pory"
	waitmovement 1
# 12 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_1
# 13 "data/maps/MegaStone_Grottos/scripts.pory"
	call BlastoiseMegaBattle
# 14 "data/maps/MegaStone_Grottos/scripts.pory"
	call BlastoiseMegaBeaten
	goto MegaStone_Grotto_EventScript_Blastoise_MegaStone_1


BlastoiseMegaBattle::
# 23 "data/maps/MegaStone_Grottos/scripts.pory"
	settotemboost 1, 0, 2, 0, 1, 2, 0, 0
# 24 "data/maps/MegaStone_Grottos/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 25 "data/maps/MegaStone_Grottos/scripts.pory"
	setwildbattle SPECIES_BLASTOISE_MEGA, 45
# 26 "data/maps/MegaStone_Grottos/scripts.pory"
	dowildbattle
	return


BlastoiseMegaBeaten::
# 30 "data/maps/MegaStone_Grottos/scripts.pory"
	removeobject 1
# 31 "data/maps/MegaStone_Grottos/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 32 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox BlastoiseMegaBeaten_Text_0
# 33 "data/maps/MegaStone_Grottos/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaStoneGrotto_FaceUpPlayer
# 34 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox BlastoiseMegaBeaten_Text_1
# 35 "data/maps/MegaStone_Grottos/scripts.pory"
	giveitem ITEM_BLASTOISINITE
# 36 "data/maps/MegaStone_Grottos/scripts.pory"
	setflag FLAG_BLASTOISE_MEGASTONE_FOUND
	return


MegaStone_Grotto_EventScript_Charizard_MegaStone::
# 40 "data/maps/MegaStone_Grottos/scripts.pory"
	lock
# 41 "data/maps/MegaStone_Grottos/scripts.pory"
	goto_if_unset FLAG_CHARIZARD_Y_MEGASTONE_FOUND, MegaStone_Grotto_EventScript_Charizard_MegaStone_2
# 50 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_2
MegaStone_Grotto_EventScript_Charizard_MegaStone_1:
# 52 "data/maps/MegaStone_Grottos/scripts.pory"
	release
	return

MegaStone_Grotto_EventScript_Charizard_MegaStone_2:
# 42 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_0
# 43 "data/maps/MegaStone_Grottos/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 44 "data/maps/MegaStone_Grottos/scripts.pory"
	applymovement 2, Movement_CharizardArrives
# 45 "data/maps/MegaStone_Grottos/scripts.pory"
	waitmovement 2
# 46 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_1
# 47 "data/maps/MegaStone_Grottos/scripts.pory"
	call CharizardMegaBattle
# 48 "data/maps/MegaStone_Grottos/scripts.pory"
	call CharizardMegaBeaten
	goto MegaStone_Grotto_EventScript_Charizard_MegaStone_1


CharizardMegaBattle::
# 56 "data/maps/MegaStone_Grottos/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 57 "data/maps/MegaStone_Grottos/scripts.pory"
	settotemboost 1, 0, 1, 1, 2, 1, 0, 0
# 58 "data/maps/MegaStone_Grottos/scripts.pory"
	setwildbattle SPECIES_CHARIZARD_MEGA_Y, 45
# 59 "data/maps/MegaStone_Grottos/scripts.pory"
	dowildbattle
	return


CharizardMegaBeaten::
# 63 "data/maps/MegaStone_Grottos/scripts.pory"
	removeobject 1
# 64 "data/maps/MegaStone_Grottos/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 65 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox CharizardMegaBeaten_Text_0
# 66 "data/maps/MegaStone_Grottos/scripts.pory"
	msgbox BlastoiseMegaBeaten_Text_1
# 67 "data/maps/MegaStone_Grottos/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y
# 68 "data/maps/MegaStone_Grottos/scripts.pory"
	setflag FLAG_CHARIZARD_Y_MEGASTONE_FOUND
	return


# 71 "data/maps/MegaStone_Grottos/scripts.pory"
Movement_BlastoiseArrives:
# 72 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 73 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 74 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 75 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 76 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 77 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 78 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 79 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 80 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 81 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 82 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 83 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 84 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 85 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 86 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 87 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
# 88 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_up
	step_end

# 91 "data/maps/MegaStone_Grottos/scripts.pory"
Movement_MegaStoneGrotto_PlayerSurpisedFaceDown:
# 92 "data/maps/MegaStone_Grottos/scripts.pory"
	emote_exclamation_mark
# 93 "data/maps/MegaStone_Grottos/scripts.pory"
	face_down
	step_end

# 96 "data/maps/MegaStone_Grottos/scripts.pory"
Movement_MegaStoneGrotto_FaceUpPlayer:
# 97 "data/maps/MegaStone_Grottos/scripts.pory"
	face_up
	step_end

# 100 "data/maps/MegaStone_Grottos/scripts.pory"
Movement_CharizardArrives:
# 101 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_down
# 102 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_down
# 103 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_down
# 104 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_down
# 105 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_down
# 106 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_down
# 107 "data/maps/MegaStone_Grottos/scripts.pory"
	walk_fast_down
	step_end

MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_0:
# 6 "data/maps/MegaStone_Grottos/scripts.pory"
	.string "There seems to be a blue marble like\n"
	.string "object on the altar$"

MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_1:
# 12 "data/maps/MegaStone_Grottos/scripts.pory"
	.string "BLAST! BLASTOISE!$"

MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_2:
# 16 "data/maps/MegaStone_Grottos/scripts.pory"
	.string "There is an indent from where I found\n"
	.string "the Blastoisite$"

BlastoiseMegaBeaten_Text_0:
# 32 "data/maps/MegaStone_Grottos/scripts.pory"
	.string "The Blastoise retreats$"

BlastoiseMegaBeaten_Text_1:
# 34 "data/maps/MegaStone_Grottos/scripts.pory"
	.string "You take the marble from the atlar$"

MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_0:
# 42 "data/maps/MegaStone_Grottos/scripts.pory"
	.string "There seems to be a red marble like\n"
	.string "object on the altar$"

MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_1:
# 46 "data/maps/MegaStone_Grottos/scripts.pory"
	.string "ZARD! CHARIZARD!$"

CharizardMegaBeaten_Text_0:
# 65 "data/maps/MegaStone_Grottos/scripts.pory"
	.string "The Charizard retreats$"
