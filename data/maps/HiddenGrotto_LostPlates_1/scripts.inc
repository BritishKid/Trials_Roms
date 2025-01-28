HiddenGrotto_LostPlates_1_MapScripts::
	.byte 0


InsectPlate_Altar::
# 5 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	lockall
# 6 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	checkitem ITEM_INSECT_PLATE, 1
# 7 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq InsectPlate_Altar_2
InsectPlate_Altar_1:
# 22 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsectPlate_Altar_5
InsectPlate_Altar_4:
# 25 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	releaseall
	return

InsectPlate_Altar_2:
# 8 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_0
# 9 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
# 10 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsectPlate_Altar_7
	goto InsectPlate_Altar_1

InsectPlate_Altar_5:
# 23 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_5
	goto InsectPlate_Altar_4

InsectPlate_Altar_7:
# 11 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_2
# 12 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 13 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	settotemboost 1, 0, 1, 1, 0, 1, 0, 0
# 14 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	setwildbattle SPECIES_GIGALITH, 40, ITEM_INSECT_PLATE
# 15 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	dowildbattle
# 16 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_3
# 17 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_4
# 18 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	giveitem ITEM_INSECT_PLATE
# 19 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	addvar VAR_PLATES_FOUND, 1
	goto InsectPlate_Altar_1


StonePlate_Altar::
# 29 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	lockall
# 30 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	checkitem ITEM_STONE_PLATE, 1
# 31 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq StonePlate_Altar_2
StonePlate_Altar_1:
# 46 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StonePlate_Altar_5
StonePlate_Altar_4:
# 49 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	releaseall
	return

StonePlate_Altar_2:
# 32 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox StonePlate_Altar_Text_0
# 33 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
# 34 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StonePlate_Altar_7
	goto StonePlate_Altar_1

StonePlate_Altar_5:
# 47 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_5
	goto StonePlate_Altar_4

StonePlate_Altar_7:
# 35 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_2
# 36 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 37 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	settotemboost 1, 0, 1, 1, 0, 1, 0, 0
# 38 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	setwildbattle SPECIES_GIGALITH, 40, ITEM_STONE_PLATE
# 39 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	dowildbattle
# 40 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox StonePlate_Altar_Text_1
# 41 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox StonePlate_Altar_Text_2
# 42 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	giveitem ITEM_STONE_PLATE
# 43 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	addvar VAR_PLATES_FOUND, 1
	goto StonePlate_Altar_1


EarthPlate_Altar::
# 53 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	lockall
# 54 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	checkitem ITEM_EARTH_PLATE, 1
# 55 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EarthPlate_Altar_2
EarthPlate_Altar_1:
# 70 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EarthPlate_Altar_5
EarthPlate_Altar_4:
# 73 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	releaseall
	return

EarthPlate_Altar_2:
# 56 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox EarthPlate_Altar_Text_0
# 57 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
# 58 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EarthPlate_Altar_7
	goto EarthPlate_Altar_1

EarthPlate_Altar_5:
# 71 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_5
	goto EarthPlate_Altar_4

EarthPlate_Altar_7:
# 59 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_2
# 60 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 61 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	settotemboost 1, 0, 1, 1, 0, 1, 0, 0
# 62 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	setwildbattle SPECIES_HIPPOWDON, 40, ITEM_EARTH_PLATE
# 63 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	dowildbattle
# 64 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox EarthPlate_Altar_Text_1
# 65 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox StonePlate_Altar_Text_2
# 66 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	giveitem ITEM_EARTH_PLATE
# 67 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	addvar VAR_PLATES_FOUND, 1
	goto EarthPlate_Altar_1


IronPlate_Alter::
# 77 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	lockall
# 78 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	checkitem ITEM_IRON_PLATE, 1
# 79 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq IronPlate_Alter_2
IronPlate_Alter_1:
# 94 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IronPlate_Alter_5
IronPlate_Alter_4:
# 97 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	releaseall
	return

IronPlate_Alter_2:
# 80 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox IronPlate_Alter_Text_0
# 81 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
# 82 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IronPlate_Alter_7
	goto IronPlate_Alter_1

IronPlate_Alter_5:
# 95 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_5
	goto IronPlate_Alter_4

IronPlate_Alter_7:
# 83 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox InsectPlate_Altar_Text_2
# 84 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 85 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	settotemboost 1, 0, 1, 1, 0, 1, 0, 0
# 86 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	setwildbattle SPECIES_ORTHWORM, 40, ITEM_IRON_PLATE
# 87 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	dowildbattle
# 88 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox IronPlate_Alter_Text_1
# 89 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	msgbox IronPlate_Alter_Text_2
# 90 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	giveitem ITEM_IRON_PLATE
# 91 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	addvar VAR_PLATES_FOUND, 1
	goto IronPlate_Alter_1


InsectPlate_Altar_Text_0:
# 8 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "There is a plate with an ancient bug\n"
	.string "Pokémon inscribed on it$"

InsectPlate_Altar_Text_1:
# 9 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "Do you want to take it?$"

InsectPlate_Altar_Text_2:
# 11 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "As you reach for the plate a giant\n"
	.string "Pokémon jumps out.$"

InsectPlate_Altar_Text_3:
# 16 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "Accelgor retreats into the cave.$"

InsectPlate_Altar_Text_4:
# 17 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "You pick up the Stone Plate$"

InsectPlate_Altar_Text_5:
# 23 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "The alter is empty.$"

StonePlate_Altar_Text_0:
# 32 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "There is a plate with an ancient rock\n"
	.string "Pokémon inscribed on it$"

StonePlate_Altar_Text_1:
# 40 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "Gigalith retreats into the cave.$"

StonePlate_Altar_Text_2:
# 41 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "You pick up the Insect Plate$"

EarthPlate_Altar_Text_0:
# 56 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "There is a plate with an ancient ground\n"
	.string "Pokémon inscribed on it$"

EarthPlate_Altar_Text_1:
# 64 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "Hippowdon retreats into the cave.$"

IronPlate_Alter_Text_0:
# 80 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "There is a plate with an ancient steel\n"
	.string "Pokémon inscribed on it$"

IronPlate_Alter_Text_1:
# 88 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "Orthworm retreats into the cave.$"

IronPlate_Alter_Text_2:
# 89 "data/maps/HiddenGrotto_LostPlates_1/scripts.pory"
	.string "You pick up the Iron Plate$"
