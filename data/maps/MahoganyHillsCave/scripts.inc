MahoganyHillsCave_MapScripts::
	.byte 0


MahoganyHillsCave_Insect_Plate_Script::
	lock
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_0
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, MahoganyHillsCave_Insect_Plate_Script_3
MahoganyHillsCave_Insect_Plate_Script_1:
	goto_if_set FLAG_ALEX_INSECT_PLATE, MahoganyHillsCave_Insect_Plate_Script_8
MahoganyHillsCave_Insect_Plate_Script_6:
	goto_if_set FLAG_ALEX_MET, MahoganyHillsCave_Insect_Plate_Script_15
MahoganyHillsCave_Insect_Plate_Script_13:
	release
	return

MahoganyHillsCave_Insect_Plate_Script_2:
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHillsCave_Insect_Plate_Script_11
	goto MahoganyHillsCave_Insect_Plate_Script_1

MahoganyHillsCave_Insect_Plate_Script_3:
	goto_if_unset FLAG_INSECT_PLATE_FOUND, MahoganyHillsCave_Insect_Plate_Script_2
	goto MahoganyHillsCave_Insect_Plate_Script_1

MahoganyHillsCave_Insect_Plate_Script_7:
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_2
	goto MahoganyHillsCave_Insect_Plate_Script_6

MahoganyHillsCave_Insect_Plate_Script_8:
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, MahoganyHillsCave_Insect_Plate_Script_7
	goto MahoganyHillsCave_Insect_Plate_Script_6

MahoganyHillsCave_Insect_Plate_Script_11:
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 0
	special ShakeCamera
	fadescreen FADE_TO_BLACK
	warp MAP_LOST_PLATES, 6, 12
	goto MahoganyHillsCave_Insect_Plate_Script_1

MahoganyHillsCave_Insect_Plate_Script_14:
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThugCity_Player_Surprised
	waitmovement OBJ_EVENT_ID_PLAYER
	addobject 3
	applymovement 3, Movement_MHCave_AlexArrives
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_4
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_5
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_6
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_7
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_8
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_9
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_10
	giveitem ITEM_HISTORY_BOOK
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_11
	playfanfare MUS_OBTAIN_ITEM
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_12
	applymovement 3, Movement_MHCave_AlexLeaves
	waitmovement 3
	removeobject 3
	setflag FLAG_ALEX_INSECT_PLATE
	setvar VAR_PLATE_QUEST_STATE, 2
	goto MahoganyHillsCave_Insect_Plate_Script_13

MahoganyHillsCave_Insect_Plate_Script_15:
	goto_if_unset FLAG_ALEX_INSECT_PLATE, MahoganyHillsCave_Insect_Plate_Script_14
	goto MahoganyHillsCave_Insect_Plate_Script_13


Movement_MHCave_AlexArrives:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_MHCave_AlexLeaves:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MahoganyHillsCave_Insect_Plate_Script_Text_0:
	.string "There is a carving of many small bug like\n"
	.string "Pokémon crawling over a plate.$"

MahoganyHillsCave_Insect_Plate_Script_Text_1:
	.string "Do you want to put the LEGENDS PLATE in\n"
	.string "the slot?$"

MahoganyHillsCave_Insect_Plate_Script_Text_2:
	.string "There seems to be a slot for something.\n"
	.string "Maybe it's the Plate Key which Alex\l"
	.string "mentioned$"

MahoganyHillsCave_Insect_Plate_Script_Text_3:
	.string "You listened to me then$"

MahoganyHillsCave_Insect_Plate_Script_Text_4:
	.string "Hello again! This is that carving I\n"
	.string "mentioned to you.$"

MahoganyHillsCave_Insect_Plate_Script_Text_5:
	.string "It looks to be carved in the same way as\n"
	.string "the one in Platefall, it also has a hole\l"
	.string "in it.$"

MahoganyHillsCave_Insect_Plate_Script_Text_6:
	.string "People believe the plates are locked\n"
	.string "and hidden behind carvings like these,\l"
	.string "but how do you open these doorsways\l"
	.string "without the plates in the first place?$"

MahoganyHillsCave_Insect_Plate_Script_Text_7:
	.string "It is a confusing conumdrun.$"

MahoganyHillsCave_Insect_Plate_Script_Text_8:
	.string "I believe there must be a 19th plate\n"
	.string "not mentioned, one that acts like a key,\l"
	.string "although I've struggled to find any\l"
	.string "proof of it existing yet.$"

MahoganyHillsCave_Insect_Plate_Script_Text_9:
	.string "That is what we must search for\n"
	.string "{PLAYER}, the key!$"

MahoganyHillsCave_Insect_Plate_Script_Text_10:
	.string "Here take this.$"

MahoganyHillsCave_Insect_Plate_Script_Text_11:
	.string "Alex gave you a Translation Book$"

MahoganyHillsCave_Insect_Plate_Script_Text_12:
	.string "You can use this to translate any\n"
	.string "ancient text you stumble upon.$"
