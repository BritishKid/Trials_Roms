MossdeepCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MossdeepCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_MOSSDEEP_CITY
	return


SwampTown_KingsRock_Boy::
	lock
	faceplayer
	msgbox SwampTown_KingsRock_Boy_Text_0
	goto_if_unset FLAG_RECEIVED_KINGS_ROCK, SwampTown_KingsRock_Boy_2
SwampTown_KingsRock_Boy_1:
	release
	return

SwampTown_KingsRock_Boy_2:
	msgbox SwampTown_KingsRock_Boy_Text_1
	giveitem ITEM_KINGS_ROCK
	playfanfare MUS_OBTAIN_ITEM
	goto SwampTown_KingsRock_Boy_1


SwampTown_NudgeTowardsRockSmash::
	lockall
	faceplayer
	msgbox SwampTown_NudgeTowardsRockSmash_Text_0
	releaseall
	return


SwampTown_KingsRock_Boy_Text_0:
	.string "This is the one place in Triver you can\n"
	.string "get King's Rocks$"

SwampTown_KingsRock_Boy_Text_1:
	.string "Here have this one$"

SwampTown_NudgeTowardsRockSmash_Text_0:
	.string "There is a karate man in that house who\n"
	.string "says he can teach Pokémon to smash\l"
	.string "rocks. That must be a very strong move!$"
