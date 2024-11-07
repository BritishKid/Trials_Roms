Route1a_MapScripts::
	.byte 0


Route1_EventScript_SecretPower::
# 7 "data/maps/Route1a/scripts.pory"
	lockall
# 8 "data/maps/Route1a/scripts.pory"
	faceplayer
# 9 "data/maps/Route1a/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, Route1_EventScript_SecretPower_2
Route1_EventScript_SecretPower_1:
# 12 "data/maps/Route1a/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, Route1_EventScript_SecretPower_5
Route1_EventScript_SecretPower_4:
# 18 "data/maps/Route1a/scripts.pory"
	releaseall
	return

Route1_EventScript_SecretPower_2:
# 10 "data/maps/Route1a/scripts.pory"
	msgbox Route1_EventScript_SecretPower_Text_0
	goto Route1_EventScript_SecretPower_1

Route1_EventScript_SecretPower_5:
# 13 "data/maps/Route1a/scripts.pory"
	msgbox Route1_EventScript_SecretPower_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/Route1a/scripts.pory"
	msgbox Route1_EventScript_SecretPower_Text_2, MSGBOX_DEFAULT
# 15 "data/maps/Route1a/scripts.pory"
	giveitem ITEM_TM43, 1
# 16 "data/maps/Route1a/scripts.pory"
	setflag FLAG_RECEIVED_SECRET_POWER
	goto Route1_EventScript_SecretPower_4


Route1_EventScript_SecretPower_Text_0:
# 10 "data/maps/Route1a/scripts.pory"
	.string "Many other trainers have made hidden\n"
	.string "bases for you to explore.$"

Route1_EventScript_SecretPower_Text_1:
# 13 "data/maps/Route1a/scripts.pory"
	.string "If you use SECRET POWER you can open\n"
	.string "up hidden areas to make a base in\l"
	.string "certain trees, bushes and rocks.$"

Route1_EventScript_SecretPower_Text_2:
# 14 "data/maps/Route1a/scripts.pory"
	.string "Here take the TM so you can do it!$"
