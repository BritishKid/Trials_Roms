TreeckoGrotto_MapScripts::
	.byte 0


TreeckoGrotto_Leave::
	lockall
	msgbox TreeckoGrotto_Leave_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TreeckoGrotto_Leave_2
TreeckoGrotto_Leave_1:
	releaseall
	return

TreeckoGrotto_Leave_2:
	warp MAP_OBSIDIAN_THICKET_GYM, 10, 8
	goto TreeckoGrotto_Leave_1


TreeckoGrotto_Leave_Text_0:
	.string "Do you want to leave?$"
