MauvilleCity_MapScripts::
# 2 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
	return


ThugCity_Pyukumuku_Clean_Up_1::
# 8 "data/maps/MauvilleCity/scripts.pory"
	lock
# 9 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_Pyukumuku_Clean_Up_1_Text_0
# 10 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_Pyukumuku_Clean_Up_1_Text_1
# 12 "data/maps/MauvilleCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 13 "data/maps/MauvilleCity/scripts.pory"
	removeobject 1
# 14 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_CLEANED_UP_THUGCITY_PYUKUMUKU_1
# 15 "data/maps/MauvilleCity/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 16 "data/maps/MauvilleCity/scripts.pory"
	release
	return


ThugCity_Arrival_Trigger::
# 20 "data/maps/MauvilleCity/scripts.pory"
	lock
# 21 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_Arrival_Trigger_Text_0
# 22 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThugCity_Player_Surprised
# 23 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 24 "data/maps/MauvilleCity/scripts.pory"
	applymovement 2, Movement_Thug_On_Arrival
# 25 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 2
# 26 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_Arrival_Trigger_Text_1, MSGBOX_YESNO
# 27 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ThugCity_Arrival_Trigger_2
ThugCity_Arrival_Trigger_1:
# 34 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ThugCity_Arrival_Trigger_5
ThugCity_Arrival_Trigger_4:
# 40 "data/maps/MauvilleCity/scripts.pory"
	release
	return

ThugCity_Arrival_Trigger_2:
# 28 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThugCity_Player_LeavingTown
# 29 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 30 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_Arrival_Trigger_Text_2
# 31 "data/maps/MauvilleCity/scripts.pory"
	applymovement 2, Movement_ThugCity_Top_Leaving
# 32 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 2
	goto ThugCity_Arrival_Trigger_1

ThugCity_Arrival_Trigger_5:
# 35 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_Arrival_Trigger_Text_3
# 36 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_Arrival_Trigger_Text_4
# 37 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ENTRANCE_THUG, Thug_Entrance_Beaten
# 38 "data/maps/MauvilleCity/scripts.pory"
	call ThugCity_FirstGuard_Beaten
	goto ThugCity_Arrival_Trigger_4


ThugCity_FirstGuard_Beaten::
# 44 "data/maps/MauvilleCity/scripts.pory"
	applymovement 2, Movement_Thug_1_Beaten
# 45 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 2
# 46 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_FirstGuard_Beaten_Text_0
# 47 "data/maps/MauvilleCity/scripts.pory"
	applymovement 3, Movement_Thug_On_Arrival_2
# 48 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 3
# 49 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_FirstGuard_Beaten_Text_1
# 50 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ENTRANCE_THUG_SECOND, Thug_Entrance_Second_Beaten
# 51 "data/maps/MauvilleCity/scripts.pory"
	call ThugCity_SecondGuard_Beaten
	return


ThugCity_SecondGuard_Beaten::
# 56 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_SecondGuard_Beaten_Text_0
# 57 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_SecondGuard_Beaten_Text_1
# 58 "data/maps/MauvilleCity/scripts.pory"
	applymovement 2, Movement_ThugCity_Top_Leaving
# 59 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 2
# 60 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_SecondGuard_Beaten_Text_2
# 61 "data/maps/MauvilleCity/scripts.pory"
	applymovement 3, Movement_ThugCity_Top_Leaving
# 62 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 3
# 63 "data/maps/MauvilleCity/scripts.pory"
	removeobject 2
# 64 "data/maps/MauvilleCity/scripts.pory"
	removeobject 3
# 65 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_THUG_ENTRANCE_BEATEN
# 66 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_THUG_TOWN_STATE, 1
# 67 "data/maps/MauvilleCity/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_THUG_TOWN
# 68 "data/maps/MauvilleCity/scripts.pory"
	release
	return


ThugCity_PortEntrance::
# 72 "data/maps/MauvilleCity/scripts.pory"
	lock
# 73 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_PortEntrance_Text_0
# 74 "data/maps/MauvilleCity/scripts.pory"
	addobject 9
# 75 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_PortEntrance_Text_1
# 76 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_single TRAINERTHUG_PORT_ENTRANCE, Thug_PortDoor_Intro, Thug_PortDoor_Outro, ThugCity_PortEntrance_Beaten
# 77 "data/maps/MauvilleCity/scripts.pory"
	release
	return


ThugCity_PortEntrance_Beaten::
# 81 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_PortEntrance_Beaten_Text_0
# 82 "data/maps/MauvilleCity/scripts.pory"
	removeobject 9
# 83 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_THUG_TOWN_STATE, 2
# 84 "data/maps/MauvilleCity/scripts.pory"
	release
	return


ThugCity_RandomThug::
# 88 "data/maps/MauvilleCity/scripts.pory"
	lock
# 89 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_RandomThug_Text_0
# 90 "data/maps/MauvilleCity/scripts.pory"
	release
	return


ThugCity_RandomThug2::
# 94 "data/maps/MauvilleCity/scripts.pory"
	lock
# 95 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_RandomThug2_Text_0
# 96 "data/maps/MauvilleCity/scripts.pory"
	release
	return


ThugCity_Locked::
# 100 "data/maps/MauvilleCity/scripts.pory"
	lock
# 101 "data/maps/MauvilleCity/scripts.pory"
	msgbox ThugCity_Locked_Text_0
# 102 "data/maps/MauvilleCity/scripts.pory"
	release
	return


# 106 "data/maps/MauvilleCity/scripts.pory"
Movement_ThugCity_Player_Surprised:
# 107 "data/maps/MauvilleCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 110 "data/maps/MauvilleCity/scripts.pory"
Movement_Thug_On_Arrival:
# 111 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 112 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 113 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 114 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 115 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 116 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 117 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 118 "data/maps/MauvilleCity/scripts.pory"
	face_down
	step_end

# 121 "data/maps/MauvilleCity/scripts.pory"
Movement_Thug_On_Arrival_2:
# 122 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 123 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 124 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 125 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 126 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 127 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 128 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 129 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 132 "data/maps/MauvilleCity/scripts.pory"
Movement_Thug_1_Beaten:
# 133 "data/maps/MauvilleCity/scripts.pory"
	jump_up
# 134 "data/maps/MauvilleCity/scripts.pory"
	face_down
	step_end

# 137 "data/maps/MauvilleCity/scripts.pory"
Movement_ThugCity_Player_LeavingTown:
# 138 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 139 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/MauvilleCity/scripts.pory"
Movement_ThugCity_Top_Leaving:
# 144 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 145 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 146 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 147 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 148 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 149 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_right
	step_end

ThugCity_Pyukumuku_Clean_Up_1_Text_0:
# 9 "data/maps/MauvilleCity/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

ThugCity_Pyukumuku_Clean_Up_1_Text_1:
# 11 "data/maps/MauvilleCity/scripts.pory"
	.string "SPLASH$"

ThugCity_Arrival_Trigger_Text_0:
# 21 "data/maps/MauvilleCity/scripts.pory"
	.string "Hey! What do you think you're doing!$"

ThugCity_Arrival_Trigger_Text_1:
# 26 "data/maps/MauvilleCity/scripts.pory"
	.string "A weakling like you can't come this way,\n"
	.string "turn back and leave!$"

ThugCity_Arrival_Trigger_Text_2:
# 30 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it run away little kid!$"

ThugCity_Arrival_Trigger_Text_3:
# 35 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh really? Big kid aye?$"

ThugCity_Arrival_Trigger_Text_4:
# 36 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine, let me show you your place!$"

ThugCity_FirstGuard_Beaten_Text_0:
# 46 "data/maps/MauvilleCity/scripts.pory"
	.string "Since when were kids so strong?$"

ThugCity_FirstGuard_Beaten_Text_1:
# 49 "data/maps/MauvilleCity/scripts.pory"
	.string "Tony you're so useless, can't even get\n"
	.string "rid of a little kid$"

ThugCity_SecondGuard_Beaten_Text_0:
# 56 "data/maps/MauvilleCity/scripts.pory"
	.string "I can't believe this!$"

ThugCity_SecondGuard_Beaten_Text_1:
# 57 "data/maps/MauvilleCity/scripts.pory"
	.string "This is bad, i'm going to get the others!$"

ThugCity_SecondGuard_Beaten_Text_2:
# 60 "data/maps/MauvilleCity/scripts.pory"
	.string "You're in for it now, you've got no\n"
	.string "chance against the big guys!$"

ThugCity_PortEntrance_Text_0:
# 73 "data/maps/MauvilleCity/scripts.pory"
	.string "So you're the punk causing all this\n"
	.string "commotion!$"

ThugCity_PortEntrance_Text_1:
# 75 "data/maps/MauvilleCity/scripts.pory"
	.string "We've got important work we are doing in\n"
	.string "here and you're just interupting the\l"
	.string "boss.$"

ThugCity_PortEntrance_Beaten_Text_0:
# 81 "data/maps/MauvilleCity/scripts.pory"
	.string "You can try to keep this up but our\n"
	.string "boss is much more powerful than us,\l"
	.string "you're not going to have a chance$"

ThugCity_RandomThug_Text_0:
# 89 "data/maps/MauvilleCity/scripts.pory"
	.string "The lady in this house is rich, when my\n"
	.string "buddies get here we are going to take\l"
	.string "everything from her!$"

ThugCity_RandomThug2_Text_0:
# 95 "data/maps/MauvilleCity/scripts.pory"
	.string "This town is full of total dweebs!$"

ThugCity_Locked_Text_0:
# 101 "data/maps/MauvilleCity/scripts.pory"
	.string "The door is locked$"

Thug_Entrance_Beaten::
# 154 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh ho ho, you're stronger than you look.$"

Thug_Entrance_Second_Beaten::
# 158 "data/maps/MauvilleCity/scripts.pory"
	.string "How is this possible$"

Thug_PortDoor_Intro::
# 162 "data/maps/MauvilleCity/scripts.pory"
	.string "Let's send you back so we can get back\n"
	.string "to work$"

Thug_PortDoor_Outro::
# 166 "data/maps/MauvilleCity/scripts.pory"
	.string "Well that really going to peeve him off.$"
