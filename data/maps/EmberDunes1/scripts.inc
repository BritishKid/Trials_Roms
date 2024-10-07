EmberDunes1_MapScripts::
	.byte 0


EmberDune_Conor_Battle::
	trainerbattle_single EMBERDUNE_CONOR, Conor_Intro, Conor_Outro, Increase_Trainers_Beaten
	msgbox Conor_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


EmberDune_Maniac_Battle::
	trainerbattle_single EMBERDUNE_MANIAC, Conor_Intro, Conor_Outro, Increase_Trainers_Beaten
	msgbox Conor_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


EmberDune_Jordan_AceTrainer::
	trainerbattle_double EMBERDUNE_JORDAN, Jordan_Intro, Jordan_Outro, JordanNotEnoughMons, Increase_Trainers_Beaten
	msgbox Jordan_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


EMBERDUNE_JORDAN_SECRET_BASE_AceTrainer::
	trainerbattle_double EMBERDUNE_JORDAN, Charr_Intro, Charr_Outro, JordanNotEnoughMons, Increase_Trainers_Beaten
	msgbox Charr_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


EmberDune_SunnyDay::
	finditem ITEM_TM11
	return


EmberDunesButtonAccessArea_LegendaryEntrance::
	compare VAR_EMBERDUNES_BUTTONS_PRESSED, 4
	goto_if_eq EmberDunesButtonAccessArea_LegendaryEntrance_1
	msgbox EmberDunesButtonAccessArea_LegendaryEntrance_Text_1
	return

EmberDunesButtonAccessArea_LegendaryEntrance_1:
	msgbox EmberDunesButtonAccessArea_LegendaryEntrance_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EmberDunesButtonAccessArea_LegendaryEntrance_4
	return

EmberDunesButtonAccessArea_LegendaryEntrance_4:
	return


EmberDunes_1_EventScript_SecretButton1::
	lockall
	goto_if_unset FLAG_EMBER_DUNES_BUTTON_1_PRESSED, EmberDunes_1_EventScript_SecretButton1_2
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_3
EmberDunes_1_EventScript_SecretButton1_1:
	releaseall
	return

EmberDunes_1_EventScript_SecretButton1_2:
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EmberDunes_1_EventScript_SecretButton1_6
EmberDunes_1_EventScript_SecretButton1_5:
	compare VAR_RESULT, NO
	goto_if_eq EmberDunes_1_EventScript_SecretButton1_8
	goto EmberDunes_1_EventScript_SecretButton1_1

EmberDunes_1_EventScript_SecretButton1_6:
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_1
	setvar VAR_EMBERDUNES_BUTTONS_PRESSED, VAR_EMBERDUNES_BUTTONS_PRESSED + 1
	setflag FLAG_EMBER_DUNES_BUTTON_1_PRESSED
	goto EmberDunes_1_EventScript_SecretButton1_5

EmberDunes_1_EventScript_SecretButton1_8:
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_2
	goto EmberDunes_1_EventScript_SecretButton1_1


EmberDunes_1_EventScript_SecretButton2::
	lockall
	goto_if_unset FLAG_EMBER_DUNES_BUTTON_2_PRESSED, EmberDunes_1_EventScript_SecretButton2_2
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_3
EmberDunes_1_EventScript_SecretButton2_1:
	releaseall
	return

EmberDunes_1_EventScript_SecretButton2_2:
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EmberDunes_1_EventScript_SecretButton2_6
EmberDunes_1_EventScript_SecretButton2_5:
	compare VAR_RESULT, NO
	goto_if_eq EmberDunes_1_EventScript_SecretButton2_8
	goto EmberDunes_1_EventScript_SecretButton2_1

EmberDunes_1_EventScript_SecretButton2_6:
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_1
	setvar VAR_EMBERDUNES_BUTTONS_PRESSED, VAR_EMBERDUNES_BUTTONS_PRESSED + 1
	setflag FLAG_EMBER_DUNES_BUTTON_2_PRESSED
	goto EmberDunes_1_EventScript_SecretButton2_5

EmberDunes_1_EventScript_SecretButton2_8:
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_2
	goto EmberDunes_1_EventScript_SecretButton2_1


EmberDunesButtonAccessArea_LegendaryEntrance_Text_0:
	.string "You see an entrance you can get\n"
	.string "through, would you like to try?$"

EmberDunesButtonAccessArea_LegendaryEntrance_Text_1:
	.string "You see a crack along the rock face,\n"
	.string "maybe you could open it?$"

EmberDunes_1_EventScript_SecretButton1_Text_0:
	.string "It's covered in sand but you can make\n"
	.string "out a button on it.\p"
	.string "Press the button?$"

EmberDunes_1_EventScript_SecretButton1_Text_1:
	.string "You press the button$"

EmberDunes_1_EventScript_SecretButton1_Text_2:
	.string "Probably the smart choice.$"

EmberDunes_1_EventScript_SecretButton1_Text_3:
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"

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

JordanNotEnoughMons::
	.string "Shame you don't have enough Pokémon$"
