MahoganyHills_Gym_Interior_MapScripts::
# 2 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MahoganyHills_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MahoganyHills_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS_ON, MahoganyHills_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

MahoganyHills_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	setflag FLAG_TURN_ON_INCREASED_XP
	return

MahoganyHills_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 3 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, MahoganyHills_Gym_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


MahoganyHills_Gym_Interior_EventScript_GymSign::
# 11 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	lockall
# 12 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_GymSign_Text_0
# 13 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_GymSign_Text_1
# 14 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_GymSign_Text_2
# 15 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MahoganyHills_Gym_Interior_EventScript_GymSign_2
MahoganyHills_Gym_Interior_EventScript_GymSign_1:
# 18 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	releaseall
	return

MahoganyHills_Gym_Interior_EventScript_GymSign_2:
# 16 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_GymSign_Text_3
	goto MahoganyHills_Gym_Interior_EventScript_GymSign_1


MahoganyHills_Gym_Interior_EventScript_Greeter::
# 22 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	lockall
# 23 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	faceplayer
# 24 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_Greeter_Text_0
# 25 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_Greeter_Text_1
# 26 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS_ON, MahoganyHills_Gym_Interior_EventScript_Greeter_3
MahoganyHills_Gym_Interior_EventScript_Greeter_1:
# 34 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	releaseall
	return

MahoganyHills_Gym_Interior_EventScript_Greeter_2:
# 28 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_Greeter_Text_2, MSGBOX_YESNO
# 29 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_Gym_Interior_EventScript_Greeter_6
	goto MahoganyHills_Gym_Interior_EventScript_Greeter_1

MahoganyHills_Gym_Interior_EventScript_Greeter_3:
# 27 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, MahoganyHills_Gym_Interior_EventScript_Greeter_2
	goto MahoganyHills_Gym_Interior_EventScript_Greeter_1

MahoganyHills_Gym_Interior_EventScript_Greeter_6:
# 30 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	cleartrainerflag GYM_XP_DUMP
# 31 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto MahoganyHills_Gym_Interior_EventScript_Greeter_1


MahoganyHills_Gym_Interior_EventScript_GymLeader::
# 38 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	lockall
# 39 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	faceplayer
# 40 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	trainerbattle_single TRAINER_MAHOGANYGILLS_GYM_LEADER, MahoganyHillsGym_Leader_Intro, MahoganyHillsGym_Leader_Outro, MahoganyHillsGym_Leader_Postscript
# 41 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Leader_Postbattle, MSGBOX_DEFAULT
# 42 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	releaseall
	return


MahoganyHillsGym_Leader_Postscript::
# 46 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Leader_Postscript_Text_0
# 47 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	clearflag FLAG_TURN_ON_INCREASED_XP
# 48 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 49 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Leader_Postscript_Text_1
# 50 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	special DoDomeConfetti
# 51 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	setflag FLAG_BADGE01_GET
# 52 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	clearflag FLAG_TURN_ON_INCREASED_XP
# 53 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Leader_Postscript_Text_2
# 54 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	giveitem ITEM_TM51
# 55 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	releaseall
	return


MahoganyHillsGymInterior_TrainerBattle_Ollie::
# 59 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	trainerbattle_single TRAINER_OLLIE_MAHOGANYHILLSGYM, MahoganyHillsGym_Ollie_Intro, MahoganyHillsGym_Ollie_Outro, Increase_Trainers_Beaten
# 60 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Ollie_Postbattle, MSGBOX_AUTOCLOSE
	return


MahoganyHillsGymInterior_TrainerBattle_Skye::
# 64 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	trainerbattle_single TRAINER_SKYE_MAHOGANYHILLSGYM, MahoganyHillsGym_Skye_Intro, MahoganyHillsGym_Skye_Outro, Increase_Trainers_Beaten
# 65 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Skye_Postbattle, MSGBOX_AUTOCLOSE
	return


MahoganyHillsGym_Trainer_Wright::
# 69 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_WRIGHT, MahoganyHillsGym_Wright_Intro, MahoganyHillsGym_Wright_Outro, Increase_Trainers_Beaten
# 70 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Wright_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_Trainer_Andy::
# 76 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_ANDY, MahoganyHillsGym_Andy_Intro, MahoganyHillsGym_Andy_Outro, Increase_Trainers_Beaten
# 77 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Andy_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHills_Gym_Interior_EventScript_GymSign_Text_0:
# 12 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Mahogany Hills Gym.\l"
	.string "Making trainers soar to new heights.$"

MahoganyHills_Gym_Interior_EventScript_GymSign_Text_1:
# 13 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Certified Trainers:$"

MahoganyHills_Gym_Interior_EventScript_GymSign_Text_2:
# 14 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Nathan, Tanski, KoraidonFan783,\n"
	.string "LimblessCarpet, Tapdabtap 84, The TC,\l"
	.string "BitBeads, Jordan, Robert$"

MahoganyHills_Gym_Interior_EventScript_GymSign_Text_3:
# 16 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "{PLAYER}$"

MahoganyHills_Gym_Interior_EventScript_Greeter_Text_0:
# 24 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Yo, Champ in the making! This gym\n"
	.string "specializes in flying types. Rock,\l"
	.string "Electric, and Ice moves are the best\l"
	.string "ways to take them out.$"

MahoganyHills_Gym_Interior_EventScript_Greeter_Text_1:
# 25 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Let me heal up your Pokémon before you\n"
	.string "go further.$"

MahoganyHills_Gym_Interior_EventScript_Greeter_Text_2:
# 28 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "How about a battle for some fast\n"
	.string "levels?$"

MahoganyHillsGym_Leader_Postscript_Text_0:
# 46 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "That was a hard-fought battle; you\n"
	.string "deserve this gym badge.$"

MahoganyHillsGym_Leader_Postscript_Text_1:
# 49 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "You have obtained the Gale Badge.$"

MahoganyHillsGym_Leader_Postscript_Text_2:
# 53 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Also, please take this TM.$"

GymXpDump_Outro::
# 82 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Very good$"

MahoganyHillsGym_Leader_Intro::
# 86 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Hi! Welcome to my gym.\l"
	.string "I am Jaiden, a Master from the Winged\l"
	.string "City.\l"
	.string "I hope you're prepared to be blown away\l"
	.string "by my flying-type Pokémon.$"

MahoganyHillsGym_Leader_Outro::
# 90 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "It appears you have the power of a\n"
	.string "tornado!$"

MahoganyHillsGym_Leader_Postbattle::
# 94 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Good luck on the rest of your journey;\n"
	.string "you will become a champion in no time!$"

MahoganyHillsGym_Ollie_Intro::
# 98 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "I'm creating the strongest STEELIX\n"
	.string "ever, the master of all types!$"

MahoganyHillsGym_Ollie_Outro::
# 102 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "You mastered FLYING types better than\n"
	.string "me.$"

MahoganyHillsGym_Ollie_Postbattle::
# 106 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Now I need to learn about WATER\n"
	.string "Pokémon.$"

MahoganyHillsGym_Skye_Intro::
# 110 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Not many trainers get past me to\n"
	.string "Jaiden; I doubt you will.$"

MahoganyHillsGym_Skye_Outro::
# 114 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Most trainers coming here are bug\n"
	.string "trainers, to be fair.$"

MahoganyHillsGym_Skye_Postbattle::
# 118 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "You're almost as strong as that other\n"
	.string "trainer that came through here.$"

MahoganyHillsGym_Wright_Intro::
# 122 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Have you ever been to the Winged City?$"

MahoganyHillsGym_Wright_Outro::
# 126 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "It's meant to be amazing.$"

MahoganyHillsGym_Wright_PostbattleScript::
# 130 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "I really can't wait to finally get to the\n"
	.string "Winged City.$"

MahoganyHillsGym_Andy_Intro::
# 134 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "I'm getting ready for the battle\n"
	.string "champion dojo!$"

MahoganyHillsGym_Andy_Outro::
# 138 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "You should join too!$"

MahoganyHillsGym_Andy_PostbattleScript::
# 142 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Strong trainers from all over compete\n"
	.string "in the dojo.$"
