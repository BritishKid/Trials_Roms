HiddenGrotto_Squirtle_MapScripts::
	.byte 0


HiddenGrotto_Squirtle_MegaStone_EventScript::
# 4 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	lockall
# 5 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	goto_if_unset FLAG_BLASTOISE_MEGASTONE_FOUND, HiddenGrotto_Squirtle_MegaStone_EventScript_1
# 18 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	msgbox HiddenGrotto_Squirtle_MegaStone_EventScript_Text_2
	return

HiddenGrotto_Squirtle_MegaStone_EventScript_1:
# 6 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	msgbox HiddenGrotto_Squirtle_MegaStone_EventScript_Text_0
# 7 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
# 8 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaStoneGrotto_PlayerSurpised
# 9 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 10 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	clearflag FLAG_HIDDEN_MEGA
# 11 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	addobject 2
# 12 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	applymovement 2, Movement_BlastoiseArrives
# 13 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	waitmovement 2
# 14 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	msgbox HiddenGrotto_Squirtle_MegaStone_EventScript_Text_1
# 15 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	call MegaBlastoiseBattle
# 16 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	call MegaBlastoiseBeaten
	return


MegaBlastoiseBattle::
# 23 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	settotemboost 1, 0, 2, 0, 1, 2, 0, 0
# 24 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 25 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	setwildbattle SPECIES_BLASTOISE_MEGA, 45, ITEM_BLASTOISINITE
# 26 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	dowildbattle
	return


MegaBlastoiseBeaten::
# 30 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	setflag FLAG_HIDDEN_MEGA
# 31 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 32 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	removeobject 2
# 33 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	msgbox MegaBlastoiseBeaten_Text_0
# 34 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaStoneGrotto_FaceUpPlayer
# 35 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 36 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	msgbox MegaBlastoiseBeaten_Text_1
# 37 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	giveitem ITEM_BLASTOISINITE
# 38 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	setflag FLAG_BLASTOISE_MEGASTONE_FOUND
	return


Movement_MegaStoneGrotto_PlayerSurpised::
# 44 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	emote_exclamation_mark
# 45 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	face_down
	return


Movement_BlastoiseArrives::
# 49 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	walk_up
# 50 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	walk_up
# 51 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	walk_up
# 52 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	walk_up
# 53 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	walk_up
	return


# 56 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
Movement_MegaStoneGrotto_FaceUpPlayer:
# 57 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	face_up
	step_end

HiddenGrotto_Squirtle_MegaStone_EventScript_Text_0:
# 6 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	.string "There seems to be a blue marble like\n"
	.string "object on the altar.$"

HiddenGrotto_Squirtle_MegaStone_EventScript_Text_1:
# 14 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	.string "BLAST! BLASTOISE!$"

HiddenGrotto_Squirtle_MegaStone_EventScript_Text_2:
# 18 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	.string "There is an indent from where I found\n"
	.string "the Blastoisinite$"

MegaBlastoiseBeaten_Text_0:
# 33 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	.string "The Blastoise retreats.$"

MegaBlastoiseBeaten_Text_1:
# 36 "data/maps/HiddenGrotto_Squirtle/scripts.pory"
	.string "You take the Mega Stone from the altar.$"
