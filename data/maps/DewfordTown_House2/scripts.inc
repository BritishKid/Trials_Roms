DewfordTown_House2_MapScripts::
	.byte 0


DewfordTown_House2_EventScript_Man::
	lockall
	goto_if_set FLAG_RECEIVED_SS_TICKET, DewfordTown_House2_EventScript_Man_2
DewfordTown_House2_EventScript_Man_1:
	goto_if_unset FLAG_RECEIVED_SS_TICKET, DewfordTown_House2_EventScript_Man_5
DewfordTown_House2_EventScript_Man_4:
	releaseall
	return

DewfordTown_House2_EventScript_Man_2:
	msgbox DewfordTown_House2_EventScript_Man_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_House2_EventScript_Man_7
	goto DewfordTown_House2_EventScript_Man_1

DewfordTown_House2_EventScript_Man_5:
	msgbox DewfordTown_House2_EventScript_Man_Text_1
	goto DewfordTown_House2_EventScript_Man_4

DewfordTown_House2_EventScript_Man_7:
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11, 3
	goto DewfordTown_House2_EventScript_Man_1


DewfordTown_House2_EventScript_Man_Text_0:
	.string "Would you like to travel to Island 2?$"

DewfordTown_House2_EventScript_Man_Text_1:
	.string "You need to have a ticket if you wish to\n"
	.string "travel on this boat.$"
