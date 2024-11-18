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


ClayHaven_House1_EventScript_Bookcase1::
# 15 "data/maps/Clayhaven_House1/scripts.pory"
	lockall
# 16 "data/maps/Clayhaven_House1/scripts.pory"
	msgbox ClayHaven_House1_EventScript_Bookcase1_Text_0
# 17 "data/maps/Clayhaven_House1/scripts.pory"
	msgbox ClayHaven_House1_EventScript_Bookcase1_Text_1
# 18 "data/maps/Clayhaven_House1/scripts.pory"
	releaseall
	return


Clayhaven_House1_EventScript_CraftingMaster_Text_0:
# 8 "data/maps/Clayhaven_House1/scripts.pory"
	.string "Hello$"

ClayHaven_House1_EventScript_Bookcase1_Text_0:
# 16 "data/maps/Clayhaven_House1/scripts.pory"
	.string "You find a book about berry crafting.$"

ClayHaven_House1_EventScript_Bookcase1_Text_1:
# 17 "data/maps/Clayhaven_House1/scripts.pory"
	.string "You can use 2 Oran Berries or an Oran\n"
	.string "Berry with a Potion to create a Berry\l"
	.string "Juice that Pokemon will use in battle\l"
	.string "themself.$"
