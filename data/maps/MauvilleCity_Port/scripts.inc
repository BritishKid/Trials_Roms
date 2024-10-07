MauvilleCity_Port_MapScripts::
	.byte 0


Sailor_ThugTown::
# 4 "data/maps/MauvilleCity_Port/scripts.pory"
	msgbox Sailor_ThugTown_Text_0, MSGBOX_YESNO
# 5 "data/maps/MauvilleCity_Port/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sailor_ThugTown_1
	return

Sailor_ThugTown_1:
# 6 "data/maps/MauvilleCity_Port/scripts.pory"
	warp MAP_CORAL_PORT_PORT, 8, 11
	return


ThugCity_Finale::
# 11 "data/maps/MauvilleCity_Port/scripts.pory"
	trainerbattle_single THUG_PORT_COMMANDER, Thug_Port_Commander_Intro, Thug_Port_Commander_Outro, Thug_Port_Commander_Beaten
	return


Thug_Port_Commander_Beaten::
# 15 "data/maps/MauvilleCity_Port/scripts.pory"
	msgbox Thug_Port_Commander_Beaten_Text_0
# 16 "data/maps/MauvilleCity_Port/scripts.pory"
	msgbox Thug_Port_Commander_Beaten_Text_1
# 17 "data/maps/MauvilleCity_Port/scripts.pory"
	applymovement 3, Movement_ThugBoss_HeadingDown_Port
# 18 "data/maps/MauvilleCity_Port/scripts.pory"
	waitmovement 3
# 19 "data/maps/MauvilleCity_Port/scripts.pory"
	msgbox Thug_Port_Commander_Beaten_Text_2
# 20 "data/maps/MauvilleCity_Port/scripts.pory"
	msgbox Thug_Port_Commander_Beaten_Text_3
# 21 "data/maps/MauvilleCity_Port/scripts.pory"
	applymovement 4, Movement_ThugOntoBoat_Port
# 22 "data/maps/MauvilleCity_Port/scripts.pory"
	waitmovement 4
# 23 "data/maps/MauvilleCity_Port/scripts.pory"
	removeobject 4
# 24 "data/maps/MauvilleCity_Port/scripts.pory"
	msgbox Thug_Port_Commander_Beaten_Text_4
# 25 "data/maps/MauvilleCity_Port/scripts.pory"
	trainerbattle_single THUG_PORT_BOSS, Thug_Port_Boss_Intro, Thug_Port_Boss_Outro, Thug_Port_Boss_Beaten
	return


Thug_Port_Boss_Beaten::
# 29 "data/maps/MauvilleCity_Port/scripts.pory"
	msgbox Thug_Port_Boss_Beaten_Text_0
# 30 "data/maps/MauvilleCity_Port/scripts.pory"
	msgbox Thug_Port_Boss_Beaten_Text_1
# 31 "data/maps/MauvilleCity_Port/scripts.pory"
	applymovement 3, Movement_ThugBoss_OntoBoat_Port
# 32 "data/maps/MauvilleCity_Port/scripts.pory"
	waitmovement 3
# 33 "data/maps/MauvilleCity_Port/scripts.pory"
	removeobject 4
# 34 "data/maps/MauvilleCity_Port/scripts.pory"
	applymovement 2, Movement_Boat_Sails_Away_ThugPort
# 35 "data/maps/MauvilleCity_Port/scripts.pory"
	waitmovement 2
# 36 "data/maps/MauvilleCity_Port/scripts.pory"
	removeobject 2
# 37 "data/maps/MauvilleCity_Port/scripts.pory"
	setvar VAR_THUG_TOWN_STATE, 3
# 38 "data/maps/MauvilleCity_Port/scripts.pory"
	setflag FLAG_COAST_TOWN_SAVED
# 39 "data/maps/MauvilleCity_Port/scripts.pory"
	clearflag FLAG_HIDE_THUG_TOWN
# 40 "data/maps/MauvilleCity_Port/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_THUG_TOWN
	return


EventScript_ThugPort_ItemBall_TmThief::
# 44 "data/maps/MauvilleCity_Port/scripts.pory"
	finditem ITEM_TM46
	return


# 49 "data/maps/MauvilleCity_Port/scripts.pory"
Movement_ThugBoss_HeadingDown_Port:
# 50 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_down
# 51 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_down
	step_end

# 54 "data/maps/MauvilleCity_Port/scripts.pory"
Movement_ThugOntoBoat_Port:
# 55 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_down
# 56 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_right
# 57 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_right
# 58 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_right
# 59 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/MauvilleCity_Port/scripts.pory"
Movement_ThugBoss_OntoBoat_Port:
# 63 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_down
# 64 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_down
# 65 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_down
# 66 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_down
# 67 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_right
# 68 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_right
# 69 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_right
# 70 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_right
# 71 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_up
	step_end

# 74 "data/maps/MauvilleCity_Port/scripts.pory"
Movement_Boat_Sails_Away_ThugPort:
# 75 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_faster_right
# 76 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_faster_right
# 77 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_faster_right
# 78 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_faster_right
# 79 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_faster_right
# 80 "data/maps/MauvilleCity_Port/scripts.pory"
	walk_faster_right
	step_end

Sailor_ThugTown_Text_0:
# 4 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "Would you like to travel to Island 1?$"

Thug_Port_Commander_Beaten_Text_0:
# 15 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "I can't believe you beat me. No matter I\n"
	.string "think we are ready to go.$"

Thug_Port_Commander_Beaten_Text_1:
# 16 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "That's right Tommy$"

Thug_Port_Commander_Beaten_Text_2:
# 19 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "We are done here, gather everyone onto\n"
	.string "the boat we are taking it with us.$"

Thug_Port_Commander_Beaten_Text_3:
# 20 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "Yes boss.$"

Thug_Port_Commander_Beaten_Text_4:
# 24 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "As for you let's stop you from getting\n"
	.string "in our way.$"

Thug_Port_Boss_Beaten_Text_0:
# 29 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "Even with mega evolution I got beaten\n"
	.string "by some punk kid.$"

Thug_Port_Boss_Beaten_Text_1:
# 30 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "Let's just get out of here, we got the\n"
	.string "plans!$"

Thug_Port_Commander_Intro::
# 85 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "Stop there punk, you're not going any\n"
	.string "closer$"

Thug_Port_Commander_Outro::
# 89 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "It doesn't matter I managed to delay\n"
	.string "you long enough.$"

Thug_Port_Boss_Intro::
# 93 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "You might have beaten the rest of them,\n"
	.string "but let me show you how strong real\l"
	.string "trainers are$"

Thug_Port_Boss_Outro::
# 97 "data/maps/MauvilleCity_Port/scripts.pory"
	.string "But...how?$"
