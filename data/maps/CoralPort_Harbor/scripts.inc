CoralPort_Harbor_MapScripts::
	.byte 0


Island1_TravelByBoat::
# 6 "data/maps/CoralPort_Harbor/scripts.pory"
	lockall
# 7 "data/maps/CoralPort_Harbor/scripts.pory"
	goto_if_set FLAG_RECEIVED_SS_TICKET, Island1_TravelByBoat_2
Island1_TravelByBoat_1:
# 19 "data/maps/CoralPort_Harbor/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SS_TICKET, Island1_TravelByBoat_5
Island1_TravelByBoat_4:
# 22 "data/maps/CoralPort_Harbor/scripts.pory"
	releaseall
	return

Island1_TravelByBoat_2:
# 8 "data/maps/CoralPort_Harbor/scripts.pory"
	msgbox Island1_TravelByBoat_Text_0, MSGBOX_YESNO
# 9 "data/maps/CoralPort_Harbor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Island1_TravelByBoat_7
	goto Island1_TravelByBoat_1

Island1_TravelByBoat_5:
# 20 "data/maps/CoralPort_Harbor/scripts.pory"
	msgbox Island1_TravelByBoat_Text_2
	goto Island1_TravelByBoat_4

Island1_TravelByBoat_7:
# 10 "data/maps/CoralPort_Harbor/scripts.pory"
	goto_if_unset FLAG_COAST_TOWN_SAVED, Island1_TravelByBoat_10
Island1_TravelByBoat_9:
# 14 "data/maps/CoralPort_Harbor/scripts.pory"
	goto_if_set FLAG_COAST_TOWN_SAVED, Island1_TravelByBoat_12
	goto Island1_TravelByBoat_1

Island1_TravelByBoat_10:
# 11 "data/maps/CoralPort_Harbor/scripts.pory"
	msgbox Island1_TravelByBoat_Text_1
# 12 "data/maps/CoralPort_Harbor/scripts.pory"
	warp MAP_ROUTE5, 24, 6
	goto Island1_TravelByBoat_9

Island1_TravelByBoat_12:
	goto Island1_TravelByBoat_1


Island1_TravelByBoat_Text_0:
# 8 "data/maps/CoralPort_Harbor/scripts.pory"
	.string "Would you like to travel to Island 2?$"

Island1_TravelByBoat_Text_1:
# 11 "data/maps/CoralPort_Harbor/scripts.pory"
	.string "Due to trouble in the Islands Port we\n"
	.string "will have to drop you on the beach for\l"
	.string "your safety.$"

Island1_TravelByBoat_Text_2:
# 20 "data/maps/CoralPort_Harbor/scripts.pory"
	.string "You need to have a ticket if you wish to\n"
	.string "travel on this boat.$"
