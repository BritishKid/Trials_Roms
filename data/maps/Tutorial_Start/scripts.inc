Tutorial_Start_MapScripts::
	.byte 0


ChooseStarterPokemon1::
# 5 "data/maps/Tutorial_Start/scripts.pory"
	lockall
# 6 "data/maps/Tutorial_Start/scripts.pory"
	goto_if_set FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon1_2
ChooseStarterPokemon1_1:
# 9 "data/maps/Tutorial_Start/scripts.pory"
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon1_5
ChooseStarterPokemon1_4:
# 23 "data/maps/Tutorial_Start/scripts.pory"
	releaseall
	return

ChooseStarterPokemon1_2:
# 7 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon1_Text_0
	goto ChooseStarterPokemon1_1

ChooseStarterPokemon1_5:
# 10 "data/maps/Tutorial_Start/scripts.pory"
	showmonpic SPECIES_INKAY, 10, 3
# 11 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon1_Text_1, MSGBOX_YESNO
# 12 "data/maps/Tutorial_Start/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ChooseStarterPokemon1_8
ChooseStarterPokemon1_7:
# 15 "data/maps/Tutorial_Start/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChooseStarterPokemon1_11
ChooseStarterPokemon1_10:
# 21 "data/maps/Tutorial_Start/scripts.pory"
	hidemonpic
	goto ChooseStarterPokemon1_4

ChooseStarterPokemon1_8:
# 13 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon1_Text_2
	goto ChooseStarterPokemon1_7

ChooseStarterPokemon1_11:
# 16 "data/maps/Tutorial_Start/scripts.pory"
	givemon SPECIES_INKAY, 5, ITEM_ORAN_BERRY
# 17 "data/maps/Tutorial_Start/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/Tutorial_Start/scripts.pory"
	setflag FLAG_RECIEVED_LIGHT_BALL
# 19 "data/maps/Tutorial_Start/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
	goto ChooseStarterPokemon1_10


ChooseStarterPokemon2::
# 27 "data/maps/Tutorial_Start/scripts.pory"
	lockall
# 28 "data/maps/Tutorial_Start/scripts.pory"
	goto_if_set FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon2_2
ChooseStarterPokemon2_1:
# 31 "data/maps/Tutorial_Start/scripts.pory"
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon2_5
ChooseStarterPokemon2_4:
# 45 "data/maps/Tutorial_Start/scripts.pory"
	releaseall
	return

ChooseStarterPokemon2_2:
# 29 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon1_Text_0
	goto ChooseStarterPokemon2_1

ChooseStarterPokemon2_5:
# 32 "data/maps/Tutorial_Start/scripts.pory"
	showmonpic SPECIES_SABLEYE, 10, 3
# 33 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon2_Text_0, MSGBOX_YESNO
# 34 "data/maps/Tutorial_Start/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ChooseStarterPokemon2_8
ChooseStarterPokemon2_7:
# 37 "data/maps/Tutorial_Start/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChooseStarterPokemon2_11
ChooseStarterPokemon2_10:
# 43 "data/maps/Tutorial_Start/scripts.pory"
	hidemonpic
	goto ChooseStarterPokemon2_4

ChooseStarterPokemon2_8:
# 35 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon1_Text_2
	goto ChooseStarterPokemon2_7

ChooseStarterPokemon2_11:
# 38 "data/maps/Tutorial_Start/scripts.pory"
	givemon SPECIES_SABLEYE, 5, ITEM_ORAN_BERRY
# 39 "data/maps/Tutorial_Start/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/Tutorial_Start/scripts.pory"
	setflag FLAG_RECIEVED_LIGHT_BALL
# 41 "data/maps/Tutorial_Start/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
	goto ChooseStarterPokemon2_10


ChooseStarterPokemon3::
# 49 "data/maps/Tutorial_Start/scripts.pory"
	lockall
# 50 "data/maps/Tutorial_Start/scripts.pory"
	goto_if_set FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon3_2
ChooseStarterPokemon3_1:
# 53 "data/maps/Tutorial_Start/scripts.pory"
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon3_5
ChooseStarterPokemon3_4:
# 67 "data/maps/Tutorial_Start/scripts.pory"
	releaseall
	return

ChooseStarterPokemon3_2:
# 51 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon1_Text_0
	goto ChooseStarterPokemon3_1

ChooseStarterPokemon3_5:
# 54 "data/maps/Tutorial_Start/scripts.pory"
	showmonpic SPECIES_STEELIX, 10, 3
# 55 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon3_Text_0, MSGBOX_YESNO
# 56 "data/maps/Tutorial_Start/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ChooseStarterPokemon3_8
ChooseStarterPokemon3_7:
# 59 "data/maps/Tutorial_Start/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ChooseStarterPokemon3_11
ChooseStarterPokemon3_10:
# 65 "data/maps/Tutorial_Start/scripts.pory"
	hidemonpic
	goto ChooseStarterPokemon3_4

ChooseStarterPokemon3_8:
# 57 "data/maps/Tutorial_Start/scripts.pory"
	msgbox ChooseStarterPokemon1_Text_2
	goto ChooseStarterPokemon3_7

ChooseStarterPokemon3_11:
# 60 "data/maps/Tutorial_Start/scripts.pory"
	givemon SPECIES_STEELIX, 5, ITEM_ORAN_BERRY
# 61 "data/maps/Tutorial_Start/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/Tutorial_Start/scripts.pory"
	setflag FLAG_RECIEVED_LIGHT_BALL
# 63 "data/maps/Tutorial_Start/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
	goto ChooseStarterPokemon3_10


GiveTrainerItemFromPokeball::
# 71 "data/maps/Tutorial_Start/scripts.pory"
	finditem ITEM_POKE_BALL, 5
	return


GiveHiddenItem::
# 75 "data/maps/Tutorial_Start/scripts.pory"
	lockall
# 76 "data/maps/Tutorial_Start/scripts.pory"
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, GiveHiddenItem_2
GiveHiddenItem_1:
# 82 "data/maps/Tutorial_Start/scripts.pory"
	releaseall
	return

GiveHiddenItem_2:
# 77 "data/maps/Tutorial_Start/scripts.pory"
	msgbox GiveHiddenItem_Text_0
# 78 "data/maps/Tutorial_Start/scripts.pory"
	giveitem ITEM_POTION, 2
# 79 "data/maps/Tutorial_Start/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/Tutorial_Start/scripts.pory"
	setflag FLAG_RECIEVED_LIGHT_BALL
	goto GiveHiddenItem_1


ChooseStarterPokemon1_Text_0:
# 7 "data/maps/Tutorial_Start/scripts.pory"
	.string "Don't be greedy you already chose your\n"
	.string "starter$"

ChooseStarterPokemon1_Text_1:
# 11 "data/maps/Tutorial_Start/scripts.pory"
	.string "Do you want to choose Inkay$"

ChooseStarterPokemon1_Text_2:
# 13 "data/maps/Tutorial_Start/scripts.pory"
	.string "I'll choose another Pokémon$"

ChooseStarterPokemon2_Text_0:
# 33 "data/maps/Tutorial_Start/scripts.pory"
	.string "Do you want to choose Sableye$"

ChooseStarterPokemon3_Text_0:
# 55 "data/maps/Tutorial_Start/scripts.pory"
	.string "Do you want to choose Steelix$"

GiveHiddenItem_Text_0:
# 77 "data/maps/Tutorial_Start/scripts.pory"
	.string "Hey i've something hidden in the rocks$"
