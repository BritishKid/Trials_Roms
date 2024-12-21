CoralBeach_1_MapScripts::
	.byte 0


CoralBeach1_EventScript_GymSign::
# 4 "data/maps/CoralBeach_1/scripts.pory"
	lockall
# 5 "data/maps/CoralBeach_1/scripts.pory"
	msgbox CoralBeach1_EventScript_GymSign_Text_0
# 6 "data/maps/CoralBeach_1/scripts.pory"
	releaseall
	return


WillyWombyBattleScript::
# 10 "data/maps/CoralBeach_1/scripts.pory"
	trainerbattle_single WIBBLYWOBBLY_BATTLE, Beach1_WillyWomby_Intro, Beach1_WillyWomby_Outro, Increase_Trainers_Beaten
# 11 "data/maps/CoralBeach_1/scripts.pory"
	msgbox Beach1_WillyWomby_PostBattle, MSGBOX_AUTOCLOSE
	end


Trainer_Damon::
# 16 "data/maps/CoralBeach_1/scripts.pory"
	trainerbattle_single DAMON_BATTLE, Beach1_Damon_Intro, Beach1_Damon_Outro, Increase_Trainers_Beaten
# 17 "data/maps/CoralBeach_1/scripts.pory"
	msgbox Beach1_Damon_PostBattle, MSGBOX_AUTOCLOSE
	end


Trainer_Beach1_Clair::
# 22 "data/maps/CoralBeach_1/scripts.pory"
	trainerbattle_single BEACH1_CLAIR_BATTLE, Beach1_Clair_Intro, Beach1_Clair_Outro, Increase_Trainers_Beaten
# 23 "data/maps/CoralBeach_1/scripts.pory"
	msgbox Beach1_Clair_PostBattle, MSGBOX_AUTOCLOSE
	end


SquirtleHiddenGrotto_Entrance::
# 28 "data/maps/CoralBeach_1/scripts.pory"
	lock
# 29 "data/maps/CoralBeach_1/scripts.pory"
	compare VAR_SALTS7_QUEST_STATE, 2
	goto_if_gt SquirtleHiddenGrotto_Entrance_2
SquirtleHiddenGrotto_Entrance_1:
# 32 "data/maps/CoralBeach_1/scripts.pory"
	release
	return

SquirtleHiddenGrotto_Entrance_2:
# 30 "data/maps/CoralBeach_1/scripts.pory"
	warp MAP_HIDDEN_GROTTO_SQUIRTLE, 10, 15
	goto SquirtleHiddenGrotto_Entrance_1


EventScript_Gym2_MeetRob::
# 36 "data/maps/CoralBeach_1/scripts.pory"
	lockall
# 37 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_0
# 38 "data/maps/CoralBeach_1/scripts.pory"
	removeobject 4
# 39 "data/maps/CoralBeach_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Gym2_Robert_ExclamationMark
# 40 "data/maps/CoralBeach_1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 41 "data/maps/CoralBeach_1/scripts.pory"
	addobject 4
# 42 "data/maps/CoralBeach_1/scripts.pory"
	setobjectxy 4, 15, 12
# 43 "data/maps/CoralBeach_1/scripts.pory"
	applymovement 4, Movement_Gym2_Robert_Approaches
# 44 "data/maps/CoralBeach_1/scripts.pory"
	waitmovement 4
# 45 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_1
# 46 "data/maps/CoralBeach_1/scripts.pory"
	clearflag FLAG_HIDE_SECOND_ENCOUNTER_ROB
# 47 "data/maps/CoralBeach_1/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 30
	goto_if_ge EventScript_Gym2_MeetRob_2
# 57 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_4
# 58 "data/maps/CoralBeach_1/scripts.pory"
	call EventScript_Gym2_RobertMoves
EventScript_Gym2_MeetRob_1:
# 60 "data/maps/CoralBeach_1/scripts.pory"
	releaseall
	return

EventScript_Gym2_MeetRob_2:
# 48 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_2, MSGBOX_YESNO
# 49 "data/maps/CoralBeach_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym2_MeetRob_5
# 53 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_3
# 54 "data/maps/CoralBeach_1/scripts.pory"
	call EventScript_Gym2_RobertMoves
	goto EventScript_Gym2_MeetRob_1

EventScript_Gym2_MeetRob_5:
# 50 "data/maps/CoralBeach_1/scripts.pory"
	trainerbattle_single TRAINER_SECOND_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym2_MeetRob_1


EventScript_Gym2_RobertBeaten::
# 65 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_RobertBeaten_Text_0
# 66 "data/maps/CoralBeach_1/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 67 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_RobertBeaten_Text_1
# 68 "data/maps/CoralBeach_1/scripts.pory"
	compare VAR_ROBERT_STATUS, 4
	goto_if_eq EventScript_Gym2_RobertBeaten_2
EventScript_Gym2_RobertBeaten_1:
# 72 "data/maps/CoralBeach_1/scripts.pory"
	setvar VAR_ROBERT_STATUS, 4
# 73 "data/maps/CoralBeach_1/scripts.pory"
	setflag FLAG_HIDE_SECOND_ENCOUNTER_ROB
# 74 "data/maps/CoralBeach_1/scripts.pory"
	releaseall
	return

EventScript_Gym2_RobertBeaten_2:
# 69 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_RobertBeaten_Text_2
# 70 "data/maps/CoralBeach_1/scripts.pory"
	call EventScript_Gym2_RobertLeaves
	goto EventScript_Gym2_RobertBeaten_1


EventScript_Gym2_RobertMoves::
# 79 "data/maps/CoralBeach_1/scripts.pory"
	applymovement 4, Movement_Gym2_RobertMoves
# 80 "data/maps/CoralBeach_1/scripts.pory"
	waitmovement 4
# 81 "data/maps/CoralBeach_1/scripts.pory"
	setobjectxy 4, 17, 6
# 82 "data/maps/CoralBeach_1/scripts.pory"
	setvar VAR_ROBERT_STATUS, 3
	return


EventScript_Gym2_RobertLeaves::
# 86 "data/maps/CoralBeach_1/scripts.pory"
	applymovement 4, Movement_Gym2_RobertLeaves
# 87 "data/maps/CoralBeach_1/scripts.pory"
	waitmovement 4
	return


EventScript_Gym2_Robert_FindLater::
# 91 "data/maps/CoralBeach_1/scripts.pory"
	compare VAR_ROBERT_STATUS, 3
	goto_if_eq EventScript_Gym2_Robert_FindLater_2
EventScript_Gym2_Robert_FindLater_1:
# 102 "data/maps/CoralBeach_1/scripts.pory"
	compare VAR_ROBERT_STATUS, 4
	goto_if_eq EventScript_Gym2_Robert_FindLater_5
EventScript_Gym2_Robert_FindLater_4:
# 105 "data/maps/CoralBeach_1/scripts.pory"
	releaseall
	return

EventScript_Gym2_Robert_FindLater_2:
# 92 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_Robert_FindLater_Text_0
# 93 "data/maps/CoralBeach_1/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 30
	goto_if_ge EventScript_Gym2_Robert_FindLater_7
# 99 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_3
	goto EventScript_Gym2_Robert_FindLater_1

EventScript_Gym2_Robert_FindLater_5:
# 103 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_Robert_FindLater_Text_1
	goto EventScript_Gym2_Robert_FindLater_4

EventScript_Gym2_Robert_FindLater_7:
# 94 "data/maps/CoralBeach_1/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_2, MSGBOX_YESNO
# 95 "data/maps/CoralBeach_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym2_Robert_FindLater_10
	goto EventScript_Gym2_Robert_FindLater_1

EventScript_Gym2_Robert_FindLater_10:
# 96 "data/maps/CoralBeach_1/scripts.pory"
	trainerbattle_single TRAINER_SECOND_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym2_Robert_FindLater_1


CoralBeach_Pyukumuku_Clean_Up::
# 109 "data/maps/CoralBeach_1/scripts.pory"
	lock
# 110 "data/maps/CoralBeach_1/scripts.pory"
	msgbox CoralBeach_Pyukumuku_Clean_Up_Text_0
# 111 "data/maps/CoralBeach_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 112 "data/maps/CoralBeach_1/scripts.pory"
	msgbox CoralBeach_Pyukumuku_Clean_Up_Text_1
# 113 "data/maps/CoralBeach_1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 114 "data/maps/CoralBeach_1/scripts.pory"
	removeobject 3
# 115 "data/maps/CoralBeach_1/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_6
# 116 "data/maps/CoralBeach_1/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 117 "data/maps/CoralBeach_1/scripts.pory"
	msgbox CoralBeach_Pyukumuku_Clean_Up_Text_2
# 118 "data/maps/CoralBeach_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/CoralBeach_1/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 120 "data/maps/CoralBeach_1/scripts.pory"
	release
	return


# 161 "data/maps/CoralBeach_1/scripts.pory"
Movement_Gym2_Robert_Approaches:
# 162 "data/maps/CoralBeach_1/scripts.pory"
	walk_up
# 163 "data/maps/CoralBeach_1/scripts.pory"
	walk_up
# 164 "data/maps/CoralBeach_1/scripts.pory"
	walk_up
# 165 "data/maps/CoralBeach_1/scripts.pory"
	walk_up
# 166 "data/maps/CoralBeach_1/scripts.pory"
	walk_up
	step_end

# 169 "data/maps/CoralBeach_1/scripts.pory"
Movement_Gym2_RobertMoves:
# 170 "data/maps/CoralBeach_1/scripts.pory"
	walk_right
# 171 "data/maps/CoralBeach_1/scripts.pory"
	walk_right
# 172 "data/maps/CoralBeach_1/scripts.pory"
	walk_up
# 173 "data/maps/CoralBeach_1/scripts.pory"
	face_down
	step_end

# 176 "data/maps/CoralBeach_1/scripts.pory"
Movement_Gym2_RobertLeaves:
# 177 "data/maps/CoralBeach_1/scripts.pory"
	walk_down
# 178 "data/maps/CoralBeach_1/scripts.pory"
	walk_down
# 179 "data/maps/CoralBeach_1/scripts.pory"
	walk_down
# 180 "data/maps/CoralBeach_1/scripts.pory"
	walk_down
# 181 "data/maps/CoralBeach_1/scripts.pory"
	walk_down
# 182 "data/maps/CoralBeach_1/scripts.pory"
	walk_down
	step_end

# 185 "data/maps/CoralBeach_1/scripts.pory"
Movement_Gym2_Robert_ExclamationMark:
# 186 "data/maps/CoralBeach_1/scripts.pory"
	emote_exclamation_mark
	step_end

CoralBeach1_EventScript_GymSign_Text_0:
# 5 "data/maps/CoralBeach_1/scripts.pory"
	.string "Coral Gym:\n"
	.string "Can you handle the powerful torrent of\l"
	.string "the sea$"

EventScript_Gym2_MeetRob_Text_0:
# 37 "data/maps/CoralBeach_1/scripts.pory"
	.string "You made it!$"

EventScript_Gym2_MeetRob_Text_1:
# 45 "data/maps/CoralBeach_1/scripts.pory"
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym2_MeetRob_Text_2:
# 48 "data/maps/CoralBeach_1/scripts.pory"
	.string "Are you ready to go again?$"

EventScript_Gym2_MeetRob_Text_3:
# 53 "data/maps/CoralBeach_1/scripts.pory"
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym2_MeetRob_Text_4:
# 57 "data/maps/CoralBeach_1/scripts.pory"
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym2_RobertBeaten_Text_0:
# 65 "data/maps/CoralBeach_1/scripts.pory"
	.string "Wow you're incredible, here take this!$"

EventScript_Gym2_RobertBeaten_Text_1:
# 67 "data/maps/CoralBeach_1/scripts.pory"
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym2_RobertBeaten_Text_2:
# 69 "data/maps/CoralBeach_1/scripts.pory"
	.string "Anyway I'll catch you later!$"

EventScript_Gym2_Robert_FindLater_Text_0:
# 92 "data/maps/CoralBeach_1/scripts.pory"
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym2_Robert_FindLater_Text_1:
# 103 "data/maps/CoralBeach_1/scripts.pory"
	.string "I'll train some more and beat you by the\n"
	.string "Hemlock gym.$"

CoralBeach_Pyukumuku_Clean_Up_Text_0:
# 110 "data/maps/CoralBeach_1/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

CoralBeach_Pyukumuku_Clean_Up_Text_1:
# 112 "data/maps/CoralBeach_1/scripts.pory"
	.string "SPLASH$"

CoralBeach_Pyukumuku_Clean_Up_Text_2:
# 117 "data/maps/CoralBeach_1/scripts.pory"
	.string "You found a big pearl under the\n"
	.string "Pokemon.$"

Beach1_WillyWomby_Intro::
# 124 "data/maps/CoralBeach_1/scripts.pory"
	.string "I was given a wierd blue egg from some\n"
	.string "guy!$"

Beach1_WillyWomby_Outro::
# 128 "data/maps/CoralBeach_1/scripts.pory"
	.string "The Pokémon that hatched is cute, I\n"
	.string "wonder where he got it$"

Beach1_WillyWomby_PostBattle::
# 132 "data/maps/CoralBeach_1/scripts.pory"
	.string "He got on the ferry to cross the\n"
	.string "channel.$"

Beach1_Damon_Intro::
# 136 "data/maps/CoralBeach_1/scripts.pory"
	.string "Have you seen how many awesome purple\n"
	.string "Pokémon I have?!$"

Beach1_Damon_Outro::
# 140 "data/maps/CoralBeach_1/scripts.pory"
	.string "OH NO!$"

Beach1_Damon_PostBattle::
# 144 "data/maps/CoralBeach_1/scripts.pory"
	.string "I'm going to make them soo strong.$"

Beach1_Clair_Intro::
# 148 "data/maps/CoralBeach_1/scripts.pory"
	.string "I feel a presence around here!$"

Beach1_Clair_Outro::
# 152 "data/maps/CoralBeach_1/scripts.pory"
	.string "It's getting closer!$"

Beach1_Clair_PostBattle::
# 156 "data/maps/CoralBeach_1/scripts.pory"
	.string "Nevermind it was just gas.$"
