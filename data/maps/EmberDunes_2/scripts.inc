EmberDunes_2_MapScripts::
	.byte 0


EmberDune_Conor_Battle::
# 5 "data/maps/EmberDunes_2/scripts.pory"
	trainerbattle_single EMBERDUNE_CONOR, Conor_Intro, Conor_Outro, Increase_Trainers_Beaten
# 6 "data/maps/EmberDunes_2/scripts.pory"
	msgbox Conor_PostBattle, MSGBOX_AUTOCLOSE
# 7 "data/maps/EmberDunes_2/scripts.pory"
	release
	return


EmberDune_Maniac_Battle::
# 12 "data/maps/EmberDunes_2/scripts.pory"
	trainerbattle_single EMBERDUNE_MANIAC, DesertManiac_Intro, DesertManiac_Outro, Increase_Trainers_Beaten
# 13 "data/maps/EmberDunes_2/scripts.pory"
	msgbox DesertManiac_PostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/EmberDunes_2/scripts.pory"
	release
	return


EmberDune_Jordan_AceTrainer::
# 19 "data/maps/EmberDunes_2/scripts.pory"
	trainerbattle_double EMBERDUNE_JORDAN, Jordan_Intro, Jordan_Outro, JordanNotEnoughMons, Increase_Trainers_Beaten
# 20 "data/maps/EmberDunes_2/scripts.pory"
	msgbox Jordan_PostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/EmberDunes_2/scripts.pory"
	release
	return


EmberDune_Charr_AceTrainer::
# 25 "data/maps/EmberDunes_2/scripts.pory"
	trainerbattle_double EMBERDUNE_JORDAN, Charr_Intro, Charr_Outro, JordanNotEnoughMons, Increase_Trainers_Beaten
# 26 "data/maps/EmberDunes_2/scripts.pory"
	msgbox Charr_PostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/EmberDunes_2/scripts.pory"
	release
	return


EmberDunes_1_EventScript_SecretButton1::
# 34 "data/maps/EmberDunes_2/scripts.pory"
	lockall
# 35 "data/maps/EmberDunes_2/scripts.pory"
	goto_if_unset FLAG_EMBER_DUNES_BUTTON_1_PRESSED, EmberDunes_1_EventScript_SecretButton1_2
# 47 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_3
EmberDunes_1_EventScript_SecretButton1_1:
# 49 "data/maps/EmberDunes_2/scripts.pory"
	releaseall
	return

EmberDunes_1_EventScript_SecretButton1_2:
# 36 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_0, MSGBOX_YESNO
# 37 "data/maps/EmberDunes_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EmberDunes_1_EventScript_SecretButton1_6
EmberDunes_1_EventScript_SecretButton1_5:
# 42 "data/maps/EmberDunes_2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EmberDunes_1_EventScript_SecretButton1_8
	goto EmberDunes_1_EventScript_SecretButton1_1

EmberDunes_1_EventScript_SecretButton1_6:
# 38 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_1
# 39 "data/maps/EmberDunes_2/scripts.pory"
	addvar VAR_EMBERDUNES_BUTTONS_PRESSED, 1
# 40 "data/maps/EmberDunes_2/scripts.pory"
	setflag FLAG_EMBER_DUNES_BUTTON_1_PRESSED
	goto EmberDunes_1_EventScript_SecretButton1_5

EmberDunes_1_EventScript_SecretButton1_8:
# 43 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_2
	goto EmberDunes_1_EventScript_SecretButton1_1


EmberDunes_1_EventScript_SecretButton2::
# 53 "data/maps/EmberDunes_2/scripts.pory"
	lockall
# 54 "data/maps/EmberDunes_2/scripts.pory"
	goto_if_unset FLAG_EMBER_DUNES_BUTTON_2_PRESSED, EmberDunes_1_EventScript_SecretButton2_2
# 66 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_3
EmberDunes_1_EventScript_SecretButton2_1:
# 68 "data/maps/EmberDunes_2/scripts.pory"
	releaseall
	return

EmberDunes_1_EventScript_SecretButton2_2:
# 55 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_0, MSGBOX_YESNO
# 56 "data/maps/EmberDunes_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EmberDunes_1_EventScript_SecretButton2_6
EmberDunes_1_EventScript_SecretButton2_5:
# 61 "data/maps/EmberDunes_2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EmberDunes_1_EventScript_SecretButton2_8
	goto EmberDunes_1_EventScript_SecretButton2_1

EmberDunes_1_EventScript_SecretButton2_6:
# 57 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_1
# 58 "data/maps/EmberDunes_2/scripts.pory"
	addvar VAR_EMBERDUNES_BUTTONS_PRESSED, 1
# 59 "data/maps/EmberDunes_2/scripts.pory"
	setflag FLAG_EMBER_DUNES_BUTTON_2_PRESSED
	goto EmberDunes_1_EventScript_SecretButton2_5

EmberDunes_1_EventScript_SecretButton2_8:
# 62 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_2
	goto EmberDunes_1_EventScript_SecretButton2_1


EmberDunes_1_EventScript_SecretButton1_Text_0:
# 36 "data/maps/EmberDunes_2/scripts.pory"
	.string "It's covered in sand but you can make\n"
	.string "out a button on it.\p"
	.string "Press the button?$"

EmberDunes_1_EventScript_SecretButton1_Text_1:
# 38 "data/maps/EmberDunes_2/scripts.pory"
	.string "You press the button$"

EmberDunes_1_EventScript_SecretButton1_Text_2:
# 43 "data/maps/EmberDunes_2/scripts.pory"
	.string "Probably the smart choice.$"

EmberDunes_1_EventScript_SecretButton1_Text_3:
# 47 "data/maps/EmberDunes_2/scripts.pory"
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"

Conor_Intro::
# 73 "data/maps/EmberDunes_2/scripts.pory"
	.string "I hope your ready because I've been\n"
	.string "training recently$"

Conor_Outro::
# 77 "data/maps/EmberDunes_2/scripts.pory"
	.string "Wow. I guess I need to get back to\n"
	.string "training$"

Conor_PostBattle::
# 81 "data/maps/EmberDunes_2/scripts.pory"
	.string "This is an amazing place to train.$"

DesertManiac_Intro::
# 85 "data/maps/EmberDunes_2/scripts.pory"
	.string "I hope your ready because I've been\n"
	.string "training recently$"

DesertManiac_Outro::
# 89 "data/maps/EmberDunes_2/scripts.pory"
	.string "Wow. I guess I need to get back to\n"
	.string "training$"

DesertManiac_PostBattle::
# 93 "data/maps/EmberDunes_2/scripts.pory"
	.string "This is an amazing place to train.$"

Jordan_Intro::
# 97 "data/maps/EmberDunes_2/scripts.pory"
	.string "Well done for making it this far, but now\n"
	.string "your time ends$"

Jordan_Outro::
# 101 "data/maps/EmberDunes_2/scripts.pory"
	.string "Seens you've bested me. Well done!$"

Jordan_PostBattle::
# 105 "data/maps/EmberDunes_2/scripts.pory"
	.string "I'm going to follow the footsteps of a\n"
	.string "legendary trainer and become the very\l"
	.string "best$"

Charr_Intro::
# 109 "data/maps/EmberDunes_2/scripts.pory"
	.string "Jordan is unstoppable, he trains so\n"
	.string "hard to be the best$"

Charr_Outro::
# 113 "data/maps/EmberDunes_2/scripts.pory"
	.string "I didn't think he could lose!$"

Charr_PostBattle::
# 117 "data/maps/EmberDunes_2/scripts.pory"
	.string "Jordan is going to keep training and we\n"
	.string "will beat you next time we see you.$"

JordanNotEnoughMons::
# 121 "data/maps/EmberDunes_2/scripts.pory"
	.string "Shame you don't have enough Pokémon$"
