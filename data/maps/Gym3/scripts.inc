Gym3_MapScripts::
	.byte 0


Hemlock_EventScript_GymLeader::
# 4 "data/maps/Gym3/scripts.pory"
	lockall
# 5 "data/maps/Gym3/scripts.pory"
	trainerbattle_single TRAINER_KEVIN_GYMLEADER, HemlockGym_Kevin_Intro, HemlockGym_Kevin_Outro, HemlockGym_Kevin_PostbattleScript
# 6 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_Kevin_Postbattle, MSGBOX_AUTOCLOSE
# 7 "data/maps/Gym3/scripts.pory"
	releaseall
	return


HemlockGym_Kevin_PostbattleScript::
# 11 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_Kevin_PostbattleScript_Text_0
# 12 "data/maps/Gym3/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 13 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_Kevin_PostbattleScript_Text_1
# 14 "data/maps/Gym3/scripts.pory"
	special DoDomeConfetti
# 15 "data/maps/Gym3/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_PALOS_BADGE
# 16 "data/maps/Gym3/scripts.pory"
	setflag FLAG_BADGE03_GET
# 17 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_Kevin_PostbattleScript_Text_2
# 18 "data/maps/Gym3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Gym3/scripts.pory"
	giveitem ITEM_TM36
# 20 "data/maps/Gym3/scripts.pory"
	releaseall
	return


Gym3_EventScript_Greeter::
# 24 "data/maps/Gym3/scripts.pory"
	lockall
# 25 "data/maps/Gym3/scripts.pory"
	msgbox Gym3_EventScript_Greeter_Text_0
# 26 "data/maps/Gym3/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Gym3_EventScript_Greeter_3
Gym3_EventScript_Greeter_1:
# 32 "data/maps/Gym3/scripts.pory"
	releaseall
	return

Gym3_EventScript_Greeter_2:
# 27 "data/maps/Gym3/scripts.pory"
	msgbox Gym3_EventScript_Greeter_Text_1, MSGBOX_YESNO
# 28 "data/maps/Gym3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Gym3_EventScript_Greeter_6
	goto Gym3_EventScript_Greeter_1

Gym3_EventScript_Greeter_3:
# 26 "data/maps/Gym3/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS, Gym3_EventScript_Greeter_2
	goto Gym3_EventScript_Greeter_1

Gym3_EventScript_Greeter_6:
# 29 "data/maps/Gym3/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto Gym3_EventScript_Greeter_1


Hemlock_EventScript_Tessa::
# 36 "data/maps/Gym3/scripts.pory"
	lockall
# 37 "data/maps/Gym3/scripts.pory"
	trainerbattle_single TRAINER_TESSA_GYM3, HemlockGym_Tessa_Intro, HemlockGym_Tessa_Outro, Increase_Trainers_Beaten
# 38 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_Tessa_Postbattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Gym3/scripts.pory"
	releaseall
	return


Hemlock_EventScript_Pablo::
# 43 "data/maps/Gym3/scripts.pory"
	lockall
# 44 "data/maps/Gym3/scripts.pory"
	trainerbattle_single TRAINER_PABLO_GYM3, HemlockGym_Pablo_Intro, HemlockGym_Pablo_Outro, Increase_Trainers_Beaten
# 45 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_PabloPostbattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/Gym3/scripts.pory"
	releaseall
	return


Hemlock_EventScript_Victor::
# 50 "data/maps/Gym3/scripts.pory"
	lockall
# 51 "data/maps/Gym3/scripts.pory"
	trainerbattle_single TRAINER_VICTOR_GYM3, HemlockGym_Victor_Intro, HemlockGym_Victor_Outro, Increase_Trainers_Beaten
# 52 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_Victor_Postbattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Gym3/scripts.pory"
	releaseall
	return


Hemlock_EventScript_Chloe::
# 57 "data/maps/Gym3/scripts.pory"
	lockall
# 58 "data/maps/Gym3/scripts.pory"
	trainerbattle_single TRAINER_CHLOE_GYM3, HemlockGym_Chloe_Intro, HemlockGym_Chloe_Outro, Increase_Trainers_Beaten
# 59 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_Chloe_Postbattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Gym3/scripts.pory"
	releaseall
	return


Hemlock_EventScript_Ollie::
# 64 "data/maps/Gym3/scripts.pory"
	lockall
# 65 "data/maps/Gym3/scripts.pory"
	trainerbattle_single TRAINER_OLLIE_GYM3, HemlockGym_Ollie_Intro, HemlockGym_Ollie_Outro, Increase_Trainers_Beaten
# 66 "data/maps/Gym3/scripts.pory"
	msgbox HemlockGym_Ollie_Postbattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Gym3/scripts.pory"
	releaseall
	return


HemlockGym_Kevin_PostbattleScript_Text_0:
# 11 "data/maps/Gym3/scripts.pory"
	.string "That was unexpected! You should come\n"
	.string "down to the orphanage and teach them\l"
	.string "some of your skills.$"

HemlockGym_Kevin_PostbattleScript_Text_1:
# 13 "data/maps/Gym3/scripts.pory"
	.string "You obtained the Hemlock Badge.$"

HemlockGym_Kevin_PostbattleScript_Text_2:
# 17 "data/maps/Gym3/scripts.pory"
	.string "Also please take this TM it contains\n"
	.string "Sludge Bomb$"

Gym3_EventScript_Greeter_Text_0:
# 25 "data/maps/Gym3/scripts.pory"
	.string "Yo champ in the making! This gym\n"
	.string "specialises in Poison types. Ground and\l"
	.string "Psychic is the best way to take them\l"
	.string "out$"

Gym3_EventScript_Greeter_Text_1:
# 27 "data/maps/Gym3/scripts.pory"
	.string "Are you interested in getting some fast\n"
	.string "levels?$"

HemlockGym_Ollie_Intro::
# 72 "data/maps/Gym3/scripts.pory"
	.string "Poison Pokémon are just incredible$"

HemlockGym_Ollie_Outro::
# 76 "data/maps/Gym3/scripts.pory"
	.string "They got nothing on my steelix$"

HemlockGym_Ollie_Postbattle::
# 80 "data/maps/Gym3/scripts.pory"
	.string "Time to go learn about ground Pokémon$"

HemlockGym_Chloe_Intro::
# 84 "data/maps/Gym3/scripts.pory"
	.string "This is a great job, but the work\n"
	.string "environment is toxic$"

HemlockGym_Chloe_Outro::
# 88 "data/maps/Gym3/scripts.pory"
	.string "Fine don't laugh at my jokes$"

HemlockGym_Chloe_Postbattle::
# 92 "data/maps/Gym3/scripts.pory"
	.string "Just go$"

HemlockGym_Kevin_Intro::
# 96 "data/maps/Gym3/scripts.pory"
	.string "Although my Pokémon are toxic I'd like\n"
	.string "to represent kindness. Now give it your\l"
	.string "all and make this a battle to remember$"

HemlockGym_Kevin_Outro::
# 100 "data/maps/Gym3/scripts.pory"
	.string "So strong!$"

HemlockGym_Kevin_Postbattle::
# 104 "data/maps/Gym3/scripts.pory"
	.string "Always remember to do good to others\n"
	.string "and your Pokémon. Remember not to\l"
	.string "judge a book by it's cover, even though\l"
	.string "they seem poisonous at first$"

HemlockGym_Tessa_Intro::
# 110 "data/maps/Gym3/scripts.pory"
	.string "Welcome to the Hemlock Gym! I'm Tessa,\n"
	.string "the guardian of these toxic waters.\l"
	.string "Prepare for a battle as murky as the\l"
	.string "swamp itself!$"

HemlockGym_Tessa_Outro::
# 114 "data/maps/Gym3/scripts.pory"
	.string "You've bested me, trainer! The poison of\n"
	.string "the swamp couldn't hold you back. Keep\l"
	.string "that resilience on your journey.$"

HemlockGym_Tessa_Postbattle::
# 118 "data/maps/Gym3/scripts.pory"
	.string "Impressive battling! The toxins may\n"
	.string "sting, but your victory is as clear as\l"
	.string "the moonlight on the swamp. If you ever\l"
	.string "need guidance, Hemlock Town's doors are\l"
	.string "always open.$"

HemlockGym_Pablo_Intro::
# 122 "data/maps/Gym3/scripts.pory"
	.string "Yo, trainer! I'm Pablo, the poison\n"
	.string "specialist in this gym. Get ready for a\l"
	.string "battle with a little extra venom!$"

HemlockGym_Pablo_Outro::
# 126 "data/maps/Gym3/scripts.pory"
	.string "Whoa, you got me good! Your skills are\n"
	.string "sharper than a Beedrill's stinger. Keep\l"
	.string "that edge on your journey.$"

HemlockGym_PabloPostbattle::
# 130 "data/maps/Gym3/scripts.pory"
	.string "Nice moves, trainer! The swamp may be\n"
	.string "poisonous, but you've got the antidote.\l"
	.string "If you ever want to swap battle\l"
	.string "strategies, find me in Hemlock Town!$"

HemlockGym_Victor_Intro::
# 134 "data/maps/Gym3/scripts.pory"
	.string "Greetings, challenger! I'm Victor, the\n"
	.string "gym's poison connoisseur. Let's see if\l"
	.string "you can handle the venomous power of\l"
	.string "my Pokémon!$"

HemlockGym_Victor_Outro::
# 138 "data/maps/Gym3/scripts.pory"
	.string "Well played, trainer! The swamp's toxins\n"
	.string "couldn't slow you down. Keep that\l"
	.string "determination burning on your journey.$"

HemlockGym_Victor_Postbattle::
# 142 "data/maps/Gym3/scripts.pory"
	.string "Outstanding battle! You've conquered\n"
	.string "the poison-infested waters. If you\l"
	.string "ever seek wisdom or just want to chat,\l"
	.string "find me in Hemlock Town.$"
