BreakwaterPort_MegaTower_GF_MapScripts::
# 2 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BreakwaterPort_MegaTower_GF_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BreakwaterPort_MegaTower_GF_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER1F_TRAINER1
# 5 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER1F_TRAINER2
# 6 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER1F_TRAINERACE
# 7 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER2F_TRAINER1
# 8 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER2F_TRAINER2
# 9 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER2F_TRAINERACE
# 10 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER3F_TRAINER1
# 11 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER3F_TRAINER2
# 12 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER3F_TRAINERACE
# 13 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER4F_TRAINER1
# 14 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER4F_TRAINER2
# 15 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER4F_TRAINERACE
# 16 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER5F_TRAINERACE1
# 17 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER5F_TRAINERACE2
# 18 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER5F_TRAINERACE3
# 19 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER5F_TRAINERACE4
# 20 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	cleartrainerflag MEGATOWER5F_TRAINEREXPERT
# 21 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	setflag FLAG_HIDE_EXPERT_MEGATOWER
	return


MegaTower_EventScript_OldMindy::
# 26 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 27 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	faceplayer
# 28 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	goto_if_set FLAG_MEGATOWER_NPC_TRADE_COMPLETED, MegaTower_EventScript_OldMindy_2
MegaTower_EventScript_OldMindy_1:
# 31 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HAUNTER
# 32 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 33 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 34 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 35 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_EventScript_OldMindy_Text_0, MSGBOX_YESNO
# 36 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MegaTower_EventScript_OldMindy_5
MegaTower_EventScript_OldMindy_4:
# 39 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MegaTower_EventScript_OldMindy_8
MegaTower_EventScript_OldMindy_7:
# 60 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return

MegaTower_EventScript_OldMindy_2:
# 29 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	goto MegaTower_OldMindy_TradeComplete
	goto MegaTower_EventScript_OldMindy_1

MegaTower_EventScript_OldMindy_5:
# 37 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	goto MegaTower_TradeDeclined
	goto MegaTower_EventScript_OldMindy_4

MegaTower_EventScript_OldMindy_8:
# 40 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	special ChoosePartyMon
# 41 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	waitstate
# 42 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 43 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MegaTower_EventScript_OldMindy_11
MegaTower_EventScript_OldMindy_10:
# 46 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 47 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 48 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 49 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne MegaTower_EventScript_OldMindy_14
MegaTower_EventScript_OldMindy_13:
# 52 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 53 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 54 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	special CreateInGameTradePokemon
# 55 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	special DoInGameTradeScene
# 56 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	waitstate
# 57 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_EventScript_OldMindy_Text_2
# 58 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	setflag FLAG_MEGATOWER_NPC_TRADE_COMPLETED
	goto MegaTower_EventScript_OldMindy_7

MegaTower_EventScript_OldMindy_11:
# 44 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	goto MegaTower_TradeDeclined
	goto MegaTower_EventScript_OldMindy_10

MegaTower_EventScript_OldMindy_14:
# 50 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_EventScript_OldMindy_Text_1
	goto MegaTower_EventScript_OldMindy_13


MegaTower_TradeDeclined::
# 64 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_TradeDeclined_Text_0
# 65 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return


MegaTower_OldMindy_TradeComplete::
# 69 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_OldMindy_TradeComplete_Text_0
	return


MegaTower_CoolTrainer_M::
# 73 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 74 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	faceplayer
# 75 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_CoolTrainer_M_Text_0
# 76 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return


MegaTower_CoolTrainer_F::
# 80 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 81 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	faceplayer
# 82 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_CoolTrainer_F_Text_0
# 83 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return


MegaTower_BugTrainer::
# 87 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 88 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	faceplayer
# 89 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_BugTrainer_Text_0
# 90 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return


MegaTower_SeedPot::
# 94 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 95 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_SeedPot_Text_0
# 96 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MIRACLE_SEED, MegaTower_SeedPot_2
MegaTower_SeedPot_1:
# 103 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return

MegaTower_SeedPot_2:
# 97 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_SeedPot_Text_1, MSGBOX_YESNO
# 98 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MegaTower_SeedPot_4
	goto MegaTower_SeedPot_1

MegaTower_SeedPot_4:
# 99 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 100 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
	goto MegaTower_SeedPot_1


MegaTower_FirstTimeTrigger::
# 107 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 108 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	applymovement 5, MegaTower_GreeterShock
# 109 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	waitmovement 5
# 110 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	call MegaTower_FirstTime_Explained
# 111 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return


MegaTower_Greeter::
# 115 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 116 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	faceplayer
# 117 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	compare VAR_MEGATOWER_STATE, 1
	goto_if_gt MegaTower_Greeter_2
MegaTower_Greeter_1:
# 120 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	compare VAR_MEGATOWER_STATE, 1
	goto_if_eq MegaTower_Greeter_5
MegaTower_Greeter_4:
# 123 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return

MegaTower_Greeter_2:
# 118 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_Greeter_Text_0
	goto MegaTower_Greeter_1

MegaTower_Greeter_5:
# 121 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	call MegaTower_FirstTime_Explained
	goto MegaTower_Greeter_4


MegaTower_FirstTime_Explained::
# 127 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_FirstTime_Explained_Text_0
# 128 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_FirstTime_Explained_Text_1
# 129 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_FirstTime_Explained_Text_2
# 130 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_FirstTime_Explained_Text_3
# 131 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	setvar VAR_MEGATOWER_STATE, 2
# 132 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return


MegaTower_NoticeBoard::
# 136 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 137 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTower_NoticeBoard_Text_0
# 138 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return


Megatower_EventScript_Mat::
# 142 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	lockall
# 143 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	faceplayer
# 144 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	trainerbattle_single MEGATOWER_MAT, MegaTower_MatIntro, MegaTower_MatOutro, MegaTowerMat_PostScript
# 145 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTowerMat_PostBattle
# 146 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	releaseall
	return


MegaTowerMat_PostScript::
# 150 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	msgbox MegaTowerMat_PostScript_Text_0
# 151 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	setflag FLAG_HIDE_MAT_MEGA_MANSION
# 152 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	setvar VAR_MAT_STATE, 3
	return


# 157 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
MegaTower_GreeterShock:
# 158 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	emote_exclamation_mark
# 159 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	face_right
	step_end

MegaTower_EventScript_OldMindy_Text_0:
# 35 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "Do you have a {STR_VAR_1}, I'll trade\n"
	.string "it for my {STR_VAR_2}?$"

MegaTower_EventScript_OldMindy_Text_1:
# 50 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "That's not a {STR_VAR_1}.$"

MegaTower_EventScript_OldMindy_Text_2:
# 57 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "Have you noticed {STR_VAR_2} didn't\n"
	.string "evolve? In TRIVER some Pokemon don't\l"
	.string "evolve through trade but instead from\l"
	.string "a special item. Check it out it will be\l"
	.string "holding that item.$"

MegaTower_TradeDeclined_Text_0:
# 64 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "That's a shame...$"

MegaTower_OldMindy_TradeComplete_Text_0:
# 69 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "I have a sister in Sinnoh, but I haven't\n"
	.string "heard much from her lately.$"

MegaTower_CoolTrainer_M_Text_0:
# 75 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "That old lady is from Sinnoh, and she\n"
	.string "keeps trying to give me a Haunter.$"

MegaTower_CoolTrainer_F_Text_0:
# 82 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "My boyfriend and I keep training but\n"
	.string "not many places in Triver allow for\l"
	.string "double battles.$"

MegaTower_BugTrainer_Text_0:
# 89 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "I put a seed in here every day and\n"
	.string "nothing has grown all year...$"

MegaTower_SeedPot_Text_0:
# 95 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "It's a pot full of seeds but no dirt$"

MegaTower_SeedPot_Text_1:
# 97 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "Take one?$"

MegaTower_Greeter_Text_0:
# 118 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "Remember once you start, you have to\n"
	.string "beat the challenge in one go.$"

MegaTower_FirstTime_Explained_Text_0:
# 127 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "Hey Champ! Welcome to the Mega Tower.$"

MegaTower_FirstTime_Explained_Text_1:
# 128 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "You're about to take on a gauntlet of\n"
	.string "strong trainer, each one the master of\l"
	.string "their own domain. It's no easy feat.$"

MegaTower_FirstTime_Explained_Text_2:
# 129 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "Once you enter you will have to beat it\n"
	.string "in one go, you can leave at any time but\l"
	.string "you'll be sent back here to try again.$"

MegaTower_FirstTime_Explained_Text_3:
# 130 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "Most trainers don't make it through all\n"
	.string "four floors, so best of luck!$"

MegaTower_NoticeBoard_Text_0:
# 137 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "It's a list of everyone who's ever\n"
	.string "beaten the Mega Tower.$"

MegaTowerMat_PostScript_Text_0:
# 150 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "No matter how oiften you beat me I'm\n"
	.string "going to get stronger and beat you.$"

MegaTower_MatIntro::
# 164 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "It's you, hello!\l"
	.string "My name may not have made it on to the\l"
	.string "cup at school but my name is here nad\l"
	.string "it's amazing!\l"
	.string "Here why don't I show you.$"

MegaTower_MatOutro::
# 168 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "You never cease to amaze me.$"

MegaTowerMat_PostBattle::
# 172 "data/maps/BreakwaterPort_MegaTower_GF/scripts.pory"
	.string "Losing doesn't matter too much, I'll\n"
	.string "still become a Champion!$"
