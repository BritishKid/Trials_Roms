LilycoveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_LILYCOVE_CITY
	return


ChampionGuildAccessAllowed::
	lockall
	faceplayer
	goto_if_set FLAG_BADGE01_GET, ChampionGuildAccessAllowed_5
ChampionGuildAccessAllowed_3:
	msgbox ChampionGuildAccessAllowed_Text_1
ChampionGuildAccessAllowed_1:
	releaseall
	return

ChampionGuildAccessAllowed_2:
	msgbox ChampionGuildAccessAllowed_Text_0
	setflag FLAG_CAN_ACCESS_CHAMPIONS_GUILD
	warp MAP_CHAMPIONS_GUILD_1, 10, 20
	goto ChampionGuildAccessAllowed_1

ChampionGuildAccessAllowed_4:
	goto_if_set FLAG_BADGE03_GET, ChampionGuildAccessAllowed_8
	goto ChampionGuildAccessAllowed_3

ChampionGuildAccessAllowed_5:
	goto_if_set FLAG_BADGE02_GET, ChampionGuildAccessAllowed_4
	goto ChampionGuildAccessAllowed_3

ChampionGuildAccessAllowed_8:
	goto_if_set FLAG_BADGE04_GET, ChampionGuildAccessAllowed_2
	goto ChampionGuildAccessAllowed_3


Lilycove_HiddenGigaDrain::
	finditem ITEM_TM19
	return


Lilycove_NPC_onanIsland::
	lockall
	faceplayer
	msgbox Lilycove_NPC_onanIsland_Text_0
	releaseall
	return


LilycoveCity_ScratchOutSign::
	lockall
	msgbox LilycoveCity_ScratchOutSign_Text_0
	msgbox LilycoveCity_ScratchOutSign_Text_1
	releaseall
	return


Lilycove_City_TownSign::
	lockall
	msgbox Lilycove_City_TownSign_Text_0
	releaseall
	return


Lilycove_City_DirectionSign::
	lockall
	msgbox Lilycove_City_DirectionSign_Text_0
	releaseall
	return


LilycyvoeTodo::
	lockall
	msgbox LilycyvoeTodo_Text_0
	releaseall
	return


ChampionGuildAccessAllowed_Text_0:
	.string "Oh fantastic please come in!$"

ChampionGuildAccessAllowed_Text_1:
	.string "Sorry but you need all badges to be able\n"
	.string "to enter$"

Lilycove_NPC_onanIsland_Text_0:
	.string "I will give you something in a future\n"
	.string "update!$"

LilycoveCity_ScratchOutSign_Text_0:
	.string "The old Town Sign has been sprayed over\n"
	.string "with$"

LilycoveCity_ScratchOutSign_Text_1:
	.string "Danger - Ghosts Ahead!$"

Lilycove_City_TownSign_Text_0:
	.string "Lilycove City - The city to be renamed$"

Lilycove_City_DirectionSign_Text_0:
	.string "More content coming soon! Join our\n"
	.string "discord to keep up to date on latest\l"
	.string "updates!$"

LilycyvoeTodo_Text_0:
	.string "Coming soon!$"
