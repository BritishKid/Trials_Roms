MossdeepCity_House1_MapScripts::
	.byte 0


MossdeepCity_House1_EventScript_BlackBelt::
# 6 "data/maps/MossdeepCity_House1/scripts.pory"
	lockall
# 7 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_ROUTE4_BRAWLEY, 0
	goto_if_gt MossdeepCity_House1_EventScript_BlackBelt_3
MossdeepCity_House1_EventScript_BlackBelt_1:
# 14 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_ROUTE4_BRAWLEY, 0
	goto_if_gt MossdeepCity_House1_EventScript_BlackBelt_9
MossdeepCity_House1_EventScript_BlackBelt_8:
# 18 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_2
MossdeepCity_House1_EventScript_BlackBelt_6:
# 19 "data/maps/MossdeepCity_House1/scripts.pory"
	releaseall
	return

MossdeepCity_House1_EventScript_BlackBelt_2:
# 9 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_0
# 10 "data/maps/MossdeepCity_House1/scripts.pory"
	giveitem ITEM_HM06
# 11 "data/maps/MossdeepCity_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/MossdeepCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM06
	goto MossdeepCity_House1_EventScript_BlackBelt_1

MossdeepCity_House1_EventScript_BlackBelt_3:
# 8 "data/maps/MossdeepCity_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM06, MossdeepCity_House1_EventScript_BlackBelt_2
	goto MossdeepCity_House1_EventScript_BlackBelt_1

MossdeepCity_House1_EventScript_BlackBelt_7:
# 15 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_1
	goto MossdeepCity_House1_EventScript_BlackBelt_6

MossdeepCity_House1_EventScript_BlackBelt_9:
# 14 "data/maps/MossdeepCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM06, MossdeepCity_House1_EventScript_BlackBelt_7
	goto MossdeepCity_House1_EventScript_BlackBelt_8


MossdeepCity_House1_EventScript_Woman::
# 24 "data/maps/MossdeepCity_House1/scripts.pory"
	lockall
# 25 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 26 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_Woman_Text_0
# 27 "data/maps/MossdeepCity_House1/scripts.pory"
	releaseall
	return


MossdeepCity_House1_EventScript_Kid::
# 31 "data/maps/MossdeepCity_House1/scripts.pory"
	lockall
# 32 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 33 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_EventScript_Kid_Text_0
# 34 "data/maps/MossdeepCity_House1/scripts.pory"
	releaseall
	return


MossdeepCity_House1_EventScript_BlackBelt_Text_0:
# 9 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Oh wow! You beat Master Brawley? You\n"
	.string "are pretty tough, why don't you take\l"
	.string "this.$"

MossdeepCity_House1_EventScript_BlackBelt_Text_1:
# 15 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "You should check up some of the dojos\n"
	.string "hidden in the mountains near Granite\l"
	.string "Peak, there is one near the waterfall.$"

MossdeepCity_House1_EventScript_BlackBelt_Text_2:
# 18 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Why aren't you small! I could train you\n"
	.string "up if I had the time.$"

MossdeepCity_House1_EventScript_Woman_Text_0:
# 26 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "My husband used to run a Dojo at\n"
	.string "Granite Peak but he had we moved here\l"
	.string "when we adopted our daughter$"

MossdeepCity_House1_EventScript_Kid_Text_0:
# 33 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "HYAH! HYRAH!\n"
	.string "One day I'm going to take over my Dads\l"
	.string "old Dojo! I just need to be strong\l"
	.string "enough to smash through the rocks!\n"
	.string "HYAH$"
