MauvilleCity_Port_MapScripts::
	.byte 0


Sailor_ThugTown::
	msgbox Sailor_ThugTown_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Sailor_ThugTown_1
	return

Sailor_ThugTown_1:
	warp MAP_CORAL_PORT_PORT, 8, 11
	return


ThugCity_Finale::
	trainerbattle_single THUG_PORT_COMMANDER, Thug_Port_Commander_Intro, Thug_Port_Commander_Outro, Thug_Port_Commander_Beaten
	return


Thug_Port_Commander_Beaten::
	msgbox Thug_Port_Commander_Beaten_Text_0
	msgbox Thug_Port_Commander_Beaten_Text_1
	applymovement 3, Movement_ThugBoss_HeadingDown_Port
	waitmovement 3
	msgbox Thug_Port_Commander_Beaten_Text_2
	msgbox Thug_Port_Commander_Beaten_Text_3
	applymovement 4, Movement_ThugOntoBoat_Port
	waitmovement 4
	removeobject 4
	msgbox Thug_Port_Commander_Beaten_Text_4
	trainerbattle_single THUG_PORT_BOSS, Thug_Port_Boss_Intro, Thug_Port_Boss_Outro, Thug_Port_Boss_Beaten
	return


Thug_Port_Boss_Beaten::
	msgbox Thug_Port_Boss_Beaten_Text_0
	msgbox Thug_Port_Boss_Beaten_Text_1
	applymovement 3, Movement_ThugBoss_OntoBoat_Port
	waitmovement 3
	removeobject 4
	applymovement 2, Movement_Boat_Sails_Away_ThugPort
	waitmovement 2
	removeobject 2
	setvar VAR_THUG_TOWN_STATE, 3
	setflag FLAG_COAST_TOWN_SAVED
	clearflag FLAG_HIDE_THUG_TOWN
	return


EventScript_ThugPort_ItemBall_TmThief::
	finditem ITEM_TM46
	return


Movement_ThugBoss_HeadingDown_Port:
	walk_down
	walk_down
	step_end

Movement_ThugOntoBoat_Port:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Movement_ThugBoss_OntoBoat_Port:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Movement_Boat_Sails_Away_ThugPort:
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

Sailor_ThugTown_Text_0:
	.string "Would you like to travel to Island 1?$"

Thug_Port_Commander_Beaten_Text_0:
	.string "I can't believe you beat me. No matter I\n"
	.string "think we are ready to go.$"

Thug_Port_Commander_Beaten_Text_1:
	.string "That's right Tommy$"

Thug_Port_Commander_Beaten_Text_2:
	.string "We are done here, gather everyone onto\n"
	.string "the boat we are taking it with us.$"

Thug_Port_Commander_Beaten_Text_3:
	.string "Yes boss.$"

Thug_Port_Commander_Beaten_Text_4:
	.string "As for you let's stop you from getting\n"
	.string "in our way.$"

Thug_Port_Boss_Beaten_Text_0:
	.string "Even with mega evolution I got beaten\n"
	.string "by some punk kid.$"

Thug_Port_Boss_Beaten_Text_1:
	.string "Let's just get out of here, we got the\n"
	.string "plans!$"

Thug_Port_Commander_Intro::
	.string "Stop there punk, you're not going any\n"
	.string "closer$"

Thug_Port_Commander_Outro::
	.string "It doesn't matter I managed to delay\n"
	.string "you long enough.$"

Thug_Port_Boss_Intro::
	.string "You might have beaten the rest of them,\n"
	.string "but let me show you how strong real\l"
	.string "trainers are$"

Thug_Port_Boss_Outro::
	.string "But...how?$"
