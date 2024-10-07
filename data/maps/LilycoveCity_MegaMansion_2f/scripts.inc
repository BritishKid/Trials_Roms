LilycoveCity_MegaMansion_2f_MapScripts::
	.byte 0


MegaMansion_Secret2::
	lockall
	compare VAR__MEGA_MANSION_STATE, 2
	goto_if_eq MegaMansion_Secret2_2
MegaMansion_Secret2_1:
	releaseall
	return

MegaMansion_Secret2_2:
	setvar VAR__MEGA_MANSION_STATE, 3
	msgbox MegaMansion_Secret2_Text_0
	goto MegaMansion_Secret2_1


MegaMansion_Trainer3::
	trainerbattle_single MEGAMANSION_TRAINER3, MegaMansion_Trainer3_Intro, MegaMansion_Trainer3_Outro, MegaMansion_Trainer_PostbattleScript
	msgbox MegaMansion_Trainer3_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


MegaMansion_Trainer5::
	trainerbattle_single MEGAMANSION_TRAINER5, MegaMansion_Trainer5_Intro, MegaMansion_Trainer5_Outro, MegaMansion_Trainer_PostbattleScript
	msgbox MegaMansion_Trainer5_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


MegaMansion_Trainer7::
	trainerbattle_single MEGAMANSION_TRAINER7, MegaMansion_Trainer7_Intro, MegaMansion_Trainer7_Outro, MegaMansion_Trainer_PostbattleScript
	msgbox MegaMansion_Trainer7_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


MegaMansion_RareCandy::
	finditem ITEM_RARE_CANDY, 4
	return


MegaMansion_Secret2_Text_0:
	.string "It's a half grown bonsai tree$"

MegaMansion_Trainer3_Intro::
	.string "Time to learn your abc's$"

MegaMansion_Trainer3_Outro::
	.string "abcdefghijklose$"

MegaMansion_Trainer3_Postbattle::
	.string "You mastered the Pokémon and the\n"
	.string "english alphabet$"

MegaMansion_Trainer5_Intro::
	.string "You are getting INTIMIDATED$"

MegaMansion_Trainer5_Outro::
	.string "You got INTIMIDATED$"

MegaMansion_Trainer5_Postbattle::
	.string "My self esteem fell one stage$"

MegaMansion_Trainer7_Intro::
	.string "My Mouwam will destroy you!$"

MegaMansion_Trainer7_Outro::
	.string "MOUWAM NO!$"

MegaMansion_Trainer7_Postbattle::
	.string "hmph$"
