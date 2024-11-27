CoralPort_Harbor_MapScripts::
	.byte 0

CoralPort_Harbor_EventScript_HiddenPowerGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, CoralPort_Harbor_EventScript_ExplainHiddenPower
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, CoralPort_Harbor_EventScript_Greeting
	msgbox CoralPort_Harbor_Text_CoinInWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, CoralPort_Harbor_EventScript_WrongGuess
	msgbox CoralPort_Harbor_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, CoralPort_Harbor_EventScript_WrongGuess
	msgbox CoralPort_Harbor_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 0, CoralPort_Harbor_EventScript_WrongGuess
	msgbox CoralPort_Harbor_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
	giveitem ITEM_TM_HIDDEN_POWER
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
	msgbox CoralPort_Harbor_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

CoralPort_Harbor_EventScript_Greeting::
	msgbox CoralPort_Harbor_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	return

CoralPort_Harbor_EventScript_ExplainHiddenPower::
	msgbox CoralPort_Harbor_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

CoralPort_Harbor_EventScript_WrongGuess::
	msgbox CoralPort_Harbor_Text_YouGuessedWrong, MSGBOX_DEFAULT
	release
	end

CoralPort_Harbor_Text_HiddenPowersArousedByNature:
	.string "People… POKéMON…\p"
	.string "Their hidden powers are aroused by\n"
	.string "living in natural environments…$"

CoralPort_Harbor_Text_CoinInWhichHand:
	.string "Let this old woman see if your hidden\n"
	.string "power has awoken…\p"
	.string "I hold a coin in my hand.\p"
	.string "Now, tell me, have I palmed it in\n"
	.string "the right hand? Or in the left?$"

CoralPort_Harbor_Text_CorrectTryAgainWhichHand:
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

CoralPort_Harbor_Text_CorrectTryAgainWhichHand2:
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

CoralPort_Harbor_Text_YourHiddenPowerHasAwoken:
	.string "Oh! Splendid!\n"
	.string "Your hidden power has awoken!\p"
	.string "Here, take this and awaken the hidden\n"
	.string "power of your POKéMON.$"

CoralPort_Harbor_Text_ExplainHiddenPower:
	.string "HIDDEN POWER is a move that changes\n"
	.string "with the POKéMON.$"

CoralPort_Harbor_Text_YouGuessedWrong:
	.string "No, too bad.\n"
	.string "You guessed wrong.$"

