PlayersBedroom_MapScripts::
	.byte 0

ShowPokemonChoiceOnScreen1::
	// random NUM_SPECIES
	// setvar VAR_LEFT_POKEMON, NUM_SPECIES
	// random NUM_SPECIES
	// setvar VAR_RIGHT_POKEMON, NUM_SPECIES
	showmonpic SPECIES_INKAY, 5, 9
	showmonpic2 SPECIES_CHARMANDER, 18, 9
 	setvar VAR_GAME_STATE, 1
	return

RemovePokemonChoiceOnScreenLeft::
	hidemonpic
	hidemonpic2
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_INKAY 5
	setvar VAR_GAME_STATE, 2
	return

RemovePokemonChoiceOnScreenRight::
	hidemonpic
	hidemonpic2
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_CHARMANDER 5
	setvar VAR_GAME_STATE, 2
	return
