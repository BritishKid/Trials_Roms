LilycoveCity_MegaMansion_BF_MapScripts::
	.byte 0


MegaMansion_ComingSoon::
	lockall
	faceplayer
	msgbox MegaMansion_ComingSoon_Text_0
	goto_if_unset FLAG_RECIEVED_MEGA_BRACELET, MegaMansion_ComingSoon_2
MegaMansion_ComingSoon_1:
	releaseall
	return

MegaMansion_ComingSoon_2:
	msgbox MegaMansion_ComingSoon_Text_1
	giveitem ITEM_MEGA_RING
	goto MegaMansion_ComingSoon_1


MegaMansion_ComingSoon_Text_0:
	.string "This will become the mega mansion where\n"
	.string "you can learn about mega evolutions\l"
	.string "and get your mega bracelet$"

MegaMansion_ComingSoon_Text_1:
	.string "Here take a mega ring to test for now$"
