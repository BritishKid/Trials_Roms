MegaTower_MapScripts::
	.byte 0


MegaTower_Sign::
# 5 "data/maps/MegaTower/scripts.pory"
	lockall
# 6 "data/maps/MegaTower/scripts.pory"
	msgbox MegaTower_Sign_Text_0
# 7 "data/maps/MegaTower/scripts.pory"
	releaseall
	return


MegaTower_Trigger_1::
# 11 "data/maps/MegaTower/scripts.pory"
	lockall
# 12 "data/maps/MegaTower/scripts.pory"
	setvar VAR_PLAYER_LOCATION, 1
# 13 "data/maps/MegaTower/scripts.pory"
	releaseall
	return


MegaTower_Trigger_2::
# 17 "data/maps/MegaTower/scripts.pory"
	lockall
# 18 "data/maps/MegaTower/scripts.pory"
	setvar VAR_PLAYER_LOCATION, 2
# 19 "data/maps/MegaTower/scripts.pory"
	releaseall
	return


MegaTower_Trigger_3::
# 23 "data/maps/MegaTower/scripts.pory"
	lockall
# 24 "data/maps/MegaTower/scripts.pory"
	setvar VAR_PLAYER_LOCATION, 3
# 25 "data/maps/MegaTower/scripts.pory"
	releaseall
	return


MegaTower_RivalFight::
# 29 "data/maps/MegaTower/scripts.pory"
	lockall
# 30 "data/maps/MegaTower/scripts.pory"
	clearflag FLAG_HIDE_MEGATOWER_RIVAL
# 31 "data/maps/MegaTower/scripts.pory"
	addobject 1
# 32 "data/maps/MegaTower/scripts.pory"
	applymovement 1, Movement_MegaTower_RivalArrives
# 33 "data/maps/MegaTower/scripts.pory"
	waitmovement 1
# 34 "data/maps/MegaTower/scripts.pory"
	msgbox MegaTower_RivalFight_Text_0
# 35 "data/maps/MegaTower/scripts.pory"
	msgbox MegaTower_RivalFight_Text_1
# 36 "data/maps/MegaTower/scripts.pory"
	msgbox MegaTower_RivalFight_Text_2
# 38 "data/maps/MegaTower/scripts.pory"
	trainerbattle_single MEGATOWER_RIVAL, MegaTower_Rival_Intro, MegaTower_Rival_Outro, MegaTower_Rival_PostBattle
# 39 "data/maps/MegaTower/scripts.pory"
	releaseall
	return


MegaTower_Rival_PostBattle::
# 43 "data/maps/MegaTower/scripts.pory"
	msgbox MegaTower_Rival_PostBattle_Text_0
# 44 "data/maps/MegaTower/scripts.pory"
	msgbox MegaTower_Rival_PostBattle_Text_1
# 45 "data/maps/MegaTower/scripts.pory"
	msgbox MegaTower_Rival_PostBattle_Text_2
# 46 "data/maps/MegaTower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaTower_MovePlayerRight
# 47 "data/maps/MegaTower/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 48 "data/maps/MegaTower/scripts.pory"
	compare VAR_PLAYER_LOCATION, 2
	goto_if_ge MegaTower_Rival_PostBattle_2
MegaTower_Rival_PostBattle_1:
# 52 "data/maps/MegaTower/scripts.pory"
	compare VAR_PLAYER_LOCATION, 3
	goto_if_ge MegaTower_Rival_PostBattle_5
MegaTower_Rival_PostBattle_4:
# 56 "data/maps/MegaTower/scripts.pory"
	applymovement 1, Movement_MegaTower_RivalLeaves
# 57 "data/maps/MegaTower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaTower_FollowRivalDirection
# 58 "data/maps/MegaTower/scripts.pory"
	waitmovement 1
# 59 "data/maps/MegaTower/scripts.pory"
	setflag FLAG_HIDE_MEGATOWER_RIVAL
# 60 "data/maps/MegaTower/scripts.pory"
	removeobject 1
# 61 "data/maps/MegaTower/scripts.pory"
	setvar VAR_MEGATOWER_STATE, 1
# 62 "data/maps/MegaTower/scripts.pory"
	releaseall
	return

MegaTower_Rival_PostBattle_2:
# 49 "data/maps/MegaTower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaTower_MovePlayerRight
# 50 "data/maps/MegaTower/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MegaTower_Rival_PostBattle_1

MegaTower_Rival_PostBattle_5:
# 53 "data/maps/MegaTower/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MegaTower_MovePlayerRight
# 54 "data/maps/MegaTower/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MegaTower_Rival_PostBattle_4


# 77 "data/maps/MegaTower/scripts.pory"
Movement_MegaTower_RivalArrives:
# 78 "data/maps/MegaTower/scripts.pory"
	emote_exclamation_mark
# 79 "data/maps/MegaTower/scripts.pory"
	walk_down
# 80 "data/maps/MegaTower/scripts.pory"
	walk_down
	step_end

# 83 "data/maps/MegaTower/scripts.pory"
Movement_MegaTower_MovePlayerRight:
# 84 "data/maps/MegaTower/scripts.pory"
	walk_right
	step_end

# 87 "data/maps/MegaTower/scripts.pory"
Movement_MegaTower_FollowRivalDirection:
# 88 "data/maps/MegaTower/scripts.pory"
	face_left
# 89 "data/maps/MegaTower/scripts.pory"
	face_down
	step_end

# 92 "data/maps/MegaTower/scripts.pory"
Movement_MegaTower_RivalLeaves:
# 93 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
# 94 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
# 95 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
# 96 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
# 97 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
# 98 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
# 99 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
# 100 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
# 101 "data/maps/MegaTower/scripts.pory"
	walk_fast_down
	step_end

MegaTower_Sign_Text_0:
# 6 "data/maps/MegaTower/scripts.pory"
	.string "Only those who prove their strength\n"
	.string "may wield the power of Mega Evolution.$"

MegaTower_RivalFight_Text_0:
# 34 "data/maps/MegaTower/scripts.pory"
	.string "You finally made it then, as always\n"
	.string "you're already behind.$"

MegaTower_RivalFight_Text_1:
# 35 "data/maps/MegaTower/scripts.pory"
	.string "No need to say anything I recognise\n"
	.string "that look of awe you have looking at me\l"
	.string "especially now I have my Mega Ring.$"

MegaTower_RivalFight_Text_2:
# 36 "data/maps/MegaTower/scripts.pory"
	.string "Stunned to silence I see.$"

MegaTower_Rival_PostBattle_Text_0:
# 43 "data/maps/MegaTower/scripts.pory"
	.string "Well I have to give you a chance, not\n"
	.string "everyone can get their own Mega Ring.$"

MegaTower_Rival_PostBattle_Text_1:
# 44 "data/maps/MegaTower/scripts.pory"
	.string "Any way I'm going to get the ferry to\n"
	.string "grab my next badge, I'm sure by the time\l"
	.string "you'll see me next I'll already be a\l"
	.string "champion.$"

MegaTower_Rival_PostBattle_Text_2:
# 45 "data/maps/MegaTower/scripts.pory"
	.string "So long nerd!$"

MegaTower_Rival_Intro::
# 67 "data/maps/MegaTower/scripts.pory"
	.string "Let me show you the power of my new\n"
	.string "ring.$"

MegaTower_Rival_Outro::
# 71 "data/maps/MegaTower/scripts.pory"
	.string "You keep getting lucky...$"
