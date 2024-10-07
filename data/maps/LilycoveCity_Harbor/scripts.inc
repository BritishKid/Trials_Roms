LilycoveCity_Harbor_MapScripts::
	.byte 0


Island2_TravelByBoat_ToIsland3::
# 6 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lockall
# 7 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_RECEIVED_SS_TICKET, Island2_TravelByBoat_ToIsland3_2
Island2_TravelByBoat_ToIsland3_1:
# 13 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SS_TICKET, Island2_TravelByBoat_ToIsland3_5
Island2_TravelByBoat_ToIsland3_4:
# 16 "data/maps/LilycoveCity_Harbor/scripts.pory"
	releaseall
	return

Island2_TravelByBoat_ToIsland3_2:
# 8 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox Island2_TravelByBoat_ToIsland3_Text_0, MSGBOX_YESNO
# 9 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Island2_TravelByBoat_ToIsland3_7
	goto Island2_TravelByBoat_ToIsland3_1

Island2_TravelByBoat_ToIsland3_5:
# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox Island2_TravelByBoat_ToIsland3_Text_1
	goto Island2_TravelByBoat_ToIsland3_4

Island2_TravelByBoat_ToIsland3_7:
# 10 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_DEWFORD_TOWN_HOUSE2, 8, 11, 3
	goto Island2_TravelByBoat_ToIsland3_1


Island2_TravelByBoat_ToIsland3_Text_0:
# 8 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Would you like to travel to Island 3?$"

Island2_TravelByBoat_ToIsland3_Text_1:
# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You need to have a ticket if you wish to\n"
	.string "travel on this boat.$"
