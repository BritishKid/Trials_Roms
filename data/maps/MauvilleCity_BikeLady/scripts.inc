MauvilleCity_BikeLady_MapScripts::
	.byte 0


GiveAcroBike::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ACRO_BIKE, GiveAcroBike_2
	msgbox GiveAcroBike_Text_1
GiveAcroBike_1:
	release
	return

GiveAcroBike_2:
	msgbox GiveAcroBike_Text_0
	giveitem ITEM_ACRO_BIKE
	setflag FLAG_RECEIVED_ACRO_BIKE
	goto GiveAcroBike_1


GiveAcroBike_Text_0:
	.string "Oh you're the one who managed to clear\n"
	.string "out the thugs who drove us out.\p"
	.string "Please take this as a thank you!$"

GiveAcroBike_Text_1:
	.string "How are you enjoying the bike? Me and\n"
	.string "my sister used to ride them all over the\l"
	.string "islands. Her bikes were always much\l"
	.string "faster though.$"
