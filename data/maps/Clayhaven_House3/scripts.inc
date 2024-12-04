Clayhaven_House3_MapScripts::
	.byte 0


Clayhaven_House3_EventScript_Woman::
# 5 "data/maps/Clayhaven_House3/scripts.pory"
	lockall
# 6 "data/maps/Clayhaven_House3/scripts.pory"
	faceplayer
# 7 "data/maps/Clayhaven_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_CUT, Clayhaven_House3_EventScript_Woman_2
Clayhaven_House3_EventScript_Woman_1:
# 10 "data/maps/Clayhaven_House3/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CUT, Clayhaven_House3_EventScript_Woman_5
Clayhaven_House3_EventScript_Woman_4:
# 15 "data/maps/Clayhaven_House3/scripts.pory"
	releaseall
	return

Clayhaven_House3_EventScript_Woman_2:
# 8 "data/maps/Clayhaven_House3/scripts.pory"
	msgbox Clayhaven_House3_EventScript_Woman_Text_0
	goto Clayhaven_House3_EventScript_Woman_1

Clayhaven_House3_EventScript_Woman_5:
# 11 "data/maps/Clayhaven_House3/scripts.pory"
	msgbox Clayhaven_House3_EventScript_Woman_Text_1
# 12 "data/maps/Clayhaven_House3/scripts.pory"
	giveitem ITEM_TM52
# 13 "data/maps/Clayhaven_House3/scripts.pory"
	setflag FLAG_RECEIVED_TM_CUT
	goto Clayhaven_House3_EventScript_Woman_4


Clayhaven_House3_EventScript_Woman_Text_0:
# 8 "data/maps/Clayhaven_House3/scripts.pory"
	.string "How goes the journey?$"

Clayhaven_House3_EventScript_Woman_Text_1:
# 11 "data/maps/Clayhaven_House3/scripts.pory"
	.string "You're a trainer? Take this it could\n"
	.string "help in your journey.$"
