CoralPort_Port_MapScripts::
	.byte 0


Island1_TravelByBoat::
	lockall
	goto_if_set FLAG_RECEIVED_SS_TICKET, Island1_TravelByBoat_2
Island1_TravelByBoat_1:
	goto_if_unset FLAG_RECEIVED_SS_TICKET, Island1_TravelByBoat_5
Island1_TravelByBoat_4:
	releaseall
	return

Island1_TravelByBoat_2:
	msgbox Island1_TravelByBoat_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Island1_TravelByBoat_7
	goto Island1_TravelByBoat_1

Island1_TravelByBoat_5:
	msgbox Island1_TravelByBoat_Text_1
	goto Island1_TravelByBoat_4

Island1_TravelByBoat_7:
	goto_if_unset FLAG_COAST_TOWN_SAVED, Island1_TravelByBoat_10
Island1_TravelByBoat_9:
	goto_if_set FLAG_COAST_TOWN_SAVED, Island1_TravelByBoat_12
	goto Island1_TravelByBoat_1

Island1_TravelByBoat_10:
	warp MAP_ROUTE7, 31, 5
	goto Island1_TravelByBoat_9

Island1_TravelByBoat_12:
	warp MAP_MAUVILLE_CITY_PORT, 5, 11
	goto Island1_TravelByBoat_1


Island1_TravelByBoat_Text_0:
	.string "Would you like to travel to Island 2?$"

Island1_TravelByBoat_Text_1:
	.string "You need to have a ticket if you wish to\n"
	.string "travel on this boat.$"
