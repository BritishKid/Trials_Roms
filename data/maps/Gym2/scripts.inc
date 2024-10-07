Gym2_MapScripts::
	.byte 0


gym2_button1_script::
	lockall
	compare VAR_GYM2_QUESTIONS, 0
	goto_if_eq gym2_button1_script_2
gym2_button1_script_1:
	compare VAR_GYM2_QUESTIONS, 1
	goto_if_eq gym2_button1_script_5
gym2_button1_script_4:
	releaseall
	return

gym2_button1_script_2:
	msgbox gym2_button1_script_Text_0
	msgbox gym2_button1_script_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq gym2_button1_script_8
gym2_button1_script_7:
	compare VAR_RESULT, 0
	goto_if_eq gym2_button1_script_10
	goto gym2_button1_script_1

gym2_button1_script_5:
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
	setwildbattle SPECIES_WAILMER, 24
	call gymTotemBattle
	removeobject 1
	setvar VAR_GYM2_QUESTIONS, 2
	setflag FLAG_GYM2_STATUE1
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button1_script_4

gym2_button1_script_8:
	msgbox gym2_button1_script_Text_2
	msgbox gym2_button1_script_Text_3
	setvar VAR_GYM2_QUESTIONS, 1
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
	setwildbattle SPECIES_WAILMER, 24
	call gymTotemBattle
	removeobject 1
	setvar VAR_GYM2_QUESTIONS, 2
	setflag FLAG_GYM2_STATUE1
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button1_script_7

gym2_button1_script_10:
	msgbox gym2_button1_script_Text_4
	setvar VAR_GYM2_QUESTIONS, 2
	removeobject 1
	setflag FLAG_GYM2_STATUE1
	goto gym2_button1_script_1


gym2_button2_script::
	lockall
	compare VAR_GYM2_QUESTIONS, 2
	goto_if_eq gym2_button2_script_2
gym2_button2_script_1:
	compare VAR_GYM2_QUESTIONS, 3
	goto_if_eq gym2_button2_script_5
gym2_button2_script_4:
	releaseall
	return

gym2_button2_script_2:
	msgbox gym2_button1_script_Text_0
	msgbox gym2_button2_script_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq gym2_button2_script_8
gym2_button2_script_7:
	compare VAR_RESULT, 0
	goto_if_eq gym2_button2_script_10
	goto gym2_button2_script_1

gym2_button2_script_5:
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
	setwildbattle SPECIES_CARVANHA, 24
	call gymTotemBattle
	removeobject 2
	setvar VAR_GYM2_QUESTIONS, 4
	setflag FLAG_GYM2_STATUE2
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button2_script_4

gym2_button2_script_8:
	msgbox gym2_button1_script_Text_2
	msgbox gym2_button1_script_Text_3
	setvar VAR_GYM2_QUESTIONS, 3
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
	setwildbattle SPECIES_CARVANHA, 24
	call gymTotemBattle
	removeobject 2
	setvar VAR_GYM2_QUESTIONS, 4
	setflag FLAG_GYM2_STATUE2
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button2_script_7

gym2_button2_script_10:
	msgbox gym2_button1_script_Text_4
	setvar VAR_GYM2_QUESTIONS, 4
	removeobject 2
	setflag FLAG_GYM2_STATUE2
	goto gym2_button2_script_1


gym2_button3_script::
	lockall
	compare VAR_GYM2_QUESTIONS, 4
	goto_if_eq gym2_button3_script_2
gym2_button3_script_1:
	compare VAR_GYM2_QUESTIONS, 5
	goto_if_eq gym2_button3_script_5
gym2_button3_script_4:
	releaseall
	return

gym2_button3_script_2:
	msgbox gym2_button1_script_Text_0
	msgbox gym2_button3_script_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq gym2_button3_script_8
gym2_button3_script_7:
	compare VAR_RESULT, 1
	goto_if_eq gym2_button3_script_10
	goto gym2_button3_script_1

gym2_button3_script_5:
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
	setwildbattle SPECIES_WISHIWASHI, 24
	call gymTotemBattle
	removeobject 3
	setvar VAR_GYM2_QUESTIONS, 6
	setflag FLAG_GYM2_STATUE3
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button3_script_4

gym2_button3_script_8:
	msgbox gym2_button1_script_Text_2
	msgbox gym2_button1_script_Text_3
	setvar VAR_GYM2_QUESTIONS, 5
	setflag FLAG_CANT_CATCH_MON
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
	setwildbattle SPECIES_CARVANHA, 24
	call gymTotemBattle
	removeobject 3
	setvar VAR_GYM2_QUESTIONS, 6
	setflag FLAG_GYM2_STATUE3
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button3_script_7

gym2_button3_script_10:
	msgbox gym2_button1_script_Text_4
	setvar VAR_GYM2_QUESTIONS, 6
	removeobject 3
	setflag FLAG_GYM2_STATUE3
	goto gym2_button3_script_1


gymTotemBattle::
	dowildbattle
	return


BeachGym_EventScript_GymLeader::
	lockall
	trainerbattle_single TRAINER_BEACH_GYM_LEADER, BeachGym_Gym_Leader_Intro, BeachGym_Gym_Leader_Outro, BeachGym_Gym_Leader_PostbattleScript
	msgbox BeachGym_Gym_Leader_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


BeachGym_Gym_Leader_PostbattleScript::
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_0
	playfanfare MUS_OBTAIN_BADGE
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_1
	special DoDomeConfetti
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SHOAL_BADGE
	setflag FLAG_BADGE02_GET
	setvar VAR_RIVAL_FIGHT_2, 2
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_2
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_TM03
	releaseall
	return


BeachGym_Trainer_Ollie::
	trainerbattle_single BEACHGYM_TRAINER_OLLIE, BeachGym_Ollie_Intro, BeachGym_Ollie_Outro, Increase_Trainers_Beaten
	msgbox BeachGym_Ollie_PostbattleScript, MSGBOX_AUTOCLOSE
	end


Gym2_EventScript_Greeter::
	lockall
	faceplayer
	msgbox Gym2_EventScript_Greeter_Text_0
	goto_if_unset FLAG_BADGE02_GET, Gym2_EventScript_Greeter_3
Gym2_EventScript_Greeter_1:
	releaseall
	return

Gym2_EventScript_Greeter_2:
	msgbox Gym2_EventScript_Greeter_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Gym2_EventScript_Greeter_6
	goto Gym2_EventScript_Greeter_1

Gym2_EventScript_Greeter_3:
	goto_if_set FLAG_LEVEL_CAPS, Gym2_EventScript_Greeter_2
	goto Gym2_EventScript_Greeter_1

Gym2_EventScript_Greeter_6:
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto Gym2_EventScript_Greeter_1


gym2_button1_script_Text_0:
	.string "Answer this question or suffer defeat!$"

gym2_button1_script_Text_1:
	.string "Only water Pokémon can learn the move\n"
	.string "SURF?$"

gym2_button1_script_Text_2:
	.string "Incorrect$"

gym2_button1_script_Text_3:
	.string "A giant Pokémon leaps out the water$"

gym2_button1_script_Text_4:
	.string "Correct$"

gym2_button2_script_Text_0:
	.string "Ice Moves are always Not Very\n"
	.string "Effective against water Pokémon?$"

gym2_button3_script_Text_0:
	.string "Is the Water type weak to 2 types?$"

BeachGym_Gym_Leader_PostbattleScript_Text_0:
	.string "Fantastic! You're well on your way to\n"
	.string "becoming a champion.$"

BeachGym_Gym_Leader_PostbattleScript_Text_1:
	.string "You obtained the Shoal Badge.$"

BeachGym_Gym_Leader_PostbattleScript_Text_2:
	.string "Also please take this TM$"

Gym2_EventScript_Greeter_Text_0:
	.string "Yo champ in the making! This gym\n"
	.string "specialises in water types. Grass amd\l"
	.string "Electric is the best way to take them\l"
	.string "out$"

Gym2_EventScript_Greeter_Text_1:
	.string "Are you interested in getting some fast\n"
	.string "levels?$"

BeachGym_Gym_Leader_Intro::
	.string "Why well done you've made it! Welcome to\n"
	.string "my cavern, carved with the incredible\l"
	.string "power of water! I am Marina a water of\l"
	.string "water type Pokémon.$"

BeachGym_Gym_Leader_Outro::
	.string "Incredible! You've washed me away$"

BeachGym_Gym_Leader_PostBattle::
	.string "You've been making good progress on\n"
	.string "your journey but this was just the\l"
	.string "start.$"

BeachGym_Ollie_Intro::
	.string "This gym is a great place for me to\n"
	.string "master the water type$"

BeachGym_Ollie_Outro::
	.string "Rocks shouldn't be bad in water. Rocks\n"
	.string "surround the water$"

BeachGym_Ollie_PostbattleScript::
	.string "I've learnt enough, time to learn about\n"
	.string "poison Pokémon$"
