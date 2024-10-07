Route9b_MapScripts::
	.byte 0


TepigGrottoEntrance::
	lockall
	goto_if_set FLAG_BADGE03_GET, TepigGrottoEntrance_2
TepigGrottoEntrance_1:
	releaseall
	return

TepigGrottoEntrance_2:
	msgbox TepigGrottoEntrance_Text_0
	msgbox TepigGrottoEntrance_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TepigGrottoEntrance_4
	goto TepigGrottoEntrance_1

TepigGrottoEntrance_4:
	warp MAP_TEPIG_GROTTO, 0, 4, 0
	goto TepigGrottoEntrance_1


TepigGrottoEntrance_Text_0:
	.string "You think you can see some Pokémon in\n"
	.string "the trees.$"

TepigGrottoEntrance_Text_1:
	.string "Do you want to go through?$"
