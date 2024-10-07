ClayHaven_Mart_MapScripts::
	.byte 0


ClayHaven_Mark_Event_Angel_Conversation::
# 6 "data/maps/ClayHaven_Mart/scripts.pory"
	lockall
# 7 "data/maps/ClayHaven_Mart/scripts.pory"
	msgbox ClayHaven_Mark_Event_Angel_Conversation_Text_0
# 8 "data/maps/ClayHaven_Mart/scripts.pory"
	releaseall
	return


ClayHaven_EventScript_MartClerk::
# 12 "data/maps/ClayHaven_Mart/scripts.pory"
	lockall
# 13 "data/maps/ClayHaven_Mart/scripts.pory"
	faceplayer
# 14 "data/maps/ClayHaven_Mart/scripts.pory"
	msgbox ClayHaven_EventScript_MartClerk_Text_0
# 15 "data/maps/ClayHaven_Mart/scripts.pory"
	waitmessage
# 16 "data/maps/ClayHaven_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ClayHaven_EventScript_MartClerk_2
# 19 "data/maps/ClayHaven_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, ClayHaven_EventScript_MartClerk_3
# 23 "data/maps/ClayHaven_Mart/scripts.pory"
	pokemart ClayHavenMart_Items_LessThanSixBadges
ClayHaven_EventScript_MartClerk_1:
# 25 "data/maps/ClayHaven_Mart/scripts.pory"
	msgbox ClayHaven_EventScript_MartClerk_Text_1
# 26 "data/maps/ClayHaven_Mart/scripts.pory"
	releaseall
	return

ClayHaven_EventScript_MartClerk_2:
# 17 "data/maps/ClayHaven_Mart/scripts.pory"
	pokemart ClayHavenMart_Items_NoBadges
	goto ClayHaven_EventScript_MartClerk_1

ClayHaven_EventScript_MartClerk_3:
# 20 "data/maps/ClayHaven_Mart/scripts.pory"
	pokemart ClayHavenMart_Items_LessThanThreeBadges
	goto ClayHaven_EventScript_MartClerk_1


ClayHaven_EventScript_Woman::
# 30 "data/maps/ClayHaven_Mart/scripts.pory"
	lockall
# 31 "data/maps/ClayHaven_Mart/scripts.pory"
	faceplayer
# 32 "data/maps/ClayHaven_Mart/scripts.pory"
	msgbox ClayHaven_EventScript_Woman_Text_0
# 33 "data/maps/ClayHaven_Mart/scripts.pory"
	releaseall
	return


	.align 2
# 37 "data/maps/ClayHaven_Mart/scripts.pory"
ClayHavenMart_Items_NoBadges:
# 38 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 39 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_POTION
# 40 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 41 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 42 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 45 "data/maps/ClayHaven_Mart/scripts.pory"
ClayHavenMart_Items_LessThanThreeBadges:
# 46 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 47 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 48 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_POTION
# 49 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 50 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 51 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 52 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 53 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 56 "data/maps/ClayHaven_Mart/scripts.pory"
ClayHavenMart_Items_LessThanSixBadges:
# 57 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 58 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 59 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_POTION
# 60 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 61 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 62 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 63 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 64 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 65 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 66 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 67 "data/maps/ClayHaven_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

ClayHaven_Mark_Event_Angel_Conversation_Text_0:
# 7 "data/maps/ClayHaven_Mart/scripts.pory"
	.string "I love Squirtles! I'm just stocking up\n"
	.string "to go find out where they live!$"

ClayHaven_EventScript_MartClerk_Text_0:
# 14 "data/maps/ClayHaven_Mart/scripts.pory"
	.string "How may I serve you$"

ClayHaven_EventScript_MartClerk_Text_1:
# 25 "data/maps/ClayHaven_Mart/scripts.pory"
	.string "Please Come Again.$"

ClayHaven_EventScript_Woman_Text_0:
# 32 "data/maps/ClayHaven_Mart/scripts.pory"
	.string "Many items are only available in certain\n"
	.string "towns.$"
