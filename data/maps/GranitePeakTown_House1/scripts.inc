GranitePeakTown_House1_MapScripts::
	.byte 0


GranitePeakTown_House1_EventScript_CraftingTable::
# 6 "data/maps/GranitePeakTown_House1/scripts.pory"
	lockall
# 7 "data/maps/GranitePeakTown_House1/scripts.pory"
	call CraftTutorial_EventScript_Table
# 8 "data/maps/GranitePeakTown_House1/scripts.pory"
	releaseall
	return


GranitePeakTown_House1_Alex::
# 13 "data/maps/GranitePeakTown_House1/scripts.pory"
	lockall
# 14 "data/maps/GranitePeakTown_House1/scripts.pory"
	faceplayer
# 15 "data/maps/GranitePeakTown_House1/scripts.pory"
	goto_if_unset FLAG_ALEX_MET, GranitePeakTown_House1_Alex_2
GranitePeakTown_House1_Alex_1:
# 18 "data/maps/GranitePeakTown_House1/scripts.pory"
	goto_if_set FLAG_ALEX_MET, GranitePeakTown_House1_Alex_6
GranitePeakTown_House1_Alex_4:
# 24 "data/maps/GranitePeakTown_House1/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, GranitePeakTown_House1_Alex_10
GranitePeakTown_House1_Alex_9:
# 27 "data/maps/GranitePeakTown_House1/scripts.pory"
	releaseall
	return

GranitePeakTown_House1_Alex_2:
# 16 "data/maps/GranitePeakTown_House1/scripts.pory"
	msgbox GranitePeakTown_House1_Alex_Text_0
	goto GranitePeakTown_House1_Alex_1

GranitePeakTown_House1_Alex_5:
# 19 "data/maps/GranitePeakTown_House1/scripts.pory"
	msgbox GranitePeakTown_House1_Alex_Text_1
# 20 "data/maps/GranitePeakTown_House1/scripts.pory"
	msgbox GranitePeakTown_House1_Alex_Text_3
	goto GranitePeakTown_House1_Alex_4

GranitePeakTown_House1_Alex_6:
# 18 "data/maps/GranitePeakTown_House1/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, GranitePeakTown_House1_Alex_5
	goto GranitePeakTown_House1_Alex_4

GranitePeakTown_House1_Alex_10:
# 25 "data/maps/GranitePeakTown_House1/scripts.pory"
	msgbox GranitePeakTown_House1_Alex_Text_4
	goto GranitePeakTown_House1_Alex_9


GranitePeakTown_House1_Alex_Text_0:
# 16 "data/maps/GranitePeakTown_House1/scripts.pory"
	.string "Hi I'm Alex! I'm trying to learn about\n"
	.string "some of the hidden mysteries of the\l"
	.string "Triver region, I've heard word about\l"
	.string "some interesting enscryptions at\l"
	.string "Platefall Cave near Clay Haven$"

GranitePeakTown_House1_Alex_Text_1:
# 19 "data/maps/GranitePeakTown_House1/scripts.pory"
	.string "Hello again! How have your travels\n"
	.string "been?$"

GranitePeakTown_House1_Alex_Text_2:
# 20 "data/maps/GranitePeakTown_House1/scripts.pory"
	.string "I've been trying to read up on my theory\n"
	.string "of this key we need and I'm seeing many\l"
	.string "references to a mountain that formed\l"
	.string "when the plates fell$"

GranitePeakTown_House1_Alex_Text_3:
# 21 "data/maps/GranitePeakTown_House1/scripts.pory"
	.string "Granite Peak is one of the youngest\n"
	.string "mountains to form, so I'm gearing up to\l"
	.string "start looking around here!$"

GranitePeakTown_House1_Alex_Text_4:
# 25 "data/maps/GranitePeakTown_House1/scripts.pory"
	.string "Tips on where to find plates will be\n"
	.string "here!$"
