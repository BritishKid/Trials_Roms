WaterfallCave_MapScripts::
	.byte 0


WaterfallCave_BlackBelt1::
# 4 "data/maps/WaterfallCave/scripts.pory"
	lock
# 5 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 6 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt1_Text_0
# 7 "data/maps/WaterfallCave/scripts.pory"
	release
	return


WaterfallCave_BlackBelt3::
# 11 "data/maps/WaterfallCave/scripts.pory"
	lock
# 12 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 13 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt3_Text_0
# 14 "data/maps/WaterfallCave/scripts.pory"
	release
	return


WaterfallCave_BlackBelt2::
# 18 "data/maps/WaterfallCave/scripts.pory"
	lock
# 19 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 20 "data/maps/WaterfallCave/scripts.pory"
	goto_if_set FLAG_HIDE_PRE_BATTLE_1_THING, WaterfallCave_BlackBelt2_2
# 43 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Text_4
WaterfallCave_BlackBelt2_1:
# 46 "data/maps/WaterfallCave/scripts.pory"
	release
	return

WaterfallCave_BlackBelt2_2:
# 21 "data/maps/WaterfallCave/scripts.pory"
	goto_if_unset FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS, WaterfallCave_BlackBelt2_6
WaterfallCave_BlackBelt2_5:
# 38 "data/maps/WaterfallCave/scripts.pory"
	goto_if_set FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS, WaterfallCave_BlackBelt2_8
	goto WaterfallCave_BlackBelt2_1

WaterfallCave_BlackBelt2_6:
# 22 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Text_0, MSGBOX_YESNO
# 23 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_BlackBelt2_10
# 35 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Text_3
	goto WaterfallCave_BlackBelt2_5

WaterfallCave_BlackBelt2_8:
# 39 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_Accept_MasterChallenge
	goto WaterfallCave_BlackBelt2_1

WaterfallCave_BlackBelt2_10:
# 24 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Text_1
# 25 "data/maps/WaterfallCave/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_WATERFALL_CAVE
# 26 "data/maps/WaterfallCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WaterfallCave_PreparePlayer
# 27 "data/maps/WaterfallCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 28 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Text_2
# 29 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, Movement_WaterfallCave_BlackBelt1Prepare
# 30 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 1
# 31 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_1, Waterfallcave_Blackbelt1_Outro
# 32 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_BlackBelt1_Beaten
	goto WaterfallCave_BlackBelt2_5


WaterfallCave_BlackBelt1_Beaten::
# 50 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt1_Beaten_Text_0
# 51 "data/maps/WaterfallCave/scripts.pory"
	applymovement 1, Movement_WaterfallCave_Blackbelt1_Return
# 52 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 1
# 53 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt1_Beaten_Text_1
# 54 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, Movement_WaterfallCave_Blackbelt3_Prepare
# 55 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 3
# 56 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_3, Waterfallcave_Blackbelt3_Outro
# 57 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_BlackBelt3_Beaten
	return


WaterfallCave_BlackBelt3_Beaten::
# 62 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt3_Beaten_Text_0
# 63 "data/maps/WaterfallCave/scripts.pory"
	applymovement 3, Movement_WaterfallCave_Blackbelt3_Return
# 64 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 3
# 65 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt3_Beaten_Text_1
# 66 "data/maps/WaterfallCave/scripts.pory"
	applymovement 2, Movement_WaterfallCave_Blackbelt2_Prepare
# 67 "data/maps/WaterfallCave/scripts.pory"
	waitmovement 2
# 68 "data/maps/WaterfallCave/scripts.pory"
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_2, Waterfallcave_Blackbelt2_Outro
# 69 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_BlackBelt2_Beaten
	return


WaterfallCave_BlackBelt2_Beaten::
# 73 "data/maps/WaterfallCave/scripts.pory"
	setflag FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS
# 74 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_0
# 75 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_1
# 76 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_2
# 77 "data/maps/WaterfallCave/scripts.pory"
	call WaterfallCave_Accept_MasterChallenge
	return


WaterfallCave_Accept_MasterChallenge::
# 81 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Accept_MasterChallenge_Text_0
# 82 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_Accept_MasterChallenge_2
# 88 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Accept_MasterChallenge_Text_2
WaterfallCave_Accept_MasterChallenge_1:
# 90 "data/maps/WaterfallCave/scripts.pory"
	releaseall
	return

WaterfallCave_Accept_MasterChallenge_2:
# 83 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Accept_MasterChallenge_Text_1
# 84 "data/maps/WaterfallCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/WaterfallCave/scripts.pory"
	warp MAP_WATERFALL_CAVE_PRE_BREAK, 6, 4
	goto WaterfallCave_Accept_MasterChallenge_1


WaterfallCave_BlackBelt_PostWin::
# 95 "data/maps/WaterfallCave/scripts.pory"
	lockall
# 96 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 97 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_BlackBelt_PostWin_Text_0
# 98 "data/maps/WaterfallCave/scripts.pory"
	releaseall
	return


WaterfallCave_Expert_PostWin::
# 102 "data/maps/WaterfallCave/scripts.pory"
	lockall
# 103 "data/maps/WaterfallCave/scripts.pory"
	faceplayer
# 104 "data/maps/WaterfallCave/scripts.pory"
	goto_if_set FLAG_WATERFALL_CAVE_CLEARED, WaterfallCave_Expert_PostWin_2
WaterfallCave_Expert_PostWin_1:
# 107 "data/maps/WaterfallCave/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TYROGUE, WaterfallCave_Expert_PostWin_5
WaterfallCave_Expert_PostWin_4:
# 110 "data/maps/WaterfallCave/scripts.pory"
	goto_if_unset FLAG_WATERFALL_CAVE_CLEARED, WaterfallCave_Expert_PostWin_8
WaterfallCave_Expert_PostWin_7:
# 116 "data/maps/WaterfallCave/scripts.pory"
	releaseall
	return

WaterfallCave_Expert_PostWin_2:
# 105 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_0
	goto WaterfallCave_Expert_PostWin_1

WaterfallCave_Expert_PostWin_5:
# 108 "data/maps/WaterfallCave/scripts.pory"
	call GivePlayerTyrogueWaterfallCave
	goto WaterfallCave_Expert_PostWin_4

WaterfallCave_Expert_PostWin_8:
# 111 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_1
# 112 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_2
# 113 "data/maps/WaterfallCave/scripts.pory"
	call GivePlayerTyrogueWaterfallCave
# 114 "data/maps/WaterfallCave/scripts.pory"
	msgbox WaterfallCave_Expert_PostWin_Text_3
	goto WaterfallCave_Expert_PostWin_7


GivePlayerTyrogueWaterfallCave::
# 120 "data/maps/WaterfallCave/scripts.pory"
	givemon SPECIES_TYROGUE, 5, ITEM_BLACK_BELT
# 121 "data/maps/WaterfallCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GivePlayerTyrogueWaterfallCave_2
# 126 "data/maps/WaterfallCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GivePlayerTyrogueWaterfallCave_3
# 131 "data/maps/WaterfallCave/scripts.pory"
	hidemonpic
# 132 "data/maps/WaterfallCave/scripts.pory"
	msgbox GivePlayerTyrogueWaterfallCave_Text_1
GivePlayerTyrogueWaterfallCave_1:
# 134 "data/maps/WaterfallCave/scripts.pory"
	setflag FLAG_WATERFALL_CAVE_CLEARED
# 135 "data/maps/WaterfallCave/scripts.pory"
	setflag FLAG_RECEIVED_TYROGUE
	return

GivePlayerTyrogueWaterfallCave_2:
# 123 "data/maps/WaterfallCave/scripts.pory"
	msgbox GivePlayerTyrogueWaterfallCave_Text_0
# 124 "data/maps/WaterfallCave/scripts.pory"
	call NicknamePartyMon
	goto GivePlayerTyrogueWaterfallCave_1

GivePlayerTyrogueWaterfallCave_3:
# 127 "data/maps/WaterfallCave/scripts.pory"
	msgbox GivePlayerTyrogueWaterfallCave_Text_0
# 128 "data/maps/WaterfallCave/scripts.pory"
	call NicknameBoxMon
	goto GivePlayerTyrogueWaterfallCave_1


# 139 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt2_Prepare:
# 140 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 141 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 142 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 143 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 144 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 145 "data/maps/WaterfallCave/scripts.pory"
	face_left
	step_end

# 148 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt3_Return:
# 149 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 150 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 151 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 152 "data/maps/WaterfallCave/scripts.pory"
	face_down
	step_end

# 155 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt3_Prepare:
# 156 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 157 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 158 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 159 "data/maps/WaterfallCave/scripts.pory"
	face_left
	step_end

# 162 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_Blackbelt1_Return:
# 163 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 164 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 165 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 166 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 167 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 168 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 169 "data/maps/WaterfallCave/scripts.pory"
	walk_up
# 170 "data/maps/WaterfallCave/scripts.pory"
	face_down
	step_end

# 172 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_BlackBelt1Prepare:
# 173 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 174 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 175 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 176 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 177 "data/maps/WaterfallCave/scripts.pory"
	walk_right
# 178 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 179 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 180 "data/maps/WaterfallCave/scripts.pory"
	face_left
	step_end

# 183 "data/maps/WaterfallCave/scripts.pory"
Movement_WaterfallCave_PreparePlayer:
# 184 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 185 "data/maps/WaterfallCave/scripts.pory"
	walk_down
# 186 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 187 "data/maps/WaterfallCave/scripts.pory"
	walk_left
# 188 "data/maps/WaterfallCave/scripts.pory"
	face_right
	step_end

WaterfallCave_BlackBelt1_Text_0:
# 6 "data/maps/WaterfallCave/scripts.pory"
	.string "Hi shrimp, you think you're tough enough\n"
	.string "to take us?$"

WaterfallCave_BlackBelt3_Text_0:
# 13 "data/maps/WaterfallCave/scripts.pory"
	.string "We've been training in here with our\n"
	.string "master for years.$"

WaterfallCave_BlackBelt2_Text_0:
# 22 "data/maps/WaterfallCave/scripts.pory"
	.string "Welcome to our waterfall. We are\n"
	.string "training here to unlock the full\l"
	.string "potential of our Pokémon. Do you want\l"
	.string "to join us in some battles?$"

WaterfallCave_BlackBelt2_Text_1:
# 24 "data/maps/WaterfallCave/scripts.pory"
	.string "Very good, go prepare yourself for\n"
	.string "battle.$"

WaterfallCave_BlackBelt2_Text_2:
# 28 "data/maps/WaterfallCave/scripts.pory"
	.string "Prepare yourself for the first\n"
	.string "challenge$"

WaterfallCave_BlackBelt2_Text_3:
# 35 "data/maps/WaterfallCave/scripts.pory"
	.string "Maybe another time then.$"

WaterfallCave_BlackBelt2_Text_4:
# 43 "data/maps/WaterfallCave/scripts.pory"
	.string "That battle was amazing to watch$"

WaterfallCave_BlackBelt1_Beaten_Text_0:
# 50 "data/maps/WaterfallCave/scripts.pory"
	.string "Very good$"

WaterfallCave_BlackBelt1_Beaten_Text_1:
# 53 "data/maps/WaterfallCave/scripts.pory"
	.string "Don't let up time for your second\n"
	.string "challenge$"

WaterfallCave_BlackBelt3_Beaten_Text_0:
# 62 "data/maps/WaterfallCave/scripts.pory"
	.string "Congratulations$"

WaterfallCave_BlackBelt3_Beaten_Text_1:
# 65 "data/maps/WaterfallCave/scripts.pory"
	.string "You're incredible, but now prepare\n"
	.string "yourself for me$"

WaterfallCave_BlackBelt2_Beaten_Text_0:
# 74 "data/maps/WaterfallCave/scripts.pory"
	.string "You managed to beat all of us! We\n"
	.string "thought you might have beaten a few\l"
	.string "Pokémon but not this$"

WaterfallCave_BlackBelt2_Beaten_Text_1:
# 75 "data/maps/WaterfallCave/scripts.pory"
	.string "We think you could take on our Master.\n"
	.string "We train he in hopes to one day beat his\l"
	.string "challenge and recieve his prize but we\l"
	.string "never get close.$"

WaterfallCave_BlackBelt2_Beaten_Text_2:
# 76 "data/maps/WaterfallCave/scripts.pory"
	.string "You definately seem strong enough to\n"
	.string "beat him.$"

WaterfallCave_Accept_MasterChallenge_Text_0:
# 81 "data/maps/WaterfallCave/scripts.pory"
	.string "Would you like to challenge our Master?$"

WaterfallCave_Accept_MasterChallenge_Text_1:
# 83 "data/maps/WaterfallCave/scripts.pory"
	.string "Fantastic lets go$"

WaterfallCave_Accept_MasterChallenge_Text_2:
# 88 "data/maps/WaterfallCave/scripts.pory"
	.string "Okay no problem, come back when you are\n"
	.string "ready.$"

WaterfallCave_BlackBelt_PostWin_Text_0:
# 97 "data/maps/WaterfallCave/scripts.pory"
	.string "You're incredible dude you managed to\n"
	.string "beat the master!$"

WaterfallCave_Expert_PostWin_Text_0:
# 105 "data/maps/WaterfallCave/scripts.pory"
	.string "I should fix the floor, loads of Unowns\n"
	.string "keeps flying out and causing us\l"
	.string "problems.$"

WaterfallCave_Expert_PostWin_Text_1:
# 111 "data/maps/WaterfallCave/scripts.pory"
	.string "Wow our battle was so extreme is\n"
	.string "destroyed my dojo! Hopefully you didn't\l"
	.string "get hurt too much!$"

WaterfallCave_Expert_PostWin_Text_2:
# 112 "data/maps/WaterfallCave/scripts.pory"
	.string "But yes you deserve a reward! Here take\n"
	.string "this Pokémon$"

WaterfallCave_Expert_PostWin_Text_3:
# 114 "data/maps/WaterfallCave/scripts.pory"
	.string "We need to fix that floor though, the\n"
	.string "Unowns in that cave caused me problems\l"
	.string "getting out.$"

GivePlayerTyrogueWaterfallCave_Text_0:
# 123 "data/maps/WaterfallCave/scripts.pory"
	.string "Recieved Tyrogue$"

GivePlayerTyrogueWaterfallCave_Text_1:
# 132 "data/maps/WaterfallCave/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

Waterfallcave_Blackbelt1_Outro::
# 193 "data/maps/WaterfallCave/scripts.pory"
	.string "Just incredible$"

Waterfallcave_Blackbelt2_Outro::
# 197 "data/maps/WaterfallCave/scripts.pory"
	.string "Just incredible$"

Waterfallcave_Blackbelt3_Outro::
# 200 "data/maps/WaterfallCave/scripts.pory"
	.string "Just incredible$"
