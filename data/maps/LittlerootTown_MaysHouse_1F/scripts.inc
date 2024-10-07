LittlerootTown_MaysHouse_1F_MapScripts::
	.byte 0


BedrockTown_RivalHouse_1F_Meet_Rival1::
	lockall
	msgbox BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToRivalTable1
	waitmovement OBJ_EVENT_ID_PLAYER
	call BedrockTown_MoveAndBattleRival
	return


BedrockTown_RivalHouse_1F_Meet_Rival2::
	lockall
	msgbox BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToRivalTable2
	waitmovement OBJ_EVENT_ID_PLAYER
	call BedrockTown_MoveAndBattleRival
	return


BedrockTown_RivalHouse_1F_Meet_Rival3::
	lockall
	msgbox BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToRivalTable3
	waitmovement OBJ_EVENT_ID_PLAYER
	call BedrockTown_MoveAndBattleRival
	return


BedrockTown_RivalHouse_1F_Meet_Rival4::
	lockall
	msgbox BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToRivalTable4
	waitmovement OBJ_EVENT_ID_PLAYER
	call BedrockTown_MoveAndBattleRival
	return


BedrockTown_MoveAndBattleRival::
	msgbox BedrockTown_MoveAndBattleRival_Text_0
	switch VAR_STARTER_MON
	case 0, BedrockTown_MoveAndBattleRival_2
	case 1, BedrockTown_MoveAndBattleRival_3
	case 2, BedrockTown_MoveAndBattleRival_4
	return

BedrockTown_MoveAndBattleRival_2:
	trainerbattle_single TRAINER_RIVAL_RIVAL_HOME_FIRST_TREECKO, RivalHouse_1f_Battle_Intro, RivalHouse_1f_Battle_Outro, BedrockTown_RivalBeaten
	return

BedrockTown_MoveAndBattleRival_3:
	trainerbattle_single TRAINER_RIVAL_RIVAL_HOME_FIRST_CYNDAQUIL, RivalHouse_1f_Battle_Intro, RivalHouse_1f_Battle_Outro, BedrockTown_RivalBeaten
	return

BedrockTown_MoveAndBattleRival_4:
	trainerbattle_single TRAINER_RIVAL_RIVAL_HOME_FIRST_SQUIRTLE, RivalHouse_1f_Battle_Intro, RivalHouse_1f_Battle_Outro, BedrockTown_RivalBeaten
	return


BedrockTown_RivalBeaten::
	setvar VAR_FIRST_TIME_RIVALS_HOUSE, 1
	msgbox PostBattle_Rival_House_Fight, MSGBOX_AUTOCLOSE
	setflag FLAG_BEDROCK_RIVAL_HOUSE_RIVAL_BEATEN
	releaseall
	return


BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right::
	lockall
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_0
	applymovement 1, Movement_RivalToPlayerRivalHouseRight
	waitmovement 1
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_1
	giveitem ITEM_EXP_SHARE, 1
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToOutOfRivalWayHouse
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Movement_RivalLeavesRivalHouseRight
	waitmovement 1
	removeobject 1
	setvar VAR_FIRST_TIME_RIVALS_HOUSE, 2
	releaseall
	return


BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Left::
	lockall
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_0
	applymovement 1, Movement_RivalToPlayerRivalHouseLeft
	waitmovement 1
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_1
	giveitem ITEM_EXP_SHARE, 1
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_2
	applymovement 1, Movement_RivalLeavesRivalHouseRight
	waitmovement 1
	removeobject 1
	setvar VAR_FIRST_TIME_RIVALS_HOUSE, 2
	releaseall
	return


BedrockTown_RivalHouse_RivalChat::
	lockall
	msgbox BedrockTown_RivalHouse_RivalChat_Text_0
	releaseall
	return


Movement_PlayerToRivalTable1:
	face_up
	walk_up
	walk_up
	face_right
	walk_right
	walk_right
	step_end

Movement_PlayerToRivalTable2:
	face_up
	walk_up
	face_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_PlayerToRivalTable3:
	face_up
	walk_up
	face_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_PlayerToRivalTable4:
	face_up
	walk_up
	walk_up
	face_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_RivalToPlayerRivalHouseRight:
	face_down
	walk_down
	walk_down
	face_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_RivalToPlayerRivalHouseLeft:
	face_down
	walk_down
	walk_down
	face_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_PlayerToOutOfRivalWayHouse:
	walk_left
	step_end

Movement_RivalLeavesRivalHouseRight:
	walk_left
	face_down
	walk_down
	step_end

Movement_RivalLeavesRivalHouseLeft:
	face_down
	walk_down
	step_end

RivalHouseGF_EventScript_Fridge::
	lockall
	msgbox RivalHouseGF_EventScript_Fridge_Text_0
	releaseall
	return


RivalHouseGF_EventScript_GlassCase::
	lockall
	msgbox RivalHouseGF_EventScript_GlassCase_Text_0
	releaseall
	return


RivalHouseGF_Comingsoon::
	lockall
	msgbox RivalHouseGF_Comingsoon_Text_0
	releaseall
	return


BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0:
	.string "Hey you're finally awake!$"

BedrockTown_MoveAndBattleRival_Text_0:
	.string "I see your dad finally gave you a\n"
	.string "Pokémon!It's about time. Now we can do\l"
	.string "that race we always wanted. First one\l"
	.string "to become a champion wins! That's all\l"
	.string "the badges and beating the elite 4.$"

BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_0:
	.string "Hold on!$"

BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_1:
	.string "Take this it should help you$"

BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_2:
	.string "Anyway see you later Slowpoke!$"

BedrockTown_RivalHouse_RivalChat_Text_0:
	.string "You got lucky!$"

RivalHouseGF_EventScript_Fridge_Text_0:
	.string "Oh look it's Brendan's lunch. You add\n"
	.string "some hot sauce to it.$"

RivalHouseGF_EventScript_GlassCase_Text_0:
	.string "It's full of Maps and books about\n"
	.string "Pokémon$"

RivalHouseGF_Comingsoon_Text_0:
	.string "COMING SOON Checkout Discord for\n"
	.string "latest updates or give suggestions$"

RivalHouse_1f_Battle_Intro::
	.string "Anyway I gotta see how good that little\n"
	.string "runt of yours is, if you can't beat me\l"
	.string "you may as well give up now.$"

RivalHouse_1f_Battle_Outro::
	.string "Haha well done, but remember I went\n"
	.string "easy on you so you don't cry$"

PostBattle_Rival_House_Fight::
	.string "I'm just going to get everything\n"
	.string "together and then I'm going to go get\l"
	.string "my first badge!$"
