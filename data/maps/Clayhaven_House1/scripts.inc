Clayhaven_House1_MapScripts::
	.byte 0


Clayhaven_House1_EventScript_CraftingMaster::
# 6 "data/maps/Clayhaven_House1/scripts.pory"
	lockall
# 7 "data/maps/Clayhaven_House1/scripts.pory"
	faceplayer
# 8 "data/maps/Clayhaven_House1/scripts.pory"
	msgbox Clayhaven_House1_EventScript_CraftingMaster_Text_0
# 9 "data/maps/Clayhaven_House1/scripts.pory"
	call CraftTutorial_EventScript_Table
# 10 "data/maps/Clayhaven_House1/scripts.pory"
	releaseall
	return


Clayhaven_House1_EventScript_CraftingMaster_Text_0:
# 8 "data/maps/Clayhaven_House1/scripts.pory"
	.string "Hello$"
