Gym4_MapScripts::
	.byte 0


Gym4_EventScript_GymLeader_Sarah::
	lockall
	trainerbattle_single TRAINER_SARAH_GYMLEADER, Gym4_Sarah_Intro, Gym4_Sarah_Outro, Gym4_Sarah_PostbattleScript
	msgbox Gym4_Sarah_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Gym4_Sarah_PostbattleScript::
	msgbox Gym4_Sarah_PostbattleScript_Text_0
	playfanfare MUS_OBTAIN_BADGE
	msgbox Gym4_Sarah_PostbattleScript_Text_1
	special DoDomeConfetti
	setflag FLAG_BADGE04_GET
	msgbox Gym4_Sarah_PostbattleScript_Text_2
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_TM30
	releaseall
	return


Gym4_EventScript_Greeter::
	lockall
	msgbox Gym4_EventScript_Greeter_Text_0
	goto_if_unset FLAG_BADGE04_GET, Gym4_EventScript_Greeter_3
Gym4_EventScript_Greeter_1:
	releaseall
	return

Gym4_EventScript_Greeter_2:
	msgbox Gym4_EventScript_Greeter_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Gym4_EventScript_Greeter_6
	goto Gym4_EventScript_Greeter_1

Gym4_EventScript_Greeter_3:
	goto_if_set FLAG_LEVEL_CAPS, Gym4_EventScript_Greeter_2
	goto Gym4_EventScript_Greeter_1

Gym4_EventScript_Greeter_6:
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto Gym4_EventScript_Greeter_1


Gym4_Trainer_Ollie::
	trainerbattle_single TRAINER_OLLIE_GYM4, Gym4_Ollie_Intro, Gym4_Ollie_Outro
	msgbox Gym4_Ollie_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Gym4_Trainer_Bitters::
	trainerbattle_single TRAINER_BITTERS_GYM4, Gym4_Bitter_Intro, Gym4_Bitter_Outro
	msgbox Gym4_Bitter_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Gym4_Trainer_GymTrainer1::
	trainerbattle_single TRAINER_TRAINER1_GYM4, Gym4_Trainer1_Intro, Gym4_Trainer1_Outro
	msgbox Gym4_Trainer1_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Gym4_Trainer_Ay::
	trainerbattle_single TRAINER_AY_GYM4, Gym4_Ay_Intro, Gym4_Ay_Outro
	msgbox Gym4_Ay_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


Gym4_Sarah_PostbattleScript_Text_0:
	.string "Fantastic! You're well on your way to\n"
	.string "becoming a champion.$"

Gym4_Sarah_PostbattleScript_Text_1:
	.string "You obtained the Ruin Badge.$"

Gym4_Sarah_PostbattleScript_Text_2:
	.string "Also please take this TM it contains\n"
	.string "Shadow Ball$"

Gym4_EventScript_Greeter_Text_0:
	.string "Yo champ in the making! This gym\n"
	.string "specialises in Ghost types. Dark and\l"
	.string "other Ghost is the best way to take\l"
	.string "them out, but Normal types are immune!$"

Gym4_EventScript_Greeter_Text_1:
	.string "Are you interested in getting some fast\n"
	.string "levels?$"

Gym4_Sarah_Intro::
	.string "$"

Gym4_Sarah_Outro::
	.string "$"

Gym4_Sarah_PostBattle::
	.string "$"

Gym4_Bitter_Intro::
	.string "Boo\n"
	.string "Did i get ya?$"

Gym4_Bitter_Outro::
	.string "Aww man didnt get ya$"

Gym4_Bitter_PostBattle::
	.string "$"

Gym4_Trainer1_Intro::
	.string "Boo\n"
	.string "Did i get ya?$"

Gym4_Trainer1_Outro::
	.string "Aww man didnt get ya$"

Gym4_Trainer1_PostBattle::
	.string "$"

Gym4_Ay_Intro::
	.string "Hey, looks like you've seen a ghost$"

Gym4_Ay_Outro::
	.string "$"

Gym4_Ay_PostBattle::
	.string "Welp...I've seen a ghost$"

Gym4_Ollie_Intro::
	.string "$"

Gym4_Ollie_Outro::
	.string "$"

Gym4_Ollie_PostBattle::
	.string "$"
