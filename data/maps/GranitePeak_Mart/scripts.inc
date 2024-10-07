GranitePeak_Mart_MapScripts::
	.byte 0


GranitePeak_EventScript_MartClerk::
# 5 "data/maps/GranitePeak_Mart/scripts.pory"
	lockall
# 6 "data/maps/GranitePeak_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/GranitePeak_Mart/scripts.pory"
	msgbox GranitePeak_EventScript_MartClerk_Text_0
# 8 "data/maps/GranitePeak_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/GranitePeak_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, GranitePeak_EventScript_MartClerk_2
# 13 "data/maps/GranitePeak_Mart/scripts.pory"
	pokemart GranitePeakMart_Items_LessThanSixBadges
GranitePeak_EventScript_MartClerk_1:
# 15 "data/maps/GranitePeak_Mart/scripts.pory"
	msgbox GranitePeak_EventScript_MartClerk_Text_1
# 16 "data/maps/GranitePeak_Mart/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_MartClerk_2:
# 10 "data/maps/GranitePeak_Mart/scripts.pory"
	pokemart GranitePeakMart_Items_LessThanThreeBadges
	goto GranitePeak_EventScript_MartClerk_1


GranitePeak_Mart_EventScript_Boy::
# 20 "data/maps/GranitePeak_Mart/scripts.pory"
	lockall
# 21 "data/maps/GranitePeak_Mart/scripts.pory"
	faceplayer
# 22 "data/maps/GranitePeak_Mart/scripts.pory"
	msgbox GranitePeak_Mart_EventScript_Boy_Text_0
# 23 "data/maps/GranitePeak_Mart/scripts.pory"
	releaseall
	return


GranitePeak_Mart_EventScript_Man::
# 27 "data/maps/GranitePeak_Mart/scripts.pory"
	lockall
# 28 "data/maps/GranitePeak_Mart/scripts.pory"
	faceplayer
# 29 "data/maps/GranitePeak_Mart/scripts.pory"
	msgbox GranitePeak_Mart_EventScript_Man_Text_0
# 30 "data/maps/GranitePeak_Mart/scripts.pory"
	releaseall
	return


GranitePeak_Mart_EventScript_Woman::
# 34 "data/maps/GranitePeak_Mart/scripts.pory"
	lockall
# 35 "data/maps/GranitePeak_Mart/scripts.pory"
	faceplayer
# 36 "data/maps/GranitePeak_Mart/scripts.pory"
	msgbox GranitePeak_Mart_EventScript_Woman_Text_0
# 37 "data/maps/GranitePeak_Mart/scripts.pory"
	releaseall
	return


	.align 2
# 41 "data/maps/GranitePeak_Mart/scripts.pory"
GranitePeakMart_Items_LessThanThreeBadges:
# 42 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 43 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 44 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 45 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 46 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_POTION
# 47 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 48 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 49 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 50 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 54 "data/maps/GranitePeak_Mart/scripts.pory"
GranitePeakMart_Items_LessThanSixBadges:
# 55 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 56 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 57 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 58 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 59 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_POTION
# 60 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 61 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 62 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 63 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 64 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 65 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 66 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 67 "data/maps/GranitePeak_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

GranitePeak_EventScript_MartClerk_Text_0:
# 7 "data/maps/GranitePeak_Mart/scripts.pory"
	.string "How may I serve you$"

GranitePeak_EventScript_MartClerk_Text_1:
# 15 "data/maps/GranitePeak_Mart/scripts.pory"
	.string "Please Come Again.$"

GranitePeak_Mart_EventScript_Boy_Text_0:
# 22 "data/maps/GranitePeak_Mart/scripts.pory"
	.string "Did you know as you get more badges\n"
	.string "they can sell you better items?$"

GranitePeak_Mart_EventScript_Man_Text_0:
# 29 "data/maps/GranitePeak_Mart/scripts.pory"
	.string "I'm buying lots of Pokeballs to try and\n"
	.string "get some Electric Pokémon. They are\l"
	.string "really good against the water gym\l"
	.string "leader by the coast.$"

GranitePeak_Mart_EventScript_Woman_Text_0:
# 36 "data/maps/GranitePeak_Mart/scripts.pory"
	.string "The market is expensive, sometimes it's\n"
	.string "just better to grow berries.$"
