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
	pokemart ClayHavenMart_Items_NoBadges
	msgbox ClayHaven_EventScript_MartClerk_Text_1
	releaseall
	return


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
