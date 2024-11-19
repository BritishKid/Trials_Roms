GranitePeakTown_House3_MapScripts::
	.byte 0


GranitePeakTown_House3_Trader::
# 5 "data/maps/GranitePeakTown_House3/scripts.pory"
	lockall
# 6 "data/maps/GranitePeakTown_House3/scripts.pory"
	faceplayer
# 7 "data/maps/GranitePeakTown_House3/scripts.pory"
	goto_if_set FLAG_GRANITEPEAK_TRADE_COMPLETED, GranitePeakTown_House3_Trader_2
GranitePeakTown_House3_Trader_1:
# 10 "data/maps/GranitePeakTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MAGNEMITE
# 11 "data/maps/GranitePeakTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 12 "data/maps/GranitePeakTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 13 "data/maps/GranitePeakTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 14 "data/maps/GranitePeakTown_House3/scripts.pory"
	msgbox GranitePeakTown_House3_Trader_Text_0
# 15 "data/maps/GranitePeakTown_House3/scripts.pory"
	msgbox GranitePeakTown_House3_Trader_Text_1, MSGBOX_YESNO
# 16 "data/maps/GranitePeakTown_House3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_House3_Trader_5
GranitePeakTown_House3_Trader_4:
# 19 "data/maps/GranitePeakTown_House3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_House3_Trader_8
GranitePeakTown_House3_Trader_7:
# 41 "data/maps/GranitePeakTown_House3/scripts.pory"
	releaseall
	return

GranitePeakTown_House3_Trader_2:
# 8 "data/maps/GranitePeakTown_House3/scripts.pory"
	goto GranitePeakTown_TradeCompleted
	goto GranitePeakTown_House3_Trader_1

GranitePeakTown_House3_Trader_5:
# 17 "data/maps/GranitePeakTown_House3/scripts.pory"
	goto GranitePeak_TradeDeclined
	goto GranitePeakTown_House3_Trader_4

GranitePeakTown_House3_Trader_8:
# 20 "data/maps/GranitePeakTown_House3/scripts.pory"
	special ChoosePartyMon
# 21 "data/maps/GranitePeakTown_House3/scripts.pory"
	waitstate
# 22 "data/maps/GranitePeakTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 23 "data/maps/GranitePeakTown_House3/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq GranitePeakTown_House3_Trader_11
GranitePeakTown_House3_Trader_10:
# 26 "data/maps/GranitePeakTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 27 "data/maps/GranitePeakTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 28 "data/maps/GranitePeakTown_House3/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 29 "data/maps/GranitePeakTown_House3/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne GranitePeakTown_House3_Trader_14
# 33 "data/maps/GranitePeakTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 34 "data/maps/GranitePeakTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 35 "data/maps/GranitePeakTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 36 "data/maps/GranitePeakTown_House3/scripts.pory"
	special DoInGameTradeScene
# 37 "data/maps/GranitePeakTown_House3/scripts.pory"
	waitstate
# 38 "data/maps/GranitePeakTown_House3/scripts.pory"
	msgbox GranitePeakTown_House3_Trader_Text_3
# 39 "data/maps/GranitePeakTown_House3/scripts.pory"
	setflag FLAG_GRANITEPEAK_TRADE_COMPLETED
	goto GranitePeakTown_House3_Trader_7

GranitePeakTown_House3_Trader_11:
# 24 "data/maps/GranitePeakTown_House3/scripts.pory"
	goto GranitePeak_TradeDeclined
	goto GranitePeakTown_House3_Trader_10

GranitePeakTown_House3_Trader_14:
# 30 "data/maps/GranitePeakTown_House3/scripts.pory"
	msgbox GranitePeakTown_House3_Trader_Text_2
	end


GranitePeak_TradeDeclined::
# 45 "data/maps/GranitePeakTown_House3/scripts.pory"
	msgbox GranitePeak_TradeDeclined_Text_0
# 46 "data/maps/GranitePeakTown_House3/scripts.pory"
	releaseall
	return


GranitePeakTown_TradeCompleted::
# 50 "data/maps/GranitePeakTown_House3/scripts.pory"
	msgbox GranitePeakTown_TradeCompleted_Text_0
# 51 "data/maps/GranitePeakTown_House3/scripts.pory"
	releaseall
	return


GranitePeakTown_House3_Trader_Text_0:
# 14 "data/maps/GranitePeakTown_House3/scripts.pory"
	.string "The Pokemon on this Island are so\n"
	.string "different than my old home but I don't\l"
	.string "get much time to go out and catch them.$"

GranitePeakTown_House3_Trader_Text_1:
# 15 "data/maps/GranitePeakTown_House3/scripts.pory"
	.string "If you had a {STR_VAR_1} I would\n"
	.string "love to trade it for my {STR_VAR_2}!$"

GranitePeakTown_House3_Trader_Text_2:
# 30 "data/maps/GranitePeakTown_House3/scripts.pory"
	.string "That's a wierd looking {STR_VAR_1}$"

GranitePeakTown_House3_Trader_Text_3:
# 38 "data/maps/GranitePeakTown_House3/scripts.pory"
	.string "Thank you! I will take good care of\n"
	.string "Marill, make sure you look after AMPERE.$"

GranitePeak_TradeDeclined_Text_0:
# 45 "data/maps/GranitePeakTown_House3/scripts.pory"
	.string "Oh that's a shame.$"

GranitePeakTown_TradeCompleted_Text_0:
# 50 "data/maps/GranitePeakTown_House3/scripts.pory"
	.string "Your Marill is doing well!$"
