ObsidianThicketGym_MapScripts::
	.byte 0


ObsidianThicket_GymGauntlet_BugTrainer::
	trainerbattle_single BUGTRAINER_MARK, BugTrainer_Mark_Intro, BugTrainer_Mark_Outro, Increase_Trainers_Beaten
	msgbox Bugtrainer_Mark_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_GymGauntlet_Gentleman::
	trainerbattle_single GENTLEMAN_ARTHUR, GentlemanArthur_Intro, GentlemanArthur_Outro, Increase_Trainers_Beaten
	msgbox GentlemanArthur_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_GymGauntlet_Lass::
	trainerbattle_single LASS_JESSICA, Lass_Jessica_Intro, Lass_Jessica_Outro, Increase_Trainers_Beaten
	msgbox Lass_Jessica_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_Expert_Herbert::
	trainerbattle_single EXPERT_HERBERT, Expert_Herbert_Intro, Expert_Herbert_Outro, Increase_Trainers_Beaten
	msgbox Expert_Herbert_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_Matron_Angela::
	trainerbattle_single MATRON_ANGELA, Matron_Angela_Intro, Matron_Angela_Outro, Increase_Trainers_Beaten
	msgbox Matron_Angela_PostBattle, MSGBOX_AUTOCLOSE
	end


TreeckoHunting::
	lockall
	faceplayer
	msgbox TreeckoHunting_Text_0
	releaseall
	return


TreeckoSecretGrotto_Entrance::
	lockall
	goto_if_set FLAG_TREECKO_BATTLE_BEATEN, TreeckoSecretGrotto_Entrance_2
TreeckoSecretGrotto_Entrance_1:
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FINDING_TREECKO
	compare VAR_RESULT, 0
	goto_if_ne TreeckoSecretGrotto_Entrance_5
	msgbox TreeckoSecretGrotto_Entrance_Text_12
	playmoncry SPECIES_TREECKO, CRY_MODE_ENCOUNTER
TreeckoSecretGrotto_Entrance_4:
	releaseall
	return

TreeckoSecretGrotto_Entrance_2:
	msgbox TreeckoSecretGrotto_Entrance_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne TreeckoSecretGrotto_Entrance_8
	goto TreeckoSecretGrotto_Entrance_1

TreeckoSecretGrotto_Entrance_5:
	msgbox TreeckoSecretGrotto_Entrance_Text_1
	setflag FLAG_CANT_CATCH_MON
	setwildbattle SPECIES_TREECKO, 15, ITEM_SITRUS_BERRY, SPECIES_TREECKO, 15, ITEM_SITRUS_BERRY
	dowildbattle
	msgbox TreeckoSecretGrotto_Entrance_Text_2
	applymovement 7, ChildMoving_Over
	waitmovement 7
	msgbox TreeckoSecretGrotto_Entrance_Text_3
	msgbox TreeckoSecretGrotto_Entrance_Text_4
	msgbox TreeckoSecretGrotto_Entrance_Text_5
	msgbox TreeckoSecretGrotto_Entrance_Text_6
	msgbox TreeckoSecretGrotto_Entrance_Text_7
	msgbox TreeckoSecretGrotto_Entrance_Text_8
	settotemboost 1, 2, 1, 1, 2, 1, 0, 0
	setwildbattle SPECIES_SCEPTILE, 30, ITEM_SITRUS_BERRY, SPECIES_GROVYLE, 25, ITEM_SITRUS_BERRY
	dowildbattle
	setflag FLAG_TREECKO_BATTLE_BEATEN
	msgbox TreeckoSecretGrotto_Entrance_Text_9
	msgbox TreeckoSecretGrotto_Entrance_Text_10
	giveitem ITEM_TM54_GRASS_KNOT
	playfanfare MUS_OBTAIN_ITEM
	msgbox TreeckoSecretGrotto_Entrance_Text_11
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_FINDING_TREECKO
	clearflag FLAG_CANT_CATCH_MON
	goto TreeckoSecretGrotto_Entrance_4

TreeckoSecretGrotto_Entrance_8:
	warp MAP_TREECKO_GROTTO, 2, 11
	goto TreeckoSecretGrotto_Entrance_1


Gym3_Sign::
	lockall
	msgbox Gym3_Sign_Text_0
	lockall
	return


EventScript_Gym3_MeetRob::
	lockall
	msgbox EventScript_Gym3_MeetRob_Text_0
	removeobject 8
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	addobject 8
	setobjectxy 8, 19, 26
	applymovement 8, Movement_Gym2_Robert_Approaches
	waitmovement 8
	msgbox EventScript_Gym3_MeetRob_Text_1
	clearflag FLAG_HIDE_THIRD_ENCOUNTER_ROB
	compare VAR_TRAINERS_BEATEN_CHECK, 40
	goto_if_ge EventScript_Gym3_MeetRob_2
	msgbox EventScript_Gym3_MeetRob_Text_4
	call EventScript_Gym3_RobertMoves
EventScript_Gym3_MeetRob_1:
	releaseall
	return

EventScript_Gym3_MeetRob_2:
	msgbox EventScript_Gym3_MeetRob_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym3_MeetRob_5
	msgbox EventScript_Gym3_MeetRob_Text_3
	call EventScript_Gym3_RobertMoves
	goto EventScript_Gym3_MeetRob_1

EventScript_Gym3_MeetRob_5:
	trainerbattle_single TRAINER_THIRD_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym3_MeetRob_1


EventScript_Gym3_RobertBeaten::
	msgbox EventScript_Gym3_RobertBeaten_Text_0
	giveitem ITEM_ABILITY_PATCH, 1
	msgbox EventScript_Gym3_RobertBeaten_Text_1
	compare VAR_ROBERT_STATE, 4
	goto_if_eq EventScript_Gym3_RobertBeaten_2
EventScript_Gym3_RobertBeaten_1:
	setvar VAR_ROBERT_STATE, 6
	setflag FLAG_HIDE_THIRD_ENCOUNTER_ROB
	releaseall
	return

EventScript_Gym3_RobertBeaten_2:
	msgbox EventScript_Gym3_RobertBeaten_Text_2
	call EventScript_Gym3_RobertLeaves
	goto EventScript_Gym3_RobertBeaten_1


EventScript_Gym3_RobertMoves::
	applymovement 8, Movement_Gym2_RobertMoves
	waitmovement 8
	setobjectxy 8, 21, 20
	setvar VAR_ROBERT_STATE, 5
	return


EventScript_Gym3_RobertLeaves::
	applymovement 8, Movement_Gym2_RobertLeaves
	waitmovement 8
	return


EventScript_Gym3_Robert_FindLater::
	compare VAR_ROBERT_STATE, 5
	goto_if_eq EventScript_Gym3_Robert_FindLater_2
EventScript_Gym3_Robert_FindLater_1:
	compare VAR_ROBERT_STATE, 6
	goto_if_eq EventScript_Gym3_Robert_FindLater_5
EventScript_Gym3_Robert_FindLater_4:
	releaseall
	return

EventScript_Gym3_Robert_FindLater_2:
	msgbox EventScript_Gym3_Robert_FindLater_Text_0
	compare VAR_TRAINERS_BEATEN_CHECK, 40
	goto_if_ge EventScript_Gym3_Robert_FindLater_7
	msgbox EventScript_Gym3_MeetRob_Text_3
	goto EventScript_Gym3_Robert_FindLater_1

EventScript_Gym3_Robert_FindLater_5:
	msgbox EventScript_Gym3_Robert_FindLater_Text_1
	goto EventScript_Gym3_Robert_FindLater_4

EventScript_Gym3_Robert_FindLater_7:
	msgbox EventScript_Gym3_MeetRob_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym3_Robert_FindLater_10
	goto EventScript_Gym3_Robert_FindLater_1

EventScript_Gym3_Robert_FindLater_10:
	trainerbattle_single TRAINER_THIRD_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym3_Robert_FindLater_1


ChildMoving_Over:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

TreeckoHunting_Text_0:
	.string "I'm going to catch so many Treeckos!$"

TreeckoSecretGrotto_Entrance_Text_0:
	.string "You think you can see some movement\n"
	.string "behind the trees, do you want to go in?$"

TreeckoSecretGrotto_Entrance_Text_1:
	.string "You think you can se e some Treeckos in\n"
	.string "the trees, do you want to disturb them?$"

TreeckoSecretGrotto_Entrance_Text_2:
	.string "WOW WAS THAT WAS SO COOL!$"

TreeckoSecretGrotto_Entrance_Text_3:
	.string "Sorry, I followed you I had to see where\n"
	.string "they were hiding out.$"

TreeckoSecretGrotto_Entrance_Text_4:
	.string "My mum used to have a Treecko before\n"
	.string "she died and it was always so fun to\l"
	.string "play with$"

TreeckoSecretGrotto_Entrance_Text_5:
	.string "She had to release it when she got ill as\n"
	.string "he was getting to big for us to care\l"
	.string "for.$"

TreeckoSecretGrotto_Entrance_Text_6:
	.string "I always hope one day to find him again$"

TreeckoSecretGrotto_Entrance_Text_7:
	.string "He didn't look like these Treecko\n"
	.string "though.$"

TreeckoSecretGrotto_Entrance_Text_8:
	.string "I hear more coming!$"

TreeckoSecretGrotto_Entrance_Text_9:
	.string "Wow that was such a strong Pokémon!\n"
	.string "You are an incredible trainer, I want to\l"
	.string "get strong myself and be like you!$"

TreeckoSecretGrotto_Entrance_Text_10:
	.string "My mother gave me this, I think it would\n"
	.string "help you more than me$"

TreeckoSecretGrotto_Entrance_Text_11:
	.string "That sceptile reminded me a lot about\n"
	.string "our old Treecko, but it was a different\l"
	.string "colour.$"

TreeckoSecretGrotto_Entrance_Text_12:
	.string "You can hear something in the trees but\n"
	.string "can't make your way in.$"

Gym3_Sign_Text_0:
	.string "Hemlock Gym: Can you navigate the\n"
	.string "toxic landscape$"

EventScript_Gym3_MeetRob_Text_0:
	.string "You made it!$"

EventScript_Gym3_MeetRob_Text_1:
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym3_MeetRob_Text_2:
	.string "Are you ready to go again?$"

EventScript_Gym3_MeetRob_Text_3:
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym3_MeetRob_Text_4:
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym3_RobertBeaten_Text_0:
	.string "Wow you're incredible, here take this!$"

EventScript_Gym3_RobertBeaten_Text_1:
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym3_RobertBeaten_Text_2:
	.string "Anyway I'll catch you later!$"

EventScript_Gym3_Robert_FindLater_Text_0:
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym3_Robert_FindLater_Text_1:
	.string "I'll train some more and beat you by the\n"
	.string "Ember gym.$"

BugTrainer_Mark_Intro::
	.string "Hey there, Bug Trainer Mark here! Ready\n"
	.string "for a bug-tastic battle? Let's see if\l"
	.string "you can keep up with the swarm!$"

BugTrainer_Mark_Outro::
	.string "A tough battle, indeed! Your skills cut\n"
	.string "through my bug defenses. Keep that\l"
	.string "edge sharp on your journey!$"

Bugtrainer_Mark_PostBattle::
	.string "Great battle! The bug types may be\n"
	.string "small, but their bite is mighty. If you\l"
	.string "ever want to swap bug-catching\l"
	.string "stories, I'm around!$"

GentlemanArthur_Intro::
	.string "Greetings, good sir! I am Gentleman\n"
	.string "Arthur, well-versed in the art of\l"
	.string "gentlemanly Pokémon battles. Shall we\l"
	.string "engage in a courteous duel?$"

GentlemanArthur_Outro::
	.string "A most exquisite battle, my friend! Your\n"
	.string "skills shine brightly. May your journey\l"
	.string "be as refined as our encounter!$"

GentlemanArthur_PostBattle::
	.string "Splendid battle! If ever you seek\n"
	.string "gentlemanly advice or simply wish to\l"
	.string "converse, you can find me along your\l"
	.string "journey.$"

Lass_Jessica_Intro::
	.string "Hiya! I'm Lass Jessica, ready to bring\n"
	.string "some fun into battle! Hope you're ready\l"
	.string "for a lively showdown!$"

Lass_Jessica_Outro::
	.string "Wow, you're good! Your energy outshone\n"
	.string "mine in this battle. Keep that\l"
	.string "enthusiasm burning on your journey!$"

Lass_Jessica_PostBattle::
	.string "Such a fun battle! If you ever want to\n"
	.string "have another lively match or just chat,\l"
	.string "find me along your journey, okay?$"

Expert_Herbert_Intro::
	.string "Greetings, young trainer! I am Expert\n"
	.string "Herbert, here to test your skills\l"
	.string "against a seasoned Pokémon veteran.\l"
	.string "Are you up for the challenge?$"

Expert_Herbert_Outro::
	.string "Impressive battle, my young friend!\n"
	.string "Your potential shines brightly. May\l"
	.string "your journey be filled with continued\l"
	.string "growth and success!$"

Expert_Herbert_PostBattle::
	.string "A battle worthy of an expert! If you\n"
	.string "ever seek advice or wish to test your\l"
	.string "skills again, you know where to find me\l"
	.string "on your journey.$"

Matron_Angela_Intro::
	.string "Hello, dear! I'm Matron Angela, and I'm\n"
	.string "here to share a warm and nurturing\l"
	.string "battle with you. Let's see what we can\l"
	.string "learn from each other!$"

Matron_Angela_Outro::
	.string "What a delightful battle, sweetheart!\n"
	.string "Your skills blossomed beautifully. May\l"
	.string "your journey be filled with warmth and\l"
	.string "kindness.$"

Matron_Angela_PostBattle::
	.string "Such a heartwarming battle! If you ever\n"
	.string "need a nurturing presence or simply\l"
	.string "want to chat, you can find me along your\l"
	.string "journey.$"
