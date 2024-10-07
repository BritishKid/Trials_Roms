Tutorial_Start_MapScripts::
	.byte 0


ChooseStarterPokemon1::
	lockall
	goto_if_set FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon1_2
ChooseStarterPokemon1_1:
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon1_5
ChooseStarterPokemon1_4:
	releaseall
	return

ChooseStarterPokemon1_2:
	msgbox ChooseStarterPokemon1_Text_0
	goto ChooseStarterPokemon1_1

ChooseStarterPokemon1_5:
	showmonpic SPECIES_INKAY, 10, 3
	msgbox ChooseStarterPokemon1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ChooseStarterPokemon1_8
ChooseStarterPokemon1_7:
	compare VAR_RESULT, YES
	goto_if_eq ChooseStarterPokemon1_11
ChooseStarterPokemon1_10:
	hidemonpic
	goto ChooseStarterPokemon1_4

ChooseStarterPokemon1_8:
	msgbox ChooseStarterPokemon1_Text_2
	goto ChooseStarterPokemon1_7

ChooseStarterPokemon1_11:
	givemon SPECIES_INKAY, 5, ITEM_ORAN_BERRY
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECIEVED_LIGHT_BALL
	setvar VAR_ROUTE101_STATE, 1
	goto ChooseStarterPokemon1_10


ChooseStarterPokemon2::
	lockall
	goto_if_set FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon2_2
ChooseStarterPokemon2_1:
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon2_5
ChooseStarterPokemon2_4:
	releaseall
	return

ChooseStarterPokemon2_2:
	msgbox ChooseStarterPokemon1_Text_0
	goto ChooseStarterPokemon2_1

ChooseStarterPokemon2_5:
	showmonpic SPECIES_SABLEYE, 10, 3
	msgbox ChooseStarterPokemon2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ChooseStarterPokemon2_8
ChooseStarterPokemon2_7:
	compare VAR_RESULT, YES
	goto_if_eq ChooseStarterPokemon2_11
ChooseStarterPokemon2_10:
	hidemonpic
	goto ChooseStarterPokemon2_4

ChooseStarterPokemon2_8:
	msgbox ChooseStarterPokemon1_Text_2
	goto ChooseStarterPokemon2_7

ChooseStarterPokemon2_11:
	givemon SPECIES_SABLEYE, 5, ITEM_ORAN_BERRY
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECIEVED_LIGHT_BALL
	setvar VAR_ROUTE101_STATE, 2
	goto ChooseStarterPokemon2_10


ChooseStarterPokemon3::
	lockall
	goto_if_set FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon3_2
ChooseStarterPokemon3_1:
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, ChooseStarterPokemon3_5
ChooseStarterPokemon3_4:
	releaseall
	return

ChooseStarterPokemon3_2:
	msgbox ChooseStarterPokemon1_Text_0
	goto ChooseStarterPokemon3_1

ChooseStarterPokemon3_5:
	showmonpic SPECIES_STEELIX, 10, 3
	msgbox ChooseStarterPokemon3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ChooseStarterPokemon3_8
ChooseStarterPokemon3_7:
	compare VAR_RESULT, YES
	goto_if_eq ChooseStarterPokemon3_11
ChooseStarterPokemon3_10:
	hidemonpic
	goto ChooseStarterPokemon3_4

ChooseStarterPokemon3_8:
	msgbox ChooseStarterPokemon1_Text_2
	goto ChooseStarterPokemon3_7

ChooseStarterPokemon3_11:
	givemon SPECIES_STEELIX, 5, ITEM_ORAN_BERRY
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECIEVED_LIGHT_BALL
	setvar VAR_ROUTE101_STATE, 3
	goto ChooseStarterPokemon3_10


GiveTrainerItemFromPokeball::
	finditem ITEM_POKE_BALL, 5
	return


GiveHiddenItem::
	lockall
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, GiveHiddenItem_2
GiveHiddenItem_1:
	releaseall
	return

GiveHiddenItem_2:
	msgbox GiveHiddenItem_Text_0
	giveitem ITEM_POTION, 2
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECIEVED_LIGHT_BALL
	goto GiveHiddenItem_1


ChooseStarterPokemon1_Text_0:
	.string "Don't be greedy you already chose your\n"
	.string "starter$"

ChooseStarterPokemon1_Text_1:
	.string "Do you want to choose Inkay$"

ChooseStarterPokemon1_Text_2:
	.string "I'll choose another Pokémon$"

ChooseStarterPokemon2_Text_0:
	.string "Do you want to choose Sableye$"

ChooseStarterPokemon3_Text_0:
	.string "Do you want to choose Steelix$"

GiveHiddenItem_Text_0:
	.string "Hey i've something hidden in the rocks$"
