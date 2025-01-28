DarkCave1F_MapScripts::
	.byte 0


DarkCave1F_EventScript_Steven::
# 5 "data/maps/DarkCave1F/scripts.pory"
	lockall
# 6 "data/maps/DarkCave1F/scripts.pory"
	compare VAR_STEVEN_QUEST_STATE, 3
	goto_if_eq DarkCave1F_EventScript_Steven_2
DarkCave1F_EventScript_Steven_1:
# 10 "data/maps/DarkCave1F/scripts.pory"
	compare VAR_STEVEN_QUEST_STATE, 2
	goto_if_eq DarkCave1F_EventScript_Steven_5
DarkCave1F_EventScript_Steven_4:
# 20 "data/maps/DarkCave1F/scripts.pory"
	compare VAR_STEVEN_QUEST_STATE, 1
	goto_if_eq DarkCave1F_EventScript_Steven_8
DarkCave1F_EventScript_Steven_7:
# 24 "data/maps/DarkCave1F/scripts.pory"
	compare VAR_STEVEN_QUEST_STATE, 0
	goto_if_eq DarkCave1F_EventScript_Steven_11
DarkCave1F_EventScript_Steven_10:
# 33 "data/maps/DarkCave1F/scripts.pory"
	releaseall
	return

DarkCave1F_EventScript_Steven_2:
# 7 "data/maps/DarkCave1F/scripts.pory"
	faceplayer
# 8 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_0
	goto DarkCave1F_EventScript_Steven_1

DarkCave1F_EventScript_Steven_5:
# 11 "data/maps/DarkCave1F/scripts.pory"
	faceplayer
# 12 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_2, MSGBOX_DEFAULT
# 14 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_3, MSGBOX_DEFAULT
# 15 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_4, MSGBOX_DEFAULT
# 16 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_5
# 17 "data/maps/DarkCave1F/scripts.pory"
	setvar VAR_STEVEN_QUEST_STATE, 3
# 18 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_6
	goto DarkCave1F_EventScript_Steven_4

DarkCave1F_EventScript_Steven_8:
# 21 "data/maps/DarkCave1F/scripts.pory"
	faceplayer
# 22 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_7, MSGBOX_DEFAULT
	goto DarkCave1F_EventScript_Steven_7

DarkCave1F_EventScript_Steven_11:
# 25 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_8, MSGBOX_DEFAULT
# 26 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_9, MSGBOX_DEFAULT
# 27 "data/maps/DarkCave1F/scripts.pory"
	faceplayer
# 28 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_10
# 29 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_11, MSGBOX_DEFAULT
# 30 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_12
# 31 "data/maps/DarkCave1F/scripts.pory"
	setvar VAR_STEVEN_QUEST_STATE, 1
	goto DarkCave1F_EventScript_Steven_10


DarkCave_DepletedBlueStone::
# 38 "data/maps/DarkCave1F/scripts.pory"
	lockall
# 39 "data/maps/DarkCave1F/scripts.pory"
	compare VAR_STEVEN_QUEST_STATE, 1
	goto_if_eq DarkCave_DepletedBlueStone_2
# 48 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave_DepletedBlueStone_Text_2
DarkCave_DepletedBlueStone_1:
# 50 "data/maps/DarkCave1F/scripts.pory"
	releaseall
	return

DarkCave_DepletedBlueStone_2:
# 40 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave_DepletedBlueStone_Text_0
# 41 "data/maps/DarkCave1F/scripts.pory"
	addvar VAR_CRYSTALS_CHECKED, 1
# 42 "data/maps/DarkCave1F/scripts.pory"
	compare VAR_CRYSTALS_CHECKED, 4
	goto_if_eq DarkCave_DepletedBlueStone_5
	goto DarkCave_DepletedBlueStone_1

DarkCave_DepletedBlueStone_5:
# 43 "data/maps/DarkCave1F/scripts.pory"
	setvar VAR_STEVEN_QUEST_STATE, 2
# 44 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave_DepletedBlueStone_Text_1
	goto DarkCave_DepletedBlueStone_1


DarkCave_FullBlueStone::
# 54 "data/maps/DarkCave1F/scripts.pory"
	lockall
# 55 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave_FullBlueStone_Text_0
# 56 "data/maps/DarkCave1F/scripts.pory"
	releaseall
	return


DarkCave1F_EventScript_Steven_Text_0:
# 8 "data/maps/DarkCave1F/scripts.pory"
	.string "I'm almost finished here, I'll catch up\n"
	.string "with you at Crystal Caves.$"

DarkCave1F_EventScript_Steven_Text_1:
# 12 "data/maps/DarkCave1F/scripts.pory"
	.string "Oh you're back, did you have any luck?$"

DarkCave1F_EventScript_Steven_Text_2:
# 13 "data/maps/DarkCave1F/scripts.pory"
	.string "Oh I see, so some energy used to be here\n"
	.string "but it's faded out of this cave.$"

DarkCave1F_EventScript_Steven_Text_3:
# 14 "data/maps/DarkCave1F/scripts.pory"
	.string "It feels like the energy that some\n"
	.string "Pokemon can control but...not like\l"
	.string "anything i've felt before.$"

DarkCave1F_EventScript_Steven_Text_4:
# 15 "data/maps/DarkCave1F/scripts.pory"
	.string "...$"

DarkCave1F_EventScript_Steven_Text_5:
# 16 "data/maps/DarkCave1F/scripts.pory"
	.string "OH YES!\n"
	.string "Triver has the Crystal Caves! The\l"
	.string "Pokemon found there emit the same\l"
	.string "energy that's where we should go next!$"

DarkCave1F_EventScript_Steven_Text_6:
# 18 "data/maps/DarkCave1F/scripts.pory"
	.string "You should meet me there, I'm just going\n"
	.string "to take a few more samples and catch\l"
	.string "right up!$"

DarkCave1F_EventScript_Steven_Text_7:
# 22 "data/maps/DarkCave1F/scripts.pory"
	.string "Have you had any luck finding anything\n"
	.string "yet?$"

DarkCave1F_EventScript_Steven_Text_8:
# 25 "data/maps/DarkCave1F/scripts.pory"
	.string "These crystals are fascinating.$"

DarkCave1F_EventScript_Steven_Text_9:
# 26 "data/maps/DarkCave1F/scripts.pory"
	.string "Although...something feels off about\n"
	.string "the rest of this cave.$"

DarkCave1F_EventScript_Steven_Text_10:
# 28 "data/maps/DarkCave1F/scripts.pory"
	.string "Oh hello.$"

DarkCave1F_EventScript_Steven_Text_11:
# 29 "data/maps/DarkCave1F/scripts.pory"
	.string "I've heard so much about the crystals\n"
	.string "in Triver that I've come over from Hoenn\l"
	.string "to look into them more but this seems\l"
	.string "to be the only crystal that isn't\l"
	.string "lifeless.$"

DarkCave1F_EventScript_Steven_Text_12:
# 30 "data/maps/DarkCave1F/scripts.pory"
	.string "If you have some time do you mind\n"
	.string "taking a look at some of the other\l"
	.string "crystals and see if you can notice\l"
	.string "anything special about them?$"

DarkCave_DepletedBlueStone_Text_0:
# 40 "data/maps/DarkCave1F/scripts.pory"
	.string "This crystal seems dull and lifeless but\n"
	.string "a faint energy lingers, but it's almost\l"
	.string "gone...$"

DarkCave_DepletedBlueStone_Text_1:
# 44 "data/maps/DarkCave1F/scripts.pory"
	.string "I've probably got enough information to\n"
	.string "share with Steven.$"

DarkCave_DepletedBlueStone_Text_2:
# 48 "data/maps/DarkCave1F/scripts.pory"
	.string "It's a very small crystal.$"

DarkCave_FullBlueStone_Text_0:
# 55 "data/maps/DarkCave1F/scripts.pory"
	.string "There is a huge crystal in this rock,\n"
	.string "it's emitting alot of heat but it's cold\l"
	.string "to the touch.$"
