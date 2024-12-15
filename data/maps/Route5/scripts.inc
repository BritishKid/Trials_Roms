Route5_MapScripts::
	.byte 0


Route5_IslandBoat::
# 6 "data/maps/Route5/scripts.pory"
	lockall
# 7 "data/maps/Route5/scripts.pory"
	faceplayer
# 8 "data/maps/Route5/scripts.pory"
	msgbox Route5_IslandBoat_Text_0, MSGBOX_YESNO
# 9 "data/maps/Route5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route5_IslandBoat_2
Route5_IslandBoat_1:
# 12 "data/maps/Route5/scripts.pory"
	releaseall
	return

Route5_IslandBoat_2:
# 10 "data/maps/Route5/scripts.pory"
	warp MAP_CORAL_PORT_HARBOR, 8, 11
	goto Route5_IslandBoat_1


Route5_Sign_Directinos::
# 17 "data/maps/Route5/scripts.pory"
	lockall
# 18 "data/maps/Route5/scripts.pory"
	goto_if_unset FLAG_COAST_TOWN_SAVED, Route5_Sign_Directinos_2
# 22 "data/maps/Route5/scripts.pory"
	msgbox Route5_Sign_Directinos_Text_1
Route5_Sign_Directinos_1:
# 24 "data/maps/Route5/scripts.pory"
	releaseall
	return

Route5_Sign_Directinos_2:
# 19 "data/maps/Route5/scripts.pory"
	msgbox Route5_Sign_Directinos_Text_0
	goto Route5_Sign_Directinos_1


Route5_IslandBoat_Text_0:
# 8 "data/maps/Route5/scripts.pory"
	.string "Would you like to travel to Island 1?$"

Route5_Sign_Directinos_Text_0:
# 19 "data/maps/Route5/scripts.pory"
	.string "Someone has scrawled over the sign to\n"
	.string "say:\l"
	.string "THIS IS OUR ISLAND!$"

Route5_Sign_Directinos_Text_1:
# 22 "data/maps/Route5/scripts.pory"
	.string "-> TOWN TO BE NAMED\l"
	.string "<- Hemlock Village$"
