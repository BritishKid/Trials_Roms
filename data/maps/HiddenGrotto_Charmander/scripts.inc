HiddenGrotto_Charmander_MapScripts::
	.byte 0


MegaStone_Grotto_EventScript_Charizard_MegaStone::
# 5 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	lock
# 6 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	goto_if_unset FLAG_CHARIZARD_Y_MEGASTONE_FOUND, MegaStone_Grotto_EventScript_Charizard_MegaStone_2
# 17 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_2
MegaStone_Grotto_EventScript_Charizard_MegaStone_1:
# 19 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	release
	return

MegaStone_Grotto_EventScript_Charizard_MegaStone_2:
# 7 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_0
# 8 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 9 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	clearflag FLAG_HIDDEN_MEGA
# 10 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	addobject 3
# 11 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	applymovement 3, Movement_CharizardArrives
# 12 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	waitmovement 3
# 13 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	msgbox MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_1
# 14 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	call CharizardMegaBattle
# 15 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	call CharizardMegaBeaten
	goto MegaStone_Grotto_EventScript_Charizard_MegaStone_1


CharizardMegaBattle::
# 23 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 24 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	settotemboost 1, 0, 1, 1, 2, 1, 0, 0
# 25 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	setwildbattle SPECIES_CHARIZARD_MEGA_Y, 45
# 26 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	dowildbattle
	return


CharizardMegaBeaten::
# 30 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	setflag FLAG_HIDDEN_MEGA
# 31 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	removeobject 1
# 32 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 33 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	msgbox CharizardMegaBeaten_Text_0
# 34 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	msgbox CharizardMegaBeaten_Text_1
# 35 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	giveitem ITEM_CHARIZARDITE_Y
# 36 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	setflag FLAG_CHARIZARD_Y_MEGASTONE_FOUND
	return


# 39 "data/maps/HiddenGrotto_Charmander/scripts.pory"
Movement_CharizardArrives:
# 40 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	walk_down
# 41 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	walk_down
	step_end

MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_0:
# 7 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	.string "There seems to be a red marble like\n"
	.string "object on the altar$"

MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_1:
# 13 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	.string "ZARD! CHARIZARD!$"

MegaStone_Grotto_EventScript_Charizard_MegaStone_Text_2:
# 17 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	.string "There is an indent from where I found\n"
	.string "the Charizardite Y$"

CharizardMegaBeaten_Text_0:
# 33 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	.string "The Charizard retreats$"

CharizardMegaBeaten_Text_1:
# 34 "data/maps/HiddenGrotto_Charmander/scripts.pory"
	.string "You take the Mega Stone from the atlar$"
