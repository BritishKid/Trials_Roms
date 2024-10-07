LilycoveCity_Harbor_MapScripts::
	.byte 0


Island2_TravelByBoat_ToIsland3::
	lockall
	goto_if_set FLAG_RECEIVED_SS_TICKET, Island2_TravelByBoat_ToIsland3_2
Island2_TravelByBoat_ToIsland3_1:
	goto_if_unset FLAG_RECEIVED_SS_TICKET, Island2_TravelByBoat_ToIsland3_5
Island2_TravelByBoat_ToIsland3_4:
	releaseall
	return

Island2_TravelByBoat_ToIsland3_2:
	msgbox Island2_TravelByBoat_ToIsland3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Island2_TravelByBoat_ToIsland3_7
	goto Island2_TravelByBoat_ToIsland3_1

Island2_TravelByBoat_ToIsland3_5:
	msgbox Island2_TravelByBoat_ToIsland3_Text_1
	goto Island2_TravelByBoat_ToIsland3_4

Island2_TravelByBoat_ToIsland3_7:
	warp MAP_DEWFORD_TOWN_HOUSE2, 8, 11, 3
	goto Island2_TravelByBoat_ToIsland3_1


Island2_TravelByBoat_ToIsland3_Text_0:
	.string "Would you like to travel to Island 3?$"

Island2_TravelByBoat_ToIsland3_Text_1:
	.string "You need to have a ticket if you wish to\n"
	.string "travel on this boat.$"
