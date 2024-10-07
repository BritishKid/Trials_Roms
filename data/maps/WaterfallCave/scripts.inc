WaterfallCave_MapScripts::
	.byte 0


WaterfallCave_BlackBelt1::
	lock
	faceplayer
	msgbox WaterfallCave_BlackBelt1_Text_0
	release
	return


WaterfallCave_BlackBelt3::
	lock
	faceplayer
	msgbox WaterfallCave_BlackBelt3_Text_0
	release
	return


WaterfallCave_BlackBelt2::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_PRE_BATTLE_1_THING, WaterfallCave_BlackBelt2_2
	msgbox WaterfallCave_BlackBelt2_Text_4
WaterfallCave_BlackBelt2_1:
	release
	return

WaterfallCave_BlackBelt2_2:
	goto_if_unset FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS, WaterfallCave_BlackBelt2_6
WaterfallCave_BlackBelt2_5:
	goto_if_set FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS, WaterfallCave_BlackBelt2_8
	goto WaterfallCave_BlackBelt2_1

WaterfallCave_BlackBelt2_6:
	msgbox WaterfallCave_BlackBelt2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_BlackBelt2_10
	msgbox WaterfallCave_BlackBelt2_Text_3
	goto WaterfallCave_BlackBelt2_5

WaterfallCave_BlackBelt2_8:
	call WaterfallCave_Accept_MasterChallenge
	goto WaterfallCave_BlackBelt2_1

WaterfallCave_BlackBelt2_10:
	msgbox WaterfallCave_BlackBelt2_Text_1
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_WATERFALL_CAVE
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WaterfallCave_PreparePlayer
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox WaterfallCave_BlackBelt2_Text_2
	applymovement 1, Movement_WaterfallCave_BlackBelt1Prepare
	waitmovement 1
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_1, Waterfallcave_Blackbelt1_Outro
	call WaterfallCave_BlackBelt1_Beaten
	goto WaterfallCave_BlackBelt2_5


WaterfallCave_BlackBelt1_Beaten::
	msgbox WaterfallCave_BlackBelt1_Beaten_Text_0
	applymovement 1, Movement_WaterfallCave_Blackbelt1_Return
	waitmovement 1
	msgbox WaterfallCave_BlackBelt1_Beaten_Text_1
	applymovement 3, Movement_WaterfallCave_Blackbelt3_Prepare
	waitmovement 3
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_3, Waterfallcave_Blackbelt3_Outro
	call WaterfallCave_BlackBelt3_Beaten
	return


WaterfallCave_BlackBelt3_Beaten::
	msgbox WaterfallCave_BlackBelt3_Beaten_Text_0
	applymovement 3, Movement_WaterfallCave_Blackbelt3_Return
	waitmovement 3
	msgbox WaterfallCave_BlackBelt3_Beaten_Text_1
	applymovement 2, Movement_WaterfallCave_Blackbelt2_Prepare
	waitmovement 2
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_2, Waterfallcave_Blackbelt2_Outro
	call WaterfallCave_BlackBelt2_Beaten
	return


WaterfallCave_BlackBelt2_Beaten::
	setflag FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_0
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_1
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_2
	call WaterfallCave_Accept_MasterChallenge
	return


WaterfallCave_Accept_MasterChallenge::
	msgbox WaterfallCave_Accept_MasterChallenge_Text_0
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_Accept_MasterChallenge_2
	msgbox WaterfallCave_Accept_MasterChallenge_Text_2
WaterfallCave_Accept_MasterChallenge_1:
	releaseall
	return

WaterfallCave_Accept_MasterChallenge_2:
	msgbox WaterfallCave_Accept_MasterChallenge_Text_1
	fadescreen FADE_TO_BLACK
	warp MAP_WATERFALL_CAVE_PRE_BREAK, 6, 4
	goto WaterfallCave_Accept_MasterChallenge_1


WaterfallCave_BlackBelt_PostWin::
	lockall
	faceplayer
	msgbox WaterfallCave_BlackBelt_PostWin_Text_0
	releaseall
	return


WaterfallCave_Expert_PostWin::
	lockall
	faceplayer
	goto_if_set FLAG_WATERFALL_CAVE_CLEARED, WaterfallCave_Expert_PostWin_2
WaterfallCave_Expert_PostWin_1:
	goto_if_unset FLAG_RECEIVED_TYROGUE, WaterfallCave_Expert_PostWin_5
WaterfallCave_Expert_PostWin_4:
	goto_if_unset FLAG_WATERFALL_CAVE_CLEARED, WaterfallCave_Expert_PostWin_8
WaterfallCave_Expert_PostWin_7:
	releaseall
	return

WaterfallCave_Expert_PostWin_2:
	msgbox WaterfallCave_Expert_PostWin_Text_0
	goto WaterfallCave_Expert_PostWin_1

WaterfallCave_Expert_PostWin_5:
	call GivePlayerTyrogueWaterfallCave
	goto WaterfallCave_Expert_PostWin_4

WaterfallCave_Expert_PostWin_8:
	msgbox WaterfallCave_Expert_PostWin_Text_1
	msgbox WaterfallCave_Expert_PostWin_Text_2
	call GivePlayerTyrogueWaterfallCave
	msgbox WaterfallCave_Expert_PostWin_Text_3
	goto WaterfallCave_Expert_PostWin_7


GivePlayerTyrogueWaterfallCave::
	givemon SPECIES_TYROGUE, 5, ITEM_BLACK_BELT
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GivePlayerTyrogueWaterfallCave_2
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GivePlayerTyrogueWaterfallCave_3
	hidemonpic
	msgbox GivePlayerTyrogueWaterfallCave_Text_1
GivePlayerTyrogueWaterfallCave_1:
	setflag FLAG_WATERFALL_CAVE_CLEARED
	setflag FLAG_RECEIVED_TYROGUE
	return

GivePlayerTyrogueWaterfallCave_2:
	msgbox GivePlayerTyrogueWaterfallCave_Text_0
	call NicknamePartyMon
	goto GivePlayerTyrogueWaterfallCave_1

GivePlayerTyrogueWaterfallCave_3:
	msgbox GivePlayerTyrogueWaterfallCave_Text_0
	call NicknameBoxMon
	goto GivePlayerTyrogueWaterfallCave_1


Movement_WaterfallCave_Blackbelt2_Prepare:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	face_left
	step_end

Movement_WaterfallCave_Blackbelt3_Return:
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Movement_WaterfallCave_Blackbelt3_Prepare:
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Movement_WaterfallCave_Blackbelt1_Return:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Movement_WaterfallCave_BlackBelt1Prepare:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	face_left
	step_end

Movement_WaterfallCave_PreparePlayer:
	walk_down
	walk_down
	walk_left
	walk_left
	face_right
	step_end

WaterfallCave_BlackBelt1_Text_0:
	.string "Hi shrimp, you think you're tough enough\n"
	.string "to take us?$"

WaterfallCave_BlackBelt3_Text_0:
	.string "We've been training in here with our\n"
	.string "master for years.$"

WaterfallCave_BlackBelt2_Text_0:
	.string "Welcome to our waterfall. We are\n"
	.string "training here to unlock the full\l"
	.string "potential of our Pokémon. Do you want\l"
	.string "to join us in some battles?$"

WaterfallCave_BlackBelt2_Text_1:
	.string "Very good, go prepare yourself for\n"
	.string "battle.$"

WaterfallCave_BlackBelt2_Text_2:
	.string "Prepare yourself for the first\n"
	.string "challenge$"

WaterfallCave_BlackBelt2_Text_3:
	.string "Maybe another time then.$"

WaterfallCave_BlackBelt2_Text_4:
	.string "That battle was amazing to watch$"

WaterfallCave_BlackBelt1_Beaten_Text_0:
	.string "Very good$"

WaterfallCave_BlackBelt1_Beaten_Text_1:
	.string "Don't let up time for your second\n"
	.string "challenge$"

WaterfallCave_BlackBelt3_Beaten_Text_0:
	.string "Congratulations$"

WaterfallCave_BlackBelt3_Beaten_Text_1:
	.string "You're incredible, but now prepare\n"
	.string "yourself for me$"

WaterfallCave_BlackBelt2_Beaten_Text_0:
	.string "You managed to beat all of us! We\n"
	.string "thought you might have beaten a few\l"
	.string "Pokémon but not this$"

WaterfallCave_BlackBelt2_Beaten_Text_1:
	.string "We think you could take on our Master.\n"
	.string "We train he in hopes to one day beat his\l"
	.string "challenge and recieve his prize but we\l"
	.string "never get close.$"

WaterfallCave_BlackBelt2_Beaten_Text_2:
	.string "You definately seem strong enough to\n"
	.string "beat him.$"

WaterfallCave_Accept_MasterChallenge_Text_0:
	.string "Would you like to challenge our Master?$"

WaterfallCave_Accept_MasterChallenge_Text_1:
	.string "Fantastic lets go$"

WaterfallCave_Accept_MasterChallenge_Text_2:
	.string "Okay no problem, come back when you are\n"
	.string "ready.$"

WaterfallCave_BlackBelt_PostWin_Text_0:
	.string "You're incredible dude you managed to\n"
	.string "beat the master!$"

WaterfallCave_Expert_PostWin_Text_0:
	.string "I should fix the floor, loads of Unowns\n"
	.string "keeps flying out and causing us\l"
	.string "problems.$"

WaterfallCave_Expert_PostWin_Text_1:
	.string "Wow our battle was so extreme is\n"
	.string "destroyed my dojo! Hopefully you didn't\l"
	.string "get hurt too much!$"

WaterfallCave_Expert_PostWin_Text_2:
	.string "But yes you deserve a reward! Here take\n"
	.string "this Pokémon$"

WaterfallCave_Expert_PostWin_Text_3:
	.string "We need to fix that floor though, the\n"
	.string "Unowns in that cave caused me problems\l"
	.string "getting out.$"

GivePlayerTyrogueWaterfallCave_Text_0:
	.string "Recieved Tyrogue$"

GivePlayerTyrogueWaterfallCave_Text_1:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

Waterfallcave_Blackbelt1_Outro::
	.string "Just incredible$"

Waterfallcave_Blackbelt2_Outro::
	.string "Just incredible$"

Waterfallcave_Blackbelt3_Outro::
	.string "Just incredible$"
