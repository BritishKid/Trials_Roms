LilycoveCity_MapScripts::
# 2 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
	return


ChampionGuildAccessAllowed::
# 8 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 9 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 10 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ChampionGuildAccessAllowed_5
ChampionGuildAccessAllowed_3:
# 16 "data/maps/LilycoveCity/scripts.pory"
	msgbox ChampionGuildAccessAllowed_Text_1
ChampionGuildAccessAllowed_1:
# 18 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return

ChampionGuildAccessAllowed_2:
# 11 "data/maps/LilycoveCity/scripts.pory"
	msgbox ChampionGuildAccessAllowed_Text_0
# 12 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_CAN_ACCESS_CHAMPIONS_GUILD
# 13 "data/maps/LilycoveCity/scripts.pory"
	warp MAP_CHAMPIONS_GUILD_1, 10, 20
	goto ChampionGuildAccessAllowed_1

ChampionGuildAccessAllowed_4:
# 10 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ChampionGuildAccessAllowed_8
	goto ChampionGuildAccessAllowed_3

ChampionGuildAccessAllowed_5:
# 10 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, ChampionGuildAccessAllowed_4
	goto ChampionGuildAccessAllowed_3

ChampionGuildAccessAllowed_8:
# 10 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, ChampionGuildAccessAllowed_2
	goto ChampionGuildAccessAllowed_3


Lilycove_HiddenGigaDrain::
# 22 "data/maps/LilycoveCity/scripts.pory"
	finditem ITEM_TM19
	return


Lilycove_NPC_onanIsland::
# 27 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 28 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 29 "data/maps/LilycoveCity/scripts.pory"
	msgbox Lilycove_NPC_onanIsland_Text_0
# 30 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


LilycoveCity_ScratchOutSign::
# 34 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 35 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_ScratchOutSign_Text_0
# 36 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_ScratchOutSign_Text_1
# 37 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


Lilycove_City_TownSign::
# 41 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 42 "data/maps/LilycoveCity/scripts.pory"
	msgbox Lilycove_City_TownSign_Text_0
# 43 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


Lilycove_City_DirectionSign::
# 47 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox Lilycove_City_DirectionSign_Text_0
# 49 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


LilycyvoeTodo::
# 53 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 54 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycyvoeTodo_Text_0
# 55 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


ChampionGuildAccessAllowed_Text_0:
# 11 "data/maps/LilycoveCity/scripts.pory"
	.string "Oh fantastic please come in!$"

ChampionGuildAccessAllowed_Text_1:
# 16 "data/maps/LilycoveCity/scripts.pory"
	.string "Sorry but you need all badges to be able\n"
	.string "to enter$"

Lilycove_NPC_onanIsland_Text_0:
# 29 "data/maps/LilycoveCity/scripts.pory"
	.string "I will give you something in a future\n"
	.string "update!$"

LilycoveCity_ScratchOutSign_Text_0:
# 35 "data/maps/LilycoveCity/scripts.pory"
	.string "The old Town Sign has been sprayed over\n"
	.string "with$"

LilycoveCity_ScratchOutSign_Text_1:
# 36 "data/maps/LilycoveCity/scripts.pory"
	.string "Danger - Ghosts Ahead!$"

Lilycove_City_TownSign_Text_0:
# 42 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City - The city to be renamed$"

Lilycove_City_DirectionSign_Text_0:
# 48 "data/maps/LilycoveCity/scripts.pory"
	.string "More content coming soon! Join our\n"
	.string "discord to keep up to date on latest\l"
	.string "updates!$"

LilycyvoeTodo_Text_0:
# 54 "data/maps/LilycoveCity/scripts.pory"
	.string "Coming soon!$"
