Gym2_MapScripts::
	.byte 0


gym2_button1_script::
# 4 "data/maps/Gym2/scripts.pory"
	lockall
# 5 "data/maps/Gym2/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 0
	goto_if_eq gym2_button1_script_2
gym2_button1_script_1:
# 30 "data/maps/Gym2/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 1
	goto_if_eq gym2_button1_script_5
gym2_button1_script_4:
# 41 "data/maps/Gym2/scripts.pory"
	releaseall
	return

gym2_button1_script_2:
# 6 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_0
# 7 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_1, MSGBOX_YESNO
# 8 "data/maps/Gym2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq gym2_button1_script_8
gym2_button1_script_7:
# 22 "data/maps/Gym2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq gym2_button1_script_10
	goto gym2_button1_script_1

gym2_button1_script_5:
# 31 "data/maps/Gym2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 32 "data/maps/Gym2/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 33 "data/maps/Gym2/scripts.pory"
	setwildbattle SPECIES_WAILMER, 24
# 34 "data/maps/Gym2/scripts.pory"
	call gymTotemBattle
# 35 "data/maps/Gym2/scripts.pory"
	removeobject 1
# 36 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 2
# 37 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE1
# 38 "data/maps/Gym2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button1_script_4

gym2_button1_script_8:
# 10 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_2
# 11 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_3
# 12 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 1
# 13 "data/maps/Gym2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 14 "data/maps/Gym2/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 15 "data/maps/Gym2/scripts.pory"
	setwildbattle SPECIES_WAILMER, 24
# 16 "data/maps/Gym2/scripts.pory"
	call gymTotemBattle
# 17 "data/maps/Gym2/scripts.pory"
	removeobject 1
# 18 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 2
# 19 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE1
# 20 "data/maps/Gym2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button1_script_7

gym2_button1_script_10:
# 24 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_4
# 25 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 2
# 26 "data/maps/Gym2/scripts.pory"
	removeobject 1
# 27 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE1
	goto gym2_button1_script_1


gym2_button2_script::
# 45 "data/maps/Gym2/scripts.pory"
	lockall
# 46 "data/maps/Gym2/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 2
	goto_if_eq gym2_button2_script_2
gym2_button2_script_1:
# 72 "data/maps/Gym2/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 3
	goto_if_eq gym2_button2_script_5
gym2_button2_script_4:
# 82 "data/maps/Gym2/scripts.pory"
	releaseall
	return

gym2_button2_script_2:
# 47 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_0
# 48 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button2_script_Text_0, MSGBOX_YESNO
# 49 "data/maps/Gym2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq gym2_button2_script_8
gym2_button2_script_7:
# 64 "data/maps/Gym2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq gym2_button2_script_10
	goto gym2_button2_script_1

gym2_button2_script_5:
# 73 "data/maps/Gym2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 74 "data/maps/Gym2/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 75 "data/maps/Gym2/scripts.pory"
	setwildbattle SPECIES_CARVANHA, 24
# 76 "data/maps/Gym2/scripts.pory"
	call gymTotemBattle
# 77 "data/maps/Gym2/scripts.pory"
	removeobject 2
# 78 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 4
# 79 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE2
# 80 "data/maps/Gym2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button2_script_4

gym2_button2_script_8:
# 51 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_2
# 52 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_3
# 53 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 3
# 54 "data/maps/Gym2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 55 "data/maps/Gym2/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 56 "data/maps/Gym2/scripts.pory"
	setwildbattle SPECIES_CARVANHA, 24
# 57 "data/maps/Gym2/scripts.pory"
	call gymTotemBattle
# 58 "data/maps/Gym2/scripts.pory"
	removeobject 2
# 59 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 4
# 60 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE2
# 61 "data/maps/Gym2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button2_script_7

gym2_button2_script_10:
# 66 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_4
# 67 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 4
# 68 "data/maps/Gym2/scripts.pory"
	removeobject 2
# 69 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE2
	goto gym2_button2_script_1


gym2_button3_script::
# 86 "data/maps/Gym2/scripts.pory"
	lockall
# 87 "data/maps/Gym2/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 4
	goto_if_eq gym2_button3_script_2
gym2_button3_script_1:
# 112 "data/maps/Gym2/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 5
	goto_if_eq gym2_button3_script_5
gym2_button3_script_4:
# 122 "data/maps/Gym2/scripts.pory"
	releaseall
	return

gym2_button3_script_2:
# 88 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_0
# 89 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button3_script_Text_0, MSGBOX_YESNO
# 90 "data/maps/Gym2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq gym2_button3_script_8
gym2_button3_script_7:
# 104 "data/maps/Gym2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq gym2_button3_script_10
	goto gym2_button3_script_1

gym2_button3_script_5:
# 113 "data/maps/Gym2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 114 "data/maps/Gym2/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 115 "data/maps/Gym2/scripts.pory"
	setwildbattle SPECIES_WISHIWASHI, 24
# 116 "data/maps/Gym2/scripts.pory"
	call gymTotemBattle
# 117 "data/maps/Gym2/scripts.pory"
	removeobject 3
# 118 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 6
# 119 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE3
# 120 "data/maps/Gym2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button3_script_4

gym2_button3_script_8:
# 92 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_2
# 93 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_3
# 94 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 5
# 95 "data/maps/Gym2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 96 "data/maps/Gym2/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 97 "data/maps/Gym2/scripts.pory"
	setwildbattle SPECIES_CARVANHA, 24
# 98 "data/maps/Gym2/scripts.pory"
	call gymTotemBattle
# 99 "data/maps/Gym2/scripts.pory"
	removeobject 3
# 100 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 6
# 101 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE3
# 102 "data/maps/Gym2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button3_script_7

gym2_button3_script_10:
# 106 "data/maps/Gym2/scripts.pory"
	msgbox gym2_button1_script_Text_4
# 107 "data/maps/Gym2/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 6
# 108 "data/maps/Gym2/scripts.pory"
	removeobject 3
# 109 "data/maps/Gym2/scripts.pory"
	setflag FLAG_GYM2_STATUE3
	goto gym2_button3_script_1


gymTotemBattle::
# 126 "data/maps/Gym2/scripts.pory"
	dowildbattle
	return


BeachGym_EventScript_GymLeader::
# 130 "data/maps/Gym2/scripts.pory"
	lockall
# 131 "data/maps/Gym2/scripts.pory"
	trainerbattle_single TRAINER_BEACH_GYM_LEADER, BeachGym_Gym_Leader_Intro, BeachGym_Gym_Leader_Outro, BeachGym_Gym_Leader_PostbattleScript
# 132 "data/maps/Gym2/scripts.pory"
	msgbox BeachGym_Gym_Leader_PostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Gym2/scripts.pory"
	releaseall
	return


BeachGym_Gym_Leader_PostbattleScript::
# 137 "data/maps/Gym2/scripts.pory"
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_0
# 138 "data/maps/Gym2/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 139 "data/maps/Gym2/scripts.pory"
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_1
# 140 "data/maps/Gym2/scripts.pory"
	special DoDomeConfetti
# 141 "data/maps/Gym2/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SHOAL_BADGE
# 142 "data/maps/Gym2/scripts.pory"
	setflag FLAG_BADGE02_GET
# 143 "data/maps/Gym2/scripts.pory"
	setvar VAR_RIVAL_FIGHT_2, 2
# 144 "data/maps/Gym2/scripts.pory"
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_2
# 145 "data/maps/Gym2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/Gym2/scripts.pory"
	giveitem ITEM_TM03
# 147 "data/maps/Gym2/scripts.pory"
	releaseall
	return


BeachGym_Trainer_Ollie::
# 151 "data/maps/Gym2/scripts.pory"
	trainerbattle_single BEACHGYM_TRAINER_OLLIE, BeachGym_Ollie_Intro, BeachGym_Ollie_Outro, Increase_Trainers_Beaten
# 152 "data/maps/Gym2/scripts.pory"
	msgbox BeachGym_Ollie_PostbattleScript, MSGBOX_AUTOCLOSE
	end


Gym2_EventScript_Greeter::
# 157 "data/maps/Gym2/scripts.pory"
	lockall
# 158 "data/maps/Gym2/scripts.pory"
	faceplayer
# 159 "data/maps/Gym2/scripts.pory"
	msgbox Gym2_EventScript_Greeter_Text_0
# 160 "data/maps/Gym2/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Gym2_EventScript_Greeter_3
Gym2_EventScript_Greeter_1:
# 166 "data/maps/Gym2/scripts.pory"
	releaseall
	return

Gym2_EventScript_Greeter_2:
# 161 "data/maps/Gym2/scripts.pory"
	msgbox Gym2_EventScript_Greeter_Text_1, MSGBOX_YESNO
# 162 "data/maps/Gym2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Gym2_EventScript_Greeter_6
	goto Gym2_EventScript_Greeter_1

Gym2_EventScript_Greeter_3:
# 160 "data/maps/Gym2/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS, Gym2_EventScript_Greeter_2
	goto Gym2_EventScript_Greeter_1

Gym2_EventScript_Greeter_6:
# 163 "data/maps/Gym2/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto Gym2_EventScript_Greeter_1


gym2_button1_script_Text_0:
# 6 "data/maps/Gym2/scripts.pory"
	.string "Answer this question or suffer defeat!$"

gym2_button1_script_Text_1:
# 7 "data/maps/Gym2/scripts.pory"
	.string "Only water Pokémon can learn the move\n"
	.string "SURF?$"

gym2_button1_script_Text_2:
# 10 "data/maps/Gym2/scripts.pory"
	.string "Incorrect$"

gym2_button1_script_Text_3:
# 11 "data/maps/Gym2/scripts.pory"
	.string "A giant Pokémon leaps out the water$"

gym2_button1_script_Text_4:
# 24 "data/maps/Gym2/scripts.pory"
	.string "Correct$"

gym2_button2_script_Text_0:
# 48 "data/maps/Gym2/scripts.pory"
	.string "Ice Moves are always Not Very\n"
	.string "Effective against water Pokémon?$"

gym2_button3_script_Text_0:
# 89 "data/maps/Gym2/scripts.pory"
	.string "Is the Water type weak to 2 types?$"

BeachGym_Gym_Leader_PostbattleScript_Text_0:
# 137 "data/maps/Gym2/scripts.pory"
	.string "Fantastic! You're well on your way to\n"
	.string "becoming a champion.$"

BeachGym_Gym_Leader_PostbattleScript_Text_1:
# 139 "data/maps/Gym2/scripts.pory"
	.string "You obtained the Shoal Badge.$"

BeachGym_Gym_Leader_PostbattleScript_Text_2:
# 144 "data/maps/Gym2/scripts.pory"
	.string "Also please take this TM$"

Gym2_EventScript_Greeter_Text_0:
# 159 "data/maps/Gym2/scripts.pory"
	.string "Yo champ in the making! This gym\n"
	.string "specialises in water types. Grass amd\l"
	.string "Electric is the best way to take them\l"
	.string "out$"

Gym2_EventScript_Greeter_Text_1:
# 161 "data/maps/Gym2/scripts.pory"
	.string "Are you interested in getting some fast\n"
	.string "levels?$"

BeachGym_Gym_Leader_Intro::
# 171 "data/maps/Gym2/scripts.pory"
	.string "Why well done you've made it! Welcome to\n"
	.string "my cavern, carved with the incredible\l"
	.string "power of water! I am Marina a water of\l"
	.string "water type Pokémon.$"

BeachGym_Gym_Leader_Outro::
# 175 "data/maps/Gym2/scripts.pory"
	.string "Incredible! You've washed me away$"

BeachGym_Gym_Leader_PostBattle::
# 179 "data/maps/Gym2/scripts.pory"
	.string "You've been making good progress on\n"
	.string "your journey but this was just the\l"
	.string "start.$"

BeachGym_Ollie_Intro::
# 183 "data/maps/Gym2/scripts.pory"
	.string "This gym is a great place for me to\n"
	.string "master the water type$"

BeachGym_Ollie_Outro::
# 187 "data/maps/Gym2/scripts.pory"
	.string "Rocks shouldn't be bad in water. Rocks\n"
	.string "surround the water$"

BeachGym_Ollie_PostbattleScript::
# 191 "data/maps/Gym2/scripts.pory"
	.string "I've learnt enough, time to learn about\n"
	.string "poison Pokémon$"
