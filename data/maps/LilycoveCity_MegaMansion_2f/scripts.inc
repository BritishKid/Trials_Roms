LilycoveCity_MegaMansion_2f_MapScripts::
	.byte 0


MegaMansion_Secret2::
# 5 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	lockall
# 6 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	compare VAR__MEGA_MANSION_STATE, 2
	goto_if_eq MegaMansion_Secret2_2
MegaMansion_Secret2_1:
# 10 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	releaseall
	return

MegaMansion_Secret2_2:
# 7 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	setvar VAR__MEGA_MANSION_STATE, 3
# 8 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	msgbox MegaMansion_Secret2_Text_0
	goto MegaMansion_Secret2_1


MegaMansion_Trainer3::
# 14 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	trainerbattle_single MEGAMANSION_TRAINER3, MegaMansion_Trainer3_Intro, MegaMansion_Trainer3_Outro, MegaMansion_Trainer_PostbattleScript
# 15 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	msgbox MegaMansion_Trainer3_Postbattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	release
	return


MegaMansion_Trainer5::
# 20 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	trainerbattle_single MEGAMANSION_TRAINER5, MegaMansion_Trainer5_Intro, MegaMansion_Trainer5_Outro, MegaMansion_Trainer_PostbattleScript
# 21 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	msgbox MegaMansion_Trainer5_Postbattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	release
	return


MegaMansion_Trainer7::
# 27 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	trainerbattle_single MEGAMANSION_TRAINER7, MegaMansion_Trainer7_Intro, MegaMansion_Trainer7_Outro, MegaMansion_Trainer_PostbattleScript
# 28 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	msgbox MegaMansion_Trainer7_Postbattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	release
	return


MegaMansion_RareCandy::
# 33 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	finditem ITEM_RARE_CANDY, 4
	return


MegaMansion_Secret2_Text_0:
# 8 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "It's a half grown bonsai tree$"

MegaMansion_Trainer3_Intro::
# 38 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "Time to learn your abc's$"

MegaMansion_Trainer3_Outro::
# 42 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "abcdefghijklose$"

MegaMansion_Trainer3_Postbattle::
# 46 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "You mastered the Pokémon and the\n"
	.string "english alphabet$"

MegaMansion_Trainer5_Intro::
# 50 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "You are getting INTIMIDATED$"

MegaMansion_Trainer5_Outro::
# 54 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "You got INTIMIDATED$"

MegaMansion_Trainer5_Postbattle::
# 58 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "My self esteem fell one stage$"

MegaMansion_Trainer7_Intro::
# 62 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "My Mouwam will destroy you!$"

MegaMansion_Trainer7_Outro::
# 66 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "MOUWAM NO!$"

MegaMansion_Trainer7_Postbattle::
# 70 "data/maps/LilycoveCity_MegaMansion_2f/scripts.pory"
	.string "hmph$"
