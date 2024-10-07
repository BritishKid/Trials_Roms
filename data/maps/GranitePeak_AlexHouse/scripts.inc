GranitePeak_AlexHouse_MapScripts::
	.byte 0


AlexHistoryBoy::
	lockall
	faceplayer
	goto_if_unset FLAG_ALEX_MET, AlexHistoryBoy_2
AlexHistoryBoy_1:
	goto_if_set FLAG_ALEX_MET, AlexHistoryBoy_6
AlexHistoryBoy_4:
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, AlexHistoryBoy_10
AlexHistoryBoy_9:
	releaseall
	return

AlexHistoryBoy_2:
	msgbox AlexHistoryBoy_Text_0
	goto AlexHistoryBoy_1

AlexHistoryBoy_5:
	msgbox AlexHistoryBoy_Text_1
	msgbox AlexHistoryBoy_Text_3
	goto AlexHistoryBoy_4

AlexHistoryBoy_6:
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, AlexHistoryBoy_5
	goto AlexHistoryBoy_4

AlexHistoryBoy_10:
	msgbox AlexHistoryBoy_Text_4
	goto AlexHistoryBoy_9


AlexHistoryBoy_Text_0:
	.string "Hi I'm Alex! I'm trying to learn about\n"
	.string "some of the hidden mysteries of the\l"
	.string "Triver region, I've heard word about\l"
	.string "some interesting enscryptions at\l"
	.string "Platefall Cave near Clay Haven$"

AlexHistoryBoy_Text_1:
	.string "Hello again! How have your travels\n"
	.string "been?$"

AlexHistoryBoy_Text_2:
	.string "I've been trying to read up on my theory\n"
	.string "of this key we need and I'm seeing many\l"
	.string "references to a mountain that formed\l"
	.string "when the plates fell$"

AlexHistoryBoy_Text_3:
	.string "Granite Peak is one of the youngest\n"
	.string "mountains to form, so I'm gearing up to\l"
	.string "start looking around here!$"

AlexHistoryBoy_Text_4:
	.string "Tips on where to find plates will be\n"
	.string "here!$"
