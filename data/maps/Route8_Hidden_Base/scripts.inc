Route8_Hidden_Base_MapScripts::
	.byte 0


Tapadap_SecretBase::
	lockall
	faceplayer
	msgbox Tapadap_SecretBase_Text_0
	msgbox Tapadap_SecretBase_Text_1
	releaseall
	return


Taps_Hidden_Base_EventScript_Find_MeowthDoll::
	lockall
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_MEOWTH, Taps_Hidden_Base_EventScript_Find_MeowthDoll_2
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0
Taps_Hidden_Base_EventScript_Find_MeowthDoll_1:
	releaseall
	return

Taps_Hidden_Base_EventScript_Find_MeowthDoll_2:
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0
	adddecoration DECOR_MEOWTH_DOLL
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_MEOWTH
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_MEOWTH_DOLL
	msgbox Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_1
	goto Taps_Hidden_Base_EventScript_Find_MeowthDoll_1


Tapadap_SecretBase_Text_0:
	.string "Hi I'm Tapadapbadadap$"

Tapadap_SecretBase_Text_1:
	.string "Battle coming soon!$"

Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_0:
	.string "It's Tap's Meowth Doll$"

Taps_Hidden_Base_EventScript_Find_MeowthDoll_Text_1:
	.string "You've unlocked the MEOWTH Doll for\n"
	.string "your secret base$"
