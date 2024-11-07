Route2_MapScripts::
	.byte 0


Route2_EventScript_BerryGirl::
# 6 "data/maps/Route2/scripts.pory"
	lockall
# 7 "data/maps/Route2/scripts.pory"
	faceplayer
# 8 "data/maps/Route2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route2_EventScript_BerryGirl_2
Route2_EventScript_BerryGirl_1:
# 20 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_2
# 21 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_EventScript_BerryGirl_2:
# 9 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_0
# 10 "data/maps/Route2/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 5
# 11 "data/maps/Route2/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 5
# 12 "data/maps/Route2/scripts.pory"
	giveitem ITEM_PECHA_BERRY, 5
# 13 "data/maps/Route2/scripts.pory"
	giveitem ITEM_LEPPA_BERRY, 5
# 14 "data/maps/Route2/scripts.pory"
	giveitem ITEM_COBA_BERRY, 5
# 15 "data/maps/Route2/scripts.pory"
	giveitem ITEM_PERSIM_BERRY, 5
# 16 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_1
# 17 "data/maps/Route2/scripts.pory"
	giveitem ITEM_WAILMER_PAIL, 1
# 18 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto Route2_EventScript_BerryGirl_1


Battle_Route2_Trainer3::
# 25 "data/maps/Route2/scripts.pory"
	lockall
# 26 "data/maps/Route2/scripts.pory"
	msgbox Battle_Route2_Trainer3_Text_0
# 27 "data/maps/Route2/scripts.pory"
	releaseall
	return


Route2_EventScript_BerryGirl_Text_0:
# 9 "data/maps/Route2/scripts.pory"
	.string "Hey you must have seen all these berry\n"
	.string "patches around the place.\l"
	.string "You can use them to grow your own\l"
	.string "berries.\l"
	.string "Here take some, I have spare.$"

Route2_EventScript_BerryGirl_Text_1:
# 16 "data/maps/Route2/scripts.pory"
	.string "Use the spots next to me to grow more,\n"
	.string "but you will need this to help.$"

Route2_EventScript_BerryGirl_Text_2:
# 20 "data/maps/Route2/scripts.pory"
	.string "Using a berry in battle can make a big\n"
	.string "difference.$"

Battle_Route2_Trainer3_Text_0:
# 26 "data/maps/Route2/scripts.pory"
	.string "BATTLE COMING SOON$"
