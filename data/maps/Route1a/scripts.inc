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


EventScript_Route1a_LittleGirl::
# 22 "data/maps/Route1a/scripts.pory"
	lockall
# 23 "data/maps/Route1a/scripts.pory"
	msgbox EventScript_Route1a_LittleGirl_Text_0
# 24 "data/maps/Route1a/scripts.pory"
	releaseall
	return


Giant_Azumarill::
# 28 "data/maps/Route1a/scripts.pory"
	lockall
# 30 "data/maps/Route1a/scripts.pory"
	compare VAR_GIANT_FISH_STATE, 1
	goto_if_eq Giant_Azumarill_4
Giant_Azumarill_3:
# 51 "data/maps/Route1a/scripts.pory"
	msgbox Giant_Azumarill_Text_3
Giant_Azumarill_1:
# 53 "data/maps/Route1a/scripts.pory"
	releaseall
	return

Giant_Azumarill_2:
# 31 "data/maps/Route1a/scripts.pory"
	msgbox Giant_Azumarill_Text_0, MSGBOX_YESNO
# 32 "data/maps/Route1a/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Giant_Azumarill_7
	end

Giant_Azumarill_4:
# 30 "data/maps/Route1a/scripts.pory"
	goto_if_unset FLAG_GIANT_AZUMARILL_BEATEN, Giant_Azumarill_2
	goto Giant_Azumarill_3

Giant_Azumarill_7:
# 33 "data/maps/Route1a/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 35 "data/maps/Route1a/scripts.pory"
	msgbox Giant_Azumarill_Text_1
# 36 "data/maps/Route1a/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
# 37 "data/maps/Route1a/scripts.pory"
	setwildbattle SPECIES_AZUMARILL, 35, ITEM_SITRUS_BERRY
# 38 "data/maps/Route1a/scripts.pory"
	dowildbattle
# 40 "data/maps/Route1a/scripts.pory"
	msgbox Giant_Azumarill_Text_2
# 41 "data/maps/Route1a/scripts.pory"
	giveitem ITEM_LUMINOUS_MOSS
# 42 "data/maps/Route1a/scripts.pory"
	setflag FLAG_GIANT_AZUMARILL_BEATEN
# 43 "data/maps/Route1a/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto Giant_Azumarill_1


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

EventScript_Route1a_LittleGirl_Text_0:
# 23 "data/maps/Route1a/scripts.pory"
	.string "I threw a rock in the water and it sank\n"
	.string "forever. That water goes to the bottom\l"
	.string "of the world.$"

Giant_Azumarill_Text_0:
# 31 "data/maps/Route1a/scripts.pory"
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface, do you want to attempt to\l"
	.string "catch it?$"

Giant_Azumarill_Text_1:
# 35 "data/maps/Route1a/scripts.pory"
	.string "It leaps out at you$"

Giant_Azumarill_Text_2:
# 40 "data/maps/Route1a/scripts.pory"
	.string "The Azumarill flees and leaves\n"
	.string "something behind$"

Giant_Azumarill_Text_3:
# 51 "data/maps/Route1a/scripts.pory"
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface$"
