MauvilleCity_House1_MapScripts::
	.byte 0


MauvilleCity_Scientist_Pyukumuku::
	lockall
	faceplayer
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_0
	compare VAR_PYUKUMUKUS_SAVED, 0
	goto_if_eq MauvilleCity_Scientist_Pyukumuku_2
	compare VAR_PYUKUMUKUS_SAVED, 3
	goto_if_gt MauvilleCity_Scientist_Pyukumuku_16
MauvilleCity_Scientist_Pyukumuku_14:
	compare VAR_PYUKUMUKUS_SAVED, 6
	goto_if_gt MauvilleCity_Scientist_Pyukumuku_13
MauvilleCity_Scientist_Pyukumuku_11:
	compare VAR_PYUKUMUKUS_SAVED, 9
	goto_if_gt MauvilleCity_Scientist_Pyukumuku_10
MauvilleCity_Scientist_Pyukumuku_8:
	compare VAR_PYUKUMUKUS_SAVED, 10
	goto_if_eq MauvilleCity_Scientist_Pyukumuku_7
MauvilleCity_Scientist_Pyukumuku_1:
	goto_if_set FLAG_PYUKUMUKU_PRIZE_4, MauvilleCity_Scientist_Pyukumuku_21
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_12
MauvilleCity_Scientist_Pyukumuku_20:
	releaseall
	return

MauvilleCity_Scientist_Pyukumuku_2:
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_1
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_3:
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_2
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_3
	giveitem ITEM_ABSORB_BULB
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_PYUKUMUKU_PRIZE_1
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_4
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_4:
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_5
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_3
	giveitem ITEM_TM24
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_PYUKUMUKU_PRIZE_2
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_4
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_5:
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_6
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_3
	giveitem ITEM_TM52_SCALD
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_PYUKUMUKU_PRIZE_3
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_4
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_6:
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_7
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_8
	setflag P_FLAG_FORCE_SHINY
	givemon SPECIES_PYUKUMUKU, 5, ITEM_ELECTRIC_SEED
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MauvilleCity_Scientist_Pyukumuku_25
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MauvilleCity_Scientist_Pyukumuku_26
	hidemonpic
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_10
MauvilleCity_Scientist_Pyukumuku_24:
	clearflag P_FLAG_FORCE_SHINY
	playfanfare MUS_OBTAIN_ITEM
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_7:
	goto_if_unset FLAG_PYUKUMUKU_PRIZE_4, MauvilleCity_Scientist_Pyukumuku_6
	goto MauvilleCity_Scientist_Pyukumuku_1

MauvilleCity_Scientist_Pyukumuku_10:
	goto_if_unset FLAG_PYUKUMUKU_PRIZE_3, MauvilleCity_Scientist_Pyukumuku_5
	goto MauvilleCity_Scientist_Pyukumuku_8

MauvilleCity_Scientist_Pyukumuku_13:
	goto_if_unset FLAG_PYUKUMUKU_PRIZE_2, MauvilleCity_Scientist_Pyukumuku_4
	goto MauvilleCity_Scientist_Pyukumuku_11

MauvilleCity_Scientist_Pyukumuku_16:
	goto_if_unset FLAG_PYUKUMUKU_PRIZE_1, MauvilleCity_Scientist_Pyukumuku_3
	goto MauvilleCity_Scientist_Pyukumuku_14

MauvilleCity_Scientist_Pyukumuku_21:
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_11
	goto MauvilleCity_Scientist_Pyukumuku_20

MauvilleCity_Scientist_Pyukumuku_25:
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_9
	setflag FLAG_PYUKUMUKU_PRIZE_4
	call NicknamePartyMon
	goto MauvilleCity_Scientist_Pyukumuku_24

MauvilleCity_Scientist_Pyukumuku_26:
	msgbox MauvilleCity_Scientist_Pyukumuku_Text_9
	setflag FLAG_PYUKUMUKU_PRIZE_4
	call NicknameBoxMon
	goto MauvilleCity_Scientist_Pyukumuku_24


MauvilleCity_Scientist_Pyukumuku_Text_0:
	.string "I've been researching Pyukumuku, they\n"
	.string "are a really fascinating Pokémon.$"

MauvilleCity_Scientist_Pyukumuku_Text_1:
	.string "I've heard they like to climb onto land.\n"
	.string "If you could throw them back into the\l"
	.string "ocean and report back to me it would\l"
	.string "really help.$"

MauvilleCity_Scientist_Pyukumuku_Text_2:
	.string "You've found that many! Wow this will be\n"
	.string "fantastic help to me.$"

MauvilleCity_Scientist_Pyukumuku_Text_3:
	.string "Please take this as thanks!$"

MauvilleCity_Scientist_Pyukumuku_Text_4:
	.string "Keep looking out I'm sure there is many\n"
	.string "more to find.$"

MauvilleCity_Scientist_Pyukumuku_Text_5:
	.string "Wow you can't be stopped. I'm sure I'll\n"
	.string "be able to learn about therir abilities$"

MauvilleCity_Scientist_Pyukumuku_Text_6:
	.string "They must be everywhere, you've been\n"
	.string "such a good help! I'll get a reserch\l"
	.string "grant for sure$"

MauvilleCity_Scientist_Pyukumuku_Text_7:
	.string "Still finding them? I've found out more\n"
	.string "than I thought possible. I've got a new\l"
	.string "grant and will be moving away soon!$"

MauvilleCity_Scientist_Pyukumuku_Text_8:
	.string "You've been such a great help you\n"
	.string "should have this!$"

MauvilleCity_Scientist_Pyukumuku_Text_9:
	.string "Recieved Pyukumuku$"

MauvilleCity_Scientist_Pyukumuku_Text_10:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

MauvilleCity_Scientist_Pyukumuku_Text_11:
	.string "I can't wait to move to my new lab!$"

MauvilleCity_Scientist_Pyukumuku_Text_12:
	.string "Keep up the good work!$"
