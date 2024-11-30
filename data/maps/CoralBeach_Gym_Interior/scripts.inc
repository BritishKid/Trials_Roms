CoralBeach_Gym_Interior_MapScripts::
# 2 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralBeach_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CoralBeach_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS_ON, CoralBeach_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

CoralBeach_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_TURN_ON_INCREASED_XP
	return

CoralBeach_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 3 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, CoralBeach_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


gym2_button1_script::
# 11 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	lockall
# 12 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 0
	goto_if_eq gym2_button1_script_2
gym2_button1_script_1:
# 37 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 1
	goto_if_eq gym2_button1_script_5
gym2_button1_script_4:
# 48 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	releaseall
	return

gym2_button1_script_2:
# 13 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_0
# 14 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_1, MSGBOX_YESNO
# 15 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq gym2_button1_script_8
gym2_button1_script_7:
# 29 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq gym2_button1_script_10
	goto gym2_button1_script_1

gym2_button1_script_5:
# 38 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 39 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 40 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setwildbattle SPECIES_WAILMER, 24
# 41 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	call gymTotemBattle
# 42 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 1
# 43 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 2
# 44 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE1
# 45 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button1_script_4

gym2_button1_script_8:
# 17 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_2
# 18 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_3
# 19 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 1
# 20 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 21 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 22 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setwildbattle SPECIES_WAILMER, 24
# 23 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	call gymTotemBattle
# 24 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 1
# 25 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 2
# 26 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE1
# 27 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button1_script_7

gym2_button1_script_10:
# 31 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_4
# 32 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 2
# 33 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 1
# 34 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE1
	goto gym2_button1_script_1


gym2_button2_script::
# 52 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	lockall
# 53 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 2
	goto_if_eq gym2_button2_script_2
gym2_button2_script_1:
# 79 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 3
	goto_if_eq gym2_button2_script_5
gym2_button2_script_4:
# 89 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	releaseall
	return

gym2_button2_script_2:
# 54 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_0
# 55 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button2_script_Text_0, MSGBOX_YESNO
# 56 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq gym2_button2_script_8
gym2_button2_script_7:
# 71 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq gym2_button2_script_10
	goto gym2_button2_script_1

gym2_button2_script_5:
# 80 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 81 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 82 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setwildbattle SPECIES_CARVANHA, 24
# 83 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	call gymTotemBattle
# 84 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 2
# 85 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 4
# 86 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE2
# 87 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button2_script_4

gym2_button2_script_8:
# 58 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_2
# 59 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_3
# 60 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 3
# 61 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 62 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 63 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setwildbattle SPECIES_CARVANHA, 24
# 64 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	call gymTotemBattle
# 65 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 2
# 66 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 4
# 67 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE2
# 68 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button2_script_7

gym2_button2_script_10:
# 73 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_4
# 74 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 4
# 75 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 2
# 76 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE2
	goto gym2_button2_script_1


gym2_button3_script::
# 93 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	lockall
# 94 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 4
	goto_if_eq gym2_button3_script_2
gym2_button3_script_1:
# 119 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_GYM2_QUESTIONS, 5
	goto_if_eq gym2_button3_script_5
gym2_button3_script_4:
# 129 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	releaseall
	return

gym2_button3_script_2:
# 95 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_0
# 96 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button3_script_Text_0, MSGBOX_YESNO
# 97 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq gym2_button3_script_8
gym2_button3_script_7:
# 111 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq gym2_button3_script_10
	goto gym2_button3_script_1

gym2_button3_script_5:
# 120 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 121 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 122 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setwildbattle SPECIES_WISHIWASHI, 24
# 123 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	call gymTotemBattle
# 124 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 3
# 125 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 6
# 126 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE3
# 127 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button3_script_4

gym2_button3_script_8:
# 99 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_2
# 100 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_3
# 101 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 5
# 102 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 103 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 104 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setwildbattle SPECIES_CARVANHA, 24
# 105 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	call gymTotemBattle
# 106 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 3
# 107 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 6
# 108 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE3
# 109 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto gym2_button3_script_7

gym2_button3_script_10:
# 113 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox gym2_button1_script_Text_4
# 114 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_GYM2_QUESTIONS, 6
# 115 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	removeobject 3
# 116 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_GYM2_STATUE3
	goto gym2_button3_script_1


gymTotemBattle::
# 133 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	dowildbattle
	return


BeachGym_EventScript_GymLeader::
# 137 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	lockall
# 138 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	trainerbattle_single TRAINER_BEACH_GYM_LEADER, BeachGym_Gym_Leader_Intro, BeachGym_Gym_Leader_Outro, BeachGym_Gym_Leader_PostbattleScript
# 139 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox BeachGym_Gym_Leader_PostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	releaseall
	return


BeachGym_Gym_Leader_PostbattleScript::
# 144 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_0
# 145 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 146 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_1
# 147 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	special DoDomeConfetti
# 149 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setflag FLAG_BADGE02_GET
# 150 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	setvar VAR_RIVAL_FIGHT_2, 2
# 151 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	clearflag FLAG_TURN_ON_INCREASED_XP
# 152 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox BeachGym_Gym_Leader_PostbattleScript_Text_2
# 153 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	giveitem ITEM_TM03
# 155 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	releaseall
	return


BeachGym_Trainer_Ollie::
# 159 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	trainerbattle_single BEACHGYM_TRAINER_OLLIE, BeachGym_Ollie_Intro, BeachGym_Ollie_Outro, Increase_Trainers_Beaten
# 160 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox BeachGym_Ollie_PostbattleScript, MSGBOX_AUTOCLOSE
	end


BeachGym_EventScript_Greeter::
# 165 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	lockall
# 166 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	faceplayer
# 167 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox BeachGym_EventScript_Greeter_Text_0
# 168 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_LEVEL_CAPS_ON, BeachGym_EventScript_Greeter_3
BeachGym_EventScript_Greeter_1:
# 175 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	releaseall
	return

BeachGym_EventScript_Greeter_2:
# 169 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	msgbox BeachGym_EventScript_Greeter_Text_1, MSGBOX_YESNO
# 170 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BeachGym_EventScript_Greeter_6
	goto BeachGym_EventScript_Greeter_1

BeachGym_EventScript_Greeter_3:
# 168 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, BeachGym_EventScript_Greeter_2
	goto BeachGym_EventScript_Greeter_1

BeachGym_EventScript_Greeter_6:
# 171 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	cleartrainerflag GYM_XP_DUMP
# 172 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto BeachGym_EventScript_Greeter_1


gym2_button1_script_Text_0:
# 13 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Answer this question or suffer defeat!$"

gym2_button1_script_Text_1:
# 14 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Only water Pokémon can learn the move\n"
	.string "SURF?$"

gym2_button1_script_Text_2:
# 17 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Incorrect$"

gym2_button1_script_Text_3:
# 18 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "A giant Pokémon leaps out the water$"

gym2_button1_script_Text_4:
# 31 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Correct$"

gym2_button2_script_Text_0:
# 55 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Ice Moves are always Not Very\n"
	.string "Effective against water Pokémon?$"

gym2_button3_script_Text_0:
# 96 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Is the Water type weak to 2 types?$"

BeachGym_Gym_Leader_PostbattleScript_Text_0:
# 144 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Fantastic! You're well on your way to\n"
	.string "becoming a champion.$"

BeachGym_Gym_Leader_PostbattleScript_Text_1:
# 146 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "You obtained the Shoal Badge.$"

BeachGym_Gym_Leader_PostbattleScript_Text_2:
# 152 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Also please take this TM$"

BeachGym_EventScript_Greeter_Text_0:
# 167 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Yo Champ in the making! This gym\n"
	.string "specialises in Water types. Grass and\l"
	.string "Electric moves are the best way to take\l"
	.string "them out.$"

BeachGym_EventScript_Greeter_Text_1:
# 169 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "How about a battle for some fast\n"
	.string "levels?$"

BeachGym_Gym_Leader_Intro::
# 181 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Why well done you've made it! Welcome to\n"
	.string "my cavern, carved with the incredible\l"
	.string "power of water! I am Marina a water of\l"
	.string "water type Pokémon.$"

BeachGym_Gym_Leader_Outro::
# 185 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Incredible! You've washed me away$"

BeachGym_Gym_Leader_PostBattle::
# 189 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "You've been making good progress on\n"
	.string "your journey but this was just the\l"
	.string "start.$"

BeachGym_Ollie_Intro::
# 193 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "This gym is a great place for me to\n"
	.string "master the water type$"

BeachGym_Ollie_Outro::
# 197 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "Rocks shouldn't be bad in water. Rocks\n"
	.string "surround the water$"

BeachGym_Ollie_PostbattleScript::
# 201 "data/maps/CoralBeach_Gym_Interior/scripts.pory"
	.string "I've learnt enough, time to learn about\n"
	.string "poison Pokémon$"
