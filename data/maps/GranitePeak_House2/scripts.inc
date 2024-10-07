GranitePeak_House2_MapScripts::
	.byte 0


GranitePeak_House2_EventScript_SchoolKid::
# 6 "data/maps/GranitePeak_House2/scripts.pory"
	lock
# 7 "data/maps/GranitePeak_House2/scripts.pory"
	faceplayer
# 8 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_0
# 9 "data/maps/GranitePeak_House2/scripts.pory"
	goto_if_set FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_House2_EventScript_SchoolKid_3
GranitePeak_House2_EventScript_SchoolKid_1:
# 18 "data/maps/GranitePeak_House2/scripts.pory"
	goto_if_set FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_House2_EventScript_SchoolKid_8
GranitePeak_House2_EventScript_SchoolKid_6:
# 21 "data/maps/GranitePeak_House2/scripts.pory"
	goto_if_unset FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_House2_EventScript_SchoolKid_12
GranitePeak_House2_EventScript_SchoolKid_11:
# 24 "data/maps/GranitePeak_House2/scripts.pory"
	release
	return

GranitePeak_House2_EventScript_SchoolKid_2:
# 10 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_1
# 11 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_2
# 12 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_3
# 13 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_4
# 14 "data/maps/GranitePeak_House2/scripts.pory"
	giveitem ITEM_TM10
# 15 "data/maps/GranitePeak_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM10
# 16 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_5
	goto GranitePeak_House2_EventScript_SchoolKid_1

GranitePeak_House2_EventScript_SchoolKid_3:
# 9 "data/maps/GranitePeak_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM10, GranitePeak_House2_EventScript_SchoolKid_2
	goto GranitePeak_House2_EventScript_SchoolKid_1

GranitePeak_House2_EventScript_SchoolKid_7:
# 19 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_6
	goto GranitePeak_House2_EventScript_SchoolKid_6

GranitePeak_House2_EventScript_SchoolKid_8:
# 18 "data/maps/GranitePeak_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM10, GranitePeak_House2_EventScript_SchoolKid_7
	goto GranitePeak_House2_EventScript_SchoolKid_6

GranitePeak_House2_EventScript_SchoolKid_12:
# 22 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_SchoolKid_Text_7
	goto GranitePeak_House2_EventScript_SchoolKid_11


GranitePeak_House2_EventScript_Woman::
# 28 "data/maps/GranitePeak_House2/scripts.pory"
	lockall
# 29 "data/maps/GranitePeak_House2/scripts.pory"
	faceplayer
# 30 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_Woman_Text_0
# 31 "data/maps/GranitePeak_House2/scripts.pory"
	goto_if_unset FLAG_RECIEVE_CHARCOAL, GranitePeak_House2_EventScript_Woman_2
GranitePeak_House2_EventScript_Woman_1:
# 37 "data/maps/GranitePeak_House2/scripts.pory"
	goto_if_set FLAG_RECIEVE_CHARCOAL, GranitePeak_House2_EventScript_Woman_5
GranitePeak_House2_EventScript_Woman_4:
# 40 "data/maps/GranitePeak_House2/scripts.pory"
	releaseall
	return

GranitePeak_House2_EventScript_Woman_2:
# 32 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_Woman_Text_1
# 33 "data/maps/GranitePeak_House2/scripts.pory"
	giveitem ITEM_CHARCOAL
# 34 "data/maps/GranitePeak_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/GranitePeak_House2/scripts.pory"
	setflag FLAG_RECIEVE_CHARCOAL
	goto GranitePeak_House2_EventScript_Woman_1

GranitePeak_House2_EventScript_Woman_5:
# 38 "data/maps/GranitePeak_House2/scripts.pory"
	msgbox GranitePeak_House2_EventScript_Woman_Text_2
	goto GranitePeak_House2_EventScript_Woman_4


GranitePeak_House2_EventScript_SchoolKid_Text_0:
# 8 "data/maps/GranitePeak_House2/scripts.pory"
	.string "The trainer school is full of so many\n"
	.string "powerful trainers. I passed all the\l"
	.string "classes but still couldn't make it\l"
	.string "through the first round$"

GranitePeak_House2_EventScript_SchoolKid_Text_1:
# 10 "data/maps/GranitePeak_House2/scripts.pory"
	.string "Oh wow you managed to beat the\n"
	.string "tournament! You're incredible$"

GranitePeak_House2_EventScript_SchoolKid_Text_2:
# 11 "data/maps/GranitePeak_House2/scripts.pory"
	.string "Can I see the trophy?$"

GranitePeak_House2_EventScript_SchoolKid_Text_3:
# 12 "data/maps/GranitePeak_House2/scripts.pory"
	.string "Wow thank you! I'm going to win it one\n"
	.string "day.$"

GranitePeak_House2_EventScript_SchoolKid_Text_4:
# 13 "data/maps/GranitePeak_House2/scripts.pory"
	.string "Take this I'm sure you'll have a great\n"
	.string "use for it.$"

GranitePeak_House2_EventScript_SchoolKid_Text_5:
# 16 "data/maps/GranitePeak_House2/scripts.pory"
	.string "It's Hidden Power, a move that changes\n"
	.string "for every Pokémon!$"

GranitePeak_House2_EventScript_SchoolKid_Text_6:
# 19 "data/maps/GranitePeak_House2/scripts.pory"
	.string "I'm training every day to improve$"

GranitePeak_House2_EventScript_SchoolKid_Text_7:
# 22 "data/maps/GranitePeak_House2/scripts.pory"
	.string "Only the best trainers could win.$"

GranitePeak_House2_EventScript_Woman_Text_0:
# 30 "data/maps/GranitePeak_House2/scripts.pory"
	.string "My husband is a brilliant trainer, he's\n"
	.string "always off finding ways to improve.$"

GranitePeak_House2_EventScript_Woman_Text_1:
# 32 "data/maps/GranitePeak_House2/scripts.pory"
	.string "Last time he came with a lot of these,\n"
	.string "here have one.$"

GranitePeak_House2_EventScript_Woman_Text_2:
# 38 "data/maps/GranitePeak_House2/scripts.pory"
	.string "If you every find him be prepared for a\n"
	.string "tough fight.$"
