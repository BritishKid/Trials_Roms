Route1_OldRod_House_MapScripts::
	.byte 0


Route1b_Fisherman_GetOldRod::
	lockall
	faceplayer
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Route1b_Fisherman_GetOldRod_2
	msgbox Route1b_Fisherman_GetOldRod_Text_3, MSGBOX_DEFAULT
Route1b_Fisherman_GetOldRod_1:
	release
	return

Route1b_Fisherman_GetOldRod_2:
	msgbox Route1b_Fisherman_GetOldRod_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route1b_Fisherman_GetOldRod_5
	msgbox Route1b_Fisherman_GetOldRod_Text_2
	goto Route1b_Fisherman_GetOldRod_1

Route1b_Fisherman_GetOldRod_5:
	msgbox Route1b_Fisherman_GetOldRod_Text_1
	giveitem ITEM_OLD_ROD, 1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECEIVED_OLD_ROD
	goto Route1b_Fisherman_GetOldRod_1


Route1b_Fisherman_GetOldRod_Text_0:
	.string "Hey do you like to fish?$"

Route1b_Fisherman_GetOldRod_Text_1:
	.string "Yeah you do! Have this fishing rod.$"

Route1b_Fisherman_GetOldRod_Text_2:
	.string "Oh that's a shame$"

Route1b_Fisherman_GetOldRod_Text_3:
	.string "Different rods attract different\n"
	.string "Pokémon$"
