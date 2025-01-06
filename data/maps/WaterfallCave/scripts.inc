WaterfallCave_MapScripts::
# 2 "data/maps/WaterfallCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WaterfallCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WaterfallCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 3
	goto_if_lt WaterfallCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WaterfallCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 2
	goto_if_gt WaterfallCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

WaterfallCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/WaterfallCave/scripts.pory"
	hideobjectat 4, MAP_WATERFALL_CAVE
	goto WaterfallCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

WaterfallCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 8 "data/maps/WaterfallCave/scripts.pory"
	showobjectat 4, MAP_WATERFALL_CAVE
# 9 "data/maps/WaterfallCave/scripts.pory"
	setobjectxyperm 1, 4, 6
	return


WaterfallCave_BlackBelt1::
# 15 "data/maps/WaterfallCave/scripts.pory"
	lockall
# 16 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 17 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt1_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/WaterfallCave/scripts.pory"
	releaseall
	return


WaterfallCave_BlackBelt2::
# 22 "data/maps/WaterfallCave/scripts.pory"
	lockall
# 23 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 24 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Text_0, MSGBOX_AUTOCLOSE
# 25 "data/maps/WaterfallCave/scripts.pory"
	releaseall
	return


WatervallCave_Blackbelt3::
# 29 "data/maps/WaterfallCave/scripts.pory"
	lockall
# 30 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 31 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 0
	goto_if_eq WatervallCave_Blackbelt3_2
WatervallCave_Blackbelt3_1:
# 54 "data/maps/WaterfallCave/scripts.pory"
	releaseall
	return

WatervallCave_Blackbelt3_2:
# 32 "data/maps/WaterfallCave/scripts.pory"
	msgbox WatervallCave_Blackbelt3_Text_0, MSGBOX_YESNO
# 33 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WatervallCave_Blackbelt3_5
# 45 "data/maps/WaterfallCave/scripts.pory"
	msgbox WatervallCave_Blackbelt3_Text_3, MSGBOX_AUTOCLOSE
WatervallCave_Blackbelt3_4:
# 47 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 1
	goto_if_eq WatervallCave_Blackbelt3_9
WatervallCave_Blackbelt3_8:
# 50 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 2
	goto_if_ge WatervallCave_Blackbelt3_11
	goto WatervallCave_Blackbelt3_1

WatervallCave_Blackbelt3_5:
# 34 "data/maps/WaterfallCave/scripts.pory"
	msgbox WatervallCave_Blackbelt3_Text_1, MSGBOX_AUTOCLOSE
# 36 "data/maps/WaterfallCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WaterfallCave_PreparePlayer
# 37 "data/maps/WaterfallCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 38 "data/maps/WaterfallCave/scripts.pory"
	msgbox WatervallCave_Blackbelt3_Text_2, MSGBOX_AUTOCLOSE
# 39 "data/maps/WaterfallCave/scripts.pory"
	applymovement 2, Movement_WaterfallCave_BlackBelt1Prepare
# 40 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 2
# 41 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_no_intro TRAINER_WATERFALLCAVE_BLACKBELT1, WaterfallCave_Blackbelt1_Outro
# 42 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_Blackbelt1_Beaten
	goto WatervallCave_Blackbelt3_4

WatervallCave_Blackbelt3_9:
# 48 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_MasterChallenge
	goto WatervallCave_Blackbelt3_8

WatervallCave_Blackbelt3_11:
# 51 "data/maps/WaterfallCave/scripts.pory"
	msgbox WatervallCave_Blackbelt3_Text_4
	goto WatervallCave_Blackbelt3_1


WaterfallCave_Blackbelt1_Beaten::
# 58 "data/maps/WaterfallCave/scripts.pory"
	applymovement 2, Movement_WaterfallCave_Blackbelt1_Return
# 59 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 2
# 60 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Blackbelt1_Beaten_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, Movement_WaterfallCave_Blackbelt2_Prepare
# 62 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 3
# 63 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_no_intro TRAINER_WATERFALLCAVE_BLACKBELT2, WaterfallCave_Blackbelt1_Outro
# 64 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_Blackbelt2_Beaten
	return


WaterfallCave_Blackbelt2_Beaten::
# 68 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, Movement_WaterfallCave_Blackbelt2_Return
# 69 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 3
# 70 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Blackbelt2_Beaten_Text_0
# 71 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, Movement_WaterfallCave_Blackbelt3_Prepare
# 72 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 1
# 73 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_no_intro TRAINER_WATERFALLCAVE_BLACKBELT3, WaterfallCave_Blackbelt1_Outro
# 74 "data/maps/WaterfallCave/scripts.pory"
	call WatercallCave_Blackbelts_Beaten
	return


WatercallCave_Blackbelts_Beaten::
# 78 "data/maps/WaterfallCave/scripts.pory"
	msgbox WatercallCave_Blackbelts_Beaten_Text_0, MSGBOX_AUTOCLOSE
# 79 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_MasterChallenge
	return


WaterfallCave_MasterChallenge::
# 83 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_MasterChallenge_Text_0, MSGBOX_YESNO
# 84 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_MasterChallenge_1
# 91 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_MasterChallenge_Text_2
# 92 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 0
	goto_if_eq WaterfallCave_MasterChallenge_4
	return

WaterfallCave_MasterChallenge_1:
# 85 "data/maps/WaterfallCave/scripts.pory"
	setvar VAR_WATERFALL_CAVE_STATE, 1
# 86 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_MasterChallenge_Text_1
# 87 "data/maps/WaterfallCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/WaterfallCave/scripts.pory"
	warp MAP_WATERFALL_CAVE_PRE_BREAK, 6, 4
	return

WaterfallCave_MasterChallenge_4:
# 93 "data/maps/WaterfallCave/scripts.pory"
	setvar VAR_WATERFALL_CAVE_STATE, 1
# 94 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, Movement_WaterfallCave_Blackbelt3_Returns
# 95 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 1
	return


WaterfallCave_Expert_PostWin::
# 101 "data/maps/WaterfallCave/scripts.pory"
	lockall
# 102 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 103 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 4
	goto_if_eq WaterfallCave_Expert_PostWin_2
WaterfallCave_Expert_PostWin_1:
# 106 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 3
	goto_if_eq WaterfallCave_Expert_PostWin_5
WaterfallCave_Expert_PostWin_4:
# 110 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_WATERFALL_CAVE_STATE, 2
	goto_if_eq WaterfallCave_Expert_PostWin_8
WaterfallCave_Expert_PostWin_7:
# 117 "data/maps/WaterfallCave/scripts.pory"
	releaseall
	return

WaterfallCave_Expert_PostWin_2:
# 104 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_0
	goto WaterfallCave_Expert_PostWin_1

WaterfallCave_Expert_PostWin_5:
# 107 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_1
# 108 "data/maps/WaterfallCave/scripts.pory"
	call GivePlayerTyrogueWaterfallCave
	goto WaterfallCave_Expert_PostWin_4

WaterfallCave_Expert_PostWin_8:
# 111 "data/maps/WaterfallCave/scripts.pory"
	setvar VAR_WATERFALL_CAVE_STATE, 3
# 112 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_2
# 113 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_3
# 114 "data/maps/WaterfallCave/scripts.pory"
	call GivePlayerTyrogueWaterfallCave
# 115 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_4
	goto WaterfallCave_Expert_PostWin_7


GivePlayerTyrogueWaterfallCave::
# 122 "data/maps/WaterfallCave/scripts.pory"
	givemon SPECIES_TYROGUE, 5, ITEM_BLACK_BELT
# 123 "data/maps/WaterfallCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GivePlayerTyrogueWaterfallCave_2
# 128 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GivePlayerTyrogueWaterfallCave_3
# 133 "data/maps/WaterfallCave/scripts.pory"
	hidemonpic
# 134 "data/maps/WaterfallCave/scripts.pory"
	msgbox GivePlayerTyrogueWaterfallCave_Text_1
GivePlayerTyrogueWaterfallCave_1:
# 136 "data/maps/WaterfallCave/scripts.pory"
	setvar VAR_WATERFALL_CAVE_STATE, 4
	return

GivePlayerTyrogueWaterfallCave_2:
# 125 "data/maps/WaterfallCave/scripts.pory"
	msgbox GivePlayerTyrogueWaterfallCave_Text_0
# 126 "data/maps/WaterfallCave/scripts.pory"
	call NicknamePartyMon
	goto GivePlayerTyrogueWaterfallCave_1

GivePlayerTyrogueWaterfallCave_3:
# 129 "data/maps/WaterfallCave/scripts.pory"
	msgbox GivePlayerTyrogueWaterfallCave_Text_0
# 130 "data/maps/WaterfallCave/scripts.pory"
	call NicknameBoxMon
	goto GivePlayerTyrogueWaterfallCave_1


# 146 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_PreparePlayer:
# 147 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 148 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 149 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 150 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 151 "data/maps/WaterfallCave/scripts.pory"
	face_right
	step_end

# 154 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_BlackBelt1Prepare:
# 155 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 156 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 157 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 158 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 159 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 160 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 161 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 162 "data/maps/WaterfallCave/scripts.pory"
	face_left
	step_end

# 165 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt1_Return:
# 166 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 167 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 168 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 169 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 170 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 171 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 172 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 173 "data/maps/WaterfallCave/scripts.pory"
	face_down
	step_end

# 176 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt2_Prepare:
# 177 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 178 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 179 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 180 "data/maps/WaterfallCave/scripts.pory"
	face_left
	step_end

# 183 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt2_Return:
# 184 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 185 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 186 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 187 "data/maps/WaterfallCave/scripts.pory"
	face_down
	step_end

# 190 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt3_Prepare:
# 191 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 192 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 193 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 194 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 195 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 196 "data/maps/WaterfallCave/scripts.pory"
	face_left
	step_end

# 199 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt3_Returns:
# 200 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 201 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 202 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 203 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 204 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 205 "data/maps/WaterfallCave/scripts.pory"
	face_down
	step_end

WaterfallCave_BlackBelt1_Text_0:
# 17 "data/maps/WaterfallCave/scripts.pory"
	.string "Hey shrimp, you think you're tough\n"
	.string "enough to take us?$"

WaterfallCave_BlackBelt2_Text_0:
# 24 "data/maps/WaterfallCave/scripts.pory"
	.string "We've been training here with our\n"
	.string "master for years.$"

WatervallCave_Blackbelt3_Text_0:
# 32 "data/maps/WaterfallCave/scripts.pory"
	.string "Welcome to our waterfall. We are\n"
	.string "training here to unlock the full\l"
	.string "potential of our Pokémon.\l"
	.string "Do you think you could take us on?$"

WatervallCave_Blackbelt3_Text_1:
# 34 "data/maps/WaterfallCave/scripts.pory"
	.string "Very good, go prepare youself for\n"
	.string "battle.$"

WatervallCave_Blackbelt3_Text_2:
# 38 "data/maps/WaterfallCave/scripts.pory"
	.string "Prepare yourself for the first\n"
	.string "challenge$"

WatervallCave_Blackbelt3_Text_3:
# 45 "data/maps/WaterfallCave/scripts.pory"
	.string "I thought you looked too weak.$"

WatervallCave_Blackbelt3_Text_4:
# 51 "data/maps/WaterfallCave/scripts.pory"
	.string "You're incredible, how did you manage to\n"
	.string "beat the master!$"

WaterfallCave_Blackbelt1_Beaten_Text_0:
# 60 "data/maps/WaterfallCave/scripts.pory"
	.string "Time for your second challenge.$"

WaterfallCave_Blackbelt2_Beaten_Text_0:
# 70 "data/maps/WaterfallCave/scripts.pory"
	.string "You're not as bad as we thought, but\n"
	.string "you still have to beat me if you want to\l"
	.string "see the master.$"

WatercallCave_Blackbelts_Beaten_Text_0:
# 78 "data/maps/WaterfallCave/scripts.pory"
	.string "You managed to beat us all! We thought\n"
	.string "you might knock out a few of our\l"
	.string "Pokémon but that was outstanding.\p"
	.string "We think you might have what it takes\n"
	.string "to take on our master. We train\l"
	.string "everyday in hopes to one day beat his\l"
	.string "challenge and get his reward but non of\l"
	.string "us have go close.$"

WaterfallCave_MasterChallenge_Text_0:
# 83 "data/maps/WaterfallCave/scripts.pory"
	.string "Would you like to challenge out Master?$"

WaterfallCave_MasterChallenge_Text_1:
# 86 "data/maps/WaterfallCave/scripts.pory"
	.string "Fantastic come with me.$"

WaterfallCave_MasterChallenge_Text_2:
# 91 "data/maps/WaterfallCave/scripts.pory"
	.string "Try another time then.$"

WaterfallCave_Expert_PostWin_Text_0:
# 104 "data/maps/WaterfallCave/scripts.pory"
	.string "I should fix the floor, loads of Unowns\n"
	.string "keeps flying out and causing us\l"
	.string "problems.$"

WaterfallCave_Expert_PostWin_Text_1:
# 107 "data/maps/WaterfallCave/scripts.pory"
	.string "I kept that Tyrogue ready for you.$"

WaterfallCave_Expert_PostWin_Text_2:
# 112 "data/maps/WaterfallCave/scripts.pory"
	.string "Wow our battle was so extreme is\n"
	.string "destroyed my dojo! Hopefully you didn't\l"
	.string "get hurt too much!$"

WaterfallCave_Expert_PostWin_Text_3:
# 113 "data/maps/WaterfallCave/scripts.pory"
	.string "But yes you deserve a reward! Here take\n"
	.string "this Pokémon$"

WaterfallCave_Expert_PostWin_Text_4:
# 115 "data/maps/WaterfallCave/scripts.pory"
	.string "We need to fix that floor though, the\n"
	.string "Unowns in that cave caused me problems\l"
	.string "getting out.$"

GivePlayerTyrogueWaterfallCave_Text_0:
# 125 "data/maps/WaterfallCave/scripts.pory"
	.string "Recieved Tyrogue$"

GivePlayerTyrogueWaterfallCave_Text_1:
# 134 "data/maps/WaterfallCave/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

WaterfallCave_Blackbelt1_Outro::
# 140 "data/maps/WaterfallCave/scripts.pory"
	.string "Just incredible.$"
