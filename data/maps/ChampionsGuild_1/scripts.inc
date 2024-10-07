ChampionsGuild_1_MapScripts::
	.byte 0


ChampionGuildGuide::
	lockall
	msgbox ChampionGuildGuide_Text_0
	msgbox ChampionGuildGuide_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ChampionGuildGuide_2
ChampionGuildGuide_1:
	releaseall
	return

ChampionGuildGuide_2:
	warp MAP_PLAYERS_BEDROOM, 4, 5
	goto ChampionGuildGuide_1


ChampionsGuildGauntletDoor_ComingSoon::
	lockall
	msgbox ChampionsGuildGauntletDoor_ComingSoon_Text_0
	msgbox ChampionsGuildGauntletDoor_ComingSoon_Text_1
	releaseall
	return


ChampionsGuildTournamentDoor_ComingSoon::
	lockall
	msgbox ChampionsGuildGauntletDoor_ComingSoon_Text_0
	msgbox ChampionsGuildTournamentDoor_ComingSoon_Text_0
	releaseall
	return


ChampionsGuild_Mat::
	lockall
	trainerbattle_single CHAMPION_MAT, ChampionMat_Intro, ChampionMat_Outro
	msgbox ChampionMat_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


ChampionsGuild_Ollie::
	lockall
	trainerbattle_single TRAINER_OLLIE_CHAMPION, ChampionOllie_Intro, ChampionOllie_Outro
	msgbox ChampionOllie_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


ChampionsGuild_Alex::
	lockall
	trainerbattle_single TRAINER_ALEX_CHAMPION, ChampionAlex_Intro, ChampionAlex_Outro
	msgbox ChampionAlex_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


ChampionsGuild_Gatto::
	lockall
	trainerbattle_single TRAINER_GATTO_CHAMPION, ChampionGatto_Intro, ChampionGatto_Outro
	msgbox ChampionGatto_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


ChampionsGuild_Pulsar::
	lockall
	trainerbattle_single TRAINER_PULSAR_CHAMPION, ChampionPulsar_Intro, ChampionPulsar_Outro
	msgbox ChampionPulsar_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


ChampionShop_Clerk::
	lockall
	faceplayer
	msgbox ChampionShop_Clerk_Text_0
	pokemart ChampionGuildMart_Items
	releaseall
	return


	.align 2
ChampionGuildMart_Items:
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

ChampionGuildGuide_Text_0:
	.string "Welcome to the Champions Guild! If you\n"
	.string "found here please come to our discord\l"
	.string "and suggest a team to be added here.\l"
	.string "This will be a very late post game area\l"
	.string "but feel free to start having a taste\l"
	.string "of it now!$"

ChampionGuildGuide_Text_1:
	.string "Would you like to go back to your home?$"

ChampionsGuildGauntletDoor_ComingSoon_Text_0:
	.string "COMING SOON$"

ChampionsGuildGauntletDoor_ComingSoon_Text_1:
	.string "Behind this door will be the Champions\n"
	.string "Guild Gauntlet\n"
	.string "You will be able to take on every\l"
	.string "champion in back to back battles\l"
	.string "without a break between. It will be the\l"
	.string "ultimate challenge!$"

ChampionsGuildTournamentDoor_ComingSoon_Text_0:
	.string "Behind this door will be the Champions\n"
	.string "Guild Tournament$"

ChampionShop_Clerk_Text_0:
	.string "Feel free to buy any items that might\n"
	.string "help you here$"

ChampionMat_Intro::
	.string "Hey it's me Mat! Bet you never thought I\n"
	.string "could beat the Elite 4!$"

ChampionMat_Outro::
	.string "Well you still have lots to teach me\n"
	.string "still$"

ChampionMat_PostBattle::
	.string "It's all good though! I'll still win the\n"
	.string "tournament!$"

ChampionOllie_Intro::
	.string "Doing the gym challenge let me create\n"
	.string "the perfect team!$"

ChampionOllie_Outro::
	.string "PERFECTION CAN BE MORE\n"
	.string "PERFECTIONERER$"

ChampionOllie_PostBattle::
	.string "Steelix can't lose?$"

ChampionAlex_Intro::
	.string "Oh yeah I'm a Champion, I probably\n"
	.string "should of told you$"

ChampionAlex_Outro::
	.string "I'm a little out of practice$"

ChampionAlex_PostBattle::
	.string "I became a Champion after my first few\n"
	.string "expeditions, I thought why not I should\l"
	.string "be strong enough.$"

ChampionGatto_Intro::
	.string "TODO$"

ChampionGatto_Outro::
	.string "TODO$"

ChampionGatto_PostBattle::
	.string "TODO$"

ChampionPulsar_Intro::
	.string "Are you truly ready for this test?$"

ChampionPulsar_Outro::
	.string "Hmmph$"

ChampionPulsar_PostBattle::
	.string "Well. Good job. Overconfidence was my\n"
	.string "downfall.$"
