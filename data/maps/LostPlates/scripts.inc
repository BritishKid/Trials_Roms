LostPlates_MapScripts::
	.byte 0


InsectPlate_Altar::
# 4 "data/maps/LostPlates/scripts.pory"
	lock
# 5 "data/maps/LostPlates/scripts.pory"
	goto_if_unset FLAG_INSECT_PLATE_FOUND, InsectPlate_Altar_2
InsectPlate_Altar_1:
# 24 "data/maps/LostPlates/scripts.pory"
	goto_if_set FLAG_INSECT_PLATE_FOUND, InsectPlate_Altar_5
InsectPlate_Altar_4:
# 27 "data/maps/LostPlates/scripts.pory"
	release
	return

InsectPlate_Altar_2:
# 6 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_0
# 7 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
# 8 "data/maps/LostPlates/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq InsectPlate_Altar_7
	goto InsectPlate_Altar_1

InsectPlate_Altar_5:
# 25 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_5
	goto InsectPlate_Altar_4

InsectPlate_Altar_7:
# 9 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_2
# 10 "data/maps/LostPlates/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 11 "data/maps/LostPlates/scripts.pory"
	settotemboost 1, 0, 1, 1, 0, 1, 0, 0
# 12 "data/maps/LostPlates/scripts.pory"
	setwildbattle SPECIES_ACCELGOR, 40, ITEM_INSECT_PLATE
# 13 "data/maps/LostPlates/scripts.pory"
	call StartPlateBattle
# 14 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_3
# 15 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_4
# 16 "data/maps/LostPlates/scripts.pory"
	giveitem ITEM_INSECT_PLATE
# 17 "data/maps/LostPlates/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/LostPlates/scripts.pory"
	setflag FLAG_INSECT_PLATE_FOUND
# 19 "data/maps/LostPlates/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 20 "data/maps/LostPlates/scripts.pory"
	call IncrementNumber_PlatesFound
# 21 "data/maps/LostPlates/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_INSECT_PLATE
	goto InsectPlate_Altar_1


StonePlate_Altar::
# 31 "data/maps/LostPlates/scripts.pory"
	lock
# 32 "data/maps/LostPlates/scripts.pory"
	goto_if_unset FLAG_ROCK_PLATE_FOUND, StonePlate_Altar_2
StonePlate_Altar_1:
# 51 "data/maps/LostPlates/scripts.pory"
	goto_if_set FLAG_ROCK_PLATE_FOUND, StonePlate_Altar_5
StonePlate_Altar_4:
# 54 "data/maps/LostPlates/scripts.pory"
	release
	return

StonePlate_Altar_2:
# 33 "data/maps/LostPlates/scripts.pory"
	msgbox StonePlate_Altar_Text_0
# 34 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
# 35 "data/maps/LostPlates/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StonePlate_Altar_7
	goto StonePlate_Altar_1

StonePlate_Altar_5:
# 52 "data/maps/LostPlates/scripts.pory"
	msgbox StonePlate_Altar_Text_3
	goto StonePlate_Altar_4

StonePlate_Altar_7:
# 36 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_2
# 37 "data/maps/LostPlates/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 38 "data/maps/LostPlates/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
# 39 "data/maps/LostPlates/scripts.pory"
	setwildbattle SPECIES_GIGALITH, 40, ITEM_STONE_PLATE
# 40 "data/maps/LostPlates/scripts.pory"
	call StartPlateBattle
# 41 "data/maps/LostPlates/scripts.pory"
	msgbox StonePlate_Altar_Text_1
# 42 "data/maps/LostPlates/scripts.pory"
	msgbox StonePlate_Altar_Text_2
# 43 "data/maps/LostPlates/scripts.pory"
	giveitem ITEM_STONE_PLATE
# 44 "data/maps/LostPlates/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/LostPlates/scripts.pory"
	setflag FLAG_ROCK_PLATE_FOUND
# 46 "data/maps/LostPlates/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 47 "data/maps/LostPlates/scripts.pory"
	call IncrementNumber_PlatesFound
# 48 "data/maps/LostPlates/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_STONE_PLATE
	goto StonePlate_Altar_1


EarthPlate_Altar::
# 58 "data/maps/LostPlates/scripts.pory"
	lock
# 59 "data/maps/LostPlates/scripts.pory"
	goto_if_unset FLAG_ROCK_PLATE_FOUND, EarthPlate_Altar_2
EarthPlate_Altar_1:
# 78 "data/maps/LostPlates/scripts.pory"
	goto_if_set FLAG_ROCK_PLATE_FOUND, EarthPlate_Altar_5
EarthPlate_Altar_4:
# 81 "data/maps/LostPlates/scripts.pory"
	release
	return

EarthPlate_Altar_2:
# 60 "data/maps/LostPlates/scripts.pory"
	msgbox EarthPlate_Altar_Text_0
# 61 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
# 62 "data/maps/LostPlates/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EarthPlate_Altar_7
	goto EarthPlate_Altar_1

EarthPlate_Altar_5:
# 79 "data/maps/LostPlates/scripts.pory"
	msgbox EarthPlate_Altar_Text_3
	goto EarthPlate_Altar_4

EarthPlate_Altar_7:
# 63 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_2
# 64 "data/maps/LostPlates/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 65 "data/maps/LostPlates/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
# 66 "data/maps/LostPlates/scripts.pory"
	setwildbattle SPECIES_HIPPOWDON, 40, ITEM_EARTH_PLATE
# 67 "data/maps/LostPlates/scripts.pory"
	call StartPlateBattle
# 68 "data/maps/LostPlates/scripts.pory"
	msgbox EarthPlate_Altar_Text_1
# 69 "data/maps/LostPlates/scripts.pory"
	msgbox EarthPlate_Altar_Text_2
# 70 "data/maps/LostPlates/scripts.pory"
	giveitem ITEM_EARTH_PLATE
# 71 "data/maps/LostPlates/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 72 "data/maps/LostPlates/scripts.pory"
	setflag FLAG_EARTH_PLATE_FOUND
# 73 "data/maps/LostPlates/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 74 "data/maps/LostPlates/scripts.pory"
	call IncrementNumber_PlatesFound
# 75 "data/maps/LostPlates/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_EARTH_PLATE
	goto EarthPlate_Altar_1


IronPlate_Altar::
# 86 "data/maps/LostPlates/scripts.pory"
	lock
# 87 "data/maps/LostPlates/scripts.pory"
	goto_if_unset FLAG_IRON_PLATE_FOUND, IronPlate_Altar_2
IronPlate_Altar_1:
# 106 "data/maps/LostPlates/scripts.pory"
	goto_if_set FLAG_IRON_PLATE_FOUND, IronPlate_Altar_5
IronPlate_Altar_4:
# 109 "data/maps/LostPlates/scripts.pory"
	release
	return

IronPlate_Altar_2:
# 88 "data/maps/LostPlates/scripts.pory"
	msgbox IronPlate_Altar_Text_0
# 89 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_1, MSGBOX_YESNO
# 90 "data/maps/LostPlates/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IronPlate_Altar_7
	goto IronPlate_Altar_1

IronPlate_Altar_5:
# 107 "data/maps/LostPlates/scripts.pory"
	msgbox IronPlate_Altar_Text_3
	goto IronPlate_Altar_4

IronPlate_Altar_7:
# 91 "data/maps/LostPlates/scripts.pory"
	msgbox InsectPlate_Altar_Text_2
# 92 "data/maps/LostPlates/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 93 "data/maps/LostPlates/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 0, 0
# 94 "data/maps/LostPlates/scripts.pory"
	setwildbattle SPECIES_KLINKLANG, 40, ITEM_IRON_PLATE
# 95 "data/maps/LostPlates/scripts.pory"
	call StartPlateBattle
# 96 "data/maps/LostPlates/scripts.pory"
	msgbox IronPlate_Altar_Text_1
# 97 "data/maps/LostPlates/scripts.pory"
	msgbox IronPlate_Altar_Text_2
# 98 "data/maps/LostPlates/scripts.pory"
	giveitem ITEM_IRON_PLATE
# 99 "data/maps/LostPlates/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/LostPlates/scripts.pory"
	setflag FLAG_IRON_PLATE_FOUND
# 101 "data/maps/LostPlates/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 102 "data/maps/LostPlates/scripts.pory"
	call IncrementNumber_PlatesFound
# 103 "data/maps/LostPlates/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_IRON_PLATE
	goto IronPlate_Altar_1


StartPlateBattle::
# 113 "data/maps/LostPlates/scripts.pory"
	dowildbattle
	return


IncrementNumber_PlatesFound::
# 117 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 19
	goto_if_eq IncrementNumber_PlatesFound_2
IncrementNumber_PlatesFound_1:
# 120 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 18
	goto_if_eq IncrementNumber_PlatesFound_5
IncrementNumber_PlatesFound_4:
# 123 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 17
	goto_if_eq IncrementNumber_PlatesFound_8
IncrementNumber_PlatesFound_7:
# 126 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 16
	goto_if_eq IncrementNumber_PlatesFound_11
IncrementNumber_PlatesFound_10:
# 129 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 15
	goto_if_eq IncrementNumber_PlatesFound_14
IncrementNumber_PlatesFound_13:
# 132 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 14
	goto_if_eq IncrementNumber_PlatesFound_17
IncrementNumber_PlatesFound_16:
# 135 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 13
	goto_if_eq IncrementNumber_PlatesFound_20
IncrementNumber_PlatesFound_19:
# 138 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 12
	goto_if_eq IncrementNumber_PlatesFound_23
IncrementNumber_PlatesFound_22:
# 141 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 11
	goto_if_eq IncrementNumber_PlatesFound_26
IncrementNumber_PlatesFound_25:
# 144 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 10
	goto_if_eq IncrementNumber_PlatesFound_29
IncrementNumber_PlatesFound_28:
# 147 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 9
	goto_if_eq IncrementNumber_PlatesFound_32
IncrementNumber_PlatesFound_31:
# 150 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 8
	goto_if_eq IncrementNumber_PlatesFound_35
IncrementNumber_PlatesFound_34:
# 153 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 7
	goto_if_eq IncrementNumber_PlatesFound_38
IncrementNumber_PlatesFound_37:
# 156 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 6
	goto_if_eq IncrementNumber_PlatesFound_41
IncrementNumber_PlatesFound_40:
# 159 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 5
	goto_if_eq IncrementNumber_PlatesFound_44
IncrementNumber_PlatesFound_43:
# 162 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 4
	goto_if_eq IncrementNumber_PlatesFound_47
IncrementNumber_PlatesFound_46:
# 165 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 3
	goto_if_eq IncrementNumber_PlatesFound_50
IncrementNumber_PlatesFound_49:
# 168 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 2
	goto_if_eq IncrementNumber_PlatesFound_53
IncrementNumber_PlatesFound_52:
# 171 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 1
	goto_if_eq IncrementNumber_PlatesFound_56
IncrementNumber_PlatesFound_55:
# 174 "data/maps/LostPlates/scripts.pory"
	compare VAR_PLATES_FOUND, 0
	goto_if_eq IncrementNumber_PlatesFound_58
	return

IncrementNumber_PlatesFound_2:
# 118 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 20
	goto IncrementNumber_PlatesFound_1

IncrementNumber_PlatesFound_5:
# 121 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 19
	goto IncrementNumber_PlatesFound_4

IncrementNumber_PlatesFound_8:
# 124 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 18
	goto IncrementNumber_PlatesFound_7

IncrementNumber_PlatesFound_11:
# 127 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 17
	goto IncrementNumber_PlatesFound_10

IncrementNumber_PlatesFound_14:
# 130 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 16
	goto IncrementNumber_PlatesFound_13

IncrementNumber_PlatesFound_17:
# 133 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 15
	goto IncrementNumber_PlatesFound_16

IncrementNumber_PlatesFound_20:
# 136 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 14
	goto IncrementNumber_PlatesFound_19

IncrementNumber_PlatesFound_23:
# 139 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 13
	goto IncrementNumber_PlatesFound_22

IncrementNumber_PlatesFound_26:
# 142 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 12
	goto IncrementNumber_PlatesFound_25

IncrementNumber_PlatesFound_29:
# 145 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 11
	goto IncrementNumber_PlatesFound_28

IncrementNumber_PlatesFound_32:
# 148 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 10
	goto IncrementNumber_PlatesFound_31

IncrementNumber_PlatesFound_35:
# 151 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 9
	goto IncrementNumber_PlatesFound_34

IncrementNumber_PlatesFound_38:
# 154 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 8
	goto IncrementNumber_PlatesFound_37

IncrementNumber_PlatesFound_41:
# 157 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 7
	goto IncrementNumber_PlatesFound_40

IncrementNumber_PlatesFound_44:
# 160 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 6
	goto IncrementNumber_PlatesFound_43

IncrementNumber_PlatesFound_47:
# 163 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 5
	goto IncrementNumber_PlatesFound_46

IncrementNumber_PlatesFound_50:
# 166 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 4
	goto IncrementNumber_PlatesFound_49

IncrementNumber_PlatesFound_53:
# 169 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 3
	goto IncrementNumber_PlatesFound_52

IncrementNumber_PlatesFound_56:
# 172 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 2
	goto IncrementNumber_PlatesFound_55

IncrementNumber_PlatesFound_58:
# 175 "data/maps/LostPlates/scripts.pory"
	setvar VAR_PLATES_FOUND, 1
	return


InsectPlate_Altar_Text_0:
# 6 "data/maps/LostPlates/scripts.pory"
	.string "There is a plate with an ancient bug\n"
	.string "Pokémon inscribed on it$"

InsectPlate_Altar_Text_1:
# 7 "data/maps/LostPlates/scripts.pory"
	.string "Do you want to take it?$"

InsectPlate_Altar_Text_2:
# 9 "data/maps/LostPlates/scripts.pory"
	.string "As you reach for the plate A giant\n"
	.string "Pokémon jumps out$"

InsectPlate_Altar_Text_3:
# 14 "data/maps/LostPlates/scripts.pory"
	.string "Accelgor retreats into the cave.$"

InsectPlate_Altar_Text_4:
# 15 "data/maps/LostPlates/scripts.pory"
	.string "You pick up the Insect Plate$"

InsectPlate_Altar_Text_5:
# 25 "data/maps/LostPlates/scripts.pory"
	.string "You already have the insect plate$"

StonePlate_Altar_Text_0:
# 33 "data/maps/LostPlates/scripts.pory"
	.string "There is a plate with an ancient rock\n"
	.string "Pokémon inscribed on it$"

StonePlate_Altar_Text_1:
# 41 "data/maps/LostPlates/scripts.pory"
	.string "Gigalith retreats into the cave.$"

StonePlate_Altar_Text_2:
# 42 "data/maps/LostPlates/scripts.pory"
	.string "You pick up the Stone Plate$"

StonePlate_Altar_Text_3:
# 52 "data/maps/LostPlates/scripts.pory"
	.string "You already have the stone plate$"

EarthPlate_Altar_Text_0:
# 60 "data/maps/LostPlates/scripts.pory"
	.string "There is a plate with an ancient ground\n"
	.string "Pokémon inscribed on it$"

EarthPlate_Altar_Text_1:
# 68 "data/maps/LostPlates/scripts.pory"
	.string "Hippowdon retreats into the cave.$"

EarthPlate_Altar_Text_2:
# 69 "data/maps/LostPlates/scripts.pory"
	.string "You pick up the Earth Plate$"

EarthPlate_Altar_Text_3:
# 79 "data/maps/LostPlates/scripts.pory"
	.string "You already have the earth plate$"

IronPlate_Altar_Text_0:
# 88 "data/maps/LostPlates/scripts.pory"
	.string "There is a plate with an ancient steel\n"
	.string "Pokémon inscribed on it$"

IronPlate_Altar_Text_1:
# 96 "data/maps/LostPlates/scripts.pory"
	.string "Klinklang retreats into the cave.$"

IronPlate_Altar_Text_2:
# 97 "data/maps/LostPlates/scripts.pory"
	.string "You pick up the Iron Plate$"

IronPlate_Altar_Text_3:
# 107 "data/maps/LostPlates/scripts.pory"
	.string "You already have the Iron Plate$"
