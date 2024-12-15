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
	goto_if_unset FLAG_LEVEL_CAPS_ON, HemlockGym_Interior_Greeter_3
HemlockGym_Interior_Greeter_1:
# 20 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return

HemlockGym_Interior_Greeter_2:
# 14 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Interior_Greeter_Text_1, MSGBOX_YESNO
# 15 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HemlockGym_Interior_Greeter_6
	goto HemlockGym_Interior_Greeter_1

HemlockGym_Interior_Greeter_3:
# 13 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, HemlockGym_Interior_Greeter_2
	goto HemlockGym_Interior_Greeter_1

HemlockGym_Interior_Greeter_6:
# 16 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	cleartrainerflag GYM_XP_DUMP
# 17 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto HemlockGym_Interior_Greeter_1


HemlockGym_Interior_Leader_Kevin::
# 24 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	lockall
# 25 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single TRAINER_KEVIN_GYMLEADER, HemlockGym_Kevin_Intro, HemlockGym_Kevin_Outro, HemlockGym_KevinPostScript
# 26 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Kevin_Postbattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


HemlockGym_KevinPostScript::
# 31 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_KevinPostScript_Text_0
# 32 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 33 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_KevinPostScript_Text_1
# 34 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	special DoDomeConfetti
# 35 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	setflag FLAG_BADGE03_GET
# 36 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	clearflag FLAG_TURN_ON_INCREASED_XP
# 37 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_KevinPostScript_Text_2
# 38 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	giveitem ITEM_TM36
# 39 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


Hemlock_TrainerBattle_Tessa::
# 43 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_TESSA, HemlockGym_Tessa_Intro, HemlockGym_Tessa_Outro, Increase_Trainers_Beaten
# 44 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Tessa_Postbattle, MSGBOX_AUTOCLOSE
	end


Hemlock_TrainerBattle_Pablo::
# 49 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_PABLO, HemlockGym_Pablo_Intro, HemlockGym_Pablo_Outro, Increase_Trainers_Beaten
# 50 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_PabloPostbattle, MSGBOX_AUTOCLOSE
	end


Hemlock_EventScript_Victor::
# 55 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_VICTOR, HemlockGym_Victor_Intro, HemlockGym_Victor_Outro, Increase_Trainers_Beaten
# 56 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Victor_Postbattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


Hemlock_EventScript_Ollie::
# 61 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_OLLIE, HemlockGym_Ollie_Intro, HemlockGym_Ollie_Outro, Increase_Trainers_Beaten
# 62 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Ollie_Postbattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


Hemlock_EventScript_Chloe::
# 67 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	trainerbattle_single HEMLOCKGYM_TRAINER_CHLOE, HemlockGym_Chloe_Intro, HemlockGym_Chloe_Outro, Increase_Trainers_Beaten
# 68 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	msgbox HemlockGym_Chloe_Postbattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	releaseall
	return


HemlockGym_Interior_Greeter_Text_0:
# 12 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Yo Champ in the making! This gym\n"
	.string "specialises in Poison types. Psychic\l"
	.string "and Ground moves are the best way to\l"
	.string "take them out.$"

HemlockGym_Interior_Greeter_Text_1:
# 14 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "How about a battle for some fast\n"
	.string "levels?$"

HemlockGym_KevinPostScript_Text_0:
# 31 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "That was unexpected! You should come\n"
	.string "down to the orphanage and teach them\l"
	.string "some of your skills.$"

HemlockGym_KevinPostScript_Text_1:
# 33 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "You obtained the Hemlock Badge.$"

HemlockGym_KevinPostScript_Text_2:
# 37 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Also please take this TM, it contains\n"
	.string "the move Sludge Bomb.$"

HemlockGym_Kevin_Intro::
# 75 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Although my Pokémon are toxic I'd like\n"
	.string "to represent kindness. Now give it your\l"
	.string "all and make this a battle to remember$"

HemlockGym_Kevin_Outro::
# 79 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "So strong!$"

HemlockGym_Kevin_Postbattle::
# 83 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Always remember to do good to others\n"
	.string "and your Pokémon. Remember not to\l"
	.string "judge a book by it's cover, even though\l"
	.string "they seem poisonous at first$"

HemlockGym_Ollie_Intro::
# 87 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Poison Pokémon are just incredible$"

HemlockGym_Ollie_Outro::
# 91 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "They got nothing on my steelix$"

HemlockGym_Ollie_Postbattle::
# 95 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Time to go learn about ground Pokémon$"

HemlockGym_Chloe_Intro::
# 99 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "This is a great job, but the work\n"
	.string "environment is toxic$"

HemlockGym_Chloe_Outro::
# 103 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Fine don't laugh at my jokes$"

HemlockGym_Chloe_Postbattle::
# 107 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Just go$"

HemlockGym_Tessa_Intro::
# 112 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Welcome to the Hemlock Gym! I'm Tessa,\n"
	.string "the guardian of these toxic waters.\l"
	.string "Prepare for a battle as murky as the\l"
	.string "swamp itself!$"

HemlockGym_Tessa_Outro::
# 116 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "You've bested me, trainer! The poison of\n"
	.string "the swamp couldn't hold you back. Keep\l"
	.string "that resilience on your journey.$"

HemlockGym_Tessa_Postbattle::
# 120 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Impressive battling! The toxins may\n"
	.string "sting, but your victory is as clear as\l"
	.string "the moonlight on the swamp. If you ever\l"
	.string "need guidance, Hemlock Town's doors are\l"
	.string "always open.$"

HemlockGym_Pablo_Intro::
# 124 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Yo, trainer! I'm Pablo, the poison\n"
	.string "specialist in this gym. Get ready for a\l"
	.string "battle with a little extra venom!$"

HemlockGym_Pablo_Outro::
# 128 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Whoa, you got me good! Your skills are\n"
	.string "sharper than a Beedrill's stinger. Keep\l"
	.string "that edge on your journey.$"

HemlockGym_PabloPostbattle::
# 132 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Nice moves, trainer! The swamp may be\n"
	.string "poisonous, but you've got the antidote.\l"
	.string "If you ever want to swap battle\l"
	.string "strategies, find me in Hemlock Town!$"

HemlockGym_Victor_Intro::
# 136 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Greetings, challenger! I'm Victor, the\n"
	.string "gym's poison connoisseur. Let's see if\l"
	.string "you can handle the venomous power of\l"
	.string "my Pokémon!$"

HemlockGym_Victor_Outro::
# 140 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Well played, trainer! The swamp's toxins\n"
	.string "couldn't slow you down. Keep that\l"
	.string "determination burning on your journey.$"

HemlockGym_Victor_Postbattle::
# 144 "data/maps/Hemlock_Gym_Interior/scripts.pory"
	.string "Outstanding battle! You've conquered\n"
	.string "the poison-infested waters. If you\l"
	.string "ever seek wisdom or just want to chat,\l"
	.string "find me in Hemlock Town.$"
