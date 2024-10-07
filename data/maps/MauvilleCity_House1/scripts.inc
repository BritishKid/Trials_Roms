MauvilleCity_House1_MapScripts::
	.byte 0


MauvilleCity_Scientist_Pyukumuku::
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lockall
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_0
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 0
	goto_if_eq MauvilleCity_Scientist_Pyukumuku_2
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 3
	goto_if_gt MauvilleCity_Scientist_Pyukumuku_16
MauvilleCity_Scientist_Pyukumuku_14:
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 6
	goto_if_gt MauvilleCity_Scientist_Pyukumuku_13
MauvilleCity_Scientist_Pyukumuku_11:
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 9
	goto_if_gt MauvilleCity_Scientist_Pyukumuku_10
MauvilleCity_Scientist_Pyukumuku_8:
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 10
	goto_if_eq MauvilleCity_Scientist_Pyukumuku_7
MauvilleCity_Scientist_Pyukumuku_1:
# 58 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_PYUKUMUKU_PRIZE_4, MauvilleCity_Scientist_Pyukumuku_21
# 63 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_12
MauvilleCity_Scientist_Pyukumuku_20:
# 65 "data/maps/MauvilleCity_House1/scripts.pory"
	releaseall
	return

MauvilleCity_Scientist_Pyukumuku_2:
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_1
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_3:
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_2
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_3
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_ABSORB_BULB
# 16 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 17 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_PYUKUMUKU_PRIZE_1
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_4
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_4:
# 21 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_5
# 22 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_3
# 23 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_TM24
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_PYUKUMUKU_PRIZE_2
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_4
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_5:
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_6
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_3
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_TM52_SCALD
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_PYUKUMUKU_PRIZE_3
# 34 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_4
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_6:
# 37 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_7
# 38 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_8
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 40 "data/maps/MauvilleCity_House1/scripts.pory"
	givemon SPECIES_PYUKUMUKU, 5, ITEM_ELECTRIC_SEED
# 41 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MauvilleCity_Scientist_Pyukumuku_25
# 46 "data/maps/MauvilleCity_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MauvilleCity_Scientist_Pyukumuku_26
# 52 "data/maps/MauvilleCity_House1/scripts.pory"
	hidemonpic
# 53 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_10
MauvilleCity_Scientist_Pyukumuku_24:
# 55 "data/maps/MauvilleCity_House1/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 56 "data/maps/MauvilleCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_7:
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_unset FLAG_PYUKUMUKU_PRIZE_4, MauvilleCity_Scientist_Pyukumuku_6
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_10:
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_unset FLAG_PYUKUMUKU_PRIZE_3, MauvilleCity_Scientist_Pyukumuku_5
	goto MauvilleCity_Scientist_Pyukumuku_8

MauvilleCity_Scientist_Pyukumuku_13:
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_unset FLAG_PYUKUMUKU_PRIZE_2, MauvilleCity_Scientist_Pyukumuku_4
	goto MauvilleCity_Scientist_Pyukumuku_11

MauvilleCity_Scientist_Pyukumuku_16:
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_unset FLAG_PYUKUMUKU_PRIZE_1, MauvilleCity_Scientist_Pyukumuku_3
	goto MauvilleCity_Scientist_Pyukumuku_14

MauvilleCity_Scientist_Pyukumuku_21:
# 59 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_11
	goto MauvilleCity_Scientist_Pyukumuku_20

MauvilleCity_Scientist_Pyukumuku_25:
# 42 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_9
# 43 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_PYUKUMUKU_PRIZE_4
# 44 "data/maps/MauvilleCity_House1/scripts.pory"
	call NicknamePartyMon
	goto MauvilleCity_Scientist_Pyukumuku_24

MauvilleCity_Scientist_Pyukumuku_26:
# 47 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_9
# 48 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_PYUKUMUKU_PRIZE_4
# 49 "data/maps/MauvilleCity_House1/scripts.pory"
	call NicknameBoxMon
	goto MauvilleCity_Scientist_Pyukumuku_24


MauvilleCity_Scientist_Pyukumuku_Text_0:
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I've been researching Pyukumuku, they\n"
	.string "are a really fascinating Pokémon.$"

MauvilleCity_Scientist_Pyukumuku_Text_1:
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I've heard they like to climb onto land.\n"
	.string "If you could throw them back into the\l"
	.string "ocean and report back to me it would\l"
	.string "really help.$"

MauvilleCity_Scientist_Pyukumuku_Text_2:
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You've found that many! Wow this will be\n"
	.string "fantastic help to me.$"

MauvilleCity_Scientist_Pyukumuku_Text_3:
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Please take this as thanks!$"

MauvilleCity_Scientist_Pyukumuku_Text_4:
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Keep looking out I'm sure there is many\n"
	.string "more to find.$"

MauvilleCity_Scientist_Pyukumuku_Text_5:
# 21 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Wow you can't be stopped. I'm sure I'll\n"
	.string "be able to learn about therir abilities$"

MauvilleCity_Scientist_Pyukumuku_Text_6:
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "They must be everywhere, you've been\n"
	.string "such a good help! I'll get a reserch\l"
	.string "grant for sure$"

MauvilleCity_Scientist_Pyukumuku_Text_7:
# 37 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Still finding them? I've found out more\n"
	.string "than I thought possible. I've got a new\l"
	.string "grant and will be moving away soon!$"

MauvilleCity_Scientist_Pyukumuku_Text_8:
# 38 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You've been such a great help you\n"
	.string "should have this!$"

MauvilleCity_Scientist_Pyukumuku_Text_9:
# 42 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Recieved Pyukumuku$"

MauvilleCity_Scientist_Pyukumuku_Text_10:
# 53 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

MauvilleCity_Scientist_Pyukumuku_Text_11:
# 59 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I can't wait to move to my new lab!$"

MauvilleCity_Scientist_Pyukumuku_Text_12:
# 63 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Keep up the good work!$"
