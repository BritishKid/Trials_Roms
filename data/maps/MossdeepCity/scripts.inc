MossdeepCity_MapScripts::
# 2 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
	return


SwampTown_KingsRock_Boy::
# 8 "data/maps/MossdeepCity/scripts.pory"
	lock
# 9 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 10 "data/maps/MossdeepCity/scripts.pory"
	msgbox SwampTown_KingsRock_Boy_Text_0
# 11 "data/maps/MossdeepCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_KINGS_ROCK, SwampTown_KingsRock_Boy_2
SwampTown_KingsRock_Boy_1:
# 16 "data/maps/MossdeepCity/scripts.pory"
	release
	return

SwampTown_KingsRock_Boy_2:
# 12 "data/maps/MossdeepCity/scripts.pory"
	msgbox SwampTown_KingsRock_Boy_Text_1
# 13 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 14 "data/maps/MossdeepCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto SwampTown_KingsRock_Boy_1


SwampTown_NudgeTowardsRockSmash::
# 20 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 21 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 22 "data/maps/MossdeepCity/scripts.pory"
	msgbox SwampTown_NudgeTowardsRockSmash_Text_0
# 23 "data/maps/MossdeepCity/scripts.pory"
	releaseall
	return


SwampTown_KingsRock_Boy_Text_0:
# 10 "data/maps/MossdeepCity/scripts.pory"
	.string "This is the one place in Triver you can\n"
	.string "get King's Rocks$"

SwampTown_KingsRock_Boy_Text_1:
# 12 "data/maps/MossdeepCity/scripts.pory"
	.string "Here have this one$"

SwampTown_NudgeTowardsRockSmash_Text_0:
# 22 "data/maps/MossdeepCity/scripts.pory"
	.string "There is a karate man in that house who\n"
	.string "says he can teach Pokémon to smash\l"
	.string "rocks. That must be a very strong move!$"
