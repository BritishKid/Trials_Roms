EmderDune_EntryHouse_MapScripts::
	.byte 0


ChattyHikerMan_FoundNearDesert_InThingRobMade::
	lockall
	faceplayer
	msgbox ChattyHikerMan_FoundNearDesert_InThingRobMade_Text_0
	releaseall
	return


ChattyBugTrainer_InDesert::
	lockall
	faceplayer
	msgbox ChattyBugTrainer_InDesert_Text_0
	releaseall
	return


ChattyHikerMan_FoundNearDesert_InThingRobMade_Text_0:
	.string "Oh wow, it's rare we see many people\n"
	.string "come this way.\n"
	.string "These are the ember dunes, I've heard\l"
	.string "rumours about some powerful Pokémon\l"
	.string "hiding somewhere.$"

ChattyBugTrainer_InDesert_Text_0:
	.string "It's tough bug trainer here, so many\n"
	.string "fire types are making me burn through\l"
	.string "my potions!$"
