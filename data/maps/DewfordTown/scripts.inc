DewfordTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DewfordTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_DEWFORD_TOWN
	end

DewfordTown_EventScript_Briney::
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
	message DewfordTown_Text_WhereAreWeBound
	waitmessage
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_EventScript_ChoosePetalburg
	case 1, DewfordTown_EventScript_ChooseSlateport
	case 2, DewfordTown_EventScript_CancelSailSelect
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
	end

DewfordTown_EventScript_ChoosePetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	release
	end

DewfordTown_EventScript_ChooseSlateport::
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToSlateport
	release
	end

DewfordTown_EventScript_CancelSailSelect::
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_EventScript_ReturnToPetalburgPrompt::
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailBackToPetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	end

DewfordTown_EventScript_Woman::
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
	end

DewfordTown_EventScript_TownSign::
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_GymSign::
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_HallSign::
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
	end

DewfordTown_EventScript_GiveOldRod::
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_NotGettingItchToFish::
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_HowsFishing::
	message DewfordTown_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
	end

DewfordTown_EventScript_FishingExcellent::
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_FishingNotSoGood::
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailToPetalburg::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	call Common_EventScript_StopBrineysBoatMusic
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	waitstate
	release
	end

DewfordTown_EventScript_SailToSlateport::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
	waitmovement 0
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
	waitmovement 0
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
	addobject LOCALID_BRINEY_R109
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	addobject LOCALID_BOAT_R109
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
	copyobjectxytoperm LOCALID_BRINEY_R109
	release
	end

DewfordTown_EventScript_LandedSlateportDeliverGoods::
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
	return


DewfordTown_RivalEncounter::
	lockall
	applymovement 1, Movement_RivalIsland3_Arriving
	waitmovement 1
	msgbox DewfordTown_RivalEncounter_Text_0
	goto_if_unset FLAG_RECIEVED_MEGA_BRACELET, DewfordTown_RivalEncounter_2
DewfordTown_RivalEncounter_1:
	msgbox DewfordTown_RivalEncounter_Text_3
	switch VAR_STARTER_MON
	case 0, DewfordTown_RivalEncounter_6
	case 1, DewfordTown_RivalEncounter_7
	case 2, DewfordTown_RivalEncounter_8
DewfordTown_RivalEncounter_4:
	releaseall
	return

DewfordTown_RivalEncounter_2:
	msgbox DewfordTown_RivalEncounter_Text_1
	msgbox DewfordTown_RivalEncounter_Text_2
	goto DewfordTown_RivalEncounter_1

DewfordTown_RivalEncounter_6:
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_CYNDAQUIL, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4

DewfordTown_RivalEncounter_7:
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_TOTODILE, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4

DewfordTown_RivalEncounter_8:
	trainerbattle_single TRAINER_RIVAL_DEWFORD_TOWN_CHIKORITA, Dewford_Rival_Intro, Dewford_Rival_Outro, Dewford_Rival_Postscript
	goto DewfordTown_RivalEncounter_4


Dewford_Rival_Postscript::
	msgbox Dewford_Rival_Postscript_Text_0
	msgbox Dewford_Rival_Postscript_Text_1
	msgbox Dewford_Rival_Postscript_Text_2
	giveitem ITEM_HM04
	playfanfare MUS_OBTAIN_ITEM
	msgbox Dewford_Rival_Postscript_Text_3
	applymovement 1, Movement_Rivalisland3_Leaving
	waitmovement 1
	removeobject 1
	setvar VAR_RIVAL_FIGHT_2, 5
	setflag FLAG_RIVAL_LEFT_DEWFORD
	msgbox Dewford_Rival_Postscript_Text_4
	releaseall
	return


Town_Sign_Dewford::
	msgbox Dewford_Rival_Postscript_Text_4
	return


Movement_RivalIsland3_Arriving:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	emote_exclamation_mark
	walk_down
	walk_down
	step_end

Movement_Rivalisland3_Leaving:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

DewfordTown_RivalEncounter_Text_0:
	.string "Finally made it then ${PLAYER}. Took\n"
	.string "you long enough.$"

DewfordTown_RivalEncounter_Text_1:
	.string "It's not surprise you're not even\n"
	.string "strong enough to get your Mega Braclet\l"
	.string "yet!$"

DewfordTown_RivalEncounter_Text_2:
	.string "You know you can go north of Lilycove\n"
	.string "City and get one?$"

DewfordTown_RivalEncounter_Text_3:
	.string "I've heard so many strong Pokémon can\n"
	.string "be found on this Island and I'm going to\l"
	.string "catch them all and get the last badges\l"
	.string "to become a champion.$"

Dewford_Rival_Postscript_Text_0:
	.string "You keep surprising me, for such a\n"
	.string "weakling you keep beating me...$"

Dewford_Rival_Postscript_Text_1:
	.string "Whatever I'll still become a champion\n"
	.string "first!$"

Dewford_Rival_Postscript_Text_2:
	.string "I also saw your Dad he gave me this to\n"
	.string "give to you when I found you$"

Dewford_Rival_Postscript_Text_3:
	.string "Good luck keeping up!$"

Dewford_Rival_Postscript_Text_4:
	.string "This is the end of Demo 1! We hope you\n"
	.string "enjoyed, come over to our discord to\l"
	.string "see update information and feel free to\l"
	.string "challenge the Champions guild and\l"
	.string "finish the side quests while you wait$"

Dewford_Rival_Intro::
	.string "Here let me show you how much you've\n"
	.string "fallen behind!$"

Dewford_Rival_Outro::
	.string "How do you keep doing this?$"
