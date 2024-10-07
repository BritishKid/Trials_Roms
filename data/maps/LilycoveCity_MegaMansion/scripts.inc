LilycoveCity_MegaMansion_MapScripts::
	.byte 0


MegaMansion_Secret1::
	lockall
	compare VAR__MEGA_MANSION_STATE, 1
	goto_if_eq MegaMansion_Secret1_2
MegaMansion_Secret1_1:
	releaseall
	return

MegaMansion_Secret1_2:
	setvar VAR__MEGA_MANSION_STATE, 2
	msgbox MegaMansion_Secret1_Text_0
	goto MegaMansion_Secret1_1


MegaMansion_Trainer1::
	trainerbattle_single MEGAMANSION_TRAINER1, MegaMansion_Trainer1_Intro, MegaMansion_Trainer1_Outro, MegaMansion_Trainer_PostbattleScript
	msgbox MegaMansion_Trainer1_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


MegaMansion_Trainer2::
	trainerbattle_single MEGAMANSION_TRAINER2, MegaMansion_Trainer2_Intro, MegaMansion_Trainer2_Outro, MegaMansion_Trainer_PostbattleScript
	msgbox MegaMansion_Trainer2_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


MegaMansion_Trainer4::
	trainerbattle_single MEGAMANSION_TRAINER4, MegaMansion_Trainer4_Intro, MegaMansion_Trainer4_Outro, MegaMansion_Trainer_PostbattleScript
	msgbox MegaMansion_Trainer4_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


MegaMansion_Trainer_PostbattleScript::
	msgbox MegaMansion_Trainer_PostbattleScript_Text_0
	compare VAR_MEGAMANSION_STARS, 9
	goto_if_eq MegaMansion_Trainer_PostbattleScript_2
MegaMansion_Trainer_PostbattleScript_1:
	compare VAR_MEGAMANSION_STARS, 8
	goto_if_eq MegaMansion_Trainer_PostbattleScript_5
MegaMansion_Trainer_PostbattleScript_4:
	compare VAR_MEGAMANSION_STARS, 7
	goto_if_eq MegaMansion_Trainer_PostbattleScript_8
MegaMansion_Trainer_PostbattleScript_7:
	compare VAR_MEGAMANSION_STARS, 6
	goto_if_eq MegaMansion_Trainer_PostbattleScript_11
MegaMansion_Trainer_PostbattleScript_10:
	compare VAR_MEGAMANSION_STARS, 5
	goto_if_eq MegaMansion_Trainer_PostbattleScript_14
MegaMansion_Trainer_PostbattleScript_13:
	compare VAR_MEGAMANSION_STARS, 4
	goto_if_eq MegaMansion_Trainer_PostbattleScript_17
MegaMansion_Trainer_PostbattleScript_16:
	compare VAR_MEGAMANSION_STARS, 3
	goto_if_eq MegaMansion_Trainer_PostbattleScript_20
MegaMansion_Trainer_PostbattleScript_19:
	compare VAR_MEGAMANSION_STARS, 2
	goto_if_eq MegaMansion_Trainer_PostbattleScript_23
MegaMansion_Trainer_PostbattleScript_22:
	compare VAR_MEGAMANSION_STARS, 1
	goto_if_eq MegaMansion_Trainer_PostbattleScript_26
MegaMansion_Trainer_PostbattleScript_25:
	compare VAR_MEGAMANSION_STARS, 0
	goto_if_eq MegaMansion_Trainer_PostbattleScript_28
	return

MegaMansion_Trainer_PostbattleScript_2:
	setvar VAR_MEGAMANSION_STARS, 10
	goto MegaMansion_Trainer_PostbattleScript_1

MegaMansion_Trainer_PostbattleScript_5:
	setvar VAR_MEGAMANSION_STARS, 9
	goto MegaMansion_Trainer_PostbattleScript_4

MegaMansion_Trainer_PostbattleScript_8:
	setvar VAR_MEGAMANSION_STARS, 8
	goto MegaMansion_Trainer_PostbattleScript_7

MegaMansion_Trainer_PostbattleScript_11:
	setvar VAR_MEGAMANSION_STARS, 7
	goto MegaMansion_Trainer_PostbattleScript_10

MegaMansion_Trainer_PostbattleScript_14:
	setvar VAR_MEGAMANSION_STARS, 6
	goto MegaMansion_Trainer_PostbattleScript_13

MegaMansion_Trainer_PostbattleScript_17:
	setvar VAR_MEGAMANSION_STARS, 5
	goto MegaMansion_Trainer_PostbattleScript_16

MegaMansion_Trainer_PostbattleScript_20:
	setvar VAR_MEGAMANSION_STARS, 4
	goto MegaMansion_Trainer_PostbattleScript_19

MegaMansion_Trainer_PostbattleScript_23:
	setvar VAR_MEGAMANSION_STARS, 3
	goto MegaMansion_Trainer_PostbattleScript_22

MegaMansion_Trainer_PostbattleScript_26:
	setvar VAR_MEGAMANSION_STARS, 2
	goto MegaMansion_Trainer_PostbattleScript_25

MegaMansion_Trainer_PostbattleScript_28:
	setvar VAR_MEGAMANSION_STARS, 1
	return


MegaMansion_Leaderbaord::
	lockall
	msgbox MegaMansion_Leaderbaord_Text_0
	releaseall
	return


MegaMansion_TrapDoor::
	lockall
	msgbox MegaMansion_TrapDoor_Text_0
	msgbox MegaMansion_TrapDoor_Text_1
	compare VAR_MEGAMANSION_STARS, 4
	goto_if_eq MegaMansion_TrapDoor_2
	msgbox MegaMansion_TrapDoor_Text_3
MegaMansion_TrapDoor_1:
	releaseall
	return

MegaMansion_TrapDoor_2:
	msgbox MegaMansion_TrapDoor_Text_2
	goto MegaMansion_TrapDoor_1


MegaMansion_StarCheck::
	lockall
	faceplayer
	msgbox MegaMansion_StarCheck_Text_0
	compare VAR_MEGAMANSION_STARS, 10
	goto_if_gt MegaMansion_StarCheck_2
MegaMansion_StarCheck_1:
	releaseall
	return

MegaMansion_StarCheck_2:
	msgbox MegaMansion_StarCheck_Text_1
	goto MegaMansion_StarCheck_1


MegaMansion_EntranceStart::
	lockall
	msgbox MegaMansion_EntranceStart_Text_0
	setvar VAR__MEGA_MANSION_STATE, 1
	releaseall
	return


MegaMansion_Secret1_Text_0:
	.string "It's a bonsai tree that was just\n"
	.string "planted$"

MegaMansion_Trainer_PostbattleScript_Text_0:
	.string "Well as you won you get a star from me$"

MegaMansion_Leaderbaord_Text_0:
	.string "COMING SOON$"

MegaMansion_TrapDoor_Text_0:
	.string "It's a trapdoor$"

MegaMansion_TrapDoor_Text_1:
	.string "...$"

MegaMansion_TrapDoor_Text_2:
	.string "You open it and climb in$"

MegaMansion_TrapDoor_Text_3:
	.string "It's locked$"

MegaMansion_StarCheck_Text_0:
	.string "To reach the top 8 you need to get\n"
	.string "atleast 10 Stars.$"

MegaMansion_StarCheck_Text_1:
	.string "Sorry you are still short some stars,\n"
	.string "keep battling!$"

MegaMansion_EntranceStart_Text_0:
	.string "This is the Mega Mansion! It is\n"
	.string "currently still in development but feel\l"
	.string "free to explore this early vesion and\l"
	.string "supply feedback$"

MegaMansion_Trainer1_Intro::
	.string "I've almost got enough stars to get the\n"
	.string "Mega Ring, you're just another speed\l"
	.string "bump$"

MegaMansion_Trainer1_Outro::
	.string "Wow, you're a massive speed bump$"

MegaMansion_Trainer1_Postbattle::
	.string "Once I get my Mega Ring i'm going to\n"
	.string "mega evolve my Centiskorch!$"

MegaMansion_Trainer2_Intro::
	.string "With this team, I'm sure to take you by\n"
	.string "surprise, type wise!$"

MegaMansion_Trainer2_Outro::
	.string "I see you managed to make sense of\n"
	.string "these typings.$"

MegaMansion_Trainer2_Postbattle::
	.string "I made a team of Pokémon with types no\n"
	.string "other family has... not that doing that\l"
	.string "made it the best.$"

MegaMansion_Trainer4_Intro::
	.string "I can't wait to get my mega bracelet!$"

MegaMansion_Trainer4_Outro::
	.string "Once I get my mega I will be the\n"
	.string "strongest$"

MegaMansion_Trainer4_Postbattle::
	.string "Once I get my mega I will be the\n"
	.string "strongest$"
