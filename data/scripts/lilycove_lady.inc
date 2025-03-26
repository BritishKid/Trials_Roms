.set LOCALID_LILYCOVE_LADY, 4
.set LOCALID_LADYS_MON, 5

BreakwaterPort_PokemonCenter_1F_EventScript_LilycoveLady::
	special Script_GetLilycoveLadyId
	switch VAR_RESULT
	case LILYCOVE_LADY_QUIZ, BreakwaterPort_PokemonCenter_1F_EventScript_QuizLady
	case LILYCOVE_LADY_FAVOR, BreakwaterPort_PokemonCenter_1F_EventScript_FavorLady
	case LILYCOVE_LADY_CONTEST, BreakwaterPort_PokemonCenter_1F_EventScript_ContestLady
	end

BreakwaterPort_PokemonCenter_1F_EventScript_FavorLady::
	lock
	faceplayer
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ImTheFavorLady, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetFavorLadyState
	goto_if_eq VAR_RESULT, LILYCOVE_LADY_STATE_READY, BreakwaterPort_PokemonCenter_1F_EventScript_FavorLadyReady
	goto_if_eq VAR_RESULT, LILYCOVE_LADY_STATE_COMPLETED, BreakwaterPort_PokemonCenter_1F_EventScript_FavorLadyCompleted
	goto_if_eq VAR_RESULT, LILYCOVE_LADY_STATE_PRIZE, BreakwaterPort_PokemonCenter_1F_EventScript_FavorLadyPrize
	end

BreakwaterPort_PokemonCenter_1F_EventScript_FavorLadyCompleted::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ThankYouForLastTime, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_FavorLadyReady::
	special BufferFavorLadyRequest
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ObsessedWithThing, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasAnotherPlayerGivenFavorLadyItem
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_RequestItem
	goto_if_eq VAR_RESULT, TRUE, BreakwaterPort_PokemonCenter_1F_EventScript_TellAboutPlayersItem
	end

BreakwaterPort_PokemonCenter_1F_EventScript_TellAboutPlayersItem::
	special BufferFavorLadyItemName
	special BufferFavorLadyPlayerName
	specialvar VAR_RESULT, DidFavorLadyLikeItem
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_PlayerGaveBadThing
	goto_if_eq VAR_RESULT, TRUE, BreakwaterPort_PokemonCenter_1F_EventScript_PlayerGaveGreatThing
	end

BreakwaterPort_PokemonCenter_1F_EventScript_PlayerGaveBadThing::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_PlayerGaveMeBadThing, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_RequestItem
	end

BreakwaterPort_PokemonCenter_1F_EventScript_PlayerGaveGreatThing::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_PlayerGaveMeGreatThing, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_RequestItem
	end

BreakwaterPort_PokemonCenter_1F_EventScript_RequestItem::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WillYouShareThing, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_DeclineFavor
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_AcceptFavor
	end

BreakwaterPort_PokemonCenter_1F_EventScript_DeclineFavor::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_IsThatSoGoodbye, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AcceptFavor::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WhatWillYouGiveMe, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_ChooseFavorItem
	end

BreakwaterPort_PokemonCenter_1F_EventScript_ChooseFavorItem::
	fadescreen FADE_TO_BLACK
	setvar VAR_RESULT, 0
	special Script_FavorLadyOpenBagMenu
	waitstate
	goto_if_eq VAR_RESULT, 0, BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitChooseFavorItem
	goto_if_eq VAR_RESULT, 1, BreakwaterPort_PokemonCenter_1F_EventScript_GiveFavorItem
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitChooseFavorItem::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_NotWillingToShare, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_DeclineFavor
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_ChooseFavorItem
	end

BreakwaterPort_PokemonCenter_1F_EventScript_GiveFavorItem::
	specialvar VAR_RESULT, Script_DoesFavorLadyLikeItem
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_DidntLikeFavorItem
	goto_if_eq VAR_RESULT, TRUE, BreakwaterPort_PokemonCenter_1F_EventScript_CheckLovedItem
	end

BreakwaterPort_PokemonCenter_1F_EventScript_DidntLikeFavorItem::
	special BufferFavorLadyRequest
	msgbox BreakwaterPort_PokemonCenter_1F_Text_IllTryToCherishIt, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_CheckLovedItem::
	specialvar VAR_RESULT, IsFavorLadyThresholdMet
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_LikedFavorItem
	goto_if_eq VAR_RESULT, TRUE, BreakwaterPort_PokemonCenter_1F_EventScript_LovedFavorItem
	end

BreakwaterPort_PokemonCenter_1F_EventScript_LikedFavorItem::
	special BufferFavorLadyRequest
	msgbox BreakwaterPort_PokemonCenter_1F_Text_IWillCherishThis, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_LovedFavorItem::
	special BufferFavorLadyRequest
	msgbox BreakwaterPort_PokemonCenter_1F_Text_IWillTreasureThis, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_FavorLadyPrize
	end

BreakwaterPort_PokemonCenter_1F_EventScript_FavorLadyPrize::
	setvar VAR_0x8004, 0
	specialvar VAR_0x8004, FavorLadyGetPrize
	msgbox BreakwaterPort_PokemonCenter_1F_Text_IllGiveYouThisInReturn, MSGBOX_DEFAULT
	giveitem VAR_0x8004
	goto_if_eq VAR_RESULT, 0, BreakwaterPort_PokemonCenter_1F_EventScript_NoRoomForFavorPrize
	goto_if_eq VAR_RESULT, 1, BreakwaterPort_PokemonCenter_1F_EventScript_ReceivedFavorPrize
	end

BreakwaterPort_PokemonCenter_1F_EventScript_NoRoomForFavorPrize::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_YouDontHaveSpaceForIt, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_ReceivedFavorPrize::
	special SetFavorLadyState_Complete
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_QuizLady::
	lock
	faceplayer
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ImTheQuizLady, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetQuizLadyState
	goto_if_eq VAR_RESULT, LILYCOVE_LADY_STATE_READY, BreakwaterPort_PokemonCenter_1F_EventScript_HasQuiz
	goto_if_eq VAR_RESULT, LILYCOVE_LADY_STATE_COMPLETED, BreakwaterPort_PokemonCenter_1F_EventScript_CheckMadeQuiz
	goto_if_eq VAR_RESULT, LILYCOVE_LADY_STATE_PRIZE, BreakwaterPort_PokemonCenter_1F_EventScript_ReadyGivePrize
	end

BreakwaterPort_PokemonCenter_1F_EventScript_HasQuiz::
	specialvar VAR_RESULT, GetQuizAuthor
	goto_if_eq VAR_RESULT, QUIZ_AUTHOR_PLAYER, BreakwaterPort_PokemonCenter_1F_EventScript_WaitingToTakeYourQuiz
	goto_if_eq VAR_RESULT, QUIZ_AUTHOR_OTHER_PLAYER, BreakwaterPort_PokemonCenter_1F_EventScript_PlayerQuizReady
	goto_if_eq VAR_RESULT, QUIZ_AUTHOR_LADY, BreakwaterPort_PokemonCenter_1F_EventScript_LadyQuizReady
	end

BreakwaterPort_PokemonCenter_1F_EventScript_CheckMadeQuiz::
	specialvar VAR_RESULT, IsQuizLadyWaitingForChallenger
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_AskMakeQuiz
	goto_if_eq VAR_RESULT, TRUE, BreakwaterPort_PokemonCenter_1F_EventScript_WaitingToTakeYourQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_WaitingToTakeYourQuiz::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WaitingToTakeYourQuiz, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_PlayerQuizReady::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WaitingForChallenger, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_AskTakeQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_LadyQuizReady::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WaitingForChallenger, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_AskTakeQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AskTakeQuiz::
	setvar VAR_0x8004, 0
	msgbox BreakwaterPort_PokemonCenter_1F_Text_TakeQuizChallenge, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_TakeQuiz
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_DeclineQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_DeclineQuiz::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_HowBoringBye, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_TakeQuiz::
	special ClearQuizLadyPlayerAnswer
	goto_if_eq VAR_0x8004, 0, BreakwaterPort_PokemonCenter_1F_EventScript_ShowQuestion
	goto_if_eq VAR_0x8004, EASY_CHAT_TYPE_QUIZ_ANSWER, BreakwaterPort_PokemonCenter_1F_EventScript_GetAnswer

BreakwaterPort_PokemonCenter_1F_EventScript_CheckQuizTakingState::
	goto_if_eq VAR_RESULT, 0, BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitQuiz
	goto_if_eq VAR_RESULT, 1, BreakwaterPort_PokemonCenter_1F_EventScript_SubmitQuizResponse
	end

BreakwaterPort_PokemonCenter_1F_EventScript_ShowQuestion::
	special QuizLadyShowQuizQuestion
	waitstate
	goto BreakwaterPort_PokemonCenter_1F_EventScript_CheckQuizTakingState
	end

BreakwaterPort_PokemonCenter_1F_EventScript_GetAnswer::
	special QuizLadyGetPlayerAnswer
	waitstate
	goto BreakwaterPort_PokemonCenter_1F_EventScript_CheckQuizTakingState
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitQuiz::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_YoureGoingToQuit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_QuitTakingQuiz
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_TakeQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_QuitTakingQuiz::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_TakeTheQuizAnotherTime, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_SubmitQuizResponse::
	special SetQuizLadyState_Complete
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WaitForAnswer, MSGBOX_DEFAULT
	specialvar VAR_RESULT, IsQuizAnswerCorrect
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_IncorrectResponse
	goto_if_eq VAR_RESULT, TRUE, BreakwaterPort_PokemonCenter_1F_EventScript_CorrectResponse
	end

BreakwaterPort_PokemonCenter_1F_EventScript_CorrectResponse::
	playse SE_SUCCESS
	delay 10
	playse SE_SUCCESS
	msgbox BreakwaterPort_PokemonCenter_1F_Text_YouGotItRight, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_ReadyGivePrize
	end

BreakwaterPort_PokemonCenter_1F_EventScript_IncorrectResponse::
	special BufferQuizCorrectAnswer
	special BufferQuizPrizeName
	playse SE_FAILURE
	delay 10
	playse SE_FAILURE
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WrongTheCorrectAnswerIs, MSGBOX_DEFAULT
	msgbox BreakwaterPort_PokemonCenter_1F_Text_IGetToKeepPrize, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_AskMakeQuiz
	end

@ VAR_RESULT is essentially ignored, both jumps are identical
BreakwaterPort_PokemonCenter_1F_EventScript_ReadyGivePrize::
	specialvar VAR_RESULT, BufferQuizAuthorNameAndCheckIfLady
	goto_if_eq VAR_RESULT, 1, BreakwaterPort_PokemonCenter_1F_EventScript_GivePrize1
	goto_if_eq VAR_RESULT, 0, BreakwaterPort_PokemonCenter_1F_EventScript_GivePrize0
	end

BreakwaterPort_PokemonCenter_1F_EventScript_GivePrize1::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_YouGotItRightYouveWonPersonsPrize, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_GivePrize
	end

BreakwaterPort_PokemonCenter_1F_EventScript_GivePrize0::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_YouGotItRightYouveWonPersonsPrize, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_GivePrize
	end

BreakwaterPort_PokemonCenter_1F_EventScript_GivePrize::
	setvar VAR_0x8005, 0
	special BufferQuizPrizeItem
	special SetQuizLadyState_Complete
	giveitem VAR_0x8005
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_NoSpaceForQuizPrize
	goto BreakwaterPort_PokemonCenter_1F_EventScript_AskMakeQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_NoSpaceForQuizPrize::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_YourBagIsFilledUp, MSGBOX_DEFAULT
	special SetQuizLadyState_GivePrize
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AskMakeQuiz::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_MakeYourOwnQuiz, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_MakeQuiz
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_DeclineMakeQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_DeclineMakeQuiz::
	special QuizLadyPickNewQuestion
	msgbox BreakwaterPort_PokemonCenter_1F_Text_MaybeNextTime, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_MakeQuiz::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_PickYourPrize, MSGBOX_DEFAULT
BreakwaterPort_PokemonCenter_1F_EventScript_PickPrize::
	fadescreen FADE_TO_BLACK
	setvar VAR_RESULT, 0
	special Script_QuizLadyOpenBagMenu
	waitstate
	goto_if_eq VAR_RESULT, 0, BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitChoosingPrize
	goto_if_eq VAR_RESULT, 1, BreakwaterPort_PokemonCenter_1F_EventScript_WriteQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitChoosingPrize::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_QuitChoosingPrize, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_DeclineMakeQuiz
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_PickPrize
	end

BreakwaterPort_PokemonCenter_1F_EventScript_WriteQuiz::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WriteYourQuiz, MSGBOX_DEFAULT
	special ClearQuizLadyQuestionAndAnswer
	special ClearQuizLadyPlayerAnswer
	setvar VAR_0x8004, EASY_CHAT_TYPE_QUIZ_QUESTION
BreakwaterPort_PokemonCenter_1F_EventScript_WriteQuizQuestion::
	fadescreen FADE_TO_BLACK
	special QuizLadySetCustomQuestion
	waitstate
	goto_if_eq VAR_RESULT, 0, BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitWritingQuizQuestion
	goto BreakwaterPort_PokemonCenter_1F_EventScript_FinishMakingQuiz
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitWritingQuizQuestion::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_QuitWritingQuizQuestion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_DeclineMakeQuiz
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_WriteQuizQuestion
	end

BreakwaterPort_PokemonCenter_1F_EventScript_FinishMakingQuiz::
	special QuizLadyTakePrizeForCustomQuiz
	special QuizLadyRecordCustomQuizData
	special QuizLadySetWaitingForChallenger
	msgbox BreakwaterPort_PokemonCenter_1F_Text_IllLookForAChallenger, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_ContestLady::
	lock
	faceplayer
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ImTheContestLady, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasPlayerGivenContestLadyPokeblock
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_NotGivenPokeblock
	goto_if_eq VAR_RESULT, TRUE, BreakwaterPort_PokemonCenter_1F_EventScript_GivenPokeblock
	end

@ Redundant with above script, VAR_RESULT will always be FALSE here
BreakwaterPort_PokemonCenter_1F_EventScript_NotGivenPokeblock::
	specialvar VAR_RESULT, ShouldContestLadyShowGoOnAir
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_AskForPokeblock
	goto_if_eq VAR_RESULT, TRUE, BreakwaterPort_PokemonCenter_1F_EventScript_GivenPokeblock
	end

BreakwaterPort_PokemonCenter_1F_EventScript_GivenPokeblock::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ThankForPokeblock, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AskForPokeblock::
	special Script_BufferContestLadyCategoryAndMonName
	msgbox BreakwaterPort_PokemonCenter_1F_Text_MyFriendDisplaysQuality, MSGBOX_DEFAULT
	checkitem ITEM_POKEBLOCK_CASE
	goto_if_eq VAR_RESULT, FALSE, BreakwaterPort_PokemonCenter_1F_EventScript_NoPokeblockCase
	msgbox BreakwaterPort_PokemonCenter_1F_Text_AskingForOnePokeblock, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_DeclineGivePokeblock
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_ChoosePokeblock
	end

BreakwaterPort_PokemonCenter_1F_EventScript_DeclineGivePokeblock::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_WhatACheapskate, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_ChoosePokeblock::
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseForContestLady
	waitstate
	goto_if_eq VAR_RESULT, 0xFFFF, BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitGivingPokeblock
	goto_if_ne VAR_RESULT, 0xFFFF, BreakwaterPort_PokemonCenter_1F_EventScript_GivePokeblock
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AskQuitGivingPokeblock::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ICantHaveOnePokeblock, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_PokemonCenter_1F_EventScript_DeclineGivePokeblock
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_PokemonCenter_1F_EventScript_ChoosePokeblock
	end

BreakwaterPort_PokemonCenter_1F_EventScript_GivePokeblock::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_IllUseYourPokeblock, MSGBOX_DEFAULT
	special SetContestLadyGivenPokeblock
	special GetContestLadyMonSpecies
	goto BreakwaterPort_PokemonCenter_1F_EventScript_FeedPokeblock
	end

@ VAR_0x8004 here is the return value from GivePokeblockToContestLady
BreakwaterPort_PokemonCenter_1F_EventScript_FeedPokeblock::
	applymovement LOCALID_LILYCOVE_LADY, BreakwaterPort_PokemonCenter_1F_Movement_LadyFaceMon
	waitmovement 0
	delay 60
	applymovement LOCALID_LADYS_MON, BreakwaterPort_PokemonCenter_1F_Movement_MonFaceLady
	waitmovement 0
	delay 60
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	delay 120
	waitmoncry
	goto_if_eq VAR_0x8004, 1, BreakwaterPort_PokemonCenter_1F_EventScript_MonEnjoyPokeblock
	goto BreakwaterPort_PokemonCenter_1F_EventScript_FinishFeedPokeblock
	end

@ VAR_0x8004 here is the return value from GivePokeblockToContestLady
BreakwaterPort_PokemonCenter_1F_EventScript_MonEnjoyPokeblock::
	applymovement LOCALID_LADYS_MON, BreakwaterPort_PokemonCenter_1F_Movement_MonJump
	waitmovement 0
	delay 60
BreakwaterPort_PokemonCenter_1F_EventScript_FinishFeedPokeblock::
	applymovement LOCALID_LILYCOVE_LADY, BreakwaterPort_PokemonCenter_1F_Movement_LadyFacePlayer
	waitmovement 0
	delay 60
	goto_if_eq VAR_0x8004, 0, BreakwaterPort_PokemonCenter_1F_EventScript_MonDislikedPokeblock
	goto_if_eq VAR_0x8004, 1, BreakwaterPort_PokemonCenter_1F_EventScript_MonLikedPokeblock
	end

BreakwaterPort_PokemonCenter_1F_EventScript_MonDislikedPokeblock::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_NoChangeThanks, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_CheckAirContestLadyShow
	end

BreakwaterPort_PokemonCenter_1F_EventScript_MonLikedPokeblock::
	special Script_BufferContestLadyCategoryAndMonName
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ReallyImprovedThanks, MSGBOX_DEFAULT
	goto BreakwaterPort_PokemonCenter_1F_EventScript_CheckAirContestLadyShow
	end

BreakwaterPort_PokemonCenter_1F_EventScript_CheckAirContestLadyShow::
	specialvar VAR_RESULT, ShouldContestLadyShowGoOnAir
	goto_if_eq VAR_RESULT, 1, BreakwaterPort_PokemonCenter_1F_EventScript_AirContestLadyShow
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_AirContestLadyShow::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_ReadyToEnterContests, MSGBOX_DEFAULT
	special PutLilycoveContestLadyShowOnTheAir
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_NoPokeblockCase::
	msgbox BreakwaterPort_PokemonCenter_1F_Text_DontHaveAPokeblockCase, MSGBOX_DEFAULT
	release
	end

BreakwaterPort_PokemonCenter_1F_Movement_LadyFaceMon:
	face_right
	delay_8
	step_end

BreakwaterPort_PokemonCenter_1F_Movement_MonFaceLady:
	face_left
	delay_8
	step_end

@ Unused
BreakwaterPort_PokemonCenter_1F_Movement_MonFaceDown:
	face_down
	step_end

BreakwaterPort_PokemonCenter_1F_Movement_LadyFacePlayer:
	face_player
	step_end

BreakwaterPort_PokemonCenter_1F_Movement_MonJump:
	disable_jump_landing_ground_effect
	jump_in_place_left
	disable_jump_landing_ground_effect
	jump_in_place_left
	step_end

BreakwaterPort_PokemonCenter_1F_EventScript_ContestLadyMon::
	specialvar VAR_RESULT, GetContestLadyCategory
	special Script_BufferContestLadyCategoryAndMonName
	special GetContestLadyMonSpecies
	goto_if_eq VAR_RESULT, CONTEST_CATEGORY_COOL, BreakwaterPort_PokemonCenter_1F_EventScript_Zigzagoon
	goto_if_eq VAR_RESULT, CONTEST_CATEGORY_BEAUTY, BreakwaterPort_PokemonCenter_1F_EventScript_Skitty
	goto_if_eq VAR_RESULT, CONTEST_CATEGORY_CUTE, BreakwaterPort_PokemonCenter_1F_EventScript_Poochyena
	goto_if_eq VAR_RESULT, CONTEST_CATEGORY_SMART, BreakwaterPort_PokemonCenter_1F_EventScript_Kecleon
	goto_if_eq VAR_RESULT, CONTEST_CATEGORY_TOUGH, BreakwaterPort_PokemonCenter_1F_EventScript_Pikachu
	end

BreakwaterPort_PokemonCenter_1F_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	msgbox BreakwaterPort_PokemonCenter_1F_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	msgbox BreakwaterPort_PokemonCenter_1F_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_Poochyena::
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	msgbox BreakwaterPort_PokemonCenter_1F_Text_Poochyena, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	msgbox BreakwaterPort_PokemonCenter_1F_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BreakwaterPort_PokemonCenter_1F_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	msgbox BreakwaterPort_PokemonCenter_1F_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BreakwaterPort_PokemonCenter_1F_Text_ImTheFavorLady:
	.string "I'm the FAVOR LADY…$"

BreakwaterPort_PokemonCenter_1F_Text_ObsessedWithThing:
	.string "I've recently developed an obsession\n"
	.string "for {STR_VAR_1} things…$"

BreakwaterPort_PokemonCenter_1F_Text_ThankYouForLastTime:
	.string "Oh…\n"
	.string "Thank you for last time…$"

BreakwaterPort_PokemonCenter_1F_Text_PlayerGaveMeBadThing:
	.string "Before, I think it was {STR_VAR_3}…\p"
	.string "{STR_VAR_3} gave me one {STR_VAR_2},\n"
	.string "saying it was {STR_VAR_1}.\p"
	.string "But it wasn't {STR_VAR_1}.\n"
	.string "Not in the least bit.$"

BreakwaterPort_PokemonCenter_1F_Text_PlayerGaveMeGreatThing:
	.string "Before, {STR_VAR_3} gave me a very\n"
	.string "{STR_VAR_1} {STR_VAR_2}.\p"
	.string "I cherish it now.$"

BreakwaterPort_PokemonCenter_1F_Text_WillYouShareThing:
	.string "Listen, if you have anything that\n"
	.string "is {STR_VAR_1}, will you share it\l"
	.string "with me?$"

BreakwaterPort_PokemonCenter_1F_Text_WhatWillYouGiveMe:
	.string "…Really?\n"
	.string "What will you give me?$"

BreakwaterPort_PokemonCenter_1F_Text_IsThatSoGoodbye:
	.string "Is that so?\n"
	.string "Then, it's good-bye…$"

BreakwaterPort_PokemonCenter_1F_Text_NotWillingToShare:
	.string "Oh…\n"
	.string "You're not willing to share?$"

BreakwaterPort_PokemonCenter_1F_Text_IllTryToCherishIt:
	.string "Oh?\n"
	.string "That {STR_VAR_2} is {STR_VAR_1}?\p"
	.string "…Oh, is that right?\p"
	.string "Well, I owe you a thanks anyway.\n"
	.string "I'll try to cherish it…$"

BreakwaterPort_PokemonCenter_1F_Text_IWillCherishThis:
	.string "Oh…\p"
	.string "That's a quite {STR_VAR_1}\n"
	.string "{STR_VAR_2}…\p"
	.string "Isn't it nice?\n"
	.string "It's so dreamy…\p"
	.string "Thank you…\n"
	.string "I will cherish this…$"

BreakwaterPort_PokemonCenter_1F_Text_IWillTreasureThis:
	.string "…Oh, oh, oh…\p"
	.string "This is amazing!\n"
	.string "This really is {STR_VAR_1}!\p"
	.string "I never knew that one {STR_VAR_2}\n"
	.string "could be this {STR_VAR_1}!\p"
	.string "Thank you!\p"
	.string "I will treasure this for the rest\n"
	.string "of my life!$"

BreakwaterPort_PokemonCenter_1F_Text_IllGiveYouThisInReturn:
	.string "I'll give you this wonderful item in\n"
	.string "return for your fabulous gift.\p"
	.string "I hope you will cherish it…$"

BreakwaterPort_PokemonCenter_1F_Text_YouDontHaveSpaceForIt:
	.string "Oh, you can't have it if you don't have\n"
	.string "the space for it.\p"
	.string "Please come see me when you get\n"
	.string "your BAG organized…$"

BreakwaterPort_PokemonCenter_1F_Text_ImTheQuizLady:
	.string "I'm the QUIZ LADY!\n"
	.string "I love quizzes!$"

BreakwaterPort_PokemonCenter_1F_Text_WaitingToTakeYourQuiz:
	.string "Oh?\p"
	.string "I'm waiting for a challenger to answer\n"
	.string "the quiz you made.\p"
	.string "We can chat another time, okay?$"

BreakwaterPort_PokemonCenter_1F_Text_WaitingForChallenger:
	.string "I'm waiting for someone to challenge\n"
	.string "a quiz this {STR_VAR_1} thought up!$"

BreakwaterPort_PokemonCenter_1F_Text_TakeQuizChallenge:
	.string "If you answer correctly, you can win\n"
	.string "fabulous prizes!\p"
	.string "Would you like to take the quiz\n"
	.string "challenge?$"

BreakwaterPort_PokemonCenter_1F_Text_WaitForAnswer:
	.string "… … … … … …\n"
	.string "… … … … … …$"

BreakwaterPort_PokemonCenter_1F_Text_HowBoringBye:
	.string "Oh, how boring!\n"
	.string "Bye-bye!$"

BreakwaterPort_PokemonCenter_1F_Text_YoureGoingToQuit:
	.string "Awww!\n"
	.string "You're going to quit?$"

BreakwaterPort_PokemonCenter_1F_Text_TakeTheQuizAnotherTime:
	.string "Please take the quiz challenge\n"
	.string "another time!$"

BreakwaterPort_PokemonCenter_1F_Text_YouGotItRight:
	.string "You're amazing! You've got it right!\n"
	.string "You're one sharp customer!$"

BreakwaterPort_PokemonCenter_1F_Text_YouGotItRightYouveWonPersonsPrize:
	.string "Congratulations!\n"
	.string "You've got the quiz right!\p"
	.string "You've won a prize provided by\n"
	.string "{STR_VAR_1}!$"

@ Unused
BreakwaterPort_PokemonCenter_1F_Text_XReceivedOneY:
	.string "{STR_VAR_1} received\n"
	.string "one {STR_VAR_2}!$"

BreakwaterPort_PokemonCenter_1F_Text_YourBagIsFilledUp:
	.string "Oh? Your BAG is filled up!\n"
	.string "Come see me when you have room.$"

BreakwaterPort_PokemonCenter_1F_Text_WrongTheCorrectAnswerIs:
	.string "Hmm… Wrong!\n"
	.string "The correct answer is “{STR_VAR_3}”!$"

BreakwaterPort_PokemonCenter_1F_Text_IGetToKeepPrize:
	.string "Too bad!\p"
	.string "I get to keep the quiz prize\n"
	.string "{STR_VAR_1} now!$"

BreakwaterPort_PokemonCenter_1F_Text_MakeYourOwnQuiz:
	.string "Listen, listen!\n"
	.string "Would you like to make your own quiz?$"

BreakwaterPort_PokemonCenter_1F_Text_MaybeNextTime:
	.string "Oh, I see…\n"
	.string "Well, maybe next time!$"

BreakwaterPort_PokemonCenter_1F_Text_PickYourPrize:
	.string "Okay, the first thing you have to do\n"
	.string "is pick the prize for the person that\l"
	.string "answers your quiz correctly.\p"
	.string "But beware, if the person taking\n"
	.string "the quiz can't get it right, I get to\l"
	.string "keep the prize!$"

BreakwaterPort_PokemonCenter_1F_Text_QuitChoosingPrize:
	.string "If you don't choose a prize,\n"
	.string "your quiz can't be made.\p"
	.string "Are you going to quit making\n"
	.string "your quiz?$"

BreakwaterPort_PokemonCenter_1F_Text_WriteYourQuiz:
	.string "Oh, how nice!\n"
	.string "That's a wonderful prize!\p"
	.string "Next, you need to write your quiz\n"
	.string "question and its answer.$"

BreakwaterPort_PokemonCenter_1F_Text_QuitWritingQuizQuestion:
	.string "Are you going to quit writing\n"
	.string "your quiz question?$"

@ Unused
BreakwaterPort_PokemonCenter_1F_Text_QuitWritingQuizAnswer:
	.string "Are you going to quit choosing\n"
	.string "your quiz answer?$"

BreakwaterPort_PokemonCenter_1F_Text_IllLookForAChallenger:
	.string "Thank you!\n"
	.string "You've put together a nice quiz.\p"
	.string "I'll go look for someone who'll take\n"
	.string "your quiz challenge right away.$"

BreakwaterPort_PokemonCenter_1F_Text_ImTheContestLady:
	.string "I'm the CONTEST LADY!\n"
	.string "I sure do love CONTESTS!$"

BreakwaterPort_PokemonCenter_1F_Text_ThankForPokeblock:
	.string "Thanks for your {POKEBLOCK} before!$"

BreakwaterPort_PokemonCenter_1F_Text_MyFriendDisplaysQuality:
	.string "This is my friend {STR_VAR_1}!\n"
	.string "It's the epitome of {STR_VAR_2}!\p"
	.string "But I think that it will display\n"
	.string "even more {STR_VAR_2}!$"

BreakwaterPort_PokemonCenter_1F_Text_DontHaveAPokeblockCase:
	.string "So, I need your help!\p"
	.string "Please, may I have one {POKEBLOCK}?\n"
	.string "All I'm asking for is one!\p"
	.string "…Oh, but…\n"
	.string "Don't you have a {POKEBLOCK} CASE?\l"
	.string "That's no good. Next time, then!$"

BreakwaterPort_PokemonCenter_1F_Text_AskingForOnePokeblock:
	.string "So, I need your help!\p"
	.string "Please, may I have one {POKEBLOCK}?\n"
	.string "All I'm asking for is one!$"

BreakwaterPort_PokemonCenter_1F_Text_ICantHaveOnePokeblock:
	.string "Awww!\n"
	.string "I can't have one {POKEBLOCK}?!$"

BreakwaterPort_PokemonCenter_1F_Text_WhatACheapskate:
	.string "Sheesh!\n"
	.string "What a cheapskate!$"

BreakwaterPort_PokemonCenter_1F_Text_IllUseYourPokeblock:
	.string "Yay!\n"
	.string "Thank you!\p"
	.string "I'll feed my POKéMON your {POKEBLOCK}\n"
	.string "right away.$"

BreakwaterPort_PokemonCenter_1F_Text_NoChangeThanks:
	.string "…It doesn't seem to have changed\n"
	.string "in any way at all…\p"
	.string "Hmm…\p"
	.string "Oh, well!\n"
	.string "Thank you very much!$"

BreakwaterPort_PokemonCenter_1F_Text_ReallyImprovedThanks:
	.string "Oh, yay!\n"
	.string "It's really delighted!\p"
	.string "I think it really improved {STR_VAR_1}'s\n"
	.string "{STR_VAR_2} quality, too.\p"
	.string "Thank you so much!$"

BreakwaterPort_PokemonCenter_1F_Text_ReadyToEnterContests:
	.string "Hmm…\p"
	.string "I think we may be ready to enter\n"
	.string "some CONTESTS.\p"
	.string "If you see us in one somewhere,\n"
	.string "I hope you'll cheer for us.$"

BreakwaterPort_PokemonCenter_1F_Text_Zigzagoon:
	.string "{STR_VAR_1}: Guguuh!$"

BreakwaterPort_PokemonCenter_1F_Text_Kecleon:
	.string "{STR_VAR_1}: Igigigiiih!$"

BreakwaterPort_PokemonCenter_1F_Text_Poochyena:
	.string "{STR_VAR_1}: Baaarun…$"

BreakwaterPort_PokemonCenter_1F_Text_Pikachu:
	.string "{STR_VAR_1}: Pikka!$"

BreakwaterPort_PokemonCenter_1F_Text_Skitty:
	.string "{STR_VAR_1}: Umyaaaan!$"
