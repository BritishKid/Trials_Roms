Hemlock_Gym_Interior_MapScripts::
# 2 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Hemlock_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Hemlock_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Hemlock_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

Hemlock_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	setflag FLAG_TURN_ON_INCREASED_XP
	return

Hemlock_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 3 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS_ON, Hemlock_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


HemlockGym_Interior_Greeter::
# 10 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	lockall
# 11 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	faceplayer
# 12 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Interior_Greeter_Text_0
# 13 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Interior_Greeter_Text_1
# 14 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	special HealPlayerParty
# 15 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS_ON, HemlockGym_Interior_Greeter_3
HemlockGym_Interior_Greeter_1:
# 22 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return

HemlockGym_Interior_Greeter_2:
# 16 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Interior_Greeter_Text_2, MSGBOX_YESNO
# 17 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HemlockGym_Interior_Greeter_6
	goto HemlockGym_Interior_Greeter_1

HemlockGym_Interior_Greeter_3:
# 15 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, HemlockGym_Interior_Greeter_2
	goto HemlockGym_Interior_Greeter_1

HemlockGym_Interior_Greeter_6:
# 18 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	cleartrainerflag GYM_XP_DUMP
# 19 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto HemlockGym_Interior_Greeter_1


HemlockGym_Interior_Leader_Kevin::
# 26 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	lockall
# 27 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single TRAINER_KEVIN_GYMLEADER, HemlockGym_Kevin_Intro, HemlockGym_Kevin_Outro, HemlockGym_KevinPostScript
# 28 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Kevin_Postbattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


HemlockGym_KevinPostScript::
# 33 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_KevinPostScript_Text_0
# 34 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 35 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_KevinPostScript_Text_1
# 36 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	special DoDomeConfetti
# 37 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	setflag FLAG_BADGE03_GET
# 38 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	clearflag FLAG_TURN_ON_INCREASED_XP
# 39 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_KevinPostScript_Text_2
# 40 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	giveitem ITEM_TM36
# 41 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


Hemlock_TrainerBattle_Tessa::
# 45 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_TESSA, HemlockGym_Tessa_Intro, HemlockGym_Tessa_Outro, Increase_Trainers_Beaten
# 46 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Tessa_Postbattle, MSGBOX_AUTOCLOSE
	end


Hemlock_TrainerBattle_Pablo::
# 51 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_PABLO, HemlockGym_Pablo_Intro, HemlockGym_Pablo_Outro, Increase_Trainers_Beaten
# 52 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_PabloPostbattle, MSGBOX_AUTOCLOSE
	end


Hemlock_EventScript_Victor::
# 57 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_VICTOR, HemlockGym_Victor_Intro, HemlockGym_Victor_Outro, Increase_Trainers_Beaten
# 58 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Victor_Postbattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


Hemlock_EventScript_Ollie::
# 63 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_OLLIE, HemlockGym_Ollie_Intro, HemlockGym_Ollie_Outro, Increase_Trainers_Beaten
# 64 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Ollie_Postbattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


Hemlock_EventScript_Chloe::
# 69 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_CHLOE, HemlockGym_Chloe_Intro, HemlockGym_Chloe_Outro, Increase_Trainers_Beaten
# 70 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Chloe_Postbattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


HemlockGym_Interior_Greeter_Text_0:
# 12 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Yo Champ in the making! This gym\n"
	.string "specialises in Poison types. Psychic\l"
	.string "and Ground moves are the best way to\l"
	.string "take them out.$"

HemlockGym_Interior_Greeter_Text_1:
# 13 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Let me heal up your Pokemon before you\n"
	.string "go further.$"

HemlockGym_Interior_Greeter_Text_2:
# 16 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "How about a battle for some fast\n"
	.string "levels?$"

HemlockGym_KevinPostScript_Text_0:
# 33 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "That was unexpected! You should come\n"
	.string "down to the orphanage and teach them\l"
	.string "some of your skills.$"

HemlockGym_KevinPostScript_Text_1:
# 35 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "You obtained the Hemlock Badge.$"

HemlockGym_KevinPostScript_Text_2:
# 39 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Also please take this TM, it contains\n"
	.string "the move Sludge Bomb.$"

HemlockGym_Kevin_Intro::
# 77 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Although my Pokémon are toxic I'd like\n"
	.string "to represent kindness. Now give it your\l"
	.string "all and make this a battle to remember$"

HemlockGym_Kevin_Outro::
# 81 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "So strong!$"

HemlockGym_Kevin_Postbattle::
# 85 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Always remember to do good to others\n"
	.string "and your Pokémon. Remember not to\l"
	.string "judge a book by it's cover, even though\l"
	.string "they seem poisonous at first$"

HemlockGym_Ollie_Intro::
# 89 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Poison Pokémon are just incredible$"

HemlockGym_Ollie_Outro::
# 93 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "They got nothing on my steelix$"

HemlockGym_Ollie_Postbattle::
# 97 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Time to go learn about ground Pokémon$"

HemlockGym_Chloe_Intro::
# 101 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "This is a great job, but the work\n"
	.string "environment is toxic$"

HemlockGym_Chloe_Outro::
# 105 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Fine don't laugh at my jokes$"

HemlockGym_Chloe_Postbattle::
# 109 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Just go$"

HemlockGym_Tessa_Intro::
# 114 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Welcome to the Hemlock Gym! I'm Tessa,\n"
	.string "the guardian of these toxic waters.\l"
	.string "Prepare for a battle as murky as the\l"
	.string "swamp itself!$"

HemlockGym_Tessa_Outro::
# 118 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "You've bested me, trainer! The poison of\n"
	.string "the swamp couldn't hold you back. Keep\l"
	.string "that resilience on your journey.$"

HemlockGym_Tessa_Postbattle::
# 122 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Impressive battling! The toxins may\n"
	.string "sting, but your victory is as clear as\l"
	.string "the moonlight on the swamp. If you ever\l"
	.string "need guidance, Hemlock Town's doors are\l"
	.string "always open.$"

HemlockGym_Pablo_Intro::
# 126 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Yo, trainer! I'm Pablo, the poison\n"
	.string "specialist in this gym. Get ready for a\l"
	.string "battle with a little extra venom!$"

HemlockGym_Pablo_Outro::
# 130 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Whoa, you got me good! Your skills are\n"
	.string "sharper than a Beedrill's stinger. Keep\l"
	.string "that edge on your journey.$"

HemlockGym_PabloPostbattle::
# 134 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Nice moves, trainer! The swamp may be\n"
	.string "poisonous, but you've got the antidote.\l"
	.string "If you ever want to swap battle\l"
	.string "strategies, find me in Hemlock Town!$"

HemlockGym_Victor_Intro::
# 138 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Greetings, challenger! I'm Victor, the\n"
	.string "gym's poison connoisseur. Let's see if\l"
	.string "you can handle the venomous power of\l"
	.string "my Pokémon!$"

HemlockGym_Victor_Outro::
# 142 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Well played, trainer! The swamp's toxins\n"
	.string "couldn't slow you down. Keep that\l"
	.string "determination burning on your journey.$"

HemlockGym_Victor_Postbattle::
# 146 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Outstanding battle! You've conquered\n"
	.string "the poison-infested waters. If you\l"
	.string "ever seek wisdom or just want to chat,\l"
	.string "find me in Hemlock Town.$"
