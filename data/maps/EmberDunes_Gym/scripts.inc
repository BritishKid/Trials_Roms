EmberDunes_Gym_MapScripts::
	.byte 0


Gym4_EventScript_Greeter::
# 5 "data/maps/EmberDunes_Gym/scripts.pory"
	lockall
# 6 "data/maps/EmberDunes_Gym/scripts.pory"
	faceplayer
# 7 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_EventScript_Greeter_Text_0
# 8 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_EventScript_Greeter_Text_1
# 9 "data/maps/EmberDunes_Gym/scripts.pory"
	special HealPlayerParty
# 10 "data/maps/EmberDunes_Gym/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS_ON, Gym4_EventScript_Greeter_3
Gym4_EventScript_Greeter_1:
# 17 "data/maps/EmberDunes_Gym/scripts.pory"
	releaseall
	return

Gym4_EventScript_Greeter_2:
# 11 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_EventScript_Greeter_Text_2, MSGBOX_YESNO
# 12 "data/maps/EmberDunes_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Gym4_EventScript_Greeter_6
	goto Gym4_EventScript_Greeter_1

Gym4_EventScript_Greeter_3:
# 10 "data/maps/EmberDunes_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Gym4_EventScript_Greeter_2
	goto Gym4_EventScript_Greeter_1

Gym4_EventScript_Greeter_6:
# 13 "data/maps/EmberDunes_Gym/scripts.pory"
	cleartrainerflag GYM_XP_DUMP
# 14 "data/maps/EmberDunes_Gym/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto Gym4_EventScript_Greeter_1


Gym4_EventScript_GymLeader_Sarah::
# 24 "data/maps/EmberDunes_Gym/scripts.pory"
	lockall
# 25 "data/maps/EmberDunes_Gym/scripts.pory"
	trainerbattle_single TRAINER_SARAH_GYMLEADER, Gym4_Sarah_Intro, Gym4_Sarah_Outro, Gym4_Sarah_PostbattleScript
# 26 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_Sarah_PostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/EmberDunes_Gym/scripts.pory"
	releaseall
	return


Gym4_Sarah_PostbattleScript::
# 31 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_Sarah_PostbattleScript_Text_0
# 32 "data/maps/EmberDunes_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 33 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_Sarah_PostbattleScript_Text_1
# 34 "data/maps/EmberDunes_Gym/scripts.pory"
	special DoDomeConfetti
# 36 "data/maps/EmberDunes_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 37 "data/maps/EmberDunes_Gym/scripts.pory"
	clearflag FLAG_TURN_ON_INCREASED_XP
# 38 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_Sarah_PostbattleScript_Text_2
# 39 "data/maps/EmberDunes_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/EmberDunes_Gym/scripts.pory"
	giveitem ITEM_TM30
# 41 "data/maps/EmberDunes_Gym/scripts.pory"
	releaseall
	return


Gym4_Trainer_Ollie::
# 45 "data/maps/EmberDunes_Gym/scripts.pory"
	trainerbattle_single TRAINER_OLLIE_GYM4, Gym4_Ollie_Intro, Gym4_Ollie_Outro
# 46 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_Ollie_PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/EmberDunes_Gym/scripts.pory"
	releaseall
	return


Gym4_Trainer_Bitters::
# 51 "data/maps/EmberDunes_Gym/scripts.pory"
	trainerbattle_single TRAINER_BITTERS_GYM4, Gym4_Bitter_Intro, Gym4_Bitter_Outro
# 52 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_Bitter_PostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/EmberDunes_Gym/scripts.pory"
	releaseall
	return


Gym4_Trainer_GymTrainer1::
# 57 "data/maps/EmberDunes_Gym/scripts.pory"
	trainerbattle_single TRAINER_TRAINER1_GYM4, Gym4_Trainer1_Intro, Gym4_Trainer1_Outro
# 58 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_Trainer1_PostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/EmberDunes_Gym/scripts.pory"
	releaseall
	return


Gym4_Trainer_Ay::
# 63 "data/maps/EmberDunes_Gym/scripts.pory"
	trainerbattle_single TRAINER_AY_GYM4, Gym4_Ay_Intro, Gym4_Ay_Outro
# 64 "data/maps/EmberDunes_Gym/scripts.pory"
	msgbox Gym4_Ay_PostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/EmberDunes_Gym/scripts.pory"
	releaseall
	return


Gym4_EventScript_Greeter_Text_0:
# 7 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "Yo Champ in the making! This gym\n"
	.string "specialises in Ghost types. Ghost, Dark\l"
	.string "and Crystal moves are the best way to\l"
	.string "take them out.$"

Gym4_EventScript_Greeter_Text_1:
# 8 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "Let me heal up your Pokémon before you\n"
	.string "go further.$"

Gym4_EventScript_Greeter_Text_2:
# 11 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "How about a battle for some fast\n"
	.string "levels?$"

Gym4_Sarah_PostbattleScript_Text_0:
# 31 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "Fantastic! You're well on your way to\n"
	.string "becoming a champion.$"

Gym4_Sarah_PostbattleScript_Text_1:
# 33 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "You obtained the Ruin Badge.$"

Gym4_Sarah_PostbattleScript_Text_2:
# 38 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "Also please take this TM it contains\n"
	.string "Shadow Ball$"

Gym4_Sarah_Intro::
# 69 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "$"

Gym4_Sarah_Outro::
# 73 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "$"

Gym4_Sarah_PostBattle::
# 77 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "$"

Gym4_Bitter_Intro::
# 82 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "Boo\n"
	.string "Did i get ya?$"

Gym4_Bitter_Outro::
# 86 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "Aww man didnt get ya$"

Gym4_Bitter_PostBattle::
# 90 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "I'll have to hide better.$"

Gym4_Trainer1_Intro::
# 94 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "...?$"

Gym4_Trainer1_Outro::
# 98 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "...!$"

Gym4_Trainer1_PostBattle::
# 102 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "...$"

Gym4_Ay_Intro::
# 106 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "Hey, looks like you've seen a ghost$"

Gym4_Ay_Outro::
# 110 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "This place still gives me the creeps.$"

Gym4_Ay_PostBattle::
# 114 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "Welp...I've seen a ghost$"

Gym4_Ollie_Intro::
# 118 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "This place is spooky, Steelix will learn\n"
	.string "so much.$"

Gym4_Ollie_Outro::
# 122 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "You almost made it a real ghost type!$"

Gym4_Ollie_PostBattle::
# 126 "data/maps/EmberDunes_Gym/scripts.pory"
	.string "I might pop into the Quarry on my way\n"
	.string "south, I heard it's great to train my\l"
	.string "Steelix.$"
