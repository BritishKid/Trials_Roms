CharmanderGrotto_MapScripts::
	.byte 0


LeavingCharmanderGrotto::
# 5 "data/maps/CharmanderGrotto/scripts.pory"
	msgbox LeavingCharmanderGrotto_Text_0, MSGBOX_YESNO
# 6 "data/maps/CharmanderGrotto/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LeavingCharmanderGrotto_1
	return

LeavingCharmanderGrotto_1:
# 7 "data/maps/CharmanderGrotto/scripts.pory"
	warp MAP_ROUTE3B, 23, 5
	return


LeavingCharmanderGrotto_Text_0:
# 5 "data/maps/CharmanderGrotto/scripts.pory"
	.string "Do you want to leave?$"
