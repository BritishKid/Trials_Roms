BirthIsland_Harbor_MapScripts::
	.byte 0


BirthIsland_Harbor_EventScript_Sailor::
# 6 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox BirthIsland_Harbor_EventScript_Sailor_Text_0
# 7 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox BirthIsland_Harbor_EventScript_Sailor_Text_1
# 8 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox BirthIsland_Harbor_EventScript_Sailor_Text_2, MSGBOX_YESNO
# 9 "data/maps/BirthIsland_Harbor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BirthIsland_Harbor_EventScript_Sailor_2
BirthIsland_Harbor_EventScript_Sailor_1:
# 13 "data/maps/BirthIsland_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BirthIsland_Harbor_EventScript_Sailor_4
	return

BirthIsland_Harbor_EventScript_Sailor_2:
# 10 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox BirthIsland_Harbor_EventScript_Sailor_Text_3
# 11 "data/maps/BirthIsland_Harbor/scripts.pory"
	warp MAP_MAHOGANY_HILLS_GYM_ENTRANCE, 17, 19
	goto BirthIsland_Harbor_EventScript_Sailor_1

BirthIsland_Harbor_EventScript_Sailor_4:
# 14 "data/maps/BirthIsland_Harbor/scripts.pory"
	msgbox BirthIsland_Harbor_EventScript_Sailor_Text_4
	return


BirthIsland_Harbor_EventScript_Sailor_Text_0:
# 6 "data/maps/BirthIsland_Harbor/scripts.pory"
	.string "YES THAT'S IT! I LOVE IT$"

BirthIsland_Harbor_EventScript_Sailor_Text_1:
# 7 "data/maps/BirthIsland_Harbor/scripts.pory"
	.string "No you've proven yourself to be useful\n"
	.string "I need one more thing from you$"

BirthIsland_Harbor_EventScript_Sailor_Text_2:
# 8 "data/maps/BirthIsland_Harbor/scripts.pory"
	.string "Do you want to be my BEST MAN for my\n"
	.string "wedding?$"

BirthIsland_Harbor_EventScript_Sailor_Text_3:
# 10 "data/maps/BirthIsland_Harbor/scripts.pory"
	.string "FANTASTIC let's get you back$"

BirthIsland_Harbor_EventScript_Sailor_Text_4:
# 14 "data/maps/BirthIsland_Harbor/scripts.pory"
	.string "Oh$"
