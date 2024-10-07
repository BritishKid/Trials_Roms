DewfordTown_MapScripts::
# 2 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DewfordTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
	return


DewfordTown_RivalEncounter::
# 9 "data/maps/DewfordTown/scripts.pory"
	lockall
# 10 "data/maps/DewfordTown/scripts.pory"
	applymovement 1, Movement_RivalIsland3_Arriving
# 11 "data/maps/DewfordTown/scripts.pory"
	waitmovement 1
# 12 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_RivalEncounter_Text_0
# 13 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_RECIEVED_MEGA_BRACELET, DewfordTown_RivalEncounter_2
DewfordTown_RivalEncounter_1:
# 17 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_RivalEncounter_Text_3
# 18 "data/maps/DewfordTown/scripts.pory"
	switch VAR_STARTER_MON
# 19 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_RivalEncounter_6
# 21 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_RivalEncounter_7
# 23 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_RivalEncounter_8
DewfordTown_RivalEncounter_4:
# 26 "data/maps/DewfordTown/scripts.pory"
	releaseall
	return

DewfordTown_RivalEncounter_2:
# 14 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_RivalEncounter_Text_1
# 15 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_RivalEncounter_Text_2
	goto DewfordTown_RivalEncounter_1

DewfordTown_RivalEncounter_6:
# 20 "data/maps/DewfordTown/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_CYNDAQUIL, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4

DewfordTown_RivalEncounter_7:
# 22 "data/maps/DewfordTown/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_TOTODILE, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4

DewfordTown_RivalEncounter_8:
# 24 "data/maps/DewfordTown/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_CHIKORITA, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4


Dewford_Rival_Postscript::
# 30 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewford_Rival_Postscript_Text_0
# 31 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewford_Rival_Postscript_Text_1
# 32 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewford_Rival_Postscript_Text_2
# 33 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_HM04
# 34 "data/maps/DewfordTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewford_Rival_Postscript_Text_3
# 36 "data/maps/DewfordTown/scripts.pory"
	applymovement 1, Movement_Rivalisland3_Leaving
# 37 "data/maps/DewfordTown/scripts.pory"
	waitmovement 1
# 38 "data/maps/DewfordTown/scripts.pory"
	removeobject 1
# 39 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_RIVAL_FIGHT_2, 5
# 40 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_DEWFORD
# 42 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewford_Rival_Postscript_Text_4
# 43 "data/maps/DewfordTown/scripts.pory"
	releaseall
	return


Town_Sign_Dewford::
# 47 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewford_Rival_Postscript_Text_4
	return


# 52 "data/maps/DewfordTown/scripts.pory"
Movement_RivalIsland3_Arriving:
# 53 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 54 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 55 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 56 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 57 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 58 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 59 "data/maps/DewfordTown/scripts.pory"
	face_down
# 60 "data/maps/DewfordTown/scripts.pory"
	emote_exclamation_mark
# 61 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 62 "data/maps/DewfordTown/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/DewfordTown/scripts.pory"
Movement_Rivalisland3_Leaving:
# 66 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 67 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 68 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 69 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 70 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 71 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 72 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 73 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
	step_end

DewfordTown_RivalEncounter_Text_0:
# 12 "data/maps/DewfordTown/scripts.pory"
	.string "Finally made it then ${PLAYER}. Took\n"
	.string "you long enough.$"

DewfordTown_RivalEncounter_Text_1:
# 14 "data/maps/DewfordTown/scripts.pory"
	.string "It's not surprise you're not even\n"
	.string "strong enough to get your Mega Braclet\l"
	.string "yet!$"

DewfordTown_RivalEncounter_Text_2:
# 15 "data/maps/DewfordTown/scripts.pory"
	.string "You know you can go north of Lilycove\n"
	.string "City and get one?$"

DewfordTown_RivalEncounter_Text_3:
# 17 "data/maps/DewfordTown/scripts.pory"
	.string "I've heard so many strong Pokémon can\n"
	.string "be found on this Island and I'm going to\l"
	.string "catch them all and get the last badges\l"
	.string "to become a champion.$"

Dewford_Rival_Postscript_Text_0:
# 30 "data/maps/DewfordTown/scripts.pory"
	.string "You keep surprising me, for such a\n"
	.string "weakling you keep beating me...$"

Dewford_Rival_Postscript_Text_1:
# 31 "data/maps/DewfordTown/scripts.pory"
	.string "Whatever I'll still become a champion\n"
	.string "first!$"

Dewford_Rival_Postscript_Text_2:
# 32 "data/maps/DewfordTown/scripts.pory"
	.string "I also saw your Dad he gave me this to\n"
	.string "give to you when I found you$"

Dewford_Rival_Postscript_Text_3:
# 35 "data/maps/DewfordTown/scripts.pory"
	.string "Good luck keeping up!$"

Dewford_Rival_Postscript_Text_4:
# 42 "data/maps/DewfordTown/scripts.pory"
	.string "This is the end of Demo 1! We hope you\n"
	.string "enjoyed, come over to our discord to\l"
	.string "see update information and feel free to\l"
	.string "challenge the Champions guild and\l"
	.string "finish the side quests while you wait$"

Dewford_Rival_Intro::
# 78 "data/maps/DewfordTown/scripts.pory"
	.string "Here let me show you how much you've\n"
	.string "fallen behind!$"

Dewford_Rival_Outro::
# 82 "data/maps/DewfordTown/scripts.pory"
	.string "How do you keep doing this?$"
