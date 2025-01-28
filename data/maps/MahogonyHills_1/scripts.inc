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
	setmetatile 27, 27, METATILE_Forest_Warp_Towards, FALSE
# 5 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 28, 27, METATILE_Forest_Warp_Towards, FALSE
# 6 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 27, 26, METATILE_Forest_Warp_Up, FALSE
# 7 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 28, 26, METATILE_Forest_Warp_Up, FALSE
# 8 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 27, 25, METATILE_Forest_Warp_Tree_Base, TRUE
# 9 "data/maps/MahogonyHills_1/scripts.pory"
	setmetatile 28, 25, METATILE_Forest_Warp_Tree_Base, TRUE
	return


MahoganyTown_EventScript_LostGirl_Right::
# 15 "data/maps/MahogonyHills_1/scripts.pory"
	lockall
# 16 "data/maps/MahogonyHills_1/scripts.pory"
	addobject 4
# 17 "data/maps/MahogonyHills_1/scripts.pory"
	setobjectxy 4, 23, 31
# 18 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_ChildRunning
# 19 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 4, Movement_Child_Hidding_Behind_Player_Right
# 20 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 4
# 21 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Setup
# 22 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Beaten
# 23 "data/maps/MahogonyHills_1/scripts.pory"
	releaseall
	return


MahoganyTown_EventScript_LostGirl_Left::
# 27 "data/maps/MahogonyHills_1/scripts.pory"
	lockall
# 28 "data/maps/MahogonyHills_1/scripts.pory"
	addobject 4
# 29 "data/maps/MahogonyHills_1/scripts.pory"
	setobjectxy 4, 23, 31
# 30 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_ChildRunning
# 31 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 4, Movement_Child_Hidding_Behind_Player_Left
# 32 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 4
# 33 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Setup
# 34 "data/maps/MahogonyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Beaten
# 35 "data/maps/MahogonyHills_1/scripts.pory"
	releaseall
	return


MahoganyScript_EventScript_ChildRunning::
# 39 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_ChildRunning_Text_0
# 40 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_ExclamationMark
# 41 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 4, Movement_Child_Being_Chased
# 42 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 4
# 43 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_ChildRunning_Text_1
	return


MahoganyScript_EventScript_Monster_Setup::
# 47 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Setup_Text_0
# 48 "data/maps/MahogonyHills_1/scripts.pory"
	addobject 5
# 49 "data/maps/MahogonyHills_1/scripts.pory"
	setobjectxy 5, 23, 31
# 50 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Being_Chased
# 51 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 5
# 52 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Setup_Text_1
# 53 "data/maps/MahogonyHills_1/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 54 "data/maps/MahogonyHills_1/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 0, 0, 0
# 55 "data/maps/MahogonyHills_1/scripts.pory"
	setwildbattle SPECIES_POOCHYENA, 12, ITEM_BERRY_JUICE
# 56 "data/maps/MahogonyHills_1/scripts.pory"
	dowildbattle
	return


MahoganyScript_EventScript_Monster_Beaten::
# 60 "data/maps/MahogonyHills_1/scripts.pory"
	removeobject 5
# 61 "data/maps/MahogonyHills_1/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 62 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_0
# 63 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_1
# 64 "data/maps/MahogonyHills_1/scripts.pory"
	applymovement 4, Movement_Child_Being_Chased
# 65 "data/maps/MahogonyHills_1/scripts.pory"
	waitmovement 4
# 66 "data/maps/MahogonyHills_1/scripts.pory"
	removeobject 4
# 67 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_2
# 68 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_3
# 69 "data/maps/MahogonyHills_1/scripts.pory"
	giveitem ITEM_TM_THIEF, 1
# 70 "data/maps/MahogonyHills_1/scripts.pory"
	setvar VAR_TOWN_2_QUEST_STATE, 2
# 71 "data/maps/MahogonyHills_1/scripts.pory"
	setflag FLAG_HIDE_MAHOGANY_HILLS_OBJECT
# 72 "data/maps/MahogonyHills_1/scripts.pory"
	clearflag FLAG_HIDE_TOWN2_HOUSE3_GIRL
	return


MahogonyHills_1_Eventscript_BerrySkitty::
# 76 "data/maps/MahogonyHills_1/scripts.pory"
	lockall
# 77 "data/maps/MahogonyHills_1/scripts.pory"
	faceplayer
# 78 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahogonyHills_1_Eventscript_BerrySkitty_Text_0
# 79 "data/maps/MahogonyHills_1/scripts.pory"
	compare VAR_BERRY_SKITTY_STATE, 0
	goto_if_eq MahogonyHills_1_Eventscript_BerrySkitty_2
MahogonyHills_1_Eventscript_BerrySkitty_1:
# 85 "data/maps/MahogonyHills_1/scripts.pory"
	releaseall
	return

MahogonyHills_1_Eventscript_BerrySkitty_2:
# 80 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahogonyHills_1_Eventscript_BerrySkitty_Text_1
# 81 "data/maps/MahogonyHills_1/scripts.pory"
	giveitem ITEM_COBA_BERRY, 5
# 82 "data/maps/MahogonyHills_1/scripts.pory"
	setvar VAR_BERRY_SKITTY_STATE, 1
# 83 "data/maps/MahogonyHills_1/scripts.pory"
	setflag FLAG_HIDE_SKITTY_MAHOGONY_HILLS
	goto MahogonyHills_1_Eventscript_BerrySkitty_1


Battle_MahoganyHills_Bao::
# 89 "data/maps/MahogonyHills_1/scripts.pory"
	trainerbattle_single MAHOGANYHILLS1_BAO, MahoganyHills1_Bao_Intro, MahoganyHills1_Bao_Outro, Increase_Trainers_Beaten
# 90 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyHills1_Bao_Postbattle, MSGBOX_AUTOCLOSE
	return


Battle_MahoganyHills_ToughChild::
# 94 "data/maps/MahogonyHills_1/scripts.pory"
	trainerbattle_single MAHOGANYHILLS1_TOUGH_TRAINER, MahoganyHills1_ToughTrainer_Intro, MahoganyHills1_ToughTrainer_Outro, Increase_Trainers_Beaten
# 95 "data/maps/MahogonyHills_1/scripts.pory"
	msgbox MahoganyHills1_ToughTrainer_Postbattle, MSGBOX_AUTOCLOSE
	return


# 124 "data/maps/MahogonyHills_1/scripts.pory"
Movement_Child_Being_Chased:
# 125 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 126 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 127 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 128 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 129 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 130 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 131 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 132 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
	step_end

# 135 "data/maps/MahogonyHills_1/scripts.pory"
Movement_Child_Hidding_Behind_Player_Right:
# 136 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_left
# 137 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 138 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 139 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_right
# 140 "data/maps/MahogonyHills_1/scripts.pory"
	face_down
	step_end

# 142 "data/maps/MahogonyHills_1/scripts.pory"
Movement_Child_Hidding_Behind_Player_Left:
# 143 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 144 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_up
# 145 "data/maps/MahogonyHills_1/scripts.pory"
	walk_fast_left
# 146 "data/maps/MahogonyHills_1/scripts.pory"
	face_down
	step_end

# 149 "data/maps/MahogonyHills_1/scripts.pory"
Movement_MahoganyHills_ExclamationMark:
# 150 "data/maps/MahogonyHills_1/scripts.pory"
	emote_exclamation_mark
	step_end

MahoganyScript_EventScript_ChildRunning_Text_0:
# 39 "data/maps/MahogonyHills_1/scripts.pory"
	.string "AHHHHH! HELP!$"

MahoganyScript_EventScript_ChildRunning_Text_1:
# 43 "data/maps/MahogonyHills_1/scripts.pory"
	.string "PLEASE HELP ME, IT'S A MONSTER$"

MahoganyScript_EventScript_Monster_Setup_Text_0:
# 47 "data/maps/MahogonyHills_1/scripts.pory"
	.string "IT'S GETTING CLOSER!$"

MahoganyScript_EventScript_Monster_Setup_Text_1:
# 52 "data/maps/MahogonyHills_1/scripts.pory"
	.string "A giant Poochyena charges up to you!$"

MahoganyScript_EventScript_Monster_Beaten_Text_0:
# 62 "data/maps/MahogonyHills_1/scripts.pory"
	.string "Oh wow you did it!$"

MahoganyScript_EventScript_Monster_Beaten_Text_1:
# 63 "data/maps/MahogonyHills_1/scripts.pory"
	.string "What my dad want's me back? I should\n"
	.string "rush home. Thanks again!$"

MahoganyScript_EventScript_Monster_Beaten_Text_2:
# 67 "data/maps/MahogonyHills_1/scripts.pory"
	.string "The Poochyena dropped something in the\n"
	.string "battle$"

MahoganyScript_EventScript_Monster_Beaten_Text_3:
# 68 "data/maps/MahogonyHills_1/scripts.pory"
	.string "It's the TM for THIEF$"

MahogonyHills_1_Eventscript_BerrySkitty_Text_0:
# 78 "data/maps/MahogonyHills_1/scripts.pory"
	.string "SKITTY!$"

MahogonyHills_1_Eventscript_BerrySkitty_Text_1:
# 80 "data/maps/MahogonyHills_1/scripts.pory"
	.string "The SKITTY seems to hand over a COBA\n"
	.string "BERRIES.$"

MahoganyHills1_Bao_Intro::
# 99 "data/maps/MahogonyHills_1/scripts.pory"
	.string "I keep trying but failing to beat the\n"
	.string "gym.$"

MahoganyHills1_Bao_Outro::
# 103 "data/maps/MahogonyHills_1/scripts.pory"
	.string "You might have a chance.$"

MahoganyHills1_Bao_Postbattle::
# 107 "data/maps/MahogonyHills_1/scripts.pory"
	.string "I should probably catch some other\n"
	.string "Pokémon.$"

MahoganyHills1_ToughTrainer_Intro::
# 111 "data/maps/MahogonyHills_1/scripts.pory"
	.string "I learnt so many battle strategies at\n"
	.string "school.$"

MahoganyHills1_ToughTrainer_Outro::
# 115 "data/maps/MahogonyHills_1/scripts.pory"
	.string "Wow. You must be top of your class!$"

MahoganyHills1_ToughTrainer_Postbattle::
# 119 "data/maps/MahogonyHills_1/scripts.pory"
	.string "Wait you've never been to school in\n"
	.string "GRANITE PEAK?$"
