BreakwaterPort_House1_MapScripts::
	.byte 0

BreakwaterPort_House1_EventScript_ExpertM::
	msgbox BreakwaterPort_House1_Text_PokemonPartnersNotTools, MSGBOX_NPC
	end

BreakwaterPort_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	msgbox BreakwaterPort_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BreakwaterPort_House1_Text_PokemonPartnersNotTools:
	.string "POKéMON are partners to people.\n"
	.string "They aren't our tools.\p"
	.string "Unfortunately, there are some people\n"
	.string "who fail to understand that…$"

BreakwaterPort_House1_Text_Kecleon:
	.string "KECLEON: Ruroro?$"

