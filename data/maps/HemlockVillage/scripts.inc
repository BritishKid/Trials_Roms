HemlockVillage_MapScripts::
# 2 "data/maps/HemlockVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HemlockVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

HemlockVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/HemlockVillage/scripts.pory"
	setflag FLAG_VISITED_HEMLOCK_VILLAGE
	return


HemlockVillage_EventScript_CitySign::
# 8 "data/maps/HemlockVillage/scripts.pory"
	msgbox HemlockVillage_EventScript_CitySign_Text_0
	return


SwampTown_KingsRock_Boy::
# 12 "data/maps/HemlockVillage/scripts.pory"
	lockall
# 13 "data/maps/HemlockVillage/scripts.pory"
	faceplayer
# 14 "data/maps/HemlockVillage/scripts.pory"
	msgbox SwampTown_KingsRock_Boy_Text_0
# 15 "data/maps/HemlockVillage/scripts.pory"
	goto_if_unset FLAG_RECEIVED_KINGS_ROCK, SwampTown_KingsRock_Boy_2
SwampTown_KingsRock_Boy_1:
# 20 "data/maps/HemlockVillage/scripts.pory"
	releaseall
	return

SwampTown_KingsRock_Boy_2:
# 16 "data/maps/HemlockVillage/scripts.pory"
	msgbox SwampTown_KingsRock_Boy_Text_1
# 17 "data/maps/HemlockVillage/scripts.pory"
	giveitem ITEM_KINGS_ROCK, 1
# 18 "data/maps/HemlockVillage/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto SwampTown_KingsRock_Boy_1


HemlockVillage_EventScript_BlackBelt::
# 24 "data/maps/HemlockVillage/scripts.pory"
	lockall
# 25 "data/maps/HemlockVillage/scripts.pory"
	faceplayer
# 26 "data/maps/HemlockVillage/scripts.pory"
	goto_if_unset FLAG_REMOVED_MOSSDEEP_ROCK, HemlockVillage_EventScript_BlackBelt_2
HemlockVillage_EventScript_BlackBelt_1:
# 29 "data/maps/HemlockVillage/scripts.pory"
	goto_if_set FLAG_REMOVED_MOSSDEEP_ROCK, HemlockVillage_EventScript_BlackBelt_5
HemlockVillage_EventScript_BlackBelt_4:
# 33 "data/maps/HemlockVillage/scripts.pory"
	releaseall
	return

HemlockVillage_EventScript_BlackBelt_2:
# 27 "data/maps/HemlockVillage/scripts.pory"
	msgbox HemlockVillage_EventScript_BlackBelt_Text_0
	goto HemlockVillage_EventScript_BlackBelt_1

HemlockVillage_EventScript_BlackBelt_5:
# 30 "data/maps/HemlockVillage/scripts.pory"
	msgbox HemlockVillage_EventScript_BlackBelt_Text_1
	goto HemlockVillage_EventScript_BlackBelt_4


HemlockVillage_EventScript_Man::
# 37 "data/maps/HemlockVillage/scripts.pory"
	lockall
# 38 "data/maps/HemlockVillage/scripts.pory"
	faceplayer
# 39 "data/maps/HemlockVillage/scripts.pory"
	msgbox HemlockVillage_EventScript_Man_Text_0
# 40 "data/maps/HemlockVillage/scripts.pory"
	releaseall
	return


SwampTown_RockToSmash::
# 44 "data/maps/HemlockVillage/scripts.pory"
	lockall
# 45 "data/maps/HemlockVillage/scripts.pory"
	checkitem ITEM_PICKAXE, 1
# 46 "data/maps/HemlockVillage/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SwampTown_RockToSmash_2
SwampTown_RockToSmash_1:
# 49 "data/maps/HemlockVillage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SwampTown_RockToSmash_5
SwampTown_RockToSmash_4:
# 64 "data/maps/HemlockVillage/scripts.pory"
	releaseall
	return

SwampTown_RockToSmash_2:
# 47 "data/maps/HemlockVillage/scripts.pory"
	msgbox SwampTown_RockToSmash_Text_0
	goto SwampTown_RockToSmash_1

SwampTown_RockToSmash_5:
# 50 "data/maps/HemlockVillage/scripts.pory"
	msgbox SwampTown_RockToSmash_Text_1, MSGBOX_YESNO
# 51 "data/maps/HemlockVillage/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SwampTown_RockToSmash_8
# 54 "data/maps/HemlockVillage/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SwampTown_RockToSmash_10
	goto SwampTown_RockToSmash_4

SwampTown_RockToSmash_8:
	end

SwampTown_RockToSmash_10:
# 55 "data/maps/HemlockVillage/scripts.pory"
	setflag FLAG_REMOVED_MOSSDEEP_ROCK
# 56 "data/maps/HemlockVillage/scripts.pory"
	removeobject 5
# 57 "data/maps/HemlockVillage/scripts.pory"
	applymovement 4, Movement_SwampTown_SurprisedBrother
# 58 "data/maps/HemlockVillage/scripts.pory"
	waitmovement 4
# 59 "data/maps/HemlockVillage/scripts.pory"
	msgbox SwampTown_RockToSmash_Text_2
	goto SwampTown_RockToSmash_4


# 71 "data/maps/HemlockVillage/scripts.pory"
Movement_SwampTown_SurprisedBrother:
# 72 "data/maps/HemlockVillage/scripts.pory"
	emote_exclamation_mark
	step_end

HemlockVillage_EventScript_CitySign_Text_0:
# 8 "data/maps/HemlockVillage/scripts.pory"
	.string "HEMLOCK VILLAGE:\l"
	.string "$"

SwampTown_KingsRock_Boy_Text_0:
# 14 "data/maps/HemlockVillage/scripts.pory"
	.string "This is the one place in Triver you can\n"
	.string "get King's Rocks$"

SwampTown_KingsRock_Boy_Text_1:
# 16 "data/maps/HemlockVillage/scripts.pory"
	.string "Here have this one$"

HemlockVillage_EventScript_BlackBelt_Text_0:
# 27 "data/maps/HemlockVillage/scripts.pory"
	.string "I'm trying to prove to my brother I can\n"
	.string "smash rocks like him..$"

HemlockVillage_EventScript_BlackBelt_Text_1:
# 30 "data/maps/HemlockVillage/scripts.pory"
	.string "How in the world did you do that?$"

HemlockVillage_EventScript_Man_Text_0:
# 39 "data/maps/HemlockVillage/scripts.pory"
	.string "I'm sure I can hear Pokemon hiding in\n"
	.string "these trees.$"

SwampTown_RockToSmash_Text_0:
# 47 "data/maps/HemlockVillage/scripts.pory"
	.string "It's a rugged rock.$"

SwampTown_RockToSmash_Text_1:
# 50 "data/maps/HemlockVillage/scripts.pory"
	.string "This rock appears to be breakable.\nWould you like to use your Pickaxe?$"

SwampTown_RockToSmash_Text_2:
# 59 "data/maps/HemlockVillage/scripts.pory"
	.string "How did a scrawny lout like you manage\n"
	.string "that?$"
