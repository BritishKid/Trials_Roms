LilycoveCity_MegaMansion_MapScripts::
	.byte 0


MegaMansion_Secret1::
# 4 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	lockall
# 5 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR__MEGA_MANSION_STATE, 1
	goto_if_eq MegaMansion_Secret1_2
MegaMansion_Secret1_1:
# 9 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	releaseall
	return

MegaMansion_Secret1_2:
# 6 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR__MEGA_MANSION_STATE, 2
# 7 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_Secret1_Text_0
	goto MegaMansion_Secret1_1


MegaMansion_Trainer1::
# 13 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	trainerbattle_single MEGAMANSION_TRAINER1, MegaMansion_Trainer1_Intro, MegaMansion_Trainer1_Outro, MegaMansion_Trainer_PostbattleScript
# 14 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_Trainer1_Postbattle, MSGBOX_AUTOCLOSE
# 15 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	release
	return


MegaMansion_Trainer2::
# 19 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	trainerbattle_single MEGAMANSION_TRAINER2, MegaMansion_Trainer2_Intro, MegaMansion_Trainer2_Outro, MegaMansion_Trainer_PostbattleScript
# 20 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_Trainer2_Postbattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	release
	return


MegaMansion_Trainer4::
# 25 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	trainerbattle_single MEGAMANSION_TRAINER4, MegaMansion_Trainer4_Intro, MegaMansion_Trainer4_Outro, MegaMansion_Trainer_PostbattleScript
# 26 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_Trainer4_Postbattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	release
	return


MegaMansion_Trainer_PostbattleScript::
# 31 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_Trainer_PostbattleScript_Text_0
# 32 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 9
	goto_if_eq MegaMansion_Trainer_PostbattleScript_2
MegaMansion_Trainer_PostbattleScript_1:
# 35 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 8
	goto_if_eq MegaMansion_Trainer_PostbattleScript_5
MegaMansion_Trainer_PostbattleScript_4:
# 38 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 7
	goto_if_eq MegaMansion_Trainer_PostbattleScript_8
MegaMansion_Trainer_PostbattleScript_7:
# 41 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 6
	goto_if_eq MegaMansion_Trainer_PostbattleScript_11
MegaMansion_Trainer_PostbattleScript_10:
# 44 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 5
	goto_if_eq MegaMansion_Trainer_PostbattleScript_14
MegaMansion_Trainer_PostbattleScript_13:
# 47 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 4
	goto_if_eq MegaMansion_Trainer_PostbattleScript_17
MegaMansion_Trainer_PostbattleScript_16:
# 50 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 3
	goto_if_eq MegaMansion_Trainer_PostbattleScript_20
MegaMansion_Trainer_PostbattleScript_19:
# 53 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 2
	goto_if_eq MegaMansion_Trainer_PostbattleScript_23
MegaMansion_Trainer_PostbattleScript_22:
# 56 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 1
	goto_if_eq MegaMansion_Trainer_PostbattleScript_26
MegaMansion_Trainer_PostbattleScript_25:
# 59 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 0
	goto_if_eq MegaMansion_Trainer_PostbattleScript_28
	return

MegaMansion_Trainer_PostbattleScript_2:
# 33 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 10
	goto MegaMansion_Trainer_PostbattleScript_1

MegaMansion_Trainer_PostbattleScript_5:
# 36 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 9
	goto MegaMansion_Trainer_PostbattleScript_4

MegaMansion_Trainer_PostbattleScript_8:
# 39 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 8
	goto MegaMansion_Trainer_PostbattleScript_7

MegaMansion_Trainer_PostbattleScript_11:
# 42 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 7
	goto MegaMansion_Trainer_PostbattleScript_10

MegaMansion_Trainer_PostbattleScript_14:
# 45 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 6
	goto MegaMansion_Trainer_PostbattleScript_13

MegaMansion_Trainer_PostbattleScript_17:
# 48 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 5
	goto MegaMansion_Trainer_PostbattleScript_16

MegaMansion_Trainer_PostbattleScript_20:
# 51 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 4
	goto MegaMansion_Trainer_PostbattleScript_19

MegaMansion_Trainer_PostbattleScript_23:
# 54 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 3
	goto MegaMansion_Trainer_PostbattleScript_22

MegaMansion_Trainer_PostbattleScript_26:
# 57 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 2
	goto MegaMansion_Trainer_PostbattleScript_25

MegaMansion_Trainer_PostbattleScript_28:
# 60 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR_MEGAMANSION_STARS, 1
	return


MegaMansion_Leaderbaord::
# 65 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	lockall
# 66 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_Leaderbaord_Text_0
# 68 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	releaseall
	return


MegaMansion_TrapDoor::
# 72 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	lockall
# 73 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_TrapDoor_Text_0
# 74 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_TrapDoor_Text_1
# 75 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 4
	goto_if_eq MegaMansion_TrapDoor_2
# 80 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_TrapDoor_Text_3
MegaMansion_TrapDoor_1:
# 82 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	releaseall
	return

MegaMansion_TrapDoor_2:
# 76 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_TrapDoor_Text_2
	goto MegaMansion_TrapDoor_1


MegaMansion_StarCheck::
# 86 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	lockall
# 87 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	faceplayer
# 88 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_StarCheck_Text_0
# 89 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	compare VAR_MEGAMANSION_STARS, 10
	goto_if_gt MegaMansion_StarCheck_2
MegaMansion_StarCheck_1:
# 96 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	releaseall
	return

MegaMansion_StarCheck_2:
# 90 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_StarCheck_Text_1
	goto MegaMansion_StarCheck_1


MegaMansion_EntranceStart::
# 100 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	lockall
# 101 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	msgbox MegaMansion_EntranceStart_Text_0
# 102 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	setvar VAR__MEGA_MANSION_STATE, 1
# 103 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	releaseall
	return


MegaMansion_Secret1_Text_0:
# 7 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "It's a bonsai tree that was just\n"
	.string "planted$"

MegaMansion_Trainer_PostbattleScript_Text_0:
# 31 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "Well as you won you get a star from me$"

MegaMansion_Leaderbaord_Text_0:
# 66 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "COMING SOON$"

MegaMansion_TrapDoor_Text_0:
# 73 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "It's a trapdoor$"

MegaMansion_TrapDoor_Text_1:
# 74 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "...$"

MegaMansion_TrapDoor_Text_2:
# 76 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "You open it and climb in$"

MegaMansion_TrapDoor_Text_3:
# 80 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "It's locked$"

MegaMansion_StarCheck_Text_0:
# 88 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "To reach the top 8 you need to get\n"
	.string "atleast 10 Stars.$"

MegaMansion_StarCheck_Text_1:
# 90 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "Sorry you are still short some stars,\n"
	.string "keep battling!$"

MegaMansion_EntranceStart_Text_0:
# 101 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "This is the Mega Mansion! It is\n"
	.string "currently still in development but feel\l"
	.string "free to explore this early vesion and\l"
	.string "supply feedback$"

MegaMansion_Trainer1_Intro::
# 108 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "I've almost got enough stars to get the\n"
	.string "Mega Ring, you're just another speed\l"
	.string "bump$"

MegaMansion_Trainer1_Outro::
# 112 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "Wow, you're a massive speed bump$"

MegaMansion_Trainer1_Postbattle::
# 116 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "Once I get my Mega Ring i'm going to\n"
	.string "mega evolve my Centiskorch!$"

MegaMansion_Trainer2_Intro::
# 120 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "With this team, I'm sure to take you by\n"
	.string "surprise, type wise!$"

MegaMansion_Trainer2_Outro::
# 124 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "I see you managed to make sense of\n"
	.string "these typings.$"

MegaMansion_Trainer2_Postbattle::
# 128 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "I made a team of Pokémon with types no\n"
	.string "other family has... not that doing that\l"
	.string "made it the best.$"

MegaMansion_Trainer4_Intro::
# 132 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "I can't wait to get my mega bracelet!$"

MegaMansion_Trainer4_Outro::
# 136 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "Once I get my mega I will be the\n"
	.string "strongest$"

MegaMansion_Trainer4_Postbattle::
# 140 "data/maps/LilycoveCity_MegaMansion/scripts.pory"
	.string "Once I get my mega I will be the\n"
	.string "strongest$"
