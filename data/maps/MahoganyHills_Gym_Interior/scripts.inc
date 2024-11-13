MahoganyHills_Gym_Interior_MapScripts::
	.byte 0


MahoganyHills_Gym_Interior_EventScript_GymSign::
# 5 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	lockall
# 6 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_GymSign_Text_0
# 7 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_GymSign_Text_1
# 8 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_GymSign_Text_2
# 9 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MahoganyHills_Gym_Interior_EventScript_GymSign_2
MahoganyHills_Gym_Interior_EventScript_GymSign_1:
# 12 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	releaseall
	return

MahoganyHills_Gym_Interior_EventScript_GymSign_2:
# 10 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_GymSign_Text_3
	goto MahoganyHills_Gym_Interior_EventScript_GymSign_1


MahoganyHills_Gym_Interior_EventScript_Greeter::
# 16 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	lockall
# 17 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	faceplayer
# 18 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_Greeter_Text_0
# 19 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_LEVEL_CAPS_ON, MahoganyHills_Gym_Interior_EventScript_Greeter_3
MahoganyHills_Gym_Interior_EventScript_Greeter_1:
# 26 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	releaseall
	return

MahoganyHills_Gym_Interior_EventScript_Greeter_2:
# 20 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHills_Gym_Interior_EventScript_Greeter_Text_1, MSGBOX_YESNO
# 21 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_Gym_Interior_EventScript_Greeter_6
	goto MahoganyHills_Gym_Interior_EventScript_Greeter_1

MahoganyHills_Gym_Interior_EventScript_Greeter_3:
# 19 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, MahoganyHills_Gym_Interior_EventScript_Greeter_2
	goto MahoganyHills_Gym_Interior_EventScript_Greeter_1

MahoganyHills_Gym_Interior_EventScript_Greeter_6:
# 22 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	cleartrainerflag GYM_XP_DUMP
# 23 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto MahoganyHills_Gym_Interior_EventScript_Greeter_1


MahoganyHills_Gym_Interior_EventScript_GymLeader::
# 30 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	lockall
# 31 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	faceplayer
# 32 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	trainerbattle_single TRAINER_MAHOGANYGILLS_GYM_LEADER, MahoganyHillsGym_Leader_Intro, MahoganyHillsGym_Leader_Outro, MahoganyHillsGym_Leader_Postscript
# 33 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Leader_Postbattle, MSGBOX_DEFAULT
# 34 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	releaseall
	return


MahoganyHillsGym_Leader_Postscript::
# 38 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Leader_Postscript_Text_0
# 39 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 40 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Leader_Postscript_Text_1
# 41 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	special DoDomeConfetti
# 42 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	setflag FLAG_BADGE01_GET
# 43 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	msgbox MahoganyHillsGym_Leader_Postscript_Text_2
# 44 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	giveitem ITEM_TM51
# 45 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	releaseall
	return


MahoganyHills_Gym_Interior_EventScript_GymSign_Text_0:
# 6 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Mahogany Hills Gym.\l"
	.string "Making trainers soar to new heights.$"

MahoganyHills_Gym_Interior_EventScript_GymSign_Text_1:
# 7 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Certified Trainers:$"

MahoganyHills_Gym_Interior_EventScript_GymSign_Text_2:
# 8 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Nathan, Tanski, KoraidonFan783,\n"
	.string "LimblessCarpet, Tapdabtap 84, The TC,\l"
	.string "BitBeads, Jordan, Robert$"

MahoganyHills_Gym_Interior_EventScript_GymSign_Text_3:
# 10 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "{PLAYER}$"

MahoganyHills_Gym_Interior_EventScript_Greeter_Text_0:
# 18 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Yo Champ in the making! This gym\n"
	.string "specialises in flying types. Rock,\l"
	.string "Electric and Ice moves are the best way\l"
	.string "to take them out.$"

MahoganyHills_Gym_Interior_EventScript_Greeter_Text_1:
# 20 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "How about a battle for some fast\n"
	.string "levels?$"

MahoganyHillsGym_Leader_Postscript_Text_0:
# 38 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "That was a hard fought battle you\n"
	.string "deserve this gym badge.$"

MahoganyHillsGym_Leader_Postscript_Text_1:
# 40 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "You have obtained the Gale Badge$"

MahoganyHillsGym_Leader_Postscript_Text_2:
# 43 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Also please take this TM.$"

GymXpDump_Outro::
# 50 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Very good$"

MahoganyHillsGym_Leader_Intro::
# 54 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Hi! Welcome to my gym.\l"
	.string "I am Jaiden a Master from the Winged\l"
	.string "City.\l"
	.string "I hope you're prepared to be blown away\l"
	.string "by my flying type Pokemon.$"

MahoganyHillsGym_Leader_Outro::
# 58 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "It appears you have the power of a\n"
	.string "tornado!$"

MahoganyHillsGym_Leader_Postbattle::
# 62 "data/maps/MahoganyHills_Gym_Interior/scripts.pory"
	.string "Good luck on the rest of your journey,\n"
	.string "you will become a Champion in no time!$"
