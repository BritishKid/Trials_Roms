MossdeepCity_House2_MapScripts::
	.byte 0


HemlockCity_Child_InHouse2::
# 6 "data/maps/MossdeepCity_House2/scripts.pory"
	lockall
# 7 "data/maps/MossdeepCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockCity_Child_InHouse2_Text_0
# 9 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockCity_Child_InHouse2_Text_1
# 10 "data/maps/MossdeepCity_House2/scripts.pory"
	releaseall
	return


HemlockCity_ManInHouse2::
# 14 "data/maps/MossdeepCity_House2/scripts.pory"
	lockall
# 15 "data/maps/MossdeepCity_House2/scripts.pory"
	faceplayer
# 16 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockCity_ManInHouse2_Text_0
# 17 "data/maps/MossdeepCity_House2/scripts.pory"
	releaseall
	return


HemlockBlockerSoon::
# 21 "data/maps/MossdeepCity_House2/scripts.pory"
	lockall
# 22 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox HemlockBlockerSoon_Text_0
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	releaseall
	return


HemlockCity_Child_InHouse2_Text_0:
# 8 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "Have you seen the gooey Pokémon Goomy\n"
	.string "nearby? Would you trade one for my\l"
	.string "Mudbray?$"

HemlockCity_Child_InHouse2_Text_1:
# 9 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "TRADE COMING SOON$"

HemlockCity_ManInHouse2_Text_0:
# 16 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "The Hemlock gym uses powerful Poison\n"
	.string "type Pokémon. Ground Pokémon are great\l"
	.string "against them.$"

HemlockBlockerSoon_Text_0:
# 22 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "I don't have permission to go upstairs$"
