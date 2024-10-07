.set LOCALID_WINGULL, 3

CoralPort_House4_MapScripts::
	.byte 0

CoralPort_House4_EventScript_Woman::
	msgbox CoralPort_House4_Text_BringsWorldCloserTogether, MSGBOX_NPC
	end

CoralPort_House4_EventScript_Boy::
	lockall
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, CoralPort_House4_EventScript_ReceivedMentalHerb
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, CoralPort_House4_EventScript_WingullReturned
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, CoralPort_House4_EventScript_WingullOnErrand
	msgbox CoralPort_House4_Text_GoBirdPokemon, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_WINGULL_SENT_ON_ERRAND
	clearflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
	applymovement LOCALID_WINGULL, CoralPort_House4_Movement_WingullExit
	waitmovement 0
	removeobject LOCALID_WINGULL
	releaseall
	end

CoralPort_House4_EventScript_WingullOnErrand::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CoralPort_House4_Text_AskedWingullToRunErrand, MSGBOX_DEFAULT
	releaseall
	end

CoralPort_House4_EventScript_WingullReturned::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CoralPort_House4_Text_WelcomeWingullTakeMentalHerb, MSGBOX_DEFAULT
	giveitem ITEM_MENTAL_HERB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MENTAL_HERB
	releaseall
	end

CoralPort_House4_EventScript_ReceivedMentalHerb::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CoralPort_House4_Text_FriendsFarAwayThanksToWingull, MSGBOX_DEFAULT
	releaseall
	end

CoralPort_House4_Movement_WingullExit:
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_in_place_faster_down
	delay_8
	step_end

CoralPort_House4_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox CoralPort_House4_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CoralPort_House4_Text_BringsWorldCloserTogether:
	.string "By being together with POKéMON,\n"
	.string "people make more and more friends.\p"
	.string "And that brings the world closer\n"
	.string "together. I think it's wonderful!$"

CoralPort_House4_Text_GoBirdPokemon:
	.string "There!\n"
	.string "Go, BIRD POKéMON!$"

CoralPort_House4_Text_AskedWingullToRunErrand:
	.string "Heheh, I asked my WINGULL to run\n"
	.string "an errand for me.$"

CoralPort_House4_Text_WelcomeWingullTakeMentalHerb:
	.string "Good!\n"
	.string "Welcome back, WINGULL!\p"
	.string "Huh? What is this?\n"
	.string "What is it holding?\p"
	.string "A MENTAL HERB?\n"
	.string "It must have picked it up somewhere.\p"
	.string "But I'm not a TRAINER, so you can\n"
	.string "have it.$"

CoralPort_House4_Text_FriendsFarAwayThanksToWingull:
	.string "Thanks to my WINGULL, I have friends\n"
	.string "who live far away.$"

CoralPort_House4_Text_Wingull:
	.string "WINGULL: Pihyoh!$"

