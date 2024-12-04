MossdeepCity_House2_MapScripts::
	.byte 0


MossdeepCity_House2_EventScript_Man::
# 6 "data/maps/MossdeepCity_House2/scripts.pory"
	lockall
# 7 "data/maps/MossdeepCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_EventScript_Man_Text_0
# 9 "data/maps/MossdeepCity_House2/scripts.pory"
	releaseall
	return


HemlockCity_Child_InHouse2::
# 13 "data/maps/MossdeepCity_House2/scripts.pory"
	lockall
# 14 "data/maps/MossdeepCity_House2/scripts.pory"
	faceplayer
# 15 "data/maps/MossdeepCity_House2/scripts.pory"
	goto_if_set FLAG_HEMLOCK_NPC_TRADE_COMPLETED, HemlockCity_Child_InHouse2_2
HemlockCity_Child_InHouse2_1:
# 18 "data/maps/MossdeepCity_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MUDBRAY
# 19 "data/maps/MossdeepCity_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 20 "data/maps/MossdeepCity_House2/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 21 "data/maps/MossdeepCity_House2/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 22 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockCity_Child_InHouse2_Text_0, MSGBOX_YESNO
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq HemlockCity_Child_InHouse2_5
HemlockCity_Child_InHouse2_4:
# 26 "data/maps/MossdeepCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HemlockCity_Child_InHouse2_8
HemlockCity_Child_InHouse2_7:
# 48 "data/maps/MossdeepCity_House2/scripts.pory"
	releaseall
	return

HemlockCity_Child_InHouse2_2:
# 16 "data/maps/MossdeepCity_House2/scripts.pory"
	goto HemlockTown_TradeCompleted
	goto HemlockCity_Child_InHouse2_1

HemlockCity_Child_InHouse2_5:
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	goto HemlockTown_TradeDeclined
	goto HemlockCity_Child_InHouse2_4

HemlockCity_Child_InHouse2_8:
# 27 "data/maps/MossdeepCity_House2/scripts.pory"
	special ChoosePartyMon
# 28 "data/maps/MossdeepCity_House2/scripts.pory"
	waitstate
# 29 "data/maps/MossdeepCity_House2/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 30 "data/maps/MossdeepCity_House2/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HemlockCity_Child_InHouse2_11
HemlockCity_Child_InHouse2_10:
# 33 "data/maps/MossdeepCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 34 "data/maps/MossdeepCity_House2/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 35 "data/maps/MossdeepCity_House2/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 36 "data/maps/MossdeepCity_House2/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne HemlockCity_Child_InHouse2_14
# 40 "data/maps/MossdeepCity_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 41 "data/maps/MossdeepCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 42 "data/maps/MossdeepCity_House2/scripts.pory"
	special CreateInGameTradePokemon
# 43 "data/maps/MossdeepCity_House2/scripts.pory"
	special DoInGameTradeScene
# 44 "data/maps/MossdeepCity_House2/scripts.pory"
	waitstate
# 45 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockCity_Child_InHouse2_Text_2
# 46 "data/maps/MossdeepCity_House2/scripts.pory"
	setflag FLAG_HEMLOCK_NPC_TRADE_COMPLETED
	goto HemlockCity_Child_InHouse2_7

HemlockCity_Child_InHouse2_11:
# 31 "data/maps/MossdeepCity_House2/scripts.pory"
	goto HemlockTown_TradeDeclined
	goto HemlockCity_Child_InHouse2_10

HemlockCity_Child_InHouse2_14:
# 37 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockCity_Child_InHouse2_Text_1
	end


HemlockTown_TradeDeclined::
# 52 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockTown_TradeDeclined_Text_0
# 53 "data/maps/MossdeepCity_House2/scripts.pory"
	releaseall
	return


HemlockTown_TradeCompleted::
# 57 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockTown_TradeCompleted_Text_0
# 58 "data/maps/MossdeepCity_House2/scripts.pory"
	releaseall
	return


MossdeepCity_House2_EventScript_Man_Text_0:
# 8 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "The Hemlock gym uses powerful Poison\n"
	.string "type Pokémon. Ground Pokémon are great\l"
	.string "against them.$"

HemlockCity_Child_InHouse2_Text_0:
# 22 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "Have you seen the gooey Pokémon\n"
	.string "{STR_VAR_1} nearby? Would you trade\l"
	.string "one for my {STR_VAR_2}?$"

HemlockCity_Child_InHouse2_Text_1:
# 37 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "That's not a gooey enough\n"
	.string "{STR_VAR_1}$"

HemlockCity_Child_InHouse2_Text_2:
# 45 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "Thank you! It's sooo goooey.$"

HemlockTown_TradeDeclined_Text_0:
# 52 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "..oh..$"

HemlockTown_TradeCompleted_Text_0:
# 57 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "Your Gooey is doing well!$"
