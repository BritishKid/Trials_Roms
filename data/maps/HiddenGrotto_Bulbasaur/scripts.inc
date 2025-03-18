HiddenGrotto_Bulbasaur_MapScripts::
	.byte 0


HiddenGrotto_Bulbasaur_MegaStone_EventScript::
# 4 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	lockall
# 5 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	goto_if_unset FLAG_VENUSAUR_MEGASTONE_FOUND, HiddenGrotto_Bulbasaur_MegaStone_EventScript_1
# 18 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	msgbox HiddenGrotto_Bulbasaur_MegaStone_EventScript_Text_2
	return

HiddenGrotto_Bulbasaur_MegaStone_EventScript_1:
# 6 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	msgbox HiddenGrotto_Bulbasaur_MegaStone_EventScript_Text_0
# 7 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 8 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaStoneGrotto_PlayerSurpised
# 9 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 10 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	clearflag FLAG_HIDDEN_MEGA
# 11 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	addobject 2
# 12 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	applymovement 2, Movement_VenusaurArrives
# 13 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	waitmovement 2
# 14 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	msgbox HiddenGrotto_Bulbasaur_MegaStone_EventScript_Text_1
# 15 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	call MegaVenusaurBattle
# 16 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	call MegaVenusaurBeaten
	return


MegaVenusaurBattle::
# 23 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	settotemboost 1, 1, 2, 1, 1, 2, 0, 0
# 24 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 25 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	setwildbattle SPECIES_VENUSAUR_MEGA, 45, ITEM_VENUSAURITE
# 26 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	dowildbattle
	return


MegaVenusaurBeaten::
# 30 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	setflag FLAG_HIDDEN_MEGA
# 31 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 32 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	removeobject 2
# 33 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	msgbox MegaVenusaurBeaten_Text_0
# 34 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	msgbox MegaVenusaurBeaten_Text_1
# 35 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	giveitem ITEM_VENUSAURITE
# 36 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	setflag FLAG_VENUSAUR_MEGASTONE_FOUND
	return


Movement_MegaStoneVenusaur_PlayerSurpised::
# 42 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	emote_exclamation_mark
	return


Movement_VenusaurArrives::
# 46 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	walk_right
# 47 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	walk_right
# 48 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	walk_right
# 49 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	walk_right
# 50 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	walk_right
# 51 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	walk_right
	return


HiddenGrotto_Bulbasaur_MegaStone_EventScript_Text_0:
# 6 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	.string "There seems to be a green marble like\n"
	.string "object on the altar.$"

HiddenGrotto_Bulbasaur_MegaStone_EventScript_Text_1:
# 14 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	.string "VENUSAUR!$"

HiddenGrotto_Bulbasaur_MegaStone_EventScript_Text_2:
# 18 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	.string "There is an indent from where I found\n"
	.string "the Venusaurite$"

MegaVenusaurBeaten_Text_0:
# 33 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	.string "The Venusaur retreats.$"

MegaVenusaurBeaten_Text_1:
# 34 "data/maps/HiddenGrotto_Bulbasaur/scripts.pory"
	.string "You take the Mega Stone from the altar.$"
