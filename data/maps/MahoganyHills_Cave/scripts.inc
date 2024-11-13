MahoganyHills_Cave_MapScripts::
	.byte 0


MahoganyHills_EventScript_InsectPlate::
# 6 "data/maps/MahoganyHills_Cave/scripts.pory"
	lockall
# 7 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_0
# 8 "data/maps/MahoganyHills_Cave/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, MahoganyHills_EventScript_InsectPlate_3
MahoganyHills_EventScript_InsectPlate_1:
# 20 "data/maps/MahoganyHills_Cave/scripts.pory"
	compare VAR_PLATEQUEST_STATE, 2
	goto_if_eq MahoganyHills_EventScript_InsectPlate_8
MahoganyHills_EventScript_InsectPlate_6:
# 23 "data/maps/MahoganyHills_Cave/scripts.pory"
	compare VAR_PLATEQUEST_STATE, 1
	goto_if_eq MahoganyHills_EventScript_InsectPlate_14
MahoganyHills_EventScript_InsectPlate_13:
# 45 "data/maps/MahoganyHills_Cave/scripts.pory"
	releaseall
	return

MahoganyHills_EventScript_InsectPlate_2:
# 9 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_1, MSGBOX_YESNO
# 10 "data/maps/MahoganyHills_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_EventScript_InsectPlate_11
	goto MahoganyHills_EventScript_InsectPlate_1

MahoganyHills_EventScript_InsectPlate_3:
# 8 "data/maps/MahoganyHills_Cave/scripts.pory"
	goto_if_unset FLAG_INSECT_PLATE_FOUND, MahoganyHills_EventScript_InsectPlate_2
	goto MahoganyHills_EventScript_InsectPlate_1

MahoganyHills_EventScript_InsectPlate_7:
# 21 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_2
	goto MahoganyHills_EventScript_InsectPlate_6

MahoganyHills_EventScript_InsectPlate_8:
# 20 "data/maps/MahoganyHills_Cave/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, MahoganyHills_EventScript_InsectPlate_7
	goto MahoganyHills_EventScript_InsectPlate_6

MahoganyHills_EventScript_InsectPlate_11:
# 11 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 12 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 13 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 14 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_0x8007, 0
# 15 "data/maps/MahoganyHills_Cave/scripts.pory"
	special ShakeCamera
# 16 "data/maps/MahoganyHills_Cave/scripts.pory"
	fadescreen FADE_TO_BLACK
	goto MahoganyHills_EventScript_InsectPlate_1

MahoganyHills_EventScript_InsectPlate_14:
# 24 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_3
# 26 "data/maps/MahoganyHills_Cave/scripts.pory"
	setobjectxy 2, 20, 9
# 27 "data/maps/MahoganyHills_Cave/scripts.pory"
	applymovement 2, Movement_AlexToPlayer_MHC
# 28 "data/maps/MahoganyHills_Cave/scripts.pory"
	waitmovement 2
# 29 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_4
# 30 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_5
# 31 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_6
# 32 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_7
# 33 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_8
# 34 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_9
# 35 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_10
# 37 "data/maps/MahoganyHills_Cave/scripts.pory"
	giveitem ITEM_HISTORY_BOOK
# 40 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_11
# 41 "data/maps/MahoganyHills_Cave/scripts.pory"
	applymovement 2, Movement_AlexLeavesPlayer_MHC
# 42 "data/maps/MahoganyHills_Cave/scripts.pory"
	removeobject 2
# 43 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_PLATEQUEST_STATE, 2
	goto MahoganyHills_EventScript_InsectPlate_13


# 50 "data/maps/MahoganyHills_Cave/scripts.pory"
Movement_AlexToPlayer_MHC:
# 51 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 52 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 53 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 54 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 55 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 56 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 57 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
	step_end

# 60 "data/maps/MahoganyHills_Cave/scripts.pory"
Movement_AlexLeavesPlayer_MHC:
# 61 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 62 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 63 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 64 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 65 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 66 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 67 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 68 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 69 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
	step_end

MahoganyHills_EventScript_InsectPlate_Text_0:
# 7 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "There is a carving of many small bug like\n"
	.string "Pokémon crawling over a plate.$"

MahoganyHills_EventScript_InsectPlate_Text_1:
# 9 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "Do you want to put the LEGENDS PLATE\n"
	.string "into the slot?$"

MahoganyHills_EventScript_InsectPlate_Text_2:
# 21 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "There seems to be a slot in the wall for\n"
	.string "something. Maybe it's that Key Alex\l"
	.string "spoke about.$"

MahoganyHills_EventScript_InsectPlate_Text_3:
# 24 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "You listened to me then.$"

MahoganyHills_EventScript_InsectPlate_Text_4:
# 29 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "Hello again! This is that carving I\n"
	.string "mentioned to you.$"

MahoganyHills_EventScript_InsectPlate_Text_5:
# 30 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "It looks to be carved in the same way as\n"
	.string "the one in Platefall, it also has a hole\l"
	.string "in it.$"

MahoganyHills_EventScript_InsectPlate_Text_6:
# 31 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "People believe the plates are locked\n"
	.string "and hidden behind carvings like these,\l"
	.string "but how do you open these doorsways\l"
	.string "without the plates in the first place?$"

MahoganyHills_EventScript_InsectPlate_Text_7:
# 32 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "It is a confusing conumdrun.$"

MahoganyHills_EventScript_InsectPlate_Text_8:
# 33 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "I believe there must be a 19th plate\n"
	.string "not mentioned, one that acts like a key,\l"
	.string "although I've struggled to find any\l"
	.string "proof of it existing yet.$"

MahoganyHills_EventScript_InsectPlate_Text_9:
# 34 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "That is what we must search for\n"
	.string "{PLAYER}, the key!$"

MahoganyHills_EventScript_InsectPlate_Text_10:
# 35 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "Here take this.$"

MahoganyHills_EventScript_InsectPlate_Text_11:
# 40 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "You can use this to translate any\n"
	.string "ancient text you stumble upon.$"
