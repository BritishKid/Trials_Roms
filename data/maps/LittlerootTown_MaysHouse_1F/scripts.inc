LittlerootTown_MaysHouse_1F_MapScripts::
	.byte 0


BedrockTown_RivalHouse_1F_Meet_Rival1::
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToRivalTable1
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call BedrockTown_MoveAndBattleRival
	return


BedrockTown_RivalHouse_1F_Meet_Rival2::
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToRivalTable2
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call BedrockTown_MoveAndBattleRival
	return


BedrockTown_RivalHouse_1F_Meet_Rival3::
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToRivalTable3
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call BedrockTown_MoveAndBattleRival
	return


BedrockTown_RivalHouse_1F_Meet_Rival4::
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToRivalTable4
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call BedrockTown_MoveAndBattleRival
	return


BedrockTown_MoveAndBattleRival::
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_MoveAndBattleRival_Text_0
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	switch VAR_STARTER_MON
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 0, BedrockTown_MoveAndBattleRival_2
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 1, BedrockTown_MoveAndBattleRival_3
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 2, BedrockTown_MoveAndBattleRival_4
	return

BedrockTown_MoveAndBattleRival_2:
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_RIVAL_HOME_FIRST_TREECKO, RivalHouse_1f_Battle_Intro, RivalHouse_1f_Battle_Outro, BedrockTown_RivalBeaten
	return

BedrockTown_MoveAndBattleRival_3:
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_RIVAL_HOME_FIRST_CYNDAQUIL, RivalHouse_1f_Battle_Intro, RivalHouse_1f_Battle_Outro, BedrockTown_RivalBeaten
	return

BedrockTown_MoveAndBattleRival_4:
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_RIVAL_HOME_FIRST_SQUIRTLE, RivalHouse_1f_Battle_Intro, RivalHouse_1f_Battle_Outro, BedrockTown_RivalBeaten
	return


BedrockTown_RivalBeaten::
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_FIRST_TIME_RIVALS_HOUSE, 1
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PostBattle_Rival_House_Fight, MSGBOX_AUTOCLOSE
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_BEDROCK_RIVAL_HOUSE_RIVAL_BEATEN
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right::
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_0
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_RivalToPlayerRivalHouseRight
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 1
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_1
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_2
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToOutOfRivalWayHouse
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_RivalLeavesRivalHouseRight
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 1
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 1
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_FIRST_TIME_RIVALS_HOUSE, 2
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Left::
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_0
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_RivalToPlayerRivalHouseLeft
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 1
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_1
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_2
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_RivalLeavesRivalHouseRight
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 1
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject 1
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_FIRST_TIME_RIVALS_HOUSE, 2
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


BedrockTown_RivalHouse_RivalChat::
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox BedrockTown_RivalHouse_RivalChat_Text_0
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_PlayerToRivalTable1:
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_up
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_right
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
	step_end

# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_PlayerToRivalTable2:
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_up
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_right
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
	step_end

# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_PlayerToRivalTable3:
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_up
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_right
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
	step_end

# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_PlayerToRivalTable4:
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_up
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_right
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
	step_end

# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_RivalToPlayerRivalHouseRight:
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_down
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_left
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end

# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_RivalToPlayerRivalHouseLeft:
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_down
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_left
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end

# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_PlayerToOutOfRivalWayHouse:
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end

# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_RivalLeavesRivalHouseRight:
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_down
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
Movement_RivalLeavesRivalHouseLeft:
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	face_down
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

RivalHouseGF_EventScript_Fridge::
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseGF_EventScript_Fridge_Text_0
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


RivalHouseGF_EventScript_GlassCase::
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseGF_EventScript_GlassCase_Text_0
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


RivalHouseGF_Comingsoon::
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalHouseGF_Comingsoon_Text_0
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


BedrockTown_RivalHouse_1F_Meet_Rival1_Text_0:
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey you're finally awake!$"

BedrockTown_MoveAndBattleRival_Text_0:
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I see your dad finally gave you a\n"
	.string "Pokémon!It's about time. Now we can do\l"
	.string "that race we always wanted. First one\l"
	.string "to become a champion wins! That's all\l"
	.string "the badges and beating the elite 4.$"

BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_0:
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hold on!$"

BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_1:
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Take this it should help you$"

BedrockTown_RivalHouse_1F_Rival_Gives_Gift_And_Leaves_Right_Text_2:
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Anyway see you later Slowpoke!$"

BedrockTown_RivalHouse_RivalChat_Text_0:
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You got lucky!$"

RivalHouseGF_EventScript_Fridge_Text_0:
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh look it's Brendan's lunch. You add\n"
	.string "some hot sauce to it.$"

RivalHouseGF_EventScript_GlassCase_Text_0:
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "It's full of Maps and books about\n"
	.string "Pokémon$"

RivalHouseGF_Comingsoon_Text_0:
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "COMING SOON Checkout Discord for\n"
	.string "latest updates or give suggestions$"

RivalHouse_1f_Battle_Intro::
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Anyway I gotta see how good that little\n"
	.string "runt of yours is, if you can't beat me\l"
	.string "you may as well give up now.$"

RivalHouse_1f_Battle_Outro::
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Haha well done, but remember I went\n"
	.string "easy on you so you don't cry$"

PostBattle_Rival_House_Fight::
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm just going to get everything\n"
	.string "together and then I'm going to go get\l"
	.string "my first badge!$"
