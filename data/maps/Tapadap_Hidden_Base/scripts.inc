Tapadap_Hidden_Base_MapScripts::
	.byte 0


Taps_Computer::
# 4 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	lockall
# 5 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	msgbox Taps_Computer_Text_0
# 6 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	releaseall
	return


Tapadap_SecretBase::
# 10 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	lockall
# 11 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	faceplayer
# 12 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	msgbox Tapadap_SecretBase_Text_0
# 13 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	msgbox Tapadap_SecretBase_Text_1
# 15 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	releaseall
	return


Taps_Hidden_Base_EventScript_Find_MeowthDoll::
# 19 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	lockall
# 20 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	goto_if_unset FLAG_FOUND_MEOWTH_DOLL, Taps_Hidden_Base_EventScript_Find_MeowthDoll_2
# 26 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0
Taps_Hidden_Base_EventScript_Find_MeowthDoll_1:
# 28 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	releaseall
	return

Taps_Hidden_Base_EventScript_Find_MeowthDoll_2:
# 21 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0
# 22 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	adddecoration DECOR_MEOWTH_DOLL
# 23 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	setflag FLAG_FOUND_MEOWTH_DOLL
# 24 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_1
	goto Taps_Hidden_Base_EventScript_Find_MeowthDoll_1


Taps_Computer_Text_0:
# 5 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	.string "Well done to Tap for getting the first\n"
	.string "recorded shiny in the game!$"

Tapadap_SecretBase_Text_0:
# 12 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	.string "Hi I'm Tapadapbadadap$"

Tapadap_SecretBase_Text_1:
# 13 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	.string "BATTLE HERE BUT NOT FOR YOU VIEWERS\n"
	.string "ITS SPOILERS$"

Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0:
# 21 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	.string "It's Tap's Meowth doll.$"

Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_1:
# 24 "data/maps/Tapadap_Hidden_Base/scripts.pory"
	.string "You've unlocked the MEOWTH DOLL for\n"
	.string "your secret base.$"
