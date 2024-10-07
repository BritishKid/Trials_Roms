TreeckoGrotto_MapScripts::
	.byte 0


TreeckoGrotto_Leave::
# 4 "data/maps/TreeckoGrotto/scripts.pory"
	lockall
# 5 "data/maps/TreeckoGrotto/scripts.pory"
	msgbox TreeckoGrotto_Leave_Text_0, MSGBOX_YESNO
# 6 "data/maps/TreeckoGrotto/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TreeckoGrotto_Leave_2
TreeckoGrotto_Leave_1:
# 9 "data/maps/TreeckoGrotto/scripts.pory"
	releaseall
	return

TreeckoGrotto_Leave_2:
# 7 "data/maps/TreeckoGrotto/scripts.pory"
	warp MAP_OBSIDIAN_THICKET_GYM, 10, 8
	goto TreeckoGrotto_Leave_1


TreeckoGrotto_Leave_Text_0:
# 5 "data/maps/TreeckoGrotto/scripts.pory"
	.string "Do you want to leave?$"
