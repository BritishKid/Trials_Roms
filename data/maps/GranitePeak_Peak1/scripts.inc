GranitePeak_Peak1_MapScripts::
	.byte 0


GranitePeak_Peak_EventScript_IceStone::
# 6 "data/maps/GranitePeak_Peak1/scripts.pory"
	lockall
# 7 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Text_0
# 8 "data/maps/GranitePeak_Peak1/scripts.pory"
	releaseall
	return


GranitePeak_Peak_EventScript_IceStone_Grandson::
# 12 "data/maps/GranitePeak_Peak1/scripts.pory"
	lockall
# 13 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_0
# 15 "data/maps/GranitePeak_Peak1/scripts.pory"
	goto_if_unset FLAG_ICE_STONE_SOURCE, GranitePeak_Peak_EventScript_IceStone_Grandson_3
GranitePeak_Peak_EventScript_IceStone_Grandson_1:
# 47 "data/maps/GranitePeak_Peak1/scripts.pory"
	releaseall
	return

GranitePeak_Peak_EventScript_IceStone_Grandson_2:
# 16 "data/maps/GranitePeak_Peak1/scripts.pory"
	faceplayer
# 17 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_1, MSGBOX_YESNO
# 18 "data/maps/GranitePeak_Peak1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_Peak_EventScript_IceStone_Grandson_7
GranitePeak_Peak_EventScript_IceStone_Grandson_6:
# 43 "data/maps/GranitePeak_Peak1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_Peak_EventScript_IceStone_Grandson_9
	goto GranitePeak_Peak_EventScript_IceStone_Grandson_1

GranitePeak_Peak_EventScript_IceStone_Grandson_3:
# 15 "data/maps/GranitePeak_Peak1/scripts.pory"
	compare VAR_EVOLUTION_STONE_HUNTING, 3
	goto_if_eq GranitePeak_Peak_EventScript_IceStone_Grandson_2
	goto GranitePeak_Peak_EventScript_IceStone_Grandson_1

GranitePeak_Peak_EventScript_IceStone_Grandson_7:
# 19 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_2
# 20 "data/maps/GranitePeak_Peak1/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 30, ITEM_ORAN_BERRY
# 21 "data/maps/GranitePeak_Peak1/scripts.pory"
	call StartIceStoneBattle
# 22 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_3
# 23 "data/maps/GranitePeak_Peak1/scripts.pory"
	setwildbattle SPECIES_VANILLISH, 33, ITEM_ORAN_BERRY
# 24 "data/maps/GranitePeak_Peak1/scripts.pory"
	call StartIceStoneBattle
# 25 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_4
# 26 "data/maps/GranitePeak_Peak1/scripts.pory"
	setwildbattle SPECIES_GLACEON, 35, ITEM_ORAN_BERRY
# 27 "data/maps/GranitePeak_Peak1/scripts.pory"
	call StartIceStoneBattle
# 28 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_5
# 29 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_6
# 30 "data/maps/GranitePeak_Peak1/scripts.pory"
	giveitem ITEM_ICE_STONE
# 31 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_7
# 32 "data/maps/GranitePeak_Peak1/scripts.pory"
	setflag FLAG_ICE_STONE_SOURCE
# 33 "data/maps/GranitePeak_Peak1/scripts.pory"
	goto_if_set FLAG_ICE_STONE_SOURCE, GranitePeak_Peak_EventScript_IceStone_Grandson_13
GranitePeak_Peak_EventScript_IceStone_Grandson_11:
# 41 "data/maps/GranitePeak_Peak1/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto GranitePeak_Peak_EventScript_IceStone_Grandson_6

GranitePeak_Peak_EventScript_IceStone_Grandson_9:
# 44 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_9
	goto GranitePeak_Peak_EventScript_IceStone_Grandson_1

GranitePeak_Peak_EventScript_IceStone_Grandson_12:
# 34 "data/maps/GranitePeak_Peak1/scripts.pory"
	msgbox GranitePeak_Peak_EventScript_IceStone_Grandson_Text_8
# 35 "data/maps/GranitePeak_Peak1/scripts.pory"
	setvar VAR_EVOLUTION_STONE_HUNTING, 4
	goto GranitePeak_Peak_EventScript_IceStone_Grandson_11

GranitePeak_Peak_EventScript_IceStone_Grandson_13:
# 33 "data/maps/GranitePeak_Peak1/scripts.pory"
	goto_if_set FLAG_THUNDER_STONE_SOURCE, GranitePeak_Peak_EventScript_IceStone_Grandson_12
	goto GranitePeak_Peak_EventScript_IceStone_Grandson_11


StartIceStoneBattle::
# 51 "data/maps/GranitePeak_Peak1/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 52 "data/maps/GranitePeak_Peak1/scripts.pory"
	dowildbattle
	return


GranitePeak_Peak_EventScript_IceStone_Text_0:
# 7 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "A cold air seems to comes from the rock.$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_0:
# 13 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "Interesting...is this it?$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_1:
# 17 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "Hey good to see you again, this looks to\n"
	.string "be the source of ice stones. Are you\l"
	.string "ready to fight off the Pokemon that\l"
	.string "will appear?$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_2:
# 19 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "Brilliant, prepare yourself I'm going to\n"
	.string "start to harvest now.$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_3:
# 22 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "Thank you, but I can see more coming!$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_4:
# 25 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "Great job but I think something bigger\n"
	.string "is coming$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_5:
# 28 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "Okay we are good, thank you for that.\n"
	.string "I'll see you at the next one.$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_6:
# 29 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "Also please take this.$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_7:
# 31 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "It's the least I could do in return.$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_8:
# 34 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "That's the ice and thunder stones\n"
	.string "sorted. I should return these back to\l"
	.string "my Grandad$"

GranitePeak_Peak_EventScript_IceStone_Grandson_Text_9:
# 44 "data/maps/GranitePeak_Peak1/scripts.pory"
	.string "Well go prepare I don't think I can do\n"
	.string "this alone.$"
