ClayHaven_Mart_MapScripts::
	.byte 0


ClayHaven_Mark_Event_Angel_Conversation::
	lockall
	msgbox ClayHaven_Mark_Event_Angel_Conversation_Text_0
	releaseall
	return


ClayHaven_EventScript_MartClerk::
	lockall
	faceplayer
	msgbox ClayHaven_EventScript_MartClerk_Text_0
	waitmessage
	goto_if_unset FLAG_BADGE01_GET, ClayHaven_EventScript_MartClerk_2
	goto_if_unset FLAG_BADGE03_GET, ClayHaven_EventScript_MartClerk_3
	pokemart ClayHavenMart_Items_LessThanSixBadges
ClayHaven_EventScript_MartClerk_1:
	msgbox ClayHaven_EventScript_MartClerk_Text_1
	releaseall
	return

ClayHaven_EventScript_MartClerk_2:
	pokemart ClayHavenMart_Items_NoBadges
	goto ClayHaven_EventScript_MartClerk_1

ClayHaven_EventScript_MartClerk_3:
	pokemart ClayHavenMart_Items_LessThanThreeBadges
	goto ClayHaven_EventScript_MartClerk_1


ClayHaven_EventScript_Woman::
	lockall
	faceplayer
	msgbox ClayHaven_EventScript_Woman_Text_0
	releaseall
	return


	.align 2
ClayHavenMart_Items_NoBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
ClayHavenMart_Items_LessThanThreeBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
ClayHavenMart_Items_LessThanSixBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
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

ClayHaven_Mark_Event_Angel_Conversation_Text_0:
	.string "I love Squirtles! I'm just stocking up\n"
	.string "to go find out where they live!$"

ClayHaven_EventScript_MartClerk_Text_0:
	.string "How may I serve you$"

ClayHaven_EventScript_MartClerk_Text_1:
	.string "Please Come Again.$"

ClayHaven_EventScript_Woman_Text_0:
	.string "Many items are only available in certain\n"
	.string "towns.$"
