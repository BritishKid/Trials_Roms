DewfordTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DewfordTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_DEWFORD_TOWN
	return


DewfordTown_RivalEncounter::
	lockall
	applymovement 1, Movement_RivalIsland3_Arriving
	waitmovement 1
	msgbox DewfordTown_RivalEncounter_Text_0
	goto_if_unset FLAG_RECIEVED_MEGA_BRACELET, DewfordTown_RivalEncounter_2
DewfordTown_RivalEncounter_1:
	msgbox DewfordTown_RivalEncounter_Text_3
	switch VAR_STARTER_MON
	case 0, DewfordTown_RivalEncounter_6
	case 1, DewfordTown_RivalEncounter_7
	case 2, DewfordTown_RivalEncounter_8
DewfordTown_RivalEncounter_4:
	releaseall
	return

DewfordTown_RivalEncounter_2:
	msgbox DewfordTown_RivalEncounter_Text_1
	msgbox DewfordTown_RivalEncounter_Text_2
	goto DewfordTown_RivalEncounter_1

DewfordTown_RivalEncounter_6:
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_CYNDAQUIL, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4

DewfordTown_RivalEncounter_7:
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_TOTODILE, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4

DewfordTown_RivalEncounter_8:
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_CHIKORITA, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4


Dewford_Rival_Postscript::
	msgbox Dewford_Rival_Postscript_Text_0
	msgbox Dewford_Rival_Postscript_Text_1
	msgbox Dewford_Rival_Postscript_Text_2
	giveitem ITEM_HM04
	playfanfare MUS_OBTAIN_ITEM
	msgbox Dewford_Rival_Postscript_Text_3
	applymovement 1, Movement_Rivalisland3_Leaving
	waitmovement 1
	removeobject 1
	setvar VAR_RIVAL_FIGHT_2, 5
	setflag FLAG_RIVAL_LEFT_DEWFORD
	msgbox Dewford_Rival_Postscript_Text_4
	releaseall
	return


Town_Sign_Dewford::
	msgbox Dewford_Rival_Postscript_Text_4
	return


Movement_RivalIsland3_Arriving:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	emote_exclamation_mark
	walk_down
	walk_down
	step_end

Movement_Rivalisland3_Leaving:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

DewfordTown_RivalEncounter_Text_0:
	.string "Finally made it then ${PLAYER}. Took\n"
	.string "you long enough.$"

DewfordTown_RivalEncounter_Text_1:
	.string "It's not surprise you're not even\n"
	.string "strong enough to get your Mega Braclet\l"
	.string "yet!$"

DewfordTown_RivalEncounter_Text_2:
	.string "You know you can go north of Lilycove\n"
	.string "City and get one?$"

DewfordTown_RivalEncounter_Text_3:
	.string "I've heard so many strong Pokémon can\n"
	.string "be found on this Island and I'm going to\l"
	.string "catch them all and get the last badges\l"
	.string "to become a champion.$"

Dewford_Rival_Postscript_Text_0:
	.string "You keep surprising me, for such a\n"
	.string "weakling you keep beating me...$"

Dewford_Rival_Postscript_Text_1:
	.string "Whatever I'll still become a champion\n"
	.string "first!$"

Dewford_Rival_Postscript_Text_2:
	.string "I also saw your Dad he gave me this to\n"
	.string "give to you when I found you$"

Dewford_Rival_Postscript_Text_3:
	.string "Good luck keeping up!$"

Dewford_Rival_Postscript_Text_4:
	.string "This is the end of Demo 1! We hope you\n"
	.string "enjoyed, come over to our discord to\l"
	.string "see update information and feel free to\l"
	.string "challenge the Champions guild and\l"
	.string "finish the side quests while you wait$"

Dewford_Rival_Intro::
	.string "Here let me show you how much you've\n"
	.string "fallen behind!$"

Dewford_Rival_Outro::
	.string "How do you keep doing this?$"
