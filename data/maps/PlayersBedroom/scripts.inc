# 1 "data/maps/PlayersBedroom/scripts.pory"
PlayersBedroom_MapScripts::
# 2 "data/maps/PlayersBedroom/scripts.pory"
	.byte 0
# 3 "data/maps/PlayersBedroom/scripts.pory"

# 4 "data/maps/PlayersBedroom/scripts.pory"
ShowPokemonChoiceOnScreen1::
# 5 "data/maps/PlayersBedroom/scripts.pory"
	showmonpic SPECIES_INKAY, 5, 9
# 6 "data/maps/PlayersBedroom/scripts.pory"
	showmonpic2 SPECIES_CHARMANDER, 18, 9
# 7 "data/maps/PlayersBedroom/scripts.pory"
 	setvar VAR_GAME_STATE, 1
# 8 "data/maps/PlayersBedroom/scripts.pory"
	return
# 9 "data/maps/PlayersBedroom/scripts.pory"

# 10 "data/maps/PlayersBedroom/scripts.pory"
RemovePokemonChoiceOnScreenLeft::
# 11 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
# 12 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic2
# 13 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 14 "data/maps/PlayersBedroom/scripts.pory"
	givemon SPECIES_INKAY 5
# 15 "data/maps/PlayersBedroom/scripts.pory"
	setvar VAR_GAME_STATE, 2
# 16 "data/maps/PlayersBedroom/scripts.pory"
	return
# 17 "data/maps/PlayersBedroom/scripts.pory"

# 18 "data/maps/PlayersBedroom/scripts.pory"
RemovePokemonChoiceOnScreenRight::
# 19 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
# 20 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic2
# 21 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 22 "data/maps/PlayersBedroom/scripts.pory"
	givemon SPECIES_CHARMANDER 5
# 23 "data/maps/PlayersBedroom/scripts.pory"
	setvar VAR_GAME_STATE, 2
# 24 "data/maps/PlayersBedroom/scripts.pory"
	return
