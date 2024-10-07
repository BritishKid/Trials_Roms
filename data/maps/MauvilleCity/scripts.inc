MauvilleCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_MAUVILLE_CITY
	return


ThugCity_Pyukumuku_Clean_Up_1::
	lock
	msgbox ThugCity_Pyukumuku_Clean_Up_1_Text_0
	fadescreen FADE_TO_BLACK
	msgbox ThugCity_Pyukumuku_Clean_Up_1_Text_1
	fadescreen FADE_FROM_BLACK
	removeobject 1
	setflag FLAG_CLEANED_UP_THUGCITY_PYUKUMUKU_1
	call IncrementNumber_Pyukumukus_Saved
	release
	return


ThugCity_Arrival_Trigger::
	lock
	msgbox ThugCity_Arrival_Trigger_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThugCity_Player_Surprised
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 2, Movement_Thug_On_Arrival
	waitmovement 2
	msgbox ThugCity_Arrival_Trigger_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ThugCity_Arrival_Trigger_2
ThugCity_Arrival_Trigger_1:
	compare VAR_RESULT, NO
	goto_if_eq ThugCity_Arrival_Trigger_5
ThugCity_Arrival_Trigger_4:
	release
	return

ThugCity_Arrival_Trigger_2:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThugCity_Player_LeavingTown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox ThugCity_Arrival_Trigger_Text_2
	applymovement 2, Movement_ThugCity_Top_Leaving
	waitmovement 2
	goto ThugCity_Arrival_Trigger_1

ThugCity_Arrival_Trigger_5:
	msgbox ThugCity_Arrival_Trigger_Text_3
	msgbox ThugCity_Arrival_Trigger_Text_4
	trainerbattle_no_intro TRAINER_ENTRANCE_THUG, Thug_Entrance_Beaten
	call ThugCity_FirstGuard_Beaten
	goto ThugCity_Arrival_Trigger_4


ThugCity_FirstGuard_Beaten::
	applymovement 2, Movement_Thug_1_Beaten
	waitmovement 2
	msgbox ThugCity_FirstGuard_Beaten_Text_0
	applymovement 3, Movement_Thug_On_Arrival_2
	waitmovement 3
	msgbox ThugCity_FirstGuard_Beaten_Text_1
	trainerbattle_no_intro TRAINER_ENTRANCE_THUG_SECOND, Thug_Entrance_Second_Beaten
	call ThugCity_SecondGuard_Beaten
	return


ThugCity_SecondGuard_Beaten::
	msgbox ThugCity_SecondGuard_Beaten_Text_0
	msgbox ThugCity_SecondGuard_Beaten_Text_1
	applymovement 2, Movement_ThugCity_Top_Leaving
	waitmovement 2
	msgbox ThugCity_SecondGuard_Beaten_Text_2
	applymovement 3, Movement_ThugCity_Top_Leaving
	waitmovement 3
	removeobject 2
	removeobject 3
	setflag FLAG_THUG_ENTRANCE_BEATEN
	setvar VAR_THUG_TOWN_STATE, 1
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_THUG_TOWN
	release
	return


ThugCity_PortEntrance::
	lock
	msgbox ThugCity_PortEntrance_Text_0
	addobject 9
	msgbox ThugCity_PortEntrance_Text_1
	trainerbattle_single TRAINERTHUG_PORT_ENTRANCE, Thug_PortDoor_Intro, Thug_PortDoor_Outro, ThugCity_PortEntrance_Beaten
	release
	return


ThugCity_PortEntrance_Beaten::
	msgbox ThugCity_PortEntrance_Beaten_Text_0
	removeobject 9
	setvar VAR_THUG_TOWN_STATE, 2
	release
	return


ThugCity_RandomThug::
	lock
	msgbox ThugCity_RandomThug_Text_0
	release
	return


ThugCity_RandomThug2::
	lock
	msgbox ThugCity_RandomThug2_Text_0
	release
	return


ThugCity_Locked::
	lock
	msgbox ThugCity_Locked_Text_0
	release
	return


Movement_ThugCity_Player_Surprised:
	emote_exclamation_mark
	step_end

Movement_Thug_On_Arrival:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

Movement_Thug_On_Arrival_2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Thug_1_Beaten:
	jump_up
	face_down
	step_end

Movement_ThugCity_Player_LeavingTown:
	walk_down
	walk_down
	walk_down
	step_end

Movement_ThugCity_Top_Leaving:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

ThugCity_Pyukumuku_Clean_Up_1_Text_0:
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

ThugCity_Pyukumuku_Clean_Up_1_Text_1:
	.string "SPLASH$"

ThugCity_Arrival_Trigger_Text_0:
	.string "Hey! What do you think you're doing!$"

ThugCity_Arrival_Trigger_Text_1:
	.string "A weakling like you can't come this way,\n"
	.string "turn back and leave!$"

ThugCity_Arrival_Trigger_Text_2:
	.string "That's it run away little kid!$"

ThugCity_Arrival_Trigger_Text_3:
	.string "Oh really? Big kid aye?$"

ThugCity_Arrival_Trigger_Text_4:
	.string "Fine, let me show you your place!$"

ThugCity_FirstGuard_Beaten_Text_0:
	.string "Since when were kids so strong?$"

ThugCity_FirstGuard_Beaten_Text_1:
	.string "Tony you're so useless, can't even get\n"
	.string "rid of a little kid$"

ThugCity_SecondGuard_Beaten_Text_0:
	.string "I can't believe this!$"

ThugCity_SecondGuard_Beaten_Text_1:
	.string "This is bad, i'm going to get the others!$"

ThugCity_SecondGuard_Beaten_Text_2:
	.string "You're in for it now, you've got no\n"
	.string "chance against the big guys!$"

ThugCity_PortEntrance_Text_0:
	.string "So you're the punk causing all this\n"
	.string "commotion!$"

ThugCity_PortEntrance_Text_1:
	.string "We've got important work we are doing in\n"
	.string "here and you're just interupting the\l"
	.string "boss.$"

ThugCity_PortEntrance_Beaten_Text_0:
	.string "You can try to keep this up but our\n"
	.string "boss is much more powerful than us,\l"
	.string "you're not going to have a chance$"

ThugCity_RandomThug_Text_0:
	.string "The lady in this house is rich, when my\n"
	.string "buddies get here we are going to take\l"
	.string "everything from her!$"

ThugCity_RandomThug2_Text_0:
	.string "This town is full of total dweebs!$"

ThugCity_Locked_Text_0:
	.string "The door is locked$"

Thug_Entrance_Beaten::
	.string "Oh ho ho, you're stronger than you look.$"

Thug_Entrance_Second_Beaten::
	.string "How is this possible$"

Thug_PortDoor_Intro::
	.string "Let's send you back so we can get back\n"
	.string "to work$"

Thug_PortDoor_Outro::
	.string "Well that really going to peeve him off.$"
