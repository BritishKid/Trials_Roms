Gym3_MapScripts::
	.byte 0


Hemlock_EventScript_GymLeader::
	lockall
	trainerbattle_single TRAINER_KEVIN_GYMLEADER, HemlockGym_Kevin_Intro, HemlockGym_Kevin_Outro, HemlockGym_Kevin_PostbattleScript
	msgbox HemlockGym_Kevin_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


HemlockGym_Kevin_PostbattleScript::
	msgbox HemlockGym_Kevin_PostbattleScript_Text_0
	playfanfare MUS_OBTAIN_BADGE
	msgbox HemlockGym_Kevin_PostbattleScript_Text_1
	special DoDomeConfetti
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_PALOS_BADGE
	setflag FLAG_BADGE03_GET
	msgbox HemlockGym_Kevin_PostbattleScript_Text_2
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_TM36
	releaseall
	return


Gym3_EventScript_Greeter::
	lockall
	msgbox Gym3_EventScript_Greeter_Text_0
	goto_if_unset FLAG_BADGE03_GET, Gym3_EventScript_Greeter_3
Gym3_EventScript_Greeter_1:
	releaseall
	return

Gym3_EventScript_Greeter_2:
	msgbox Gym3_EventScript_Greeter_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Gym3_EventScript_Greeter_6
	goto Gym3_EventScript_Greeter_1

Gym3_EventScript_Greeter_3:
	goto_if_set FLAG_LEVEL_CAPS, Gym3_EventScript_Greeter_2
	goto Gym3_EventScript_Greeter_1

Gym3_EventScript_Greeter_6:
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto Gym3_EventScript_Greeter_1


Hemlock_EventScript_Tessa::
	lockall
	trainerbattle_single TRAINER_TESSA_GYM3, HemlockGym_Tessa_Intro, HemlockGym_Tessa_Outro, Increase_Trainers_Beaten
	msgbox HemlockGym_Tessa_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Hemlock_EventScript_Pablo::
	lockall
	trainerbattle_single TRAINER_PABLO_GYM3, HemlockGym_Pablo_Intro, HemlockGym_Pablo_Outro, Increase_Trainers_Beaten
	msgbox HemlockGym_PabloPostbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Hemlock_EventScript_Victor::
	lockall
	trainerbattle_single TRAINER_VICTOR_GYM3, HemlockGym_Victor_Intro, HemlockGym_Victor_Outro, Increase_Trainers_Beaten
	msgbox HemlockGym_Victor_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Hemlock_EventScript_Chloe::
	lockall
	trainerbattle_single TRAINER_CHLOE_GYM3, HemlockGym_Chloe_Intro, HemlockGym_Chloe_Outro, Increase_Trainers_Beaten
	msgbox HemlockGym_Chloe_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Hemlock_EventScript_Ollie::
	lockall
	trainerbattle_single TRAINER_OLLIE_GYM3, HemlockGym_Ollie_Intro, HemlockGym_Ollie_Outro, Increase_Trainers_Beaten
	msgbox HemlockGym_Ollie_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


HemlockGym_Kevin_PostbattleScript_Text_0:
	.string "That was unexpected! You should come\n"
	.string "down to the orphanage and teach them\l"
	.string "some of your skills.$"

HemlockGym_Kevin_PostbattleScript_Text_1:
	.string "You obtained the Hemlock Badge.$"

HemlockGym_Kevin_PostbattleScript_Text_2:
	.string "Also please take this TM it contains\n"
	.string "Sludge Bomb$"

Gym3_EventScript_Greeter_Text_0:
	.string "Yo champ in the making! This gym\n"
	.string "specialises in Poison types. Ground and\l"
	.string "Psychic is the best way to take them\l"
	.string "out$"

Gym3_EventScript_Greeter_Text_1:
	.string "Are you interested in getting some fast\n"
	.string "levels?$"

HemlockGym_Ollie_Intro::
	.string "Poison Pokémon are just incredible$"

HemlockGym_Ollie_Outro::
	.string "They got nothing on my steelix$"

HemlockGym_Ollie_Postbattle::
	.string "Time to go learn about ground Pokémon$"

HemlockGym_Chloe_Intro::
	.string "This is a great job, but the work\n"
	.string "environment is toxic$"

HemlockGym_Chloe_Outro::
	.string "Fine don't laugh at my jokes$"

HemlockGym_Chloe_Postbattle::
	.string "Just go$"

HemlockGym_Kevin_Intro::
	.string "Although my Pokémon are toxic I'd like\n"
	.string "to represent kindness. Now give it your\l"
	.string "all and make this a battle to remember$"

HemlockGym_Kevin_Outro::
	.string "So strong!$"

HemlockGym_Kevin_Postbattle::
	.string "Always remember to do good to others\n"
	.string "and your Pokémon. Remember not to\l"
	.string "judge a book by it's cover, even though\l"
	.string "they seem poisonous at first$"

HemlockGym_Tessa_Intro::
	.string "Welcome to the Hemlock Gym! I'm Tessa,\n"
	.string "the guardian of these toxic waters.\l"
	.string "Prepare for a battle as murky as the\l"
	.string "swamp itself!$"

HemlockGym_Tessa_Outro::
	.string "You've bested me, trainer! The poison of\n"
	.string "the swamp couldn't hold you back. Keep\l"
	.string "that resilience on your journey.$"

HemlockGym_Tessa_Postbattle::
	.string "Impressive battling! The toxins may\n"
	.string "sting, but your victory is as clear as\l"
	.string "the moonlight on the swamp. If you ever\l"
	.string "need guidance, Hemlock Town's doors are\l"
	.string "always open.$"

HemlockGym_Pablo_Intro::
	.string "Yo, trainer! I'm Pablo, the poison\n"
	.string "specialist in this gym. Get ready for a\l"
	.string "battle with a little extra venom!$"

HemlockGym_Pablo_Outro::
	.string "Whoa, you got me good! Your skills are\n"
	.string "sharper than a Beedrill's stinger. Keep\l"
	.string "that edge on your journey.$"

HemlockGym_PabloPostbattle::
	.string "Nice moves, trainer! The swamp may be\n"
	.string "poisonous, but you've got the antidote.\l"
	.string "If you ever want to swap battle\l"
	.string "strategies, find me in Hemlock Town!$"

HemlockGym_Victor_Intro::
	.string "Greetings, challenger! I'm Victor, the\n"
	.string "gym's poison connoisseur. Let's see if\l"
	.string "you can handle the venomous power of\l"
	.string "my Pokémon!$"

HemlockGym_Victor_Outro::
	.string "Well played, trainer! The swamp's toxins\n"
	.string "couldn't slow you down. Keep that\l"
	.string "determination burning on your journey.$"

HemlockGym_Victor_Postbattle::
	.string "Outstanding battle! You've conquered\n"
	.string "the poison-infested waters. If you\l"
	.string "ever seek wisdom or just want to chat,\l"
	.string "find me in Hemlock Town.$"
