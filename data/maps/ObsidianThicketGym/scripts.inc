ObsidianThicketGym_MapScripts::
	.byte 0


ObsidianThicket_GymGauntlet_BugTrainer::
# 5 "data/maps/ObsidianThicketGym/scripts.pory"
	trainerbattle_single BUGTRAINER_MARK, BugTrainer_Mark_Intro, BugTrainer_Mark_Outro, Increase_Trainers_Beaten
# 6 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox Bugtrainer_Mark_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_GymGauntlet_Gentleman::
# 11 "data/maps/ObsidianThicketGym/scripts.pory"
	trainerbattle_single GENTLEMAN_ARTHUR, GentlemanArthur_Intro, GentlemanArthur_Outro, Increase_Trainers_Beaten
# 12 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox GentlemanArthur_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_GymGauntlet_Lass::
# 17 "data/maps/ObsidianThicketGym/scripts.pory"
	trainerbattle_single LASS_JESSICA, Lass_Jessica_Intro, Lass_Jessica_Outro, Increase_Trainers_Beaten
# 18 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox Lass_Jessica_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_Expert_Herbert::
# 23 "data/maps/ObsidianThicketGym/scripts.pory"
	trainerbattle_single EXPERT_HERBERT, Expert_Herbert_Intro, Expert_Herbert_Outro, Increase_Trainers_Beaten
# 24 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox Expert_Herbert_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_Matron_Angela::
# 29 "data/maps/ObsidianThicketGym/scripts.pory"
	trainerbattle_single MATRON_ANGELA, Matron_Angela_Intro, Matron_Angela_Outro, Increase_Trainers_Beaten
# 30 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox Matron_Angela_PostBattle, MSGBOX_AUTOCLOSE
	end


TreeckoHunting::
# 35 "data/maps/ObsidianThicketGym/scripts.pory"
	lockall
# 36 "data/maps/ObsidianThicketGym/scripts.pory"
	faceplayer
# 37 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoHunting_Text_0
# 38 "data/maps/ObsidianThicketGym/scripts.pory"
	releaseall
	return


TreeckoSecretGrotto_Entrance::
# 42 "data/maps/ObsidianThicketGym/scripts.pory"
	lockall
# 43 "data/maps/ObsidianThicketGym/scripts.pory"
	goto_if_set FLAG_TREECKO_BATTLE_BEATEN, TreeckoSecretGrotto_Entrance_2
TreeckoSecretGrotto_Entrance_1:
# 49 "data/maps/ObsidianThicketGym/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FINDING_TREECKO
# 50 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TreeckoSecretGrotto_Entrance_5
# 80 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_12
# 81 "data/maps/ObsidianThicketGym/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_ENCOUNTER
TreeckoSecretGrotto_Entrance_4:
# 83 "data/maps/ObsidianThicketGym/scripts.pory"
	releaseall
	return

TreeckoSecretGrotto_Entrance_2:
# 44 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_0, MSGBOX_YESNO
# 45 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TreeckoSecretGrotto_Entrance_8
	goto TreeckoSecretGrotto_Entrance_1

TreeckoSecretGrotto_Entrance_5:
# 51 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_1
# 52 "data/maps/ObsidianThicketGym/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 53 "data/maps/ObsidianThicketGym/scripts.pory"
	setwildbattle SPECIES_TREECKO, 15, ITEM_SITRUS_BERRY, SPECIES_TREECKO, 15, ITEM_SITRUS_BERRY
# 54 "data/maps/ObsidianThicketGym/scripts.pory"
	dowildbattle
# 56 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_2
# 58 "data/maps/ObsidianThicketGym/scripts.pory"
	applymovement 7, ChildMoving_Over
# 59 "data/maps/ObsidianThicketGym/scripts.pory"
	waitmovement 7
# 60 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_3
# 61 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_4
# 62 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_5
# 63 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_6
# 64 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_7
# 65 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_8
# 67 "data/maps/ObsidianThicketGym/scripts.pory"
	settotemboost 1, 2, 1, 1, 2, 1, 0, 0
# 68 "data/maps/ObsidianThicketGym/scripts.pory"
	setwildbattle SPECIES_SCEPTILE, 30, ITEM_SITRUS_BERRY, SPECIES_GROVYLE, 25, ITEM_SITRUS_BERRY
# 69 "data/maps/ObsidianThicketGym/scripts.pory"
	dowildbattle
# 70 "data/maps/ObsidianThicketGym/scripts.pory"
	setflag FLAG_TREECKO_BATTLE_BEATEN
# 71 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_9
# 72 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_10
# 73 "data/maps/ObsidianThicketGym/scripts.pory"
	giveitem ITEM_TM54_GRASS_KNOT
# 74 "data/maps/ObsidianThicketGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 75 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_11
# 76 "data/maps/ObsidianThicketGym/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FINDING_TREECKO
# 77 "data/maps/ObsidianThicketGym/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto TreeckoSecretGrotto_Entrance_4

TreeckoSecretGrotto_Entrance_8:
# 46 "data/maps/ObsidianThicketGym/scripts.pory"
	warp MAP_TREECKO_GROTTO, 2, 11
	goto TreeckoSecretGrotto_Entrance_1


Gym3_Sign::
# 87 "data/maps/ObsidianThicketGym/scripts.pory"
	lockall
# 88 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox Gym3_Sign_Text_0
# 89 "data/maps/ObsidianThicketGym/scripts.pory"
	lockall
	return


EventScript_Gym3_MeetRob::
# 93 "data/maps/ObsidianThicketGym/scripts.pory"
	lockall
# 94 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_0
# 95 "data/maps/ObsidianThicketGym/scripts.pory"
	removeobject 8
# 96 "data/maps/ObsidianThicketGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
# 97 "data/maps/ObsidianThicketGym/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 98 "data/maps/ObsidianThicketGym/scripts.pory"
	addobject 8
# 99 "data/maps/ObsidianThicketGym/scripts.pory"
	setobjectxy 8, 19, 26
# 100 "data/maps/ObsidianThicketGym/scripts.pory"
	applymovement 8, Movement_Gym2_Robert_Approaches
# 101 "data/maps/ObsidianThicketGym/scripts.pory"
	waitmovement 8
# 102 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_1
# 103 "data/maps/ObsidianThicketGym/scripts.pory"
	clearflag FLAG_HIDE_THIRD_ENCOUNTER_ROB
# 104 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 40
	goto_if_ge EventScript_Gym3_MeetRob_2
# 114 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_4
# 115 "data/maps/ObsidianThicketGym/scripts.pory"
	call EventScript_Gym3_RobertMoves
EventScript_Gym3_MeetRob_1:
# 117 "data/maps/ObsidianThicketGym/scripts.pory"
	releaseall
	return

EventScript_Gym3_MeetRob_2:
# 105 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_2, MSGBOX_YESNO
# 106 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym3_MeetRob_5
# 110 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_3
# 111 "data/maps/ObsidianThicketGym/scripts.pory"
	call EventScript_Gym3_RobertMoves
	goto EventScript_Gym3_MeetRob_1

EventScript_Gym3_MeetRob_5:
# 107 "data/maps/ObsidianThicketGym/scripts.pory"
	trainerbattle_single TRAINER_THIRD_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym3_MeetRob_1


EventScript_Gym3_RobertBeaten::
# 121 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_RobertBeaten_Text_0
# 122 "data/maps/ObsidianThicketGym/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 123 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_RobertBeaten_Text_1
# 124 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_ROBERT_STATE, 4
	goto_if_eq EventScript_Gym3_RobertBeaten_2
EventScript_Gym3_RobertBeaten_1:
# 128 "data/maps/ObsidianThicketGym/scripts.pory"
	setvar VAR_ROBERT_STATE, 6
# 129 "data/maps/ObsidianThicketGym/scripts.pory"
	setflag FLAG_HIDE_THIRD_ENCOUNTER_ROB
# 130 "data/maps/ObsidianThicketGym/scripts.pory"
	releaseall
	return

EventScript_Gym3_RobertBeaten_2:
# 125 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_RobertBeaten_Text_2
# 126 "data/maps/ObsidianThicketGym/scripts.pory"
	call EventScript_Gym3_RobertLeaves
	goto EventScript_Gym3_RobertBeaten_1


EventScript_Gym3_RobertMoves::
# 134 "data/maps/ObsidianThicketGym/scripts.pory"
	applymovement 8, Movement_Gym2_RobertMoves
# 135 "data/maps/ObsidianThicketGym/scripts.pory"
	waitmovement 8
# 136 "data/maps/ObsidianThicketGym/scripts.pory"
	setobjectxy 8, 21, 20
# 137 "data/maps/ObsidianThicketGym/scripts.pory"
	setvar VAR_ROBERT_STATE, 5
	return


EventScript_Gym3_RobertLeaves::
# 141 "data/maps/ObsidianThicketGym/scripts.pory"
	applymovement 8, Movement_Gym2_RobertLeaves
# 142 "data/maps/ObsidianThicketGym/scripts.pory"
	waitmovement 8
	return


EventScript_Gym3_Robert_FindLater::
# 146 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_ROBERT_STATE, 5
	goto_if_eq EventScript_Gym3_Robert_FindLater_2
EventScript_Gym3_Robert_FindLater_1:
# 157 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_ROBERT_STATE, 6
	goto_if_eq EventScript_Gym3_Robert_FindLater_5
EventScript_Gym3_Robert_FindLater_4:
# 160 "data/maps/ObsidianThicketGym/scripts.pory"
	releaseall
	return

EventScript_Gym3_Robert_FindLater_2:
# 147 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_Robert_FindLater_Text_0
# 148 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 40
	goto_if_ge EventScript_Gym3_Robert_FindLater_7
# 154 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_3
	goto EventScript_Gym3_Robert_FindLater_1

EventScript_Gym3_Robert_FindLater_5:
# 158 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_Robert_FindLater_Text_1
	goto EventScript_Gym3_Robert_FindLater_4

EventScript_Gym3_Robert_FindLater_7:
# 149 "data/maps/ObsidianThicketGym/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_2, MSGBOX_YESNO
# 150 "data/maps/ObsidianThicketGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym3_Robert_FindLater_10
	goto EventScript_Gym3_Robert_FindLater_1

EventScript_Gym3_Robert_FindLater_10:
# 151 "data/maps/ObsidianThicketGym/scripts.pory"
	trainerbattle_single TRAINER_THIRD_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym3_Robert_FindLater_1


# 228 "data/maps/ObsidianThicketGym/scripts.pory"
ChildMoving_Over:
# 229 "data/maps/ObsidianThicketGym/scripts.pory"
	walk_left
# 230 "data/maps/ObsidianThicketGym/scripts.pory"
	walk_left
# 231 "data/maps/ObsidianThicketGym/scripts.pory"
	walk_left
# 232 "data/maps/ObsidianThicketGym/scripts.pory"
	walk_left
# 233 "data/maps/ObsidianThicketGym/scripts.pory"
	walk_left
# 234 "data/maps/ObsidianThicketGym/scripts.pory"
	walk_left
# 235 "data/maps/ObsidianThicketGym/scripts.pory"
	face_up
	step_end

TreeckoHunting_Text_0:
# 37 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "I'm going to catch so many Treeckos!$"

TreeckoSecretGrotto_Entrance_Text_0:
# 44 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "You think you can see some movement\n"
	.string "behind the trees, do you want to go in?$"

TreeckoSecretGrotto_Entrance_Text_1:
# 51 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "You think you can se e some Treeckos in\n"
	.string "the trees, do you want to disturb them?$"

TreeckoSecretGrotto_Entrance_Text_2:
# 56 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "WOW WAS THAT WAS SO COOL!$"

TreeckoSecretGrotto_Entrance_Text_3:
# 60 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Sorry, I followed you I had to see where\n"
	.string "they were hiding out.$"

TreeckoSecretGrotto_Entrance_Text_4:
# 61 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "My mum used to have a Treecko before\n"
	.string "she died and it was always so fun to\l"
	.string "play with$"

TreeckoSecretGrotto_Entrance_Text_5:
# 62 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "She had to release it when she got ill as\n"
	.string "he was getting to big for us to care\l"
	.string "for.$"

TreeckoSecretGrotto_Entrance_Text_6:
# 63 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "I always hope one day to find him again$"

TreeckoSecretGrotto_Entrance_Text_7:
# 64 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "He didn't look like these Treecko\n"
	.string "though.$"

TreeckoSecretGrotto_Entrance_Text_8:
# 65 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "I hear more coming!$"

TreeckoSecretGrotto_Entrance_Text_9:
# 71 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Wow that was such a strong Pokémon!\n"
	.string "You are an incredible trainer, I want to\l"
	.string "get strong myself and be like you!$"

TreeckoSecretGrotto_Entrance_Text_10:
# 72 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "My mother gave me this, I think it would\n"
	.string "help you more than me$"

TreeckoSecretGrotto_Entrance_Text_11:
# 75 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "That sceptile reminded me a lot about\n"
	.string "our old Treecko, but it was a different\l"
	.string "colour.$"

TreeckoSecretGrotto_Entrance_Text_12:
# 80 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "You can hear something in the trees but\n"
	.string "can't make your way in.$"

Gym3_Sign_Text_0:
# 88 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Hemlock Gym: Can you navigate the\n"
	.string "toxic landscape$"

EventScript_Gym3_MeetRob_Text_0:
# 94 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "You made it!$"

EventScript_Gym3_MeetRob_Text_1:
# 102 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym3_MeetRob_Text_2:
# 105 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Are you ready to go again?$"

EventScript_Gym3_MeetRob_Text_3:
# 110 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym3_MeetRob_Text_4:
# 114 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym3_RobertBeaten_Text_0:
# 121 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Wow you're incredible, here take this!$"

EventScript_Gym3_RobertBeaten_Text_1:
# 123 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym3_RobertBeaten_Text_2:
# 125 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Anyway I'll catch you later!$"

EventScript_Gym3_Robert_FindLater_Text_0:
# 147 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym3_Robert_FindLater_Text_1:
# 158 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "I'll train some more and beat you by the\n"
	.string "Ember gym.$"

BugTrainer_Mark_Intro::
# 166 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Hey there, Bug Trainer Mark here! Ready\n"
	.string "for a bug-tastic battle? Let's see if\l"
	.string "you can keep up with the swarm!$"

BugTrainer_Mark_Outro::
# 170 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "A tough battle, indeed! Your skills cut\n"
	.string "through my bug defenses. Keep that\l"
	.string "edge sharp on your journey!$"

Bugtrainer_Mark_PostBattle::
# 174 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Great battle! The bug types may be\n"
	.string "small, but their bite is mighty. If you\l"
	.string "ever want to swap bug-catching\l"
	.string "stories, I'm around!$"

GentlemanArthur_Intro::
# 178 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Greetings, good sir! I am Gentleman\n"
	.string "Arthur, well-versed in the art of\l"
	.string "gentlemanly Pokémon battles. Shall we\l"
	.string "engage in a courteous duel?$"

GentlemanArthur_Outro::
# 182 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "A most exquisite battle, my friend! Your\n"
	.string "skills shine brightly. May your journey\l"
	.string "be as refined as our encounter!$"

GentlemanArthur_PostBattle::
# 186 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Splendid battle! If ever you seek\n"
	.string "gentlemanly advice or simply wish to\l"
	.string "converse, you can find me along your\l"
	.string "journey.$"

Lass_Jessica_Intro::
# 190 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Hiya! I'm Lass Jessica, ready to bring\n"
	.string "some fun into battle! Hope you're ready\l"
	.string "for a lively showdown!$"

Lass_Jessica_Outro::
# 194 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Wow, you're good! Your energy outshone\n"
	.string "mine in this battle. Keep that\l"
	.string "enthusiasm burning on your journey!$"

Lass_Jessica_PostBattle::
# 198 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Such a fun battle! If you ever want to\n"
	.string "have another lively match or just chat,\l"
	.string "find me along your journey, okay?$"

Expert_Herbert_Intro::
# 202 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Greetings, young trainer! I am Expert\n"
	.string "Herbert, here to test your skills\l"
	.string "against a seasoned Pokémon veteran.\l"
	.string "Are you up for the challenge?$"

Expert_Herbert_Outro::
# 206 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Impressive battle, my young friend!\n"
	.string "Your potential shines brightly. May\l"
	.string "your journey be filled with continued\l"
	.string "growth and success!$"

Expert_Herbert_PostBattle::
# 210 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "A battle worthy of an expert! If you\n"
	.string "ever seek advice or wish to test your\l"
	.string "skills again, you know where to find me\l"
	.string "on your journey.$"

Matron_Angela_Intro::
# 214 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Hello, dear! I'm Matron Angela, and I'm\n"
	.string "here to share a warm and nurturing\l"
	.string "battle with you. Let's see what we can\l"
	.string "learn from each other!$"

Matron_Angela_Outro::
# 218 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "What a delightful battle, sweetheart!\n"
	.string "Your skills blossomed beautifully. May\l"
	.string "your journey be filled with warmth and\l"
	.string "kindness.$"

Matron_Angela_PostBattle::
# 222 "data/maps/ObsidianThicketGym/scripts.pory"
	.string "Such a heartwarming battle! If you ever\n"
	.string "need a nurturing presence or simply\l"
	.string "want to chat, you can find me along your\l"
	.string "journey.$"
