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
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 0, 1, 1, 0, 1, 0, 0
	setwildbattle SPECIES_ACCELGOR, 40, ITEM_INSECT_PLATE
	call StartPlateBattle
	msgbox InsectPlate_Altar_Text_3
	msgbox InsectPlate_Altar_Text_4
	giveitem ITEM_INSECT_PLATE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_INSECT_PLATE_FOUND
	clearflag FLAG_CANT_CATCH_MON
	call IncrementNumber_PlatesFound
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_INSECT_PLATE
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
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
	setwildbattle SPECIES_GIGALITH, 40, ITEM_STONE_PLATE
	call StartPlateBattle
	msgbox StonePlate_Altar_Text_1
	msgbox StonePlate_Altar_Text_2
	giveitem ITEM_STONE_PLATE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_ROCK_PLATE_FOUND
	clearflag FLAG_CANT_CATCH_MON
	call IncrementNumber_PlatesFound
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_STONE_PLATE
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
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
	setwildbattle SPECIES_HIPPOWDON, 40, ITEM_EARTH_PLATE
	call StartPlateBattle
	msgbox EarthPlate_Altar_Text_1
	msgbox EarthPlate_Altar_Text_2
	giveitem ITEM_EARTH_PLATE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_EARTH_PLATE_FOUND
	clearflag FLAG_CANT_CATCH_MON
	call IncrementNumber_PlatesFound
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_EARTH_PLATE
	goto EarthPlate_Altar_1


IronPlate_Altar::
	lock
	goto_if_unset FLAG_IRON_PLATE_FOUND, IronPlate_Altar_2
IronPlate_Altar_1:
	goto_if_set FLAG_IRON_PLATE_FOUND, IronPlate_Altar_5
IronPlate_Altar_4:
	release
	return

IronPlate_Altar_2:
	msgbox IronPlate_Altar_Text_0
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq IronPlate_Altar_7
	goto IronPlate_Altar_1

IronPlate_Altar_5:
	msgbox IronPlate_Altar_Text_3
	goto IronPlate_Altar_4

IronPlate_Altar_7:
	msgbox InsectPlate_Altar_Text_2
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 1, 1, 0, 0
	setwildbattle SPECIES_KLINKLANG, 40, ITEM_IRON_PLATE
	call StartPlateBattle
	msgbox IronPlate_Altar_Text_1
	msgbox IronPlate_Altar_Text_2
	giveitem ITEM_IRON_PLATE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_IRON_PLATE_FOUND
	clearflag FLAG_CANT_CATCH_MON
	call IncrementNumber_PlatesFound
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_IRON_PLATE
	goto IronPlate_Altar_1


StartPlateBattle::
	dowildbattle
	return


IncrementNumber_PlatesFound::
	compare VAR_PLATES_FOUND, 19
	goto_if_eq IncrementNumber_PlatesFound_2
IncrementNumber_PlatesFound_1:
	compare VAR_PLATES_FOUND, 18
	goto_if_eq IncrementNumber_PlatesFound_5
IncrementNumber_PlatesFound_4:
	compare VAR_PLATES_FOUND, 17
	goto_if_eq IncrementNumber_PlatesFound_8
IncrementNumber_PlatesFound_7:
	compare VAR_PLATES_FOUND, 16
	goto_if_eq IncrementNumber_PlatesFound_11
IncrementNumber_PlatesFound_10:
	compare VAR_PLATES_FOUND, 15
	goto_if_eq IncrementNumber_PlatesFound_14
IncrementNumber_PlatesFound_13:
	compare VAR_PLATES_FOUND, 14
	goto_if_eq IncrementNumber_PlatesFound_17
IncrementNumber_PlatesFound_16:
	compare VAR_PLATES_FOUND, 13
	goto_if_eq IncrementNumber_PlatesFound_20
IncrementNumber_PlatesFound_19:
	compare VAR_PLATES_FOUND, 12
	goto_if_eq IncrementNumber_PlatesFound_23
IncrementNumber_PlatesFound_22:
	compare VAR_PLATES_FOUND, 11
	goto_if_eq IncrementNumber_PlatesFound_26
IncrementNumber_PlatesFound_25:
	compare VAR_PLATES_FOUND, 10
	goto_if_eq IncrementNumber_PlatesFound_29
IncrementNumber_PlatesFound_28:
	compare VAR_PLATES_FOUND, 9
	goto_if_eq IncrementNumber_PlatesFound_32
IncrementNumber_PlatesFound_31:
	compare VAR_PLATES_FOUND, 8
	goto_if_eq IncrementNumber_PlatesFound_35
IncrementNumber_PlatesFound_34:
	compare VAR_PLATES_FOUND, 7
	goto_if_eq IncrementNumber_PlatesFound_38
IncrementNumber_PlatesFound_37:
	compare VAR_PLATES_FOUND, 6
	goto_if_eq IncrementNumber_PlatesFound_41
IncrementNumber_PlatesFound_40:
	compare VAR_PLATES_FOUND, 5
	goto_if_eq IncrementNumber_PlatesFound_44
IncrementNumber_PlatesFound_43:
	compare VAR_PLATES_FOUND, 4
	goto_if_eq IncrementNumber_PlatesFound_47
IncrementNumber_PlatesFound_46:
	compare VAR_PLATES_FOUND, 3
	goto_if_eq IncrementNumber_PlatesFound_50
IncrementNumber_PlatesFound_49:
	compare VAR_PLATES_FOUND, 2
	goto_if_eq IncrementNumber_PlatesFound_53
IncrementNumber_PlatesFound_52:
	compare VAR_PLATES_FOUND, 1
	goto_if_eq IncrementNumber_PlatesFound_56
IncrementNumber_PlatesFound_55:
	compare VAR_PLATES_FOUND, 0
	goto_if_eq IncrementNumber_PlatesFound_58
	return

IncrementNumber_PlatesFound_2:
	setvar VAR_PLATES_FOUND, 20
	goto IncrementNumber_PlatesFound_1

IncrementNumber_PlatesFound_5:
	setvar VAR_PLATES_FOUND, 19
	goto IncrementNumber_PlatesFound_4

IncrementNumber_PlatesFound_8:
	setvar VAR_PLATES_FOUND, 18
	goto IncrementNumber_PlatesFound_7

IncrementNumber_PlatesFound_11:
	setvar VAR_PLATES_FOUND, 17
	goto IncrementNumber_PlatesFound_10

IncrementNumber_PlatesFound_14:
	setvar VAR_PLATES_FOUND, 16
	goto IncrementNumber_PlatesFound_13

IncrementNumber_PlatesFound_17:
	setvar VAR_PLATES_FOUND, 15
	goto IncrementNumber_PlatesFound_16

IncrementNumber_PlatesFound_20:
	setvar VAR_PLATES_FOUND, 14
	goto IncrementNumber_PlatesFound_19

IncrementNumber_PlatesFound_23:
	setvar VAR_PLATES_FOUND, 13
	goto IncrementNumber_PlatesFound_22

IncrementNumber_PlatesFound_26:
	setvar VAR_PLATES_FOUND, 12
	goto IncrementNumber_PlatesFound_25

IncrementNumber_PlatesFound_29:
	setvar VAR_PLATES_FOUND, 11
	goto IncrementNumber_PlatesFound_28

IncrementNumber_PlatesFound_32:
	setvar VAR_PLATES_FOUND, 10
	goto IncrementNumber_PlatesFound_31

IncrementNumber_PlatesFound_35:
	setvar VAR_PLATES_FOUND, 9
	goto IncrementNumber_PlatesFound_34

IncrementNumber_PlatesFound_38:
	setvar VAR_PLATES_FOUND, 8
	goto IncrementNumber_PlatesFound_37

IncrementNumber_PlatesFound_41:
	setvar VAR_PLATES_FOUND, 7
	goto IncrementNumber_PlatesFound_40

IncrementNumber_PlatesFound_44:
	setvar VAR_PLATES_FOUND, 6
	goto IncrementNumber_PlatesFound_43

IncrementNumber_PlatesFound_47:
	setvar VAR_PLATES_FOUND, 5
	goto IncrementNumber_PlatesFound_46

IncrementNumber_PlatesFound_50:
	setvar VAR_PLATES_FOUND, 4
	goto IncrementNumber_PlatesFound_49

IncrementNumber_PlatesFound_53:
	setvar VAR_PLATES_FOUND, 3
	goto IncrementNumber_PlatesFound_52

IncrementNumber_PlatesFound_56:
	setvar VAR_PLATES_FOUND, 2
	goto IncrementNumber_PlatesFound_55

IncrementNumber_PlatesFound_58:
	setvar VAR_PLATES_FOUND, 1
	return


InsectPlate_Altar_Text_0:
	.string "There is a plate with an ancient bug\n"
	.string "Pokémon inscribed on it$"

InsectPlate_Altar_Text_1:
	.string "Do you want to take it?$"

InsectPlate_Altar_Text_2:
	.string "As you reach for the plate A giant\n"
	.string "Pokémon jumps out$"

InsectPlate_Altar_Text_3:
	.string "Accelgor retreats into the cave.$"

InsectPlate_Altar_Text_4:
	.string "You pick up the Insect Plate$"

InsectPlate_Altar_Text_5:
	.string "You already have the insect plate$"

StonePlate_Altar_Text_0:
	.string "There is a plate with an ancient rock\n"
	.string "Pokémon inscribed on it$"

StonePlate_Altar_Text_1:
	.string "Gigalith retreats into the cave.$"

StonePlate_Altar_Text_2:
	.string "You pick up the Stone Plate$"

StonePlate_Altar_Text_3:
	.string "You already have the stone plate$"

EarthPlate_Altar_Text_0:
	.string "There is a plate with an ancient ground\n"
	.string "Pokémon inscribed on it$"

EarthPlate_Altar_Text_1:
	.string "Hippowdon retreats into the cave.$"

EarthPlate_Altar_Text_2:
	.string "You pick up the Earth Plate$"

EarthPlate_Altar_Text_3:
	.string "You already have the earth plate$"

IronPlate_Altar_Text_0:
	.string "There is a plate with an ancient steel\n"
	.string "Pokémon inscribed on it$"

IronPlate_Altar_Text_1:
	.string "Klinklang retreats into the cave.$"

IronPlate_Altar_Text_2:
	.string "You pick up the Iron Plate$"

IronPlate_Altar_Text_3:
	.string "You already have the Iron Plate$"
