Gym4_MapScripts::
	.byte 0


Gym4_EventScript_GymLeader_Sarah::
# 4 "data/maps/Gym4/scripts.pory"
	lockall
# 5 "data/maps/Gym4/scripts.pory"
	trainerbattle_single TRAINER_SARAH_GYMLEADER, Gym4_Sarah_Intro, Gym4_Sarah_Outro, Gym4_Sarah_PostbattleScript
# 6 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_Sarah_PostBattle, MSGBOX_AUTOCLOSE
# 7 "data/maps/Gym4/scripts.pory"
	releaseall
	return


Gym4_Sarah_PostbattleScript::
# 11 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_Sarah_PostbattleScript_Text_0
# 12 "data/maps/Gym4/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 13 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_Sarah_PostbattleScript_Text_1
# 14 "data/maps/Gym4/scripts.pory"
	special DoDomeConfetti
# 15 "data/maps/Gym4/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_RUIN_BADGE
# 16 "data/maps/Gym4/scripts.pory"
	setflag FLAG_BADGE04_GET
# 17 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_Sarah_PostbattleScript_Text_2
# 18 "data/maps/Gym4/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Gym4/scripts.pory"
	giveitem ITEM_TM30
# 20 "data/maps/Gym4/scripts.pory"
	releaseall
	return


Gym4_EventScript_Greeter::
# 24 "data/maps/Gym4/scripts.pory"
	lockall
# 25 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_EventScript_Greeter_Text_0
# 26 "data/maps/Gym4/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Gym4_EventScript_Greeter_3
Gym4_EventScript_Greeter_1:
# 32 "data/maps/Gym4/scripts.pory"
	releaseall
	return

Gym4_EventScript_Greeter_2:
# 27 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_EventScript_Greeter_Text_1, MSGBOX_YESNO
# 28 "data/maps/Gym4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Gym4_EventScript_Greeter_6
	goto Gym4_EventScript_Greeter_1

Gym4_EventScript_Greeter_3:
# 26 "data/maps/Gym4/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS, Gym4_EventScript_Greeter_2
	goto Gym4_EventScript_Greeter_1

Gym4_EventScript_Greeter_6:
# 29 "data/maps/Gym4/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto Gym4_EventScript_Greeter_1


Gym4_Trainer_Ollie::
# 36 "data/maps/Gym4/scripts.pory"
	trainerbattle_single TRAINER_OLLIE_GYM4, Gym4_Ollie_Intro, Gym4_Ollie_Outro
# 37 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_Ollie_PostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Gym4/scripts.pory"
	releaseall
	return


Gym4_Trainer_Bitters::
# 43 "data/maps/Gym4/scripts.pory"
	trainerbattle_single TRAINER_BITTERS_GYM4, Gym4_Bitter_Intro, Gym4_Bitter_Outro
# 44 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_Bitter_PostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Gym4/scripts.pory"
	releaseall
	return


Gym4_Trainer_GymTrainer1::
# 49 "data/maps/Gym4/scripts.pory"
	trainerbattle_single TRAINER_TRAINER1_GYM4, Gym4_Trainer1_Intro, Gym4_Trainer1_Outro
# 50 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_Trainer1_PostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/Gym4/scripts.pory"
	releaseall
	return


Gym4_Trainer_Ay::
# 55 "data/maps/Gym4/scripts.pory"
	trainerbattle_single TRAINER_AY_GYM4, Gym4_Ay_Intro, Gym4_Ay_Outro
# 56 "data/maps/Gym4/scripts.pory"
	msgbox Gym4_Ay_PostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Gym4/scripts.pory"
	releaseall
	return


Gym4_Sarah_PostbattleScript_Text_0:
# 11 "data/maps/Gym4/scripts.pory"
	.string "Fantastic! You're well on your way to\n"
	.string "becoming a champion.$"

Gym4_Sarah_PostbattleScript_Text_1:
# 13 "data/maps/Gym4/scripts.pory"
	.string "You obtained the Ruin Badge.$"

Gym4_Sarah_PostbattleScript_Text_2:
# 17 "data/maps/Gym4/scripts.pory"
	.string "Also please take this TM it contains\n"
	.string "Shadow Ball$"

Gym4_EventScript_Greeter_Text_0:
# 25 "data/maps/Gym4/scripts.pory"
	.string "Yo champ in the making! This gym\n"
	.string "specialises in Ghost types. Dark and\l"
	.string "other Ghost is the best way to take\l"
	.string "them out, but Normal types are immune!$"

Gym4_EventScript_Greeter_Text_1:
# 27 "data/maps/Gym4/scripts.pory"
	.string "Are you interested in getting some fast\n"
	.string "levels?$"

Gym4_Sarah_Intro::
# 61 "data/maps/Gym4/scripts.pory"
	.string "$"

Gym4_Sarah_Outro::
# 65 "data/maps/Gym4/scripts.pory"
	.string "$"

Gym4_Sarah_PostBattle::
# 69 "data/maps/Gym4/scripts.pory"
	.string "$"

Gym4_Bitter_Intro::
# 73 "data/maps/Gym4/scripts.pory"
	.string "Boo\n"
	.string "Did i get ya?$"

Gym4_Bitter_Outro::
# 77 "data/maps/Gym4/scripts.pory"
	.string "Aww man didnt get ya$"

Gym4_Bitter_PostBattle::
# 81 "data/maps/Gym4/scripts.pory"
	.string "$"

Gym4_Trainer1_Intro::
# 85 "data/maps/Gym4/scripts.pory"
	.string "Boo\n"
	.string "Did i get ya?$"

Gym4_Trainer1_Outro::
# 89 "data/maps/Gym4/scripts.pory"
	.string "Aww man didnt get ya$"

Gym4_Trainer1_PostBattle::
# 93 "data/maps/Gym4/scripts.pory"
	.string "$"

Gym4_Ay_Intro::
# 97 "data/maps/Gym4/scripts.pory"
	.string "Hey, looks like you've seen a ghost$"

Gym4_Ay_Outro::
# 101 "data/maps/Gym4/scripts.pory"
	.string "$"

Gym4_Ay_PostBattle::
# 105 "data/maps/Gym4/scripts.pory"
	.string "Welp...I've seen a ghost$"

Gym4_Ollie_Intro::
# 109 "data/maps/Gym4/scripts.pory"
	.string "$"

Gym4_Ollie_Outro::
# 113 "data/maps/Gym4/scripts.pory"
	.string "$"

Gym4_Ollie_PostBattle::
# 117 "data/maps/Gym4/scripts.pory"
	.string "$"
