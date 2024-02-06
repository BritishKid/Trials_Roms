CoralPort_House1_MapScripts::
	.byte 0


CoralPort_House1_EventScript_OldWoman::
	msgbox CoralPort_House1_EventScript_OldWoman_Text_0
	return


CoralPort_House1_EventScript_OldMan::
	msgbox CoralPort_House1_EventScript_OldMan_Text_0
	msgbox CoralPort_House1_EventScript_OldMan_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CoralPort_House1_EventScript_OldMan_1
	return

CoralPort_House1_EventScript_OldMan_1:
	msgbox CoralPort_House1_EventScript_OldMan_Text_2
	return


CoralPort_House1_EventScript_OldWoman_Text_0:
	.string "My Husband really wants to find some\n"
	.string "rare Pokemon but in our old age we can't\l"
	.string "go out and explore anymore.$"

CoralPort_House1_EventScript_OldMan_Text_0:
	.string "I've always wanted a Meowth but now I'm\n"
	.string "too old to get one.$"

CoralPort_House1_EventScript_OldMan_Text_1:
	.string "Would you be willing to trade one for my\n"
	.string "Gossifluer?$"

CoralPort_House1_EventScript_OldMan_Text_2:
	.string "Trades Coming Soon..$"
