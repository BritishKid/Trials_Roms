ClayHaven_House1_MapScripts::
	.byte 0


ClayHaven_House1_EventScript_Woman::
	lockall
	faceplayer
	msgbox ClayHaven_House1_EventScript_Woman_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ClayHaven_House1_EventScript_Woman_2
	checkitem ITEM_ORAN_BERRY
	compare VAR_RESULT, TRUE
	goto_if_eq ClayHaven_House1_EventScript_Woman_5
	msgbox ClayHaven_House1_EventScript_Woman_Text_3
ClayHaven_House1_EventScript_Woman_1:
	releaseall
	return

ClayHaven_House1_EventScript_Woman_2:
	msgbox ClayHaven_House1_EventScript_Woman_Text_1
	goto ClayHaven_House1_EventScript_Woman_1

ClayHaven_House1_EventScript_Woman_5:
	removeitem ITEM_ORAN_BERRY
	giveitem ITEM_BERRY_JUICE, 1
	msgbox ClayHaven_House1_EventScript_Woman_Text_2
	goto ClayHaven_House1_EventScript_Woman_1


ClayHaven_House1_EventScript_Woman_Text_0:
	.string "Hi, I can turn your Oran Berry into Berry\n"
	.string "Juice for a small cost if you're\l"
	.string "interested?$"

ClayHaven_House1_EventScript_Woman_Text_1:
	.string "Come back another time then$"

ClayHaven_House1_EventScript_Woman_Text_2:
	.string "Enjoy$"

ClayHaven_House1_EventScript_Woman_Text_3:
	.string "You don't have any Oran Berries right\n"
	.string "now.$"
