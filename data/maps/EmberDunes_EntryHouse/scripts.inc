EmberDunes_EntryHouse_MapScripts::
	.byte 0


ChattyHikerMan_FoundNearDesert_InThingRobMade::
# 5 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	lockall
# 6 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	faceplayer
# 7 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	msgbox ChattyHikerMan_FoundNearDesert_InThingRobMade_Text_0
# 8 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	releaseall
	return


ChattyBugTrainer_InDesert::
# 12 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	lockall
# 13 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	faceplayer
# 14 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	msgbox ChattyBugTrainer_InDesert_Text_0
# 15 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	releaseall
	return


ChattyHikerMan_FoundNearDesert_InThingRobMade_Text_0:
# 7 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	.string "Oh wow, it's rare we see many people\n"
	.string "come this way.\n"
	.string "These are the Ember Dunes, I've heard\l"
	.string "rumours about some powerful Pokémon\l"
	.string "hiding somewhere.$"

ChattyBugTrainer_InDesert_Text_0:
# 14 "data/maps/EmberDunes_EntryHouse/scripts.pory"
	.string "It's tough bug trainer here, so many\n"
	.string "fire types are making me burn through\l"
	.string "my potions!$"
