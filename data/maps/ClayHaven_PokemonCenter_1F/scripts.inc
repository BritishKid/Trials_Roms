.set LOCALID_NURSE, 1

ClayHaven_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ClayHaven_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ClayHaven_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CLAY_HAVEN
	call Common_EventScript_UpdateBrineyLocation
	end

ClayHaven_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

ClayHaven_PokemonCenter_1F_EventScript_Gentleman::
	msgbox ClayHaven_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

ClayHaven_PokemonCenter_1F_EventScript_Boy::
	msgbox ClayHaven_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

ClayHaven_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "That PC in the corner there is\n"
	.string "for any POKéMON TRAINER to use.\p"
	.string "Naturally, that means you're welcome\n"
	.string "to use it, too.$"

ClayHaven_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "POKéMON CENTERS are great!\p"
	.string "You can use their services as much\n"
	.string "as you like, and it's all for free.\l"
	.string "You never have to worry!$"
