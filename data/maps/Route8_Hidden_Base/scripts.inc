Route8_Hidden_Base_MapScripts::
	.byte 0


Tapadap_SecretBase::
# 5 "data/maps/Route8_Hidden_Base/scripts.pory"
	lockall
# 6 "data/maps/Route8_Hidden_Base/scripts.pory"
	faceplayer
# 7 "data/maps/Route8_Hidden_Base/scripts.pory"
	msgbox Tapadap_SecretBase_Text_0
# 8 "data/maps/Route8_Hidden_Base/scripts.pory"
	msgbox Tapadap_SecretBase_Text_1
# 9 "data/maps/Route8_Hidden_Base/scripts.pory"
	releaseall
	return


Taps_Hidden_Base_EventScript_Find_MeowthDoll::
# 13 "data/maps/Route8_Hidden_Base/scripts.pory"
	lockall
# 14 "data/maps/Route8_Hidden_Base/scripts.pory"
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_MEOWTH, Taps_Hidden_Base_EventScript_Find_MeowthDoll_2
# 22 "data/maps/Route8_Hidden_Base/scripts.pory"
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0
Taps_Hidden_Base_EventScript_Find_MeowthDoll_1:
# 24 "data/maps/Route8_Hidden_Base/scripts.pory"
	releaseall
	return

Taps_Hidden_Base_EventScript_Find_MeowthDoll_2:
# 15 "data/maps/Route8_Hidden_Base/scripts.pory"
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0
# 16 "data/maps/Route8_Hidden_Base/scripts.pory"
	adddecoration DECOR_MEOWTH_DOLL
# 17 "data/maps/Route8_Hidden_Base/scripts.pory"
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_MEOWTH
# 18 "data/maps/Route8_Hidden_Base/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_MEOWTH_DOLL
# 19 "data/maps/Route8_Hidden_Base/scripts.pory"
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_1
	goto Taps_Hidden_Base_EventScript_Find_MeowthDoll_1


Tapadap_SecretBase_Text_0:
# 7 "data/maps/Route8_Hidden_Base/scripts.pory"
	.string "Hi I'm Tapadapbadadap$"

Tapadap_SecretBase_Text_1:
# 8 "data/maps/Route8_Hidden_Base/scripts.pory"
	.string "Battle coming soon!$"

Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0:
# 15 "data/maps/Route8_Hidden_Base/scripts.pory"
	.string "It's Tap's Meowth Doll$"

Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_1:
# 19 "data/maps/Route8_Hidden_Base/scripts.pory"
	.string "You've unlocked the MEOWTH Doll for\n"
	.string "your secret base$"
