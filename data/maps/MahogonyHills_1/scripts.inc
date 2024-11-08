MahogonyHills_1_MapScripts::
# 2 "data/maps/MahogonyHills_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MahogonyHills_1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MahogonyHills_1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MahogonyHills_1/scripts.pory"
	compare VAR_TOWN_2_QUEST_STATE, 3
	goto_if_eq MahogonyHills_1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MahogonyHills_1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 27, 27, METATILE_Forest_Warp_Towards, TRUE
# 5 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 28, 27, METATILE_Forest_Warp_Towards, TRUE
# 6 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 27, 26, METATILE_Forest_Warp_Up, TRUE
# 7 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 28, 26, METATILE_Forest_Warp_Up, TRUE
# 8 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 27, 25, METATILE_Forest_Warp_Tree_Base, TRUE
# 9 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 28, 25, METATILE_Forest_Warp_Tree_Base, TRUE
	return


MahoganyTown_EventScript_LostGirl_Right::
# 16 "data/maps/MahogonyHills_1/scripts.pory"
	lockall
# 17 "data/maps/MahogonyHills_1/scripts.pory"
	addobject 5
# 18 "data/maps/MahogonyHills_1/scripts.pory"
	setobjectxy 5, 23, 31
# 19 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_ChildRunning
# 20 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Hidding_Behind_Player_Right
# 21 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 5
# 22 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Setup
# 23 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Beaten
# 24 "data/maps/MahogonyHills_1/scripts.pory"
	releaseall
	return


MahoganyTown_EventScript_LostGirl_Left::
# 28 "data/maps/MahogonyHills_1/scripts.pory"
	lockall
# 29 "data/maps/MahogonyHills_1/scripts.pory"
	addobject 5
# 30 "data/maps/MahogonyHills_1/scripts.pory"
	setobjectxy 5, 23, 31
# 31 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_ChildRunning
# 32 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Hidding_Behind_Player_Left
# 33 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 5
# 34 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Setup
# 35 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Beaten
# 36 "data/maps/MahogonyHills_1/scripts.pory"
	releaseall
	return


MahoganyScript_EventScript_ChildRunning::
# 40 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_ChildRunning_Text_0
# 41 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_ExclamationMark
# 42 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Being_Chased
# 43 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 5
# 44 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_ChildRunning_Text_1
	return


MahoganyScript_EventScript_Monster_Setup::
# 48 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Setup_Text_0
# 49 "data/maps/MahogonyHills_1/scripts.pory"
	addobject 7
# 50 "data/maps/MahogonyHills_1/scripts.pory"
	setobjectxy 7, 23, 31
# 51 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 7, Movement_Child_Being_Chased
# 52 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 7
# 53 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Setup_Text_1
# 54 "data/maps/MahogonyHills_1/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 55 "data/maps/MahogonyHills_1/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 0, 0, 0
# 56 "data/maps/MahogonyHills_1/scripts.pory"
	setwildbattle SPECIES_POOCHYENA, 12, ITEM_BERRY_JUICE
# 57 "data/maps/MahogonyHills_1/scripts.pory"
	dowildbattle
	return


MahoganyScript_EventScript_Monster_Beaten::
# 61 "data/maps/MahogonyHills_1/scripts.pory"
	removeobject 7
# 62 "data/maps/MahogonyHills_1/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 63 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_0
# 64 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_1
# 65 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Being_Chased
# 66 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 5
# 67 "data/maps/MahogonyHills_1/scripts.pory"
	removeobject 5
# 68 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_2
# 69 "data/maps/MahogonyHills_1/scripts.pory"
	giveitem ITEM_TM_THIEF, 1
# 70 "data/maps/MahogonyHills_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/MahogonyHills_1/scripts.pory"
	setvar VAR_TOWN_2_QUEST_STATE, 2
# 72 "data/maps/MahogonyHills_1/scripts.pory"
	setflag FLAG_HIDE_MAHOGANY_HILLS_OBJECT
# 73 "data/maps/MahogonyHills_1/scripts.pory"
	clearflag FLAG_HIDE_TOWN2_HOUSE3_GIRL
	return


# 77 "data/maps/MahogonyHills_1/scripts.pory"
Movement_Child_Being_Chased:
# 78 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 79 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 80 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 81 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 82 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 83 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 84 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 85 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
	step_end

# 88 "data/maps/MahogonyHills_1/scripts.pory"
Movement_Child_Hidding_Behind_Player_Right:
# 89 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_left
# 90 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 91 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 92 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_right
# 93 "data/maps/MahogonyHills_1/scripts.pory"
	face_down
	step_end

# 95 "data/maps/MahogonyHills_1/scripts.pory"
Movement_Child_Hidding_Behind_Player_Left:
# 96 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 97 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 98 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_left
# 99 "data/maps/MahogonyHills_1/scripts.pory"
	face_down
	step_end

# 102 "data/maps/MahogonyHills_1/scripts.pory"
Movement_MahoganyHills_ExclamationMark:
# 103 "data/maps/MahogonyHills_1/scripts.pory"
	emote_exclamation_mark
	step_end

MahoganyScript_EventScript_ChildRunning_Text_0:
# 40 "data/maps/MahogonyHills_1/scripts.pory"
	.string "AHHHHH! HELP!$"

MahoganyScript_EventScript_ChildRunning_Text_1:
# 44 "data/maps/MahogonyHills_1/scripts.pory"
	.string "PLEASE HELP ME, IT'S A MONSTER$"

MahoganyScript_EventScript_Monster_Setup_Text_0:
# 48 "data/maps/MahogonyHills_1/scripts.pory"
	.string "IT'S GETTING CLOSER!$"

MahoganyScript_EventScript_Monster_Setup_Text_1:
# 53 "data/maps/MahogonyHills_1/scripts.pory"
	.string "A giant Poochyena charges up to you!$"

MahoganyScript_EventScript_Monster_Beaten_Text_0:
# 63 "data/maps/MahogonyHills_1/scripts.pory"
	.string "Oh wow you did it!$"

MahoganyScript_EventScript_Monster_Beaten_Text_1:
# 64 "data/maps/MahogonyHills_1/scripts.pory"
	.string "What my dad want's me back? I should\n"
	.string "rush home. Thanks again!$"

MahoganyScript_EventScript_Monster_Beaten_Text_2:
# 68 "data/maps/MahogonyHills_1/scripts.pory"
	.string "The Poochyena dropped something in the\n"
	.string "battle$"
