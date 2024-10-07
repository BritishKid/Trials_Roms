CharmanderGrotto_MapScripts::
	.byte 0


LeavingCharmanderGrotto::
	msgbox LeavingCharmanderGrotto_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LeavingCharmanderGrotto_1
	return

LeavingCharmanderGrotto_1:
	warp MAP_ROUTE3B, 23, 5
	return


LeavingCharmanderGrotto_Text_0:
	.string "Do you want to leave?$"
