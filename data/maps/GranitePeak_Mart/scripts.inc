GranitePeak_Mart_MapScripts::
	.byte 0


GranitePeak_EventScript_MartClerk::
	lockall
	faceplayer
	msgbox GranitePeak_EventScript_MartClerk_Text_0
	waitmessage
	goto_if_unset FLAG_BADGE03_GET, GranitePeak_EventScript_MartClerk_2
	pokemart GranitePeakMart_Items_LessThanSixBadges
GranitePeak_EventScript_MartClerk_1:
	msgbox GranitePeak_EventScript_MartClerk_Text_1
	releaseall
	return

GranitePeak_EventScript_MartClerk_2:
	pokemart GranitePeakMart_Items_LessThanThreeBadges
	goto GranitePeak_EventScript_MartClerk_1


GranitePeak_Mart_EventScript_Boy::
	lockall
	faceplayer
	msgbox GranitePeak_Mart_EventScript_Boy_Text_0
	releaseall
	return


GranitePeak_Mart_EventScript_Man::
	lockall
	faceplayer
	msgbox GranitePeak_Mart_EventScript_Man_Text_0
	releaseall
	return


GranitePeak_Mart_EventScript_Woman::
	lockall
	faceplayer
	msgbox GranitePeak_Mart_EventScript_Woman_Text_0
	releaseall
	return


	.align 2
GranitePeakMart_Items_LessThanThreeBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
GranitePeakMart_Items_LessThanSixBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

GranitePeak_EventScript_MartClerk_Text_0:
	.string "How may I serve you$"

GranitePeak_EventScript_MartClerk_Text_1:
	.string "Please Come Again.$"

GranitePeak_Mart_EventScript_Boy_Text_0:
	.string "Did you know as you get more badges\n"
	.string "they can sell you better items?$"

GranitePeak_Mart_EventScript_Man_Text_0:
	.string "I'm buying lots of Pokeballs to try and\n"
	.string "get some Electric Pokémon. They are\l"
	.string "really good against the water gym\l"
	.string "leader by the coast.$"

GranitePeak_Mart_EventScript_Woman_Text_0:
	.string "The market is expensive, sometimes it's\n"
	.string "just better to grow berries.$"
