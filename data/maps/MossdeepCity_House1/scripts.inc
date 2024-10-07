MossdeepCity_House1_MapScripts::
	.byte 0


MossdeepCity_House1_EventScript_BlackBelt::
	lockall
	faceplayer
	compare VAR_ROUTE4_BRAWLEY, 0
	goto_if_gt MossdeepCity_House1_EventScript_BlackBelt_3
MossdeepCity_House1_EventScript_BlackBelt_1:
	compare VAR_ROUTE4_BRAWLEY, 0
	goto_if_gt MossdeepCity_House1_EventScript_BlackBelt_9
MossdeepCity_House1_EventScript_BlackBelt_8:
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_2
MossdeepCity_House1_EventScript_BlackBelt_6:
	releaseall
	return

MossdeepCity_House1_EventScript_BlackBelt_2:
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_0
	giveitem ITEM_HM06
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECEIVED_HM06
	goto MossdeepCity_House1_EventScript_BlackBelt_1

MossdeepCity_House1_EventScript_BlackBelt_3:
	goto_if_unset FLAG_RECEIVED_HM06, MossdeepCity_House1_EventScript_BlackBelt_2
	goto MossdeepCity_House1_EventScript_BlackBelt_1

MossdeepCity_House1_EventScript_BlackBelt_7:
	msgbox MossdeepCity_House1_EventScript_BlackBelt_Text_1
	goto MossdeepCity_House1_EventScript_BlackBelt_6

MossdeepCity_House1_EventScript_BlackBelt_9:
	goto_if_set FLAG_RECEIVED_HM06, MossdeepCity_House1_EventScript_BlackBelt_7
	goto MossdeepCity_House1_EventScript_BlackBelt_8


MossdeepCity_House1_EventScript_Woman::
	lockall
	faceplayer
	msgbox MossdeepCity_House1_EventScript_Woman_Text_0
	releaseall
	return


MossdeepCity_House1_EventScript_Kid::
	lockall
	faceplayer
	msgbox MossdeepCity_House1_EventScript_Kid_Text_0
	releaseall
	return


MossdeepCity_House1_EventScript_BlackBelt_Text_0:
	.string "Oh wow! You beat Master Brawley? You\n"
	.string "are pretty tough, why don't you take\l"
	.string "this.$"

MossdeepCity_House1_EventScript_BlackBelt_Text_1:
	.string "You should check up some of the dojos\n"
	.string "hidden in the mountains near Granite\l"
	.string "Peak, there is one near the waterfall.$"

MossdeepCity_House1_EventScript_BlackBelt_Text_2:
	.string "Why aren't you small! I could train you\n"
	.string "up if I had the time.$"

MossdeepCity_House1_EventScript_Woman_Text_0:
	.string "My husband used to run a Dojo at\n"
	.string "Granite Peak but he had we moved here\l"
	.string "when we adopted our daughter$"

MossdeepCity_House1_EventScript_Kid_Text_0:
	.string "HYAH! HYRAH!\n"
	.string "One day I'm going to take over my Dads\l"
	.string "old Dojo! I just need to be strong\l"
	.string "enough to smash through the rocks!\n"
	.string "HYAH$"
