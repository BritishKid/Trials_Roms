ClayHaven_House1_MapScripts::
	.byte 0


ClayHaven_House1_EventScript_Woman::
# 6 "data/maps/ClayHaven_House1/scripts.pory"
	lockall
# 7 "data/maps/ClayHaven_House1/scripts.pory"
	faceplayer
# 8 "data/maps/ClayHaven_House1/scripts.pory"
	msgbox ClayHaven_House1_EventScript_Woman_Text_0, MSGBOX_YESNO
# 9 "data/maps/ClayHaven_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ClayHaven_House1_EventScript_Woman_2
# 13 "data/maps/ClayHaven_House1/scripts.pory"
	checkitem ITEM_ORAN_BERRY
# 14 "data/maps/ClayHaven_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ClayHaven_House1_EventScript_Woman_5
# 20 "data/maps/ClayHaven_House1/scripts.pory"
	msgbox ClayHaven_House1_EventScript_Woman_Text_3
ClayHaven_House1_EventScript_Woman_1:
# 23 "data/maps/ClayHaven_House1/scripts.pory"
	releaseall
	return

ClayHaven_House1_EventScript_Woman_2:
# 10 "data/maps/ClayHaven_House1/scripts.pory"
	msgbox ClayHaven_House1_EventScript_Woman_Text_1
	goto ClayHaven_House1_EventScript_Woman_1

ClayHaven_House1_EventScript_Woman_5:
# 15 "data/maps/ClayHaven_House1/scripts.pory"
	removeitem ITEM_ORAN_BERRY
# 16 "data/maps/ClayHaven_House1/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 17 "data/maps/ClayHaven_House1/scripts.pory"
	msgbox ClayHaven_House1_EventScript_Woman_Text_2
	goto ClayHaven_House1_EventScript_Woman_1


ClayHaven_House1_EventScript_Woman_Text_0:
# 8 "data/maps/ClayHaven_House1/scripts.pory"
	.string "Hi, I can turn your Oran Berry into Berry\n"
	.string "Juice for a small cost if you're\l"
	.string "interested?$"

ClayHaven_House1_EventScript_Woman_Text_1:
# 10 "data/maps/ClayHaven_House1/scripts.pory"
	.string "Come back another time then$"

ClayHaven_House1_EventScript_Woman_Text_2:
# 17 "data/maps/ClayHaven_House1/scripts.pory"
	.string "Enjoy$"

ClayHaven_House1_EventScript_Woman_Text_3:
# 20 "data/maps/ClayHaven_House1/scripts.pory"
	.string "You don't have any Oran Berries right\n"
	.string "now.$"
