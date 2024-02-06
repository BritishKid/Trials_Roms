GranitePeak_House2_MapScripts::
	.byte 0


GranitePeak_House2_EventScript_SchoolKid::
	lock
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_0
	goto_if_set FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_House2_EventScript_SchoolKid_3
GranitePeak_House2_EventScript_SchoolKid_1:
	goto_if_set FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_House2_EventScript_SchoolKid_8
GranitePeak_House2_EventScript_SchoolKid_6:
	goto_if_unset FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_House2_EventScript_SchoolKid_12
GranitePeak_House2_EventScript_SchoolKid_11:
	release
	return

GranitePeak_House2_EventScript_SchoolKid_2:
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_1
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_2
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_3
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_4
	giveitem ITEM_TM10
	setflag FLAG_RECEIVED_TM10
	goto GranitePeak_House2_EventScript_SchoolKid_1

GranitePeak_House2_EventScript_SchoolKid_3:
	goto_if_unset FLAG_RECEIVED_TM10, GranitePeak_House2_EventScript_SchoolKid_2
	goto GranitePeak_House2_EventScript_SchoolKid_1

GranitePeak_House2_EventScript_SchoolKid_7:
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_5
	goto GranitePeak_House2_EventScript_SchoolKid_6

GranitePeak_House2_EventScript_SchoolKid_8:
	goto_if_set FLAG_RECEIVED_TM10, GranitePeak_House2_EventScript_SchoolKid_7
	goto GranitePeak_House2_EventScript_SchoolKid_6

GranitePeak_House2_EventScript_SchoolKid_12:
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_6
	goto GranitePeak_House2_EventScript_SchoolKid_11


GranitePeak_House2_EventScript_Woman::
	msgbox GranitePeak_House2_EventScript_Woman_Text_0
	goto_if_unset FLAG_RECIEVE_CHARCOAL, GranitePeak_House2_EventScript_Woman_2
GranitePeak_House2_EventScript_Woman_1:
	goto_if_set FLAG_RECIEVE_CHARCOAL, GranitePeak_House2_EventScript_Woman_4
	return

GranitePeak_House2_EventScript_Woman_2:
	msgbox GranitePeak_House2_EventScript_Woman_Text_1
	giveitem ITEM_CHARCOAL
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECIEVE_CHARCOAL
	goto GranitePeak_House2_EventScript_Woman_1

GranitePeak_House2_EventScript_Woman_4:
	msgbox GranitePeak_House2_EventScript_Woman_Text_2
	return


GranitePeak_House2_EventScript_SchoolKid_Text_0:
	.string "The trainer school is full of so many\n"
	.string "powerful trainers. I passed all the\l"
	.string "classes but still couldn't make it\l"
	.string "through the first round$"

GranitePeak_House2_EventScript_SchoolKid_Text_1:
	.string "Oh wow you managed to beat the\n"
	.string "tournament! You're incredible$"

GranitePeak_House2_EventScript_SchoolKid_Text_2:
	.string "Can I see the trophy?$"

GranitePeak_House2_EventScript_SchoolKid_Text_3:
	.string "Wow thank you! I'm going to win it one\n"
	.string "day.$"

GranitePeak_House2_EventScript_SchoolKid_Text_4:
	.string "Take this I'm sure you'll have a great\n"
	.string "use for it.$"

GranitePeak_House2_EventScript_SchoolKid_Text_5:
	.string "I'm training every day to improve$"

GranitePeak_House2_EventScript_SchoolKid_Text_6:
	.string "Only the best trainers could win.$"

GranitePeak_House2_EventScript_Woman_Text_0:
	.string "My husband is a brilliant trainer, he's\n"
	.string "always off finding ways to improve.$"

GranitePeak_House2_EventScript_Woman_Text_1:
	.string "Last time he came with a lot of these,\n"
	.string "here have one.$"

GranitePeak_House2_EventScript_Woman_Text_2:
	.string "If you every find him be prepared for a\n"
	.string "tough fight.$"
