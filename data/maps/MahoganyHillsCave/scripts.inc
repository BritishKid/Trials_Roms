MahoganyHillsCave_MapScripts::
	.byte 0


MahoganyHillsCave_Insect_Plate_Script::
# 4 "data/maps/MahoganyHillsCave/scripts.pory"
	lock
# 5 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_0
# 6 "data/maps/MahoganyHillsCave/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, MahoganyHillsCave_Insect_Plate_Script_3
MahoganyHillsCave_Insect_Plate_Script_1:
# 18 "data/maps/MahoganyHillsCave/scripts.pory"
	goto_if_set FLAG_ALEX_INSECT_PLATE, MahoganyHillsCave_Insect_Plate_Script_8
MahoganyHillsCave_Insect_Plate_Script_6:
# 21 "data/maps/MahoganyHillsCave/scripts.pory"
	goto_if_set FLAG_ALEX_MET, MahoganyHillsCave_Insect_Plate_Script_15
MahoganyHillsCave_Insect_Plate_Script_13:
# 44 "data/maps/MahoganyHillsCave/scripts.pory"
	release
	return

MahoganyHillsCave_Insect_Plate_Script_2:
# 7 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_1, MSGBOX_YESNO
# 8 "data/maps/MahoganyHillsCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHillsCave_Insect_Plate_Script_11
	goto MahoganyHillsCave_Insect_Plate_Script_1

MahoganyHillsCave_Insect_Plate_Script_3:
# 6 "data/maps/MahoganyHillsCave/scripts.pory"
	goto_if_unset FLAG_INSECT_PLATE_FOUND, MahoganyHillsCave_Insect_Plate_Script_2
	goto MahoganyHillsCave_Insect_Plate_Script_1

MahoganyHillsCave_Insect_Plate_Script_7:
# 19 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_2
	goto MahoganyHillsCave_Insect_Plate_Script_6

MahoganyHillsCave_Insect_Plate_Script_8:
# 18 "data/maps/MahoganyHillsCave/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, MahoganyHillsCave_Insect_Plate_Script_7
	goto MahoganyHillsCave_Insect_Plate_Script_6

MahoganyHillsCave_Insect_Plate_Script_11:
# 9 "data/maps/MahoganyHillsCave/scripts.pory"
	setvar VAR_0x8004, 1
# 10 "data/maps/MahoganyHillsCave/scripts.pory"
	setvar VAR_0x8005, 1
# 11 "data/maps/MahoganyHillsCave/scripts.pory"
	setvar VAR_0x8006, 8
# 12 "data/maps/MahoganyHillsCave/scripts.pory"
	setvar VAR_0x8007, 0
# 13 "data/maps/MahoganyHillsCave/scripts.pory"
	special ShakeCamera
# 14 "data/maps/MahoganyHillsCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/MahoganyHillsCave/scripts.pory"
	warp MAP_LOST_PLATES, 6, 12
	goto MahoganyHillsCave_Insect_Plate_Script_1

MahoganyHillsCave_Insect_Plate_Script_14:
# 22 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_3
# 23 "data/maps/MahoganyHillsCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThugCity_Player_Surprised
# 24 "data/maps/MahoganyHillsCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 25 "data/maps/MahoganyHillsCave/scripts.pory"
	addobject 3
# 26 "data/maps/MahoganyHillsCave/scripts.pory"
	applymovement 3, Movement_MHCave_AlexArrives
# 27 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_4
# 28 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_5
# 29 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_6
# 30 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_7
# 31 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_8
# 32 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_9
# 33 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_10
# 34 "data/maps/MahoganyHillsCave/scripts.pory"
	giveitem ITEM_HISTORY_BOOK
# 35 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_11
# 36 "data/maps/MahoganyHillsCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 37 "data/maps/MahoganyHillsCave/scripts.pory"
	msgbox MahoganyHillsCave_Insect_Plate_Script_Text_12
# 38 "data/maps/MahoganyHillsCave/scripts.pory"
	applymovement 3, Movement_MHCave_AlexLeaves
# 39 "data/maps/MahoganyHillsCave/scripts.pory"
	waitmovement 3
# 40 "data/maps/MahoganyHillsCave/scripts.pory"
	removeobject 3
# 41 "data/maps/MahoganyHillsCave/scripts.pory"
	setflag FLAG_ALEX_INSECT_PLATE
# 42 "data/maps/MahoganyHillsCave/scripts.pory"
	setvar VAR_PLATE_QUEST_STATE, 2
	goto MahoganyHillsCave_Insect_Plate_Script_13

MahoganyHillsCave_Insect_Plate_Script_15:
# 21 "data/maps/MahoganyHillsCave/scripts.pory"
	goto_if_unset FLAG_ALEX_INSECT_PLATE, MahoganyHillsCave_Insect_Plate_Script_14
	goto MahoganyHillsCave_Insect_Plate_Script_13


# 48 "data/maps/MahoganyHillsCave/scripts.pory"
Movement_MHCave_AlexArrives:
# 49 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_left
# 50 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_left
# 51 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_left
# 52 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_left
# 53 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_left
	step_end

# 56 "data/maps/MahoganyHillsCave/scripts.pory"
Movement_MHCave_AlexLeaves:
# 57 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_down
# 58 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_right
# 59 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_right
# 60 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_right
# 61 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_right
# 62 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_right
# 63 "data/maps/MahoganyHillsCave/scripts.pory"
	walk_right
	step_end

MahoganyHillsCave_Insect_Plate_Script_Text_0:
# 5 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "There is a carving of many small bug like\n"
	.string "Pokémon crawling over a plate.$"

MahoganyHillsCave_Insect_Plate_Script_Text_1:
# 7 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "Do you want to put the LEGENDS PLATE in\n"
	.string "the slot?$"

MahoganyHillsCave_Insect_Plate_Script_Text_2:
# 19 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "There seems to be a slot for something.\n"
	.string "Maybe it's the Plate Key which Alex\l"
	.string "mentioned$"

MahoganyHillsCave_Insect_Plate_Script_Text_3:
# 22 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "You listened to me then$"

MahoganyHillsCave_Insect_Plate_Script_Text_4:
# 27 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "Hello again! This is that carving I\n"
	.string "mentioned to you.$"

MahoganyHillsCave_Insect_Plate_Script_Text_5:
# 28 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "It looks to be carved in the same way as\n"
	.string "the one in Platefall, it also has a hole\l"
	.string "in it.$"

MahoganyHillsCave_Insect_Plate_Script_Text_6:
# 29 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "People believe the plates are locked\n"
	.string "and hidden behind carvings like these,\l"
	.string "but how do you open these doorsways\l"
	.string "without the plates in the first place?$"

MahoganyHillsCave_Insect_Plate_Script_Text_7:
# 30 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "It is a confusing conumdrun.$"

MahoganyHillsCave_Insect_Plate_Script_Text_8:
# 31 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "I believe there must be a 19th plate\n"
	.string "not mentioned, one that acts like a key,\l"
	.string "although I've struggled to find any\l"
	.string "proof of it existing yet.$"

MahoganyHillsCave_Insect_Plate_Script_Text_9:
# 32 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "That is what we must search for\n"
	.string "{PLAYER}, the key!$"

MahoganyHillsCave_Insect_Plate_Script_Text_10:
# 33 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "Here take this.$"

MahoganyHillsCave_Insect_Plate_Script_Text_11:
# 35 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "Alex gave you a Translation Book$"

MahoganyHillsCave_Insect_Plate_Script_Text_12:
# 37 "data/maps/MahoganyHillsCave/scripts.pory"
	.string "You can use this to translate any\n"
	.string "ancient text you stumble upon.$"
