LostPlates_MapScripts::
	.byte 0


InsectPlate_Altar::
	lock
	goto_if_unset FLAG_INSECT_PLATE_FOUND, InsectPlate_Altar_2
InsectPlate_Altar_1:
	goto_if_set FLAG_INSECT_PLATE_FOUND, InsectPlate_Altar_5
InsectPlate_Altar_4:
	release
	return

InsectPlate_Altar_2:
	msgbox InsectPlate_Altar_Text_0
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq InsectPlate_Altar_7
	goto InsectPlate_Altar_1

InsectPlate_Altar_5:
	msgbox InsectPlate_Altar_Text_5
	goto InsectPlate_Altar_4

InsectPlate_Altar_7:
	msgbox InsectPlate_Altar_Text_2
	settotemboost 1, 0, 1, 1, 0, 1, 0, 0
	setwildbattle SPECIES_ACCELGOR, 40, ITEM_INSECT_PLATE
	call StartPlateBattle
	msgbox InsectPlate_Altar_Text_3
	msgbox InsectPlate_Altar_Text_4
	giveitem ITEM_INSECT_PLATE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_INSECT_PLATE_FOUND
	goto InsectPlate_Altar_1


StonePlate_Altar::
	lock
	goto_if_unset FLAG_ROCK_PLATE_FOUND, StonePlate_Altar_2
StonePlate_Altar_1:
	goto_if_set FLAG_ROCK_PLATE_FOUND, StonePlate_Altar_5
StonePlate_Altar_4:
	release
	return

StonePlate_Altar_2:
	msgbox StonePlate_Altar_Text_0
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StonePlate_Altar_7
	goto StonePlate_Altar_1

StonePlate_Altar_5:
	msgbox StonePlate_Altar_Text_3
	goto StonePlate_Altar_4

StonePlate_Altar_7:
	msgbox InsectPlate_Altar_Text_2
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
	setwildbattle SPECIES_GIGALITH, 40, ITEM_STONE_PLATE
	call StartPlateBattle
	msgbox StonePlate_Altar_Text_1
	msgbox StonePlate_Altar_Text_2
	giveitem ITEM_STONE_PLATE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_ROCK_PLATE_FOUND
	goto StonePlate_Altar_1


EarthPlate_Altar::
	lock
	goto_if_unset FLAG_ROCK_PLATE_FOUND, EarthPlate_Altar_2
EarthPlate_Altar_1:
	goto_if_set FLAG_ROCK_PLATE_FOUND, EarthPlate_Altar_5
EarthPlate_Altar_4:
	release
	return

EarthPlate_Altar_2:
	msgbox EarthPlate_Altar_Text_0
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EarthPlate_Altar_7
	goto EarthPlate_Altar_1

EarthPlate_Altar_5:
	msgbox EarthPlate_Altar_Text_3
	goto EarthPlate_Altar_4

EarthPlate_Altar_7:
	msgbox InsectPlate_Altar_Text_2
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
	setwildbattle SPECIES_HIPPOWDON, 40, ITEM_EARTH_PLATE
	call StartPlateBattle
	msgbox EarthPlate_Altar_Text_1
	msgbox EarthPlate_Altar_Text_2
	giveitem ITEM_EARTH_PLATE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_EARTH_PLATE_FOUND
	goto EarthPlate_Altar_1


StartPlateBattle::
	dowildbattle
	return


InsectPlate_Altar_Text_0:
	.string "There is a plate with an ancient bug\n"
	.string "pokemon inscribed on it$"

InsectPlate_Altar_Text_1:
	.string "Do you want to take it?$"

InsectPlate_Altar_Text_2:
	.string "As you reach for the plate A giant\n"
	.string "Pokemon jumps out$"

InsectPlate_Altar_Text_3:
	.string "Accelgor retreats into the cave.$"

InsectPlate_Altar_Text_4:
	.string "You pick up the Insect Plate$"

InsectPlate_Altar_Text_5:
	.string "You already have the insect plate$"

StonePlate_Altar_Text_0:
	.string "There is a plate with an ancient rock\n"
	.string "pokemon inscribed on it$"

StonePlate_Altar_Text_1:
	.string "Gigalith retreats into the cave.$"

StonePlate_Altar_Text_2:
	.string "You pick up the Stone Plate$"

StonePlate_Altar_Text_3:
	.string "You already have the stone plate$"

EarthPlate_Altar_Text_0:
	.string "There is a plate with an ancient ground\n"
	.string "pokemon inscribed on it$"

EarthPlate_Altar_Text_1:
	.string "Hippowdon retreats into the cave.$"

EarthPlate_Altar_Text_2:
	.string "You pick up the Earth Plate$"

EarthPlate_Altar_Text_3:
	.string "You already have the earth plate$"
