CoralPort_House1_MapScripts::
	.byte 0


CoralPort_House1_EventScript_OldWoman::
# 5 "data/maps/CoralPort_House1/scripts.pory"
	lockall
# 6 "data/maps/CoralPort_House1/scripts.pory"
	faceplayer
# 7 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_EventScript_OldWoman_Text_0
# 8 "data/maps/CoralPort_House1/scripts.pory"
	releaseall
	return


CoralPort_House1_EventScript_OldMan::
# 12 "data/maps/CoralPort_House1/scripts.pory"
	lockall
# 13 "data/maps/CoralPort_House1/scripts.pory"
	faceplayer
# 14 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_EventScript_OldMan_Text_0
# 15 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_EventScript_OldMan_Text_1, MSGBOX_YESNO
# 16 "data/maps/CoralPort_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CoralPort_House1_EventScript_OldMan_2
CoralPort_House1_EventScript_OldMan_1:
# 19 "data/maps/CoralPort_House1/scripts.pory"
	releaseall
	return

CoralPort_House1_EventScript_OldMan_2:
# 17 "data/maps/CoralPort_House1/scripts.pory"
	msgbox CoralPort_House1_EventScript_OldMan_Text_2
	goto CoralPort_House1_EventScript_OldMan_1


CoralPort_House1_EventScript_OldWoman_Text_0:
# 7 "data/maps/CoralPort_House1/scripts.pory"
	.string "My Husband really wants to find some\n"
	.string "rare Pokémon but in our old age we can't\l"
	.string "go out and explore anymore.$"

CoralPort_House1_EventScript_OldMan_Text_0:
# 14 "data/maps/CoralPort_House1/scripts.pory"
	.string "I've always wanted a Meowth but now I'm\n"
	.string "too old to get one.$"

CoralPort_House1_EventScript_OldMan_Text_1:
# 15 "data/maps/CoralPort_House1/scripts.pory"
	.string "Would you be willing to trade one for my\n"
	.string "Gossifluer?$"

CoralPort_House1_EventScript_OldMan_Text_2:
# 17 "data/maps/CoralPort_House1/scripts.pory"
	.string "Trades Coming Soon..$"
