Obsidian_Thicket_3_MapScripts::
	.byte 0


ObsidianThicket_3_EventScript_TreeckoGirl::
# 5 "data/maps/Obsidian_Thicket_3/scripts.pory"
	lockall
# 6 "data/maps/Obsidian_Thicket_3/scripts.pory"
	faceplayer
# 7 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox ObsidianThicket_3_EventScript_TreeckoGirl_Text_0
# 8 "data/maps/Obsidian_Thicket_3/scripts.pory"
	releaseall
	return


TreeckoSecretGrotto_Entrance::
# 12 "data/maps/Obsidian_Thicket_3/scripts.pory"
	lockall
# 13 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_TREECKO_STATE, 2
	goto_if_eq TreeckoSecretGrotto_Entrance_2
TreeckoSecretGrotto_Entrance_1:
# 21 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_TREECKO_STATE, 1
	goto_if_eq TreeckoSecretGrotto_Entrance_5
# 49 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_12
# 50 "data/maps/Obsidian_Thicket_3/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_ENCOUNTER
TreeckoSecretGrotto_Entrance_4:
# 52 "data/maps/Obsidian_Thicket_3/scripts.pory"
	releaseall
	return

TreeckoSecretGrotto_Entrance_2:
# 14 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_0, MSGBOX_YESNO
# 15 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TreeckoSecretGrotto_Entrance_8
	goto TreeckoSecretGrotto_Entrance_1

TreeckoSecretGrotto_Entrance_5:
# 22 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_1
# 23 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 24 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setwildbattle SPECIES_TREECKO, 15, ITEM_SITRUS_BERRY, SPECIES_TREECKO, 15, ITEM_SITRUS_BERRY
# 25 "data/maps/Obsidian_Thicket_3/scripts.pory"
	dowildbattle
# 26 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_2
# 28 "data/maps/Obsidian_Thicket_3/scripts.pory"
	applymovement 2, Movement_ObsidianThicket_GirlToTreecko
# 29 "data/maps/Obsidian_Thicket_3/scripts.pory"
	waitmovement 2
# 30 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_3
# 31 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_4
# 32 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_5
# 33 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_6
# 34 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_7
# 35 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_8
# 37 "data/maps/Obsidian_Thicket_3/scripts.pory"
	settotemboost 1, 2, 1, 1, 2, 1, 0, 0
# 38 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setwildbattle SPECIES_SCEPTILE, 30, ITEM_SITRUS_BERRY, SPECIES_GROVYLE, 25, ITEM_SITRUS_BERRY
# 39 "data/maps/Obsidian_Thicket_3/scripts.pory"
	dowildbattle
# 40 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_9
# 41 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_10
# 42 "data/maps/Obsidian_Thicket_3/scripts.pory"
	giveitem ITEM_TM54
# 43 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox TreeckoSecretGrotto_Entrance_Text_11
# 44 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setvar VAR_TREECKO_STATE, 2
# 46 "data/maps/Obsidian_Thicket_3/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto TreeckoSecretGrotto_Entrance_4

TreeckoSecretGrotto_Entrance_8:
	goto TreeckoSecretGrotto_Entrance_1


ObsidianThicket_GymGauntlet_BugTrainer::
# 57 "data/maps/Obsidian_Thicket_3/scripts.pory"
	trainerbattle_single BUGTRAINER_MARK, BugTrainer_Mark_Intro, BugTrainer_Mark_Outro, Increase_Trainers_Beaten
# 58 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox Bugtrainer_Mark_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_GymGauntlet_Gentleman::
# 63 "data/maps/Obsidian_Thicket_3/scripts.pory"
	trainerbattle_single GENTLEMAN_ARTHUR, GentlemanArthur_Intro, GentlemanArthur_Outro, Increase_Trainers_Beaten
# 64 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox GentlemanArthur_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_GymGauntlet_Lass::
# 69 "data/maps/Obsidian_Thicket_3/scripts.pory"
	trainerbattle_single LASS_JESSICA, Lass_Jessica_Intro, Lass_Jessica_Outro, Increase_Trainers_Beaten
# 70 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox Lass_Jessica_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_Expert_Herbert::
# 75 "data/maps/Obsidian_Thicket_3/scripts.pory"
	trainerbattle_single EXPERT_HERBERT, Expert_Herbert_Intro, Expert_Herbert_Outro, Increase_Trainers_Beaten
# 76 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox Expert_Herbert_PostBattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket_Matron_Angela::
# 82 "data/maps/Obsidian_Thicket_3/scripts.pory"
	trainerbattle_single MATRON_ANGELA, Matron_Angela_Intro, Matron_Angela_Outro, Increase_Trainers_Beaten
# 83 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox Matron_Angela_PostBattle, MSGBOX_AUTOCLOSE
	end


Gym3_Sign::
# 88 "data/maps/Obsidian_Thicket_3/scripts.pory"
	lockall
# 89 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox Gym3_Sign_Text_0
# 90 "data/maps/Obsidian_Thicket_3/scripts.pory"
	lockall
	return


EventScript_Gym3_MeetRob::
# 95 "data/maps/Obsidian_Thicket_3/scripts.pory"
	lockall
# 96 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_0
# 97 "data/maps/Obsidian_Thicket_3/scripts.pory"
	removeobject 8
# 98 "data/maps/Obsidian_Thicket_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_OT_Robert_ExclamationMark
# 99 "data/maps/Obsidian_Thicket_3/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 100 "data/maps/Obsidian_Thicket_3/scripts.pory"
	addobject 8
# 101 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setobjectxy 8, 19, 27
# 102 "data/maps/Obsidian_Thicket_3/scripts.pory"
	applymovement 8, Movement_Gym2_Robert_Approaches
# 103 "data/maps/Obsidian_Thicket_3/scripts.pory"
	waitmovement 8
# 104 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_1
# 105 "data/maps/Obsidian_Thicket_3/scripts.pory"
	clearflag FLAG_HIDE_THIRD_ENCOUNTER_ROB
# 106 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 40
	goto_if_ge EventScript_Gym3_MeetRob_2
# 116 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_4
# 117 "data/maps/Obsidian_Thicket_3/scripts.pory"
	call EventScript_Gym3_RobertMoves
EventScript_Gym3_MeetRob_1:
# 119 "data/maps/Obsidian_Thicket_3/scripts.pory"
	releaseall
	return

EventScript_Gym3_MeetRob_2:
# 107 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_2, MSGBOX_YESNO
# 108 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym3_MeetRob_5
# 112 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_3
# 113 "data/maps/Obsidian_Thicket_3/scripts.pory"
	call EventScript_Gym3_RobertMoves
	goto EventScript_Gym3_MeetRob_1

EventScript_Gym3_MeetRob_5:
# 109 "data/maps/Obsidian_Thicket_3/scripts.pory"
	trainerbattle_single TRAINER_THIRD_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym3_MeetRob_1


EventScript_Gym3_RobertBeaten::
# 123 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_RobertBeaten_Text_0
# 124 "data/maps/Obsidian_Thicket_3/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 125 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_RobertBeaten_Text_1
# 126 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_ROBERT_STATUS, 4
	goto_if_eq EventScript_Gym3_RobertBeaten_2
EventScript_Gym3_RobertBeaten_1:
# 130 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setvar VAR_ROBERT_STATUS, 6
# 131 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setflag FLAG_HIDE_THIRD_ENCOUNTER_ROB
# 132 "data/maps/Obsidian_Thicket_3/scripts.pory"
	releaseall
	return

EventScript_Gym3_RobertBeaten_2:
# 127 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_RobertBeaten_Text_2
# 128 "data/maps/Obsidian_Thicket_3/scripts.pory"
	call EventScript_Gym3_RobertLeaves
	goto EventScript_Gym3_RobertBeaten_1


EventScript_Gym3_RobertMoves::
# 136 "data/maps/Obsidian_Thicket_3/scripts.pory"
	applymovement 8, Movement_Gym2_RobertMoves
# 137 "data/maps/Obsidian_Thicket_3/scripts.pory"
	waitmovement 8
# 138 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setobjectxy 8, 21, 21
# 139 "data/maps/Obsidian_Thicket_3/scripts.pory"
	setvar VAR_ROBERT_STATUS, 5
	return


EventScript_Gym3_RobertLeaves::
# 143 "data/maps/Obsidian_Thicket_3/scripts.pory"
	applymovement 8, Movement_Gym2_RobertLeaves
# 144 "data/maps/Obsidian_Thicket_3/scripts.pory"
	waitmovement 8
	return


EventScript_Gym3_Robert_FindLater::
# 148 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_ROBERT_STATUS, 5
	goto_if_eq EventScript_Gym3_Robert_FindLater_2
EventScript_Gym3_Robert_FindLater_1:
# 159 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_ROBERT_STATUS, 6
	goto_if_eq EventScript_Gym3_Robert_FindLater_5
EventScript_Gym3_Robert_FindLater_4:
# 162 "data/maps/Obsidian_Thicket_3/scripts.pory"
	releaseall
	return

EventScript_Gym3_Robert_FindLater_2:
# 149 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_Robert_FindLater_Text_0
# 150 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 40
	goto_if_ge EventScript_Gym3_Robert_FindLater_7
# 156 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_3
	goto EventScript_Gym3_Robert_FindLater_1

EventScript_Gym3_Robert_FindLater_5:
# 160 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_Robert_FindLater_Text_1
	goto EventScript_Gym3_Robert_FindLater_4

EventScript_Gym3_Robert_FindLater_7:
# 151 "data/maps/Obsidian_Thicket_3/scripts.pory"
	msgbox EventScript_Gym3_MeetRob_Text_2, MSGBOX_YESNO
# 152 "data/maps/Obsidian_Thicket_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym3_Robert_FindLater_10
	goto EventScript_Gym3_Robert_FindLater_1

EventScript_Gym3_Robert_FindLater_10:
# 153 "data/maps/Obsidian_Thicket_3/scripts.pory"
	trainerbattle_single TRAINER_THIRD_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym3_Robert_FindLater_1


# 229 "data/maps/Obsidian_Thicket_3/scripts.pory"
Movement_ObsidianThicket_GirlToTreecko:
# 230 "data/maps/Obsidian_Thicket_3/scripts.pory"
	walk_left
# 231 "data/maps/Obsidian_Thicket_3/scripts.pory"
	walk_left
# 232 "data/maps/Obsidian_Thicket_3/scripts.pory"
	walk_left
# 233 "data/maps/Obsidian_Thicket_3/scripts.pory"
	walk_left
# 234 "data/maps/Obsidian_Thicket_3/scripts.pory"
	walk_left
# 235 "data/maps/Obsidian_Thicket_3/scripts.pory"
	walk_left
# 236 "data/maps/Obsidian_Thicket_3/scripts.pory"
	walk_left
# 237 "data/maps/Obsidian_Thicket_3/scripts.pory"
	face_up
	step_end

# 240 "data/maps/Obsidian_Thicket_3/scripts.pory"
Movement_OT_Robert_ExclamationMark:
# 241 "data/maps/Obsidian_Thicket_3/scripts.pory"
	emote_exclamation_mark
	step_end

ObsidianThicket_3_EventScript_TreeckoGirl_Text_0:
# 7 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "I'm going to catch so many Treeckos!$"

TreeckoSecretGrotto_Entrance_Text_0:
# 14 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "You think you can see some movement\n"
	.string "behind the trees, do you want to go in?$"

TreeckoSecretGrotto_Entrance_Text_1:
# 22 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "You think you can see some Treeckos in\n"
	.string "the trees, do you want to disturb them?$"

TreeckoSecretGrotto_Entrance_Text_2:
# 26 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "WOW WAS THAT WAS SO COOL!$"

TreeckoSecretGrotto_Entrance_Text_3:
# 30 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Sorry, I followed you I had to see where\n"
	.string "they were hiding out.$"

TreeckoSecretGrotto_Entrance_Text_4:
# 31 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "My mum used to have a Treecko before\n"
	.string "she died and it was always so fun to\l"
	.string "play with$"

TreeckoSecretGrotto_Entrance_Text_5:
# 32 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "She had to release it when she got ill as\n"
	.string "he was getting to big for us to care\l"
	.string "for.$"

TreeckoSecretGrotto_Entrance_Text_6:
# 33 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "I always hope one day to find him again$"

TreeckoSecretGrotto_Entrance_Text_7:
# 34 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "He didn't look like these Treecko\n"
	.string "though.$"

TreeckoSecretGrotto_Entrance_Text_8:
# 35 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "I hear more coming!$"

TreeckoSecretGrotto_Entrance_Text_9:
# 40 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Wow that was such a strong Pokémon!\n"
	.string "You are an incredible trainer, I want to\l"
	.string "get strong myself and be like you!$"

TreeckoSecretGrotto_Entrance_Text_10:
# 41 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "My mother gave me this, I think it would\n"
	.string "help you more than me$"

TreeckoSecretGrotto_Entrance_Text_11:
# 43 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "That sceptile reminded me a lot about\n"
	.string "our old Treecko, but it was a different\l"
	.string "colour.$"

TreeckoSecretGrotto_Entrance_Text_12:
# 49 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "You can hear something in the trees but\n"
	.string "can't make your way in.$"

Gym3_Sign_Text_0:
# 89 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Hemlock Gym: Can you navigate the\n"
	.string "toxic landscape$"

EventScript_Gym3_MeetRob_Text_0:
# 96 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "You made it!$"

EventScript_Gym3_MeetRob_Text_1:
# 104 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym3_MeetRob_Text_2:
# 107 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Are you ready to go again?$"

EventScript_Gym3_MeetRob_Text_3:
# 112 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym3_MeetRob_Text_4:
# 116 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym3_RobertBeaten_Text_0:
# 123 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Wow you're incredible, here take this!$"

EventScript_Gym3_RobertBeaten_Text_1:
# 125 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym3_RobertBeaten_Text_2:
# 127 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Anyway I'll catch you later!$"

EventScript_Gym3_Robert_FindLater_Text_0:
# 149 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym3_Robert_FindLater_Text_1:
# 160 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "I'll train some more and beat you by the\n"
	.string "Ember gym.$"

BugTrainer_Mark_Intro::
# 167 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "I was trying to reach the gym but there\n"
	.string "are so many tough trainers in the way!$"

BugTrainer_Mark_Outro::
# 171 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "You are great! You might be strong\n"
	.string "enough to make it.$"

Bugtrainer_Mark_PostBattle::
# 175 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Good luck!$"

GentlemanArthur_Intro::
# 179 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Greetings, good sir! I am Gentleman\n"
	.string "Arthur, well-versed in the art of\l"
	.string "gentlemanly Pokémon battles. Shall we\l"
	.string "engage in a courteous duel?$"

GentlemanArthur_Outro::
# 183 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "A most exquisite battle, my friend! Your\n"
	.string "skills shine brightly. May your journey\l"
	.string "be as refined as our encounter!$"

GentlemanArthur_PostBattle::
# 187 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Splendid battle! If ever you seek\n"
	.string "gentlemanly advice or simply wish to\l"
	.string "converse, you can find me along your\l"
	.string "journey.$"

Lass_Jessica_Intro::
# 191 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Hiya! I'm Lass Jessica, ready to bring\n"
	.string "some fun into battle! Hope you're ready\l"
	.string "for a lively showdown!$"

Lass_Jessica_Outro::
# 195 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Wow, you're good! Your energy outshone\n"
	.string "mine in this battle. Keep that\l"
	.string "enthusiasm burning on your journey!$"

Lass_Jessica_PostBattle::
# 199 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Such a fun battle! If you ever want to\n"
	.string "have another lively match or just chat,\l"
	.string "find me along your journey, okay?$"

Expert_Herbert_Intro::
# 203 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Greetings, young trainer! I am Expert\n"
	.string "Herbert, here to test your skills\l"
	.string "against a seasoned Pokémon veteran.\l"
	.string "Are you up for the challenge?$"

Expert_Herbert_Outro::
# 207 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Impressive battle, my young friend!\n"
	.string "Your potential shines brightly. May\l"
	.string "your journey be filled with continued\l"
	.string "growth and success!$"

Expert_Herbert_PostBattle::
# 211 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "A battle worthy of an expert! If you\n"
	.string "ever seek advice or wish to test your\l"
	.string "skills again, you know where to find me\l"
	.string "on your journey.$"

Matron_Angela_Intro::
# 215 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Hello, dear! I'm Matron Angela, and I'm\n"
	.string "here to share a warm and nurturing\l"
	.string "battle with you. Let's see what we can\l"
	.string "learn from each other!$"

Matron_Angela_Outro::
# 219 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "What a delightful battle, sweetheart!\n"
	.string "Your skills blossomed beautifully. May\l"
	.string "your journey be filled with warmth and\l"
	.string "kindness.$"

Matron_Angela_PostBattle::
# 223 "data/maps/Obsidian_Thicket_3/scripts.pory"
	.string "Such a heartwarming battle! If you ever\n"
	.string "need a nurturing presence or simply\l"
	.string "want to chat, you can find me along your\l"
	.string "journey.$"
