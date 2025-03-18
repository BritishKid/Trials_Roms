MahoganyHills_Cave_MapScripts::
	.byte 0


MahoganyHills_EventScript_InsectPlate::
# 6 "data/maps/MahoganyHills_Cave/scripts.pory"
	lockall
# 7 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_0
# 8 "data/maps/MahoganyHills_Cave/scripts.pory"
	checkitem ITEM_INSECT_PLATE
# 9 "data/maps/MahoganyHills_Cave/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, MahoganyHills_EventScript_InsectPlate_3
MahoganyHills_EventScript_InsectPlate_1:
# 21 "data/maps/MahoganyHills_Cave/scripts.pory"
	compare VAR_PLATEQUEST_STATE, 2
	goto_if_eq MahoganyHills_EventScript_InsectPlate_8
MahoganyHills_EventScript_InsectPlate_6:
# 24 "data/maps/MahoganyHills_Cave/scripts.pory"
	compare VAR_PLATEQUEST_STATE, 1
	goto_if_eq MahoganyHills_EventScript_InsectPlate_14
MahoganyHills_EventScript_InsectPlate_13:
# 45 "data/maps/MahoganyHills_Cave/scripts.pory"
	releaseall
	return

MahoganyHills_EventScript_InsectPlate_2:
# 10 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_1, MSGBOX_YESNO
# 11 "data/maps/MahoganyHills_Cave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_EventScript_InsectPlate_11
	goto MahoganyHills_EventScript_InsectPlate_1

MahoganyHills_EventScript_InsectPlate_3:
# 9 "data/maps/MahoganyHills_Cave/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills_EventScript_InsectPlate_2
	goto MahoganyHills_EventScript_InsectPlate_1

MahoganyHills_EventScript_InsectPlate_7:
# 22 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_2
	goto MahoganyHills_EventScript_InsectPlate_6

MahoganyHills_EventScript_InsectPlate_8:
# 21 "data/maps/MahoganyHills_Cave/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, MahoganyHills_EventScript_InsectPlate_7
	goto MahoganyHills_EventScript_InsectPlate_6

MahoganyHills_EventScript_InsectPlate_11:
# 12 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 13 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 14 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 15 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_0x8007, 0
# 16 "data/maps/MahoganyHills_Cave/scripts.pory"
	special ShakeCamera
# 17 "data/maps/MahoganyHills_Cave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/MahoganyHills_Cave/scripts.pory"
	warp MAP_HIDDEN_GROTTO_LOST_PLATES_1, 6, 13
	goto MahoganyHills_EventScript_InsectPlate_1

MahoganyHills_EventScript_InsectPlate_14:
# 25 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_3
# 27 "data/maps/MahoganyHills_Cave/scripts.pory"
	clearflag FLAG_HIDE_ALEX_MHC
# 28 "data/maps/MahoganyHills_Cave/scripts.pory"
	addobject 2
# 29 "data/maps/MahoganyHills_Cave/scripts.pory"
	applymovement 2, Movement_AlexToPlayer_MHC
# 30 "data/maps/MahoganyHills_Cave/scripts.pory"
	waitmovement 2
# 31 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_4
# 32 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_5
# 33 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_6
# 34 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_7
# 35 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_8
# 36 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_9
# 37 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_10
# 38 "data/maps/MahoganyHills_Cave/scripts.pory"
	giveitem ITEM_HISTORY_BOOK
# 39 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox MahoganyHills_EventScript_InsectPlate_Text_11
# 40 "data/maps/MahoganyHills_Cave/scripts.pory"
	applymovement 2, Movement_AlexLeavesPlayer_MHC
# 41 "data/maps/MahoganyHills_Cave/scripts.pory"
	setflag FLAG_HIDE_ALEX_MHC
# 42 "data/maps/MahoganyHills_Cave/scripts.pory"
	removeobject 2
# 43 "data/maps/MahoganyHills_Cave/scripts.pory"
	setvar VAR_PLATEQUEST_STATE, 2
	goto MahoganyHills_EventScript_InsectPlate_13


MahoganillyHillsCave_TrainerBattle_Gosu::
# 49 "data/maps/MahoganyHills_Cave/scripts.pory"
	trainerbattle_single GOSU_MHC, GosuMCH_Intro, GosuMCH_Outro, Increase_Trainers_Beaten
# 50 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox GosuMCH_Postbattle
	return


MahoganillyHillsCave_TrainerBattle_John::
# 54 "data/maps/MahoganyHills_Cave/scripts.pory"
	trainerbattle_single JOHN_MHC, JohnMCH_Intro, JohnMCH_Outro, Increase_Trainers_Beaten
# 55 "data/maps/MahoganyHills_Cave/scripts.pory"
	msgbox JohnMCH_Outro
	return


# 81 "data/maps/MahoganyHills_Cave/scripts.pory"
Movement_AlexToPlayer_MHC:
# 82 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 83 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 84 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 85 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 86 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 87 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
# 88 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/MahoganyHills_Cave/scripts.pory"
Movement_AlexLeavesPlayer_MHC:
# 92 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 93 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 94 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 95 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 96 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 97 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 98 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 99 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
# 100 "data/maps/MahoganyHills_Cave/scripts.pory"
	walk_down
	step_end

MahoganyHills_EventScript_InsectPlate_Text_0:
# 7 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "There is a carving of many small\n"
	.string "bug-like Pokémon crawling over a plate.$"

MahoganyHills_EventScript_InsectPlate_Text_1:
# 10 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "Do you want to put the LEGENDS PLATE\n"
	.string "into the slot?$"

MahoganyHills_EventScript_InsectPlate_Text_2:
# 22 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "There seems to be a slot in the wall for\n"
	.string "something. Maybe it's that Key Alex\l"
	.string "spoke about.$"

MahoganyHills_EventScript_InsectPlate_Text_3:
# 25 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "You listened to me then.$"

MahoganyHills_EventScript_InsectPlate_Text_4:
# 31 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "Hello again! This is that carving I\n"
	.string "mentioned to you.$"

MahoganyHills_EventScript_InsectPlate_Text_5:
# 32 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "It looks to be carved in the same way as\n"
	.string "the one in Platefall; it also has a hole\l"
	.string "in it.$"

MahoganyHills_EventScript_InsectPlate_Text_6:
# 33 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "People believe the plates are locked\n"
	.string "and hidden behind carvings like these,\l"
	.string "but how do you open these doorways\l"
	.string "without the plates in the first place?$"

MahoganyHills_EventScript_InsectPlate_Text_7:
# 34 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "It is a confusing conundrum.$"

MahoganyHills_EventScript_InsectPlate_Text_8:
# 35 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "I believe there must be a 19th plate\n"
	.string "not mentioned, one that acts like a key,\l"
	.string "although I've struggled to find any\l"
	.string "proof of it existing yet.$"

MahoganyHills_EventScript_InsectPlate_Text_9:
# 36 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "That is what we must search for,\n"
	.string "{PLAYER}, the key!$"

MahoganyHills_EventScript_InsectPlate_Text_10:
# 37 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "Here, take this.$"

MahoganyHills_EventScript_InsectPlate_Text_11:
# 39 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "ou can use this to translate any\n"
	.string "ancient text you stumble upon.$"

GosuMCH_Intro::
# 59 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "$"

GosuMCH_Outro::
# 63 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "$"

GosuMCH_Postbattle::
# 67 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "$"

JohnMCH_Intro::
# 71 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "I forgot my pickaxe so I can't go any\n"
	.string "deeper.$"

JohnMCH_Outro::
# 75 "data/maps/MahoganyHills_Cave/scripts.pory"
	.string "It's a long walk back home.$"
