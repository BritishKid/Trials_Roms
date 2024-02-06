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
	trainerbattle_single TRAINER_TESSA_GYM3, HemlockGym_Tessa_Intro, HemlockGym_Tessa_Outro
	msgbox HemlockGym_Tessa_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Hemlock_EventScript_Pablo::
	lockall
	trainerbattle_single TRAINER_PABLO_GYM3, HemlockGym_Pablo_Intro, HemlockGym_Pablo_Outro
	msgbox HemlockGym_PabloPostbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Hemlock_EventScript_Victor::
	lockall
	trainerbattle_single TRAINER_VICTOR_GYM3, HemlockGym_Victor_Intro, HemlockGym_Victor_Outro
	msgbox HemlockGym_Victor_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Hemlock_EventScript_Chloe::
	lockall
	trainerbattle_single TRAINER_CHLOE_GYM3, HemlockGym_Chloe_Intro, HemlockGym_Chloe_Outro
	msgbox HemlockGym_Chloe_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Hemlock_EventScript_Ollie::
	lockall
	trainerbattle_single TRAINER_OLLIE_GYM3, HemlockGym_Ollie_Intro, HemlockGym_Ollie_Outro
	msgbox HemlockGym_Ollie_Postbattle, MSGBOX_AUTOCLOSE
	releaseall
	return


HemlockGym_Kevin_PostbattleScript_Text_0:
	.string "Fantastic! You're well on your way to\n"
	.string "becoming a champion.$"

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
	.string "Poison pokemon are just incredible$"

HemlockGym_Ollie_Outro::
	.string "They got nothing on my steelix$"

HemlockGym_Ollie_Postbattle::
	.string "Time to go learn about ground pokemon$"

HemlockGym_Chloe_Intro::
	.string "TODO INTRO$"

HemlockGym_Chloe_Outro::
	.string "TODO OUTRO$"

HemlockGym_Chloe_Postbattle::
	.string "TODO OUTRO$"

HemlockGym_Kevin_Intro::
	.string "TODO INTRO$"

HemlockGym_Kevin_Outro::
	.string "TODO OUTRO$"

HemlockGym_Kevin_Postbattle::
	.string "TODO OUTRO$"

HemlockGym_Tessa_Intro::
	.string "TODO INTRO$"

HemlockGym_Tessa_Outro::
	.string "TODO OUTRO$"

HemlockGym_Tessa_Postbattle::
	.string "TODO OUTRO$"

HemlockGym_Pablo_Intro::
	.string "TODO INTRO$"

HemlockGym_Pablo_Outro::
	.string "TODO OUTRO$"

HemlockGym_PabloPostbattle::
	.string "TODO OUTRO$"

HemlockGym_Victor_Intro::
	.string "TODO INTRO$"

HemlockGym_Victor_Outro::
	.string "TODO OUTRO$"

HemlockGym_Victor_Postbattle::
	.string "TODO OUTRO$"
