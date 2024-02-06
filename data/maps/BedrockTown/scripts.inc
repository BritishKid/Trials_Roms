.set LOCALID_TWIN, 1
.set LOCALID_MOM, 4
.set LOCALID_RIVAL, 7
.set LOCALID_BIRCH, 8

BedrockTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
	.byte 0


LittlerootTown_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
	end


LittlerootTown_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
	return

LittlerootTown_OnWarp:
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
	.2byte 0

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
	addobject LOCALID_BIRCH
	addobject LOCALID_RIVAL
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
	end

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
	setobjectxy LOCALID_RIVAL, 6, 10
	setobjectxy LOCALID_BIRCH, 5, 10
	end

LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
	setobjectxy LOCALID_RIVAL, 13, 10
	setobjectxy LOCALID_BIRCH, 14, 10
	end

LittlerootTown_EventScript_SetHomeDoorCoordsMale::
	setvar VAR_0x8009, 5
	setvar VAR_0x800A, 8
	return

LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
	setvar VAR_0x8009, 14
	setvar VAR_0x800A, 8
	return


LittlerootTown_Text_PlayersHouse:
	.string "{PLAYER}'s HOUSE$"

BedrockTown_EventScript_HollyLabSign::
	lockall
	msgbox BedrockTown_EventScript_HollyLabSign_Text_0
	releaseall
	return


BedrockTown_EventScript_TownSign::
	lockall
	msgbox BedrockTown_EventScript_TownSign_Text_0
	releaseall
	return


BedrockTown_EventScript_PlayersHouse::
	lockall
	msgbox BedrockTown_EventScript_PlayersHouse_Text_0
	releaseall
	return


BedrockTown_EventScript_ItemPokeBall::
	finditem ITEM_REPEL, 2
	return


BedrockTown_EventScript_ComingSoon::
	lockall
	msgbox BedrockTown_EventScript_ComingSoon_Text_0
	releaseall
	return


BedrockTown_EventScript_OldMan::
	lockall
	msgbox BedrockTown_EventScript_OldMan_Text_0
	releaseall
	return


BedrockTown_EventScript_HollyLabSign_Text_0:
	.string "Professor Holly's Lab.\p"
	.string "Studying ancient pokemon legends$"

BedrockTown_EventScript_TownSign_Text_0:
	.string "Bedrock Town.\p"
	.string "Once a deep lake is now a vibrant town.$"

BedrockTown_EventScript_PlayersHouse_Text_0:
	.string "{PLAYER}'s House$"

BedrockTown_EventScript_ComingSoon_Text_0:
	.string "COMING SOON Checkout Discord for\n"
	.string "latest updates or give suggestions$"

BedrockTown_EventScript_OldMan_Text_0:
	.string "Thousands of years ago this was a lake\n"
	.string "was created a mysterious Pokemon. It\l"
	.string "dried out as the water carved out a\l"
	.string "cavern underneath which allows us to\l"
	.string "have such a vibrant town!$"
