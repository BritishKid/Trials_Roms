EmberDunes1_MapScripts::
	.byte 0


EmberDune_Conor_Battle::
	trainerbattle_single EMBERDUNE_CONOR, Conor_Intro, Conor_Outro
	msgbox Conor_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


EmberDune_Maniac_Battle::
	trainerbattle_single EMBERDUNE_MANIAC, Conor_Intro, Conor_Outro
	msgbox Conor_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


EmberDune_Jordan_AceTrainer::
	trainerbattle_single EMBERDUNE_JORDAN, Jordan_Intro, Jordan_Outro
	msgbox Jordan_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


EmberDune_Charr_AceTrainer::
	trainerbattle_single EMBERDUNE_CHARR, Charr_Intro, Charr_Outro
	msgbox Charr_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


DesertManiac_Intro::
	.string "I hope your ready because I've been\n"
	.string "training recently$"

DesertManiac_Outro::
	.string "Wow. I guess I need to get back to\n"
	.string "training$"

DesertManiac_PostBattle::
	.string "This is an amazing place to train.$"

Conor_Intro::
	.string "I hope your ready because I've been\n"
	.string "training recently$"

Conor_Outro::
	.string "Wow. I guess I need to get back to\n"
	.string "training$"

Conor_PostBattle::
	.string "This is an amazing place to train.$"

Jordan_Intro::
	.string "Well done for making it this far, but now\n"
	.string "your time ends$"

Jordan_Outro::
	.string "Seens you've bested me. Well done!$"

Jordan_PostBattle::
	.string "I'm going to follow the footsteps of a\n"
	.string "legendary trainer and become the very\l"
	.string "best$"

Charr_Intro::
	.string "Jordan is unstoppable, he trains so\n"
	.string "hard to be the best$"

Charr_Outro::
	.string "I didn't think he could lose!$"

Charr_PostBattle::
	.string "Jordan is going to keep training and we\n"
	.string "will beat you next time we see you.$"
