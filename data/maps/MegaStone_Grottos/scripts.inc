MegaStone_Grottos_MapScripts::
	.byte 0


MegaStone_Grotto_EventScript_Blastoise_MegaStone::
	lock
	goto_if_set FLAG_BLASTOISE_MEGASTONE_FOUND, MegaStone_Grotto_EventScript_Blastoise_MegaStone_2
	msgbox MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_2
MegaStone_Grotto_EventScript_Blastoise_MegaStone_1:
	release
	return

MegaStone_Grotto_EventScript_Blastoise_MegaStone_2:
	msgbox MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_0
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaStoneGrotto_PlayerSurpisedFaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Movement_BlastoiseArrives
	waitmovement 1
	msgbox MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_1
	call BlastoiseMegaBattle
	call BlastoiseMegaBeaten
	goto MegaStone_Grotto_EventScript_Blastoise_MegaStone_1


BlastoiseMegaBattle::
	settotemboost 1, 0, 2, 0, 1, 2, 0, 0
	setwildbattle SPECIES_BLASTOISE_MEGA, 45
	dowildbattle
	return


BlastoiseMegaBeaten::
	removeobject 1
	msgbox BlastoiseMegaBeaten_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaStoneGrotto_FaceUpPlayer
	msgbox BlastoiseMegaBeaten_Text_1
	giveitem ITEM_BLASTOISINITE
	setflag FLAG_BLASTOISE_MEGASTONE_FOUND
	return


MegaStone_Grotto_EventScript_Charizard_MegaStone::
	lock
	goto_if_set FLAG_CHARIZARD_Y_MEGASTONE_FOUND, MegaStone_Grotto_EventScript_Charizard_MegaStone_2
	msgbox MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_2
MegaStone_Grotto_EventScript_Charizard_MegaStone_1:
	release
	return

MegaStone_Grotto_EventScript_Charizard_MegaStone_2:
	msgbox MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_0
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
	applymovement 2, Movement_CharizardArrives
	waitmovement 2
	msgbox MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_1
	call CharizardMegaBattle
	call CharizardMegaBeaten
	goto MegaStone_Grotto_EventScript_Charizard_MegaStone_1


CharizardMegaBattle::
	settotemboost 1, 0, 1, 1, 2, 1, 0, 0
	setwildbattle SPECIES_CHARIZARD_MEGA_Y, 45
	dowildbattle
	return


CharizardMegaBeaten::
	removeobject 1
	msgbox CharizardMegaBeaten_Text_0
	msgbox BlastoiseMegaBeaten_Text_1
	giveitem ITEM_CHARIZARDITE_Y
	setflag FLAG_CHARIZARD_Y_MEGASTONE_FOUND
	return


Movement_BlastoiseArrives:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Movement_MegaStoneGrotto_PlayerSurpisedFaceDown:
	emote_exclamation_mark
	face_down
	step_end

Movement_MegaStoneGrotto_FaceUpPlayer:
	face_up
	step_end

Movement_CharizardArrives:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_0:
	.string "There seems to be a blue marble like\n"
	.string "object on the altar$"

MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_1:
	.string "BLAST! BLASTOISE!$"

MegaStone_Grotto_EventScript_Blastoise_MegaStone_Text_2:
	.string "There is an indent from where I found\n"
	.string "the Blastoisite$"

BlastoiseMegaBeaten_Text_0:
	.string "The Blastoise retreats$"

BlastoiseMegaBeaten_Text_1:
	.string "You take the marble from the atlar$"

MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_0:
	.string "There seems to be a red marble like\n"
	.string "object on the altar$"

MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_1:
	.string "ZARD! CHARIZARD!$"

CharizardMegaBeaten_Text_0:
	.string "The Charizard retreats$"
