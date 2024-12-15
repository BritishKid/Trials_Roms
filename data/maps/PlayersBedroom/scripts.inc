PlayersBedroom_MapScripts::
	.byte 0


PlayersBedroom_EventScript_Notebook::
# 6 "data/maps/PlayersBedroom/scripts.pory"
	lockall
# 7 "data/maps/PlayersBedroom/scripts.pory"
	msgbox PlayersBedroom_EventScript_Notebook_Text_0
# 8 "data/maps/PlayersBedroom/scripts.pory"
	msgbox PlayersBedroom_EventScript_Notebook_Text_1, MSGBOX_YESNO
# 9 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayersBedroom_EventScript_Notebook_2
# 12 "data/maps/PlayersBedroom/scripts.pory"
	clearflag FLAG_LEVEL_CAPS_ON
PlayersBedroom_EventScript_Notebook_1:
# 14 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RIVAL_STATE, 0
	goto_if_eq PlayersBedroom_EventScript_Notebook_6
PlayersBedroom_EventScript_Notebook_5:
# 17 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	return

PlayersBedroom_EventScript_Notebook_2:
# 10 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_LEVEL_CAPS_ON
	goto PlayersBedroom_EventScript_Notebook_1

PlayersBedroom_EventScript_Notebook_6:
# 15 "data/maps/PlayersBedroom/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
	goto PlayersBedroom_EventScript_Notebook_5


PlayersBedroom_Trigger_Setup::
# 21 "data/maps/PlayersBedroom/scripts.pory"
	lockall
# 22 "data/maps/PlayersBedroom/scripts.pory"
	msgbox PlayersBedroom_Trigger_Setup_Text_0
# 23 "data/maps/PlayersBedroom/scripts.pory"
	msgbox PlayersBedroom_EventScript_Notebook_Text_1, MSGBOX_YESNO
# 24 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PlayersBedroom_Trigger_Setup_2
# 27 "data/maps/PlayersBedroom/scripts.pory"
	clearflag FLAG_LEVEL_CAPS_ON
PlayersBedroom_Trigger_Setup_1:
# 29 "data/maps/PlayersBedroom/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 30 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	return

PlayersBedroom_Trigger_Setup_2:
# 25 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_LEVEL_CAPS_ON
	goto PlayersBedroom_Trigger_Setup_1


PlayersBedroom_EventScript_Notebook_Text_0:
# 7 "data/maps/PlayersBedroom/scripts.pory"
	.string "Make changes to the gameplay at\n"
	.string "anytime to fit your playstyle!$"

PlayersBedroom_EventScript_Notebook_Text_1:
# 8 "data/maps/PlayersBedroom/scripts.pory"
	.string "Would you like to turn on level caps?$"

PlayersBedroom_Trigger_Setup_Text_0:
# 22 "data/maps/PlayersBedroom/scripts.pory"
	.string "Before we start the adventure we can\n"
	.string "configure the game to your playstyle.\p"
	.string "This can be changed at any time from\n"
	.string "the notebook in this room.$"
