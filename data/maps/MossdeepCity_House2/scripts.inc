MossdeepCity_House2_MapScripts::
	.byte 0


HemlockCity_Child_InHouse2::
	lockall
	faceplayer
	msgbox HemlockCity_Child_InHouse2_Text_0
	msgbox HemlockCity_Child_InHouse2_Text_1
	releaseall
	return


HemlockCity_ManInHouse2::
	lockall
	faceplayer
	msgbox HemlockCity_ManInHouse2_Text_0
	releaseall
	return


HemlockBlockerSoon::
	lockall
	msgbox HemlockBlockerSoon_Text_0
	releaseall
	return


HemlockCity_Child_InHouse2_Text_0:
	.string "Have you seen the gooey Pokémon Goomy\n"
	.string "nearby? Would you trade one for my\l"
	.string "Mudbray?$"

HemlockCity_Child_InHouse2_Text_1:
	.string "TRADE COMING SOON$"

HemlockCity_ManInHouse2_Text_0:
	.string "The Hemlock gym uses powerful Poison\n"
	.string "type Pokémon. Ground Pokémon are great\l"
	.string "against them.$"

HemlockBlockerSoon_Text_0:
	.string "I don't have permission to go upstairs$"
