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


EmberDune_FossilBoy_Battle::
# 31 "data/maps/EmberDunes_2/scripts.pory"
	trainerbattle_single EMBERDUNE_FOSSILBOY, FossilBoy_Intro, FossilBoy_Outro, Fossilboy_PostScript
# 32 "data/maps/EmberDunes_2/scripts.pory"
	msgbox FossilBoy_Postbattle, MSGBOX_AUTOCLOSE
	return


Fossilboy_PostScript::
# 36 "data/maps/EmberDunes_2/scripts.pory"
	msgbox Fossilboy_PostScript_Text_0
# 37 "data/maps/EmberDunes_2/scripts.pory"
	giveitem ITEM_JAW_FOSSIL
# 38 "data/maps/EmberDunes_2/scripts.pory"
	call Increase_Trainers_Beaten
# 39 "data/maps/EmberDunes_2/scripts.pory"
	releaseall
	return


EmberDunes_1_EventScript_SecretButton1::
# 45 "data/maps/EmberDunes_2/scripts.pory"
	lockall
# 46 "data/maps/EmberDunes_2/scripts.pory"
	goto_if_unset FLAG_EMBER_DUNES_BUTTON_1_PRESSED, EmberDunes_1_EventScript_SecretButton1_2
# 58 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_3
EmberDunes_1_EventScript_SecretButton1_1:
# 60 "data/maps/EmberDunes_2/scripts.pory"
	releaseall
	return

EmberDunes_1_EventScript_SecretButton1_2:
# 47 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_0, MSGBOX_YESNO
# 48 "data/maps/EmberDunes_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EmberDunes_1_EventScript_SecretButton1_6
EmberDunes_1_EventScript_SecretButton1_5:
# 53 "data/maps/EmberDunes_2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EmberDunes_1_EventScript_SecretButton1_8
	goto EmberDunes_1_EventScript_SecretButton1_1

EmberDunes_1_EventScript_SecretButton1_6:
# 49 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_1
# 50 "data/maps/EmberDunes_2/scripts.pory"
	addvar VAR_EMBERDUNES_BUTTONS_PRESSED, 1
# 51 "data/maps/EmberDunes_2/scripts.pory"
	setflag FLAG_EMBER_DUNES_BUTTON_1_PRESSED
	goto EmberDunes_1_EventScript_SecretButton1_5

EmberDunes_1_EventScript_SecretButton1_8:
# 54 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_2
	goto EmberDunes_1_EventScript_SecretButton1_1


EmberDunes_1_EventScript_SecretButton2::
# 64 "data/maps/EmberDunes_2/scripts.pory"
	lockall
# 65 "data/maps/EmberDunes_2/scripts.pory"
	goto_if_unset FLAG_EMBER_DUNES_BUTTON_2_PRESSED, EmberDunes_1_EventScript_SecretButton2_2
# 77 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_3
EmberDunes_1_EventScript_SecretButton2_1:
# 79 "data/maps/EmberDunes_2/scripts.pory"
	releaseall
	return

EmberDunes_1_EventScript_SecretButton2_2:
# 66 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_0, MSGBOX_YESNO
# 67 "data/maps/EmberDunes_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EmberDunes_1_EventScript_SecretButton2_6
EmberDunes_1_EventScript_SecretButton2_5:
# 72 "data/maps/EmberDunes_2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EmberDunes_1_EventScript_SecretButton2_8
	goto EmberDunes_1_EventScript_SecretButton2_1

EmberDunes_1_EventScript_SecretButton2_6:
# 68 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_1
# 69 "data/maps/EmberDunes_2/scripts.pory"
	addvar VAR_EMBERDUNES_BUTTONS_PRESSED, 1
# 70 "data/maps/EmberDunes_2/scripts.pory"
	setflag FLAG_EMBER_DUNES_BUTTON_2_PRESSED
	goto EmberDunes_1_EventScript_SecretButton2_5

EmberDunes_1_EventScript_SecretButton2_8:
# 73 "data/maps/EmberDunes_2/scripts.pory"
	msgbox EmberDunes_1_EventScript_SecretButton1_Text_2
	goto EmberDunes_1_EventScript_SecretButton2_1


Fossilboy_PostScript_Text_0:
# 36 "data/maps/EmberDunes_2/scripts.pory"
	.string "Wow why don't you take one of the spare\n"
	.string "Jaw fossils I found?$"

EmberDunes_1_EventScript_SecretButton1_Text_0:
# 47 "data/maps/EmberDunes_2/scripts.pory"
	.string "It's covered in sand but you can make\n"
	.string "out a button on it.\p"
	.string "Press the button?$"

EmberDunes_1_EventScript_SecretButton1_Text_1:
# 49 "data/maps/EmberDunes_2/scripts.pory"
	.string "You press the button$"

EmberDunes_1_EventScript_SecretButton1_Text_2:
# 54 "data/maps/EmberDunes_2/scripts.pory"
	.string "Probably the smart choice.$"

EmberDunes_1_EventScript_SecretButton1_Text_3:
# 58 "data/maps/EmberDunes_2/scripts.pory"
	.string "I've already pressed this button. I\n"
	.string "wonder why I did that.$"

Conor_Intro::
# 84 "data/maps/EmberDunes_2/scripts.pory"
	.string "I hope your ready because I've been\n"
	.string "training recently$"

Conor_Outro::
# 88 "data/maps/EmberDunes_2/scripts.pory"
	.string "Wow. I guess I need to get back to\n"
	.string "training$"

Conor_PostBattle::
# 92 "data/maps/EmberDunes_2/scripts.pory"
	.string "This is an amazing place to train.$"

DesertManiac_Intro::
# 96 "data/maps/EmberDunes_2/scripts.pory"
	.string "I hope your ready because I've been\n"
	.string "training recently$"

DesertManiac_Outro::
# 100 "data/maps/EmberDunes_2/scripts.pory"
	.string "Wow. I guess I need to get back to\n"
	.string "training$"

DesertManiac_PostBattle::
# 104 "data/maps/EmberDunes_2/scripts.pory"
	.string "This is an amazing place to train.$"

Jordan_Intro::
# 108 "data/maps/EmberDunes_2/scripts.pory"
	.string "Well done for making it this far, but now\n"
	.string "your time ends$"

Jordan_Outro::
# 112 "data/maps/EmberDunes_2/scripts.pory"
	.string "Seens you've bested me. Well done!$"

Jordan_PostBattle::
# 116 "data/maps/EmberDunes_2/scripts.pory"
	.string "I'm going to follow the footsteps of a\n"
	.string "legendary trainer and become the very\l"
	.string "best$"

Charr_Intro::
# 120 "data/maps/EmberDunes_2/scripts.pory"
	.string "Jordan is unstoppable, he trains so\n"
	.string "hard to be the best$"

Charr_Outro::
# 124 "data/maps/EmberDunes_2/scripts.pory"
	.string "I didn't think he could lose!$"

Charr_PostBattle::
# 128 "data/maps/EmberDunes_2/scripts.pory"
	.string "Jordan is going to keep training and we\n"
	.string "will beat you next time we see you.$"

JordanNotEnoughMons::
# 132 "data/maps/EmberDunes_2/scripts.pory"
	.string "Shame you don't have enough Pokémon$"

FossilBoy_Intro::
# 136 "data/maps/EmberDunes_2/scripts.pory"
	.string "This is a great place to find ancient\n"
	.string "fossils.$"

FossilBoy_Outro::
# 140 "data/maps/EmberDunes_2/scripts.pory"
	.string "They should be the strongest Pokemon.$"

FossilBoy_Postbattle::
# 144 "data/maps/EmberDunes_2/scripts.pory"
	.string "I'm taking these south to the port as\n"
	.string "their is a scientist who can revive\l"
	.string "them.$"
