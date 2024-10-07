PlayersBedroom_MapScripts::
	.byte 0


PlayersBedroom_StarterPokemon_Pokeball::
# 4 "data/maps/PlayersBedroom/scripts.pory"
	lockall
# 5 "data/maps/PlayersBedroom/scripts.pory"
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_0
# 6 "data/maps/PlayersBedroom/scripts.pory"
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_1
# 7 "data/maps/PlayersBedroom/scripts.pory"
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_2
# 8 "data/maps/PlayersBedroom/scripts.pory"
	multichoice 21, 6, MULTI_STARTER_SELECTION, TRUE
# 9 "data/maps/PlayersBedroom/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/PlayersBedroom/scripts.pory"
	case 0, PlayersBedroom_StarterPokemon_Pokeball_3
# 11 "data/maps/PlayersBedroom/scripts.pory"
	case 1, PlayersBedroom_StarterPokemon_Pokeball_4
# 12 "data/maps/PlayersBedroom/scripts.pory"
	case 2, PlayersBedroom_StarterPokemon_Pokeball_5
PlayersBedroom_StarterPokemon_Pokeball_1:
# 14 "data/maps/PlayersBedroom/scripts.pory"
	waitmessage
# 15 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	end

PlayersBedroom_StarterPokemon_Pokeball_3:
# 10 "data/maps/PlayersBedroom/scripts.pory"
	goto Starter_Totodile
	goto PlayersBedroom_StarterPokemon_Pokeball_1

PlayersBedroom_StarterPokemon_Pokeball_4:
# 11 "data/maps/PlayersBedroom/scripts.pory"
	goto Starter_Chikorita
	goto PlayersBedroom_StarterPokemon_Pokeball_1

PlayersBedroom_StarterPokemon_Pokeball_5:
# 12 "data/maps/PlayersBedroom/scripts.pory"
	goto Starter_Cyndaquil
	goto PlayersBedroom_StarterPokemon_Pokeball_1


NicknamePartyMon::
# 20 "data/maps/PlayersBedroom/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 21 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
# 22 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 23 "data/maps/PlayersBedroom/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 24 "data/maps/PlayersBedroom/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


Starter_Cyndaquil::
# 29 "data/maps/PlayersBedroom/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 30 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Cyndaquil_Text_0, MSGBOX_YESNO
# 31 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_Cyndaquil_1
	return

Starter_Cyndaquil_1:
# 32 "data/maps/PlayersBedroom/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 33 "data/maps/PlayersBedroom/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 34 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Cyndaquil_4
# 38 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Cyndaquil_5
# 43 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
# 44 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Cyndaquil_Text_2
Starter_Cyndaquil_3:
# 46 "data/maps/PlayersBedroom/scripts.pory"
	waitmessage
# 47 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	end

Starter_Cyndaquil_4:
# 35 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Cyndaquil_Text_1
# 36 "data/maps/PlayersBedroom/scripts.pory"
	call ChosenStarterPokemon
	goto Starter_Cyndaquil_3

Starter_Cyndaquil_5:
# 39 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Cyndaquil_Text_1
# 40 "data/maps/PlayersBedroom/scripts.pory"
	call ChosenStarterPokemon
	goto Starter_Cyndaquil_3


Starter_Totodile::
# 53 "data/maps/PlayersBedroom/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 54 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Totodile_Text_0, MSGBOX_YESNO
# 55 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_Totodile_1
# 75 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
	return

Starter_Totodile_1:
# 56 "data/maps/PlayersBedroom/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 57 "data/maps/PlayersBedroom/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 58 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Totodile_5
# 62 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Totodile_6
# 67 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
# 68 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Cyndaquil_Text_2
Starter_Totodile_4:
# 70 "data/maps/PlayersBedroom/scripts.pory"
	waitmessage
# 71 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	end

Starter_Totodile_5:
# 59 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Totodile_Text_1
# 60 "data/maps/PlayersBedroom/scripts.pory"
	call ChosenStarterPokemon
	goto Starter_Totodile_4

Starter_Totodile_6:
# 63 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Totodile_Text_1
# 64 "data/maps/PlayersBedroom/scripts.pory"
	call ChosenStarterPokemon
	goto Starter_Totodile_4


Starter_Chikorita::
# 80 "data/maps/PlayersBedroom/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 81 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Chikorita_Text_0, MSGBOX_YESNO
# 82 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_Chikorita_1
# 102 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
	return

Starter_Chikorita_1:
# 83 "data/maps/PlayersBedroom/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 84 "data/maps/PlayersBedroom/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 85 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Chikorita_5
# 89 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Chikorita_6
# 94 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
# 95 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Cyndaquil_Text_2
Starter_Chikorita_4:
# 97 "data/maps/PlayersBedroom/scripts.pory"
	waitmessage
# 98 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	end

Starter_Chikorita_5:
# 86 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Chikorita_Text_1
# 87 "data/maps/PlayersBedroom/scripts.pory"
	call ChosenStarterPokemon
	goto Starter_Chikorita_4

Starter_Chikorita_6:
# 90 "data/maps/PlayersBedroom/scripts.pory"
	msgbox Starter_Chikorita_Text_1
# 91 "data/maps/PlayersBedroom/scripts.pory"
	call ChosenStarterPokemon
	goto Starter_Chikorita_4


ChosenStarterPokemon::
# 107 "data/maps/PlayersBedroom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/PlayersBedroom/scripts.pory"
	removeobject 1
# 109 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 110 "data/maps/PlayersBedroom/scripts.pory"
	call GivePokedexAndUnlockPokemonMenu
# 111 "data/maps/PlayersBedroom/scripts.pory"
	call NicknamePartyMon
# 112 "data/maps/PlayersBedroom/scripts.pory"
	call FreeStarterPokeballs
	return


GivePokedexAndUnlockPokemonMenu::
# 116 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 117 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 118 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 119 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 120 "data/maps/PlayersBedroom/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_POKEMON_LEAGUE
# 121 "data/maps/PlayersBedroom/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_HIDDEN_DOLLS
# 122 "data/maps/PlayersBedroom/scripts.pory"
	special EnableNationalPokedex
	return


NicknameBoxMon::
# 126 "data/maps/PlayersBedroom/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 127 "data/maps/PlayersBedroom/scripts.pory"
	hidemonpic
# 128 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 131 "data/maps/PlayersBedroom/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 129 "data/maps/PlayersBedroom/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


FreeStarterPokeballs::
# 135 "data/maps/PlayersBedroom/scripts.pory"
	msgbox FreeStarterPokeballs_Text_0
# 136 "data/maps/PlayersBedroom/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
	return


EventScript_PlayersBed_HealParty::
# 140 "data/maps/PlayersBedroom/scripts.pory"
	lockall
# 141 "data/maps/PlayersBedroom/scripts.pory"
	msgbox EventScript_PlayersBed_HealParty_Text_0, MSGBOX_YESNO
# 142 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PlayersBed_HealParty_2
EventScript_PlayersBed_HealParty_1:
# 145 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	return

EventScript_PlayersBed_HealParty_2:
# 143 "data/maps/PlayersBedroom/scripts.pory"
	special HealPlayerParty
	goto EventScript_PlayersBed_HealParty_1


OptionsBook::
# 149 "data/maps/PlayersBedroom/scripts.pory"
	lockall
# 153 "data/maps/PlayersBedroom/scripts.pory"
	msgbox OptionsBook_Text_0
# 154 "data/maps/PlayersBedroom/scripts.pory"
	goto_if_unset FLAG_LEVEL_CAPS, OptionsBook_2
# 160 "data/maps/PlayersBedroom/scripts.pory"
	msgbox OptionsBook_Text_2, MSGBOX_YESNO
# 161 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OptionsBook_7
OptionsBook_1:
# 184 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	return

OptionsBook_2:
# 155 "data/maps/PlayersBedroom/scripts.pory"
	msgbox OptionsBook_Text_1, MSGBOX_YESNO
# 156 "data/maps/PlayersBedroom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OptionsBook_5
	goto OptionsBook_1

OptionsBook_5:
# 157 "data/maps/PlayersBedroom/scripts.pory"
	setflag FLAG_LEVEL_CAPS
	goto OptionsBook_1

OptionsBook_7:
# 162 "data/maps/PlayersBedroom/scripts.pory"
	clearflag FLAG_LEVEL_CAPS
	goto OptionsBook_1


PlayersHouse_2F_EventScript_GameCube::
# 188 "data/maps/PlayersBedroom/scripts.pory"
	lockall
# 189 "data/maps/PlayersBedroom/scripts.pory"
	msgbox PlayersHouse_2F_EventScript_GameCube_Text_0
# 190 "data/maps/PlayersBedroom/scripts.pory"
	releaseall
	return


PlayersBedroom_StarterPokemon_Pokeball_Text_0:
# 5 "data/maps/PlayersBedroom/scripts.pory"
	.string "You father left you a gift for your\n"
	.string "birthday.$"

PlayersBedroom_StarterPokemon_Pokeball_Text_1:
# 6 "data/maps/PlayersBedroom/scripts.pory"
	.string "Happy Birthday! Please take this\n"
	.string "Pokémon and become a Pokémon Master\l"
	.string "like you always dreamed!$"

PlayersBedroom_StarterPokemon_Pokeball_Text_2:
# 7 "data/maps/PlayersBedroom/scripts.pory"
	.string "I'm sure you can guess which Pokémon I\n"
	.string "got you.$"

NicknamePartyMon_Text_0:
# 20 "data/maps/PlayersBedroom/scripts.pory"
	.string "Give it a nickname?$"

Starter_Cyndaquil_Text_0:
# 30 "data/maps/PlayersBedroom/scripts.pory"
	.string "Is it a Cyndaquil?$"

Starter_Cyndaquil_Text_1:
# 35 "data/maps/PlayersBedroom/scripts.pory"
	.string "Recieved Cyndaquil$"

Starter_Cyndaquil_Text_2:
# 44 "data/maps/PlayersBedroom/scripts.pory"
	.string "No more room$"

Starter_Totodile_Text_0:
# 54 "data/maps/PlayersBedroom/scripts.pory"
	.string "Is it a Totodile?$"

Starter_Totodile_Text_1:
# 59 "data/maps/PlayersBedroom/scripts.pory"
	.string "Recieved Totodile$"

Starter_Chikorita_Text_0:
# 81 "data/maps/PlayersBedroom/scripts.pory"
	.string "Is it a Chikorita?$"

Starter_Chikorita_Text_1:
# 86 "data/maps/PlayersBedroom/scripts.pory"
	.string "Recieved Chikorita$"

FreeStarterPokeballs_Text_0:
# 135 "data/maps/PlayersBedroom/scripts.pory"
	.string "Have some Pokeballs to.$"

EventScript_PlayersBed_HealParty_Text_0:
# 141 "data/maps/PlayersBedroom/scripts.pory"
	.string "Rest up a little while?$"

OptionsBook_Text_0:
# 153 "data/maps/PlayersBedroom/scripts.pory"
	.string "Options book$"

OptionsBook_Text_1:
# 155 "data/maps/PlayersBedroom/scripts.pory"
	.string "Do you want to turn on Level caps?$"

OptionsBook_Text_2:
# 160 "data/maps/PlayersBedroom/scripts.pory"
	.string "Do you want to turn off Level caps?$"

PlayersHouse_2F_EventScript_GameCube_Text_0:
# 189 "data/maps/PlayersBedroom/scripts.pory"
	.string "Who even still plays a GameCube?$"

Common_Text_LookCloserAtMap::
# 193 "data/maps/PlayersBedroom/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
	.string "HOENN region map.$"
