OaksLab_MapScripts::
	.byte 0


Prof_EventScript::
	lockall
	msgbox Prof_EventScript_Text_0
	goto_if_set FLAG_CHOSEN_STARTER, Prof_EventScript_2
	msgbox Prof_EventScript_Text_2
Prof_EventScript_1:
	releaseall
	return

Prof_EventScript_2:
	msgbox Prof_EventScript_Text_1
	goto Prof_EventScript_1


StarterBallPokemon_Bulbasaur::
	lockall
	msgbox StarterBallPokemon_Bulbasaur_Text_0
	showmonpic SPECIES_BULBASAUR, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Bulbasaur_2
StarterBallPokemon_Bulbasaur_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Bulbasaur_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Bulbasaur_4
	goto StarterBallPokemon_Bulbasaur_1

StarterBallPokemon_Bulbasaur_4:
	givemon SPECIES_BULBASAUR, 5
	msgbox StarterBallPokemon_Bulbasaur_Text_2
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Bulbasaur_1


StarterBallPokemon_Charmander::
	lockall
	msgbox StarterBallPokemon_Charmander_Text_0
	showmonpic SPECIES_CHARMANDER, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Charmander_2
StarterBallPokemon_Charmander_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Charmander_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Charmander_4
	goto StarterBallPokemon_Charmander_1

StarterBallPokemon_Charmander_4:
	givemon SPECIES_CHARMANDER, 5
	msgbox StarterBallPokemon_Charmander_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Charmander_1


StarterBallPokemon_Squirtle::
	lockall
	msgbox StarterBallPokemon_Squirtle_Text_0
	showmonpic SPECIES_SQUIRTLE, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Squirtle_2
StarterBallPokemon_Squirtle_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Squirtle_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Squirtle_4
	goto StarterBallPokemon_Squirtle_1

StarterBallPokemon_Squirtle_4:
	givemon SPECIES_SQUIRTLE, 5
	msgbox StarterBallPokemon_Squirtle_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Squirtle_1


StarterBallPokemon_Pikachu::
	lockall
	msgbox StarterBallPokemon_Pikachu_Text_0
	showmonpic SPECIES_PIKACHU, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Pikachu_2
StarterBallPokemon_Pikachu_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Pikachu_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Pikachu_4
	goto StarterBallPokemon_Pikachu_1

StarterBallPokemon_Pikachu_4:
	givemon SPECIES_PIKACHU, 5
	msgbox StarterBallPokemon_Pikachu_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Pikachu_1


StarterBallPokemon_Eevee::
	lockall
	msgbox StarterBallPokemon_Eevee_Text_0
	showmonpic SPECIES_EEVEE, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Eevee_2
StarterBallPokemon_Eevee_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Eevee_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Eevee_4
	goto StarterBallPokemon_Eevee_1

StarterBallPokemon_Eevee_4:
	givemon SPECIES_EEVEE, 5
	msgbox StarterBallPokemon_Eevee_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Eevee_1


StarterBallPokemon_Chikorita::
	lockall
	msgbox StarterBallPokemon_Chikorita_Text_0
	showmonpic SPECIES_CHIKORITA, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Chikorita_2
StarterBallPokemon_Chikorita_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Chikorita_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Chikorita_4
	goto StarterBallPokemon_Chikorita_1

StarterBallPokemon_Chikorita_4:
	givemon SPECIES_CHIKORITA, 5
	msgbox StarterBallPokemon_Chikorita_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Chikorita_1


StarterBallPokemon_Cyndaquil::
	lockall
	msgbox StarterBallPokemon_Cyndaquil_Text_0
	showmonpic SPECIES_CYNDAQUIL, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Cyndaquil_2
StarterBallPokemon_Cyndaquil_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Cyndaquil_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Cyndaquil_4
	goto StarterBallPokemon_Cyndaquil_1

StarterBallPokemon_Cyndaquil_4:
	givemon SPECIES_CYNDAQUIL, 5
	msgbox StarterBallPokemon_Cyndaquil_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Cyndaquil_1


StarterBallPokemon_Totodile::
	lockall
	msgbox StarterBallPokemon_Totodile_Text_0
	showmonpic SPECIES_TOTODILE, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Totodile_2
StarterBallPokemon_Totodile_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Totodile_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Totodile_4
	goto StarterBallPokemon_Totodile_1

StarterBallPokemon_Totodile_4:
	givemon SPECIES_TOTODILE, 5
	msgbox StarterBallPokemon_Totodile_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Totodile_1


StarterBallPokemon_Treecko::
	lockall
	msgbox StarterBallPokemon_Treecko_Text_0
	showmonpic SPECIES_TREECKO, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Treecko_2
StarterBallPokemon_Treecko_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Treecko_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Treecko_4
	goto StarterBallPokemon_Treecko_1

StarterBallPokemon_Treecko_4:
	givemon SPECIES_TREECKO, 5
	msgbox StarterBallPokemon_Treecko_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Treecko_1


StarterBallPokemon_Torchic::
	lockall
	msgbox StarterBallPokemon_Torchic_Text_0
	showmonpic SPECIES_TORCHIC, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Torchic_2
StarterBallPokemon_Torchic_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Torchic_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Torchic_4
	goto StarterBallPokemon_Torchic_1

StarterBallPokemon_Torchic_4:
	givemon SPECIES_TORCHIC, 5
	msgbox StarterBallPokemon_Torchic_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Torchic_1


StarterBallPokemon_Mudkip::
	lockall
	msgbox StarterBallPokemon_Mudkip_Text_0
	showmonpic SPECIES_MUDKIP, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Mudkip_2
StarterBallPokemon_Mudkip_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Mudkip_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Mudkip_4
	goto StarterBallPokemon_Mudkip_1

StarterBallPokemon_Mudkip_4:
	givemon SPECIES_MUDKIP, 5
	msgbox StarterBallPokemon_Mudkip_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Mudkip_1


StarterBallPokemon_Turtwig::
	lockall
	msgbox StarterBallPokemon_Turtwig_Text_0
	showmonpic SPECIES_TURTWIG, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Turtwig_2
StarterBallPokemon_Turtwig_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Turtwig_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Turtwig_4
	goto StarterBallPokemon_Turtwig_1

StarterBallPokemon_Turtwig_4:
	givemon SPECIES_TURTWIG, 5
	msgbox StarterBallPokemon_Turtwig_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Turtwig_1


StarterBallPokemon_Chimchar::
	lockall
	msgbox StarterBallPokemon_Chimchar_Text_0
	showmonpic SPECIES_CHIMCHAR, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Chimchar_2
StarterBallPokemon_Chimchar_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Chimchar_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Chimchar_4
	goto StarterBallPokemon_Chimchar_1

StarterBallPokemon_Chimchar_4:
	givemon SPECIES_CHIMCHAR, 5
	msgbox StarterBallPokemon_Chimchar_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Chimchar_1


StarterBallPokemon_Piplup::
	lockall
	msgbox StarterBallPokemon_Piplup_Text_0
	showmonpic SPECIES_PIPLUP, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Piplup_2
StarterBallPokemon_Piplup_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Piplup_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Piplup_4
	goto StarterBallPokemon_Piplup_1

StarterBallPokemon_Piplup_4:
	givemon SPECIES_PIPLUP, 5
	msgbox StarterBallPokemon_Piplup_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Piplup_1


StarterBallPokemon_Snivy::
	lockall
	msgbox StarterBallPokemon_Snivy_Text_0
	showmonpic SPECIES_SNIVY, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Snivy_2
StarterBallPokemon_Snivy_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Snivy_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Snivy_4
	goto StarterBallPokemon_Snivy_1

StarterBallPokemon_Snivy_4:
	givemon SPECIES_SNIVY, 5
	msgbox StarterBallPokemon_Snivy_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Snivy_1


StarterBallPokemon_Tepig::
	lockall
	msgbox StarterBallPokemon_Tepig_Text_0
	showmonpic SPECIES_TEPIG, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Tepig_2
StarterBallPokemon_Tepig_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Tepig_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Tepig_4
	goto StarterBallPokemon_Tepig_1

StarterBallPokemon_Tepig_4:
	givemon SPECIES_TEPIG, 5
	msgbox StarterBallPokemon_Tepig_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Tepig_1


StarterBallPokemon_Oshawott::
	lockall
	msgbox StarterBallPokemon_Oshawott_Text_0
	showmonpic SPECIES_OSHAWOTT, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Oshawott_2
StarterBallPokemon_Oshawott_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Oshawott_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Oshawott_4
	goto StarterBallPokemon_Oshawott_1

StarterBallPokemon_Oshawott_4:
	givemon SPECIES_OSHAWOTT, 5
	msgbox StarterBallPokemon_Oshawott_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Oshawott_1


StarterBallPokemon_Chespin::
	lockall
	msgbox StarterBallPokemon_Chespin_Text_0
	showmonpic SPECIES_CHESPIN, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Chespin_2
StarterBallPokemon_Chespin_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Chespin_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Chespin_4
	goto StarterBallPokemon_Chespin_1

StarterBallPokemon_Chespin_4:
	givemon SPECIES_CHESPIN, 5
	msgbox StarterBallPokemon_Chespin_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Chespin_1


StarterBallPokemon_Fennekin::
	lockall
	msgbox StarterBallPokemon_Fennekin_Text_0
	showmonpic SPECIES_FENNEKIN, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Fennekin_2
StarterBallPokemon_Fennekin_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Fennekin_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Fennekin_4
	goto StarterBallPokemon_Fennekin_1

StarterBallPokemon_Fennekin_4:
	givemon SPECIES_FENNEKIN, 5
	msgbox StarterBallPokemon_Fennekin_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Fennekin_1


StarterBallPokemon_Froakie::
	lockall
	msgbox StarterBallPokemon_Froakie_Text_0
	showmonpic SPECIES_FROAKIE, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Froakie_2
StarterBallPokemon_Froakie_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Froakie_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Froakie_4
	goto StarterBallPokemon_Froakie_1

StarterBallPokemon_Froakie_4:
	givemon SPECIES_FROAKIE, 5
	msgbox StarterBallPokemon_Froakie_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Froakie_1


StarterBallPokemon_Rowlet::
	lockall
	msgbox StarterBallPokemon_Rowlet_Text_0
	showmonpic SPECIES_ROWLET, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Rowlet_2
StarterBallPokemon_Rowlet_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Rowlet_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Rowlet_4
	goto StarterBallPokemon_Rowlet_1

StarterBallPokemon_Rowlet_4:
	givemon SPECIES_ROWLET, 5
	msgbox StarterBallPokemon_Rowlet_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Rowlet_1


StarterBallPokemon_Litten::
	lockall
	msgbox StarterBallPokemon_Litten_Text_0
	showmonpic SPECIES_LITTEN, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Litten_2
StarterBallPokemon_Litten_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Litten_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Litten_4
	goto StarterBallPokemon_Litten_1

StarterBallPokemon_Litten_4:
	givemon SPECIES_LITTEN, 5
	msgbox StarterBallPokemon_Litten_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Litten_1


StarterBallPokemon_Popplio::
	lockall
	msgbox StarterBallPokemon_Popplio_Text_0
	showmonpic SPECIES_POPPLIO, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Popplio_2
StarterBallPokemon_Popplio_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Popplio_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Popplio_4
	goto StarterBallPokemon_Popplio_1

StarterBallPokemon_Popplio_4:
	givemon SPECIES_POPPLIO, 5
	msgbox StarterBallPokemon_Popplio_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Popplio_1


StarterBallPokemon_Grookey::
	lockall
	msgbox StarterBallPokemon_Grookey_Text_0
	showmonpic SPECIES_GROOKEY, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Grookey_2
StarterBallPokemon_Grookey_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Grookey_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Grookey_4
	goto StarterBallPokemon_Grookey_1

StarterBallPokemon_Grookey_4:
	givemon SPECIES_GROOKEY, 5
	msgbox StarterBallPokemon_Grookey_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Grookey_1


StarterBallPokemon_Scorbunny::
	lockall
	msgbox StarterBallPokemon_Scorbunny_Text_0
	showmonpic SPECIES_SCORBUNNY, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Scorbunny_2
StarterBallPokemon_Scorbunny_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Scorbunny_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Scorbunny_4
	goto StarterBallPokemon_Scorbunny_1

StarterBallPokemon_Scorbunny_4:
	givemon SPECIES_SCORBUNNY, 5
	msgbox StarterBallPokemon_Scorbunny_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Scorbunny_1


StarterBallPokemon_Sobble::
	lockall
	msgbox StarterBallPokemon_Sobble_Text_0
	showmonpic SPECIES_SOBBLE, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Sobble_2
StarterBallPokemon_Sobble_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Sobble_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Sobble_4
	goto StarterBallPokemon_Sobble_1

StarterBallPokemon_Sobble_4:
	givemon SPECIES_SOBBLE, 5
	msgbox StarterBallPokemon_Sobble_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Sobble_1


StarterBallPokemon_Sprigatito::
	lockall
	msgbox StarterBallPokemon_Sprigatito_Text_0
	showmonpic SPECIES_SPRIGATITO, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Sprigatito_2
StarterBallPokemon_Sprigatito_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Sprigatito_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Sprigatito_4
	goto StarterBallPokemon_Sprigatito_1

StarterBallPokemon_Sprigatito_4:
	givemon SPECIES_SPRIGATITO, 5
	msgbox StarterBallPokemon_Sprigatito_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Sprigatito_1


StarterBallPokemon_Fuecoco::
	lockall
	msgbox StarterBallPokemon_Fuecoco_Text_0
	showmonpic SPECIES_FUECOCO, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Fuecoco_2
StarterBallPokemon_Fuecoco_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Fuecoco_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Fuecoco_4
	goto StarterBallPokemon_Fuecoco_1

StarterBallPokemon_Fuecoco_4:
	givemon SPECIES_FUECOCO, 5
	msgbox StarterBallPokemon_Fuecoco_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Fuecoco_1


StarterBallPokemon_Quaxly::
	lockall
	msgbox StarterBallPokemon_Quaxly_Text_0
	showmonpic SPECIES_QUAXLY, 10, 0
	goto_if_unset FLAG_CHOSEN_STARTER, StarterBallPokemon_Quaxly_2
StarterBallPokemon_Quaxly_1:
	hidemonpic
	releaseall
	return

StarterBallPokemon_Quaxly_2:
	msgbox StarterBallPokemon_Bulbasaur_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq StarterBallPokemon_Quaxly_4
	goto StarterBallPokemon_Quaxly_1

StarterBallPokemon_Quaxly_4:
	givemon SPECIES_QUAXLY, 5
	msgbox StarterBallPokemon_Quaxly_Text_1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_CHOSEN_STARTER
	goto StarterBallPokemon_Quaxly_1


Prof_EventScript_Text_0:
	.string "Welcome to my lab!$"

Prof_EventScript_Text_1:
	.string "Good luck in your journey$"

Prof_EventScript_Text_2:
	.string "Pick a Pokemon and start your\n"
	.string "adventure!$"

StarterBallPokemon_Bulbasaur_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Bulbasaur!$"

StarterBallPokemon_Bulbasaur_Text_1:
	.string "Take one?$"

StarterBallPokemon_Bulbasaur_Text_2:
	.string "You recieved Bulbasaur!$"

StarterBallPokemon_Charmander_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Charmander!$"

StarterBallPokemon_Charmander_Text_1:
	.string "You received Charmander!$"

StarterBallPokemon_Squirtle_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Squirtle!$"

StarterBallPokemon_Squirtle_Text_1:
	.string "You received Squirtle!$"

StarterBallPokemon_Pikachu_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Pikachu!$"

StarterBallPokemon_Pikachu_Text_1:
	.string "You received Pikachu!$"

StarterBallPokemon_Eevee_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Eevee!$"

StarterBallPokemon_Eevee_Text_1:
	.string "You received Eevee!$"

StarterBallPokemon_Chikorita_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Chikorita!$"

StarterBallPokemon_Chikorita_Text_1:
	.string "You received Chikorita!$"

StarterBallPokemon_Cyndaquil_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Cyndaquil!$"

StarterBallPokemon_Cyndaquil_Text_1:
	.string "You received Cyndaquil!$"

StarterBallPokemon_Totodile_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Totodile!$"

StarterBallPokemon_Totodile_Text_1:
	.string "You received Totodile!$"

StarterBallPokemon_Treecko_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Treecko!$"

StarterBallPokemon_Treecko_Text_1:
	.string "You received Treecko!$"

StarterBallPokemon_Torchic_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Torchic!$"

StarterBallPokemon_Torchic_Text_1:
	.string "You received Torchic!$"

StarterBallPokemon_Mudkip_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Mudkip!$"

StarterBallPokemon_Mudkip_Text_1:
	.string "You received Mudkip!$"

StarterBallPokemon_Turtwig_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Turtwig!$"

StarterBallPokemon_Turtwig_Text_1:
	.string "You received Turtwig!$"

StarterBallPokemon_Chimchar_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Chimchar!$"

StarterBallPokemon_Chimchar_Text_1:
	.string "You received Chimchar!$"

StarterBallPokemon_Piplup_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Piplup!$"

StarterBallPokemon_Piplup_Text_1:
	.string "You received Piplup!$"

StarterBallPokemon_Snivy_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Snivy!$"

StarterBallPokemon_Snivy_Text_1:
	.string "You received Snivy!$"

StarterBallPokemon_Tepig_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Tepig!$"

StarterBallPokemon_Tepig_Text_1:
	.string "You received Tepig!$"

StarterBallPokemon_Oshawott_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Oshawott!$"

StarterBallPokemon_Oshawott_Text_1:
	.string "You received Oshawott!$"

StarterBallPokemon_Chespin_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Chespin!$"

StarterBallPokemon_Chespin_Text_1:
	.string "You received Chespin!$"

StarterBallPokemon_Fennekin_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Fennekin!$"

StarterBallPokemon_Fennekin_Text_1:
	.string "You received Fennekin!$"

StarterBallPokemon_Froakie_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Froakie!$"

StarterBallPokemon_Froakie_Text_1:
	.string "You received Froakie!$"

StarterBallPokemon_Rowlet_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Rowlet!$"

StarterBallPokemon_Rowlet_Text_1:
	.string "You received Rowlet!$"

StarterBallPokemon_Litten_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Litten!$"

StarterBallPokemon_Litten_Text_1:
	.string "You received Litten!$"

StarterBallPokemon_Popplio_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Popplio!$"

StarterBallPokemon_Popplio_Text_1:
	.string "You received Popplio!$"

StarterBallPokemon_Grookey_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Grookey!$"

StarterBallPokemon_Grookey_Text_1:
	.string "You received Grookey!$"

StarterBallPokemon_Scorbunny_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Scorbunny!$"

StarterBallPokemon_Scorbunny_Text_1:
	.string "You received Scorbunny!$"

StarterBallPokemon_Sobble_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Sobble!$"

StarterBallPokemon_Sobble_Text_1:
	.string "You received Sobble!$"

StarterBallPokemon_Sprigatito_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Sprigatito!$"

StarterBallPokemon_Sprigatito_Text_1:
	.string "You received Sprigatito!$"

StarterBallPokemon_Fuecoco_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Fuecoco!$"

StarterBallPokemon_Fuecoco_Text_1:
	.string "You received Fuecoco!$"

StarterBallPokemon_Quaxly_Text_0:
	.string "You see a pile of Pokeballs containing\n"
	.string "Quaxly!$"

StarterBallPokemon_Quaxly_Text_1:
	.string "You received Quaxly!$"
