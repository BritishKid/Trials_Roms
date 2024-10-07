PlayersBedroom_MapScripts::
	.byte 0


PlayersBedroom_StarterPokemon_Pokeball::
	lockall
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_0
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_1
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_2
	multichoice 21, 6, MULTI_STARTER_SELECTION, TRUE
	switch VAR_RESULT
	case 0, PlayersBedroom_StarterPokemon_Pokeball_3
	case 1, PlayersBedroom_StarterPokemon_Pokeball_4
	case 2, PlayersBedroom_StarterPokemon_Pokeball_5
PlayersBedroom_StarterPokemon_Pokeball_1:
	waitmessage
	releaseall
	end

PlayersBedroom_StarterPokemon_Pokeball_3:
	goto Starter_Totodile
	goto PlayersBedroom_StarterPokemon_Pokeball_1

PlayersBedroom_StarterPokemon_Pokeball_4:
	goto Starter_Chikorita
	goto PlayersBedroom_StarterPokemon_Pokeball_1

PlayersBedroom_StarterPokemon_Pokeball_5:
	goto Starter_Cyndaquil
	goto PlayersBedroom_StarterPokemon_Pokeball_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


Starter_Cyndaquil::
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox Starter_Cyndaquil_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Starter_Cyndaquil_1
	return

Starter_Cyndaquil_1:
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
	setvar VAR_STARTER_MON, 1
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Cyndaquil_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Cyndaquil_5
	hidemonpic
	msgbox Starter_Cyndaquil_Text_2
Starter_Cyndaquil_3:
	waitmessage
	releaseall
	end

Starter_Cyndaquil_4:
	msgbox Starter_Cyndaquil_Text_1
	call ChosenStarterPokemon
	goto Starter_Cyndaquil_3

Starter_Cyndaquil_5:
	msgbox Starter_Cyndaquil_Text_1
	call ChosenStarterPokemon
	goto Starter_Cyndaquil_3


Starter_Totodile::
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox Starter_Totodile_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Starter_Totodile_1
	hidemonpic
	return

Starter_Totodile_1:
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
	setvar VAR_STARTER_MON, 2
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Totodile_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Totodile_6
	hidemonpic
	msgbox Starter_Cyndaquil_Text_2
Starter_Totodile_4:
	waitmessage
	releaseall
	end

Starter_Totodile_5:
	msgbox Starter_Totodile_Text_1
	call ChosenStarterPokemon
	goto Starter_Totodile_4

Starter_Totodile_6:
	msgbox Starter_Totodile_Text_1
	call ChosenStarterPokemon
	goto Starter_Totodile_4


Starter_Chikorita::
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox Starter_Chikorita_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Starter_Chikorita_1
	hidemonpic
	return

Starter_Chikorita_1:
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
	setvar VAR_STARTER_MON, 0
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Chikorita_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Chikorita_6
	hidemonpic
	msgbox Starter_Cyndaquil_Text_2
Starter_Chikorita_4:
	waitmessage
	releaseall
	end

Starter_Chikorita_5:
	msgbox Starter_Chikorita_Text_1
	call ChosenStarterPokemon
	goto Starter_Chikorita_4

Starter_Chikorita_6:
	msgbox Starter_Chikorita_Text_1
	call ChosenStarterPokemon
	goto Starter_Chikorita_4


ChosenStarterPokemon::
	playfanfare MUS_OBTAIN_ITEM
	removeobject 1
	setflag FLAG_RECEIVED_STARTER
	call GivePokedexAndUnlockPokemonMenu
	call NicknamePartyMon
	call FreeStarterPokeballs
	return


GivePokedexAndUnlockPokemonMenu::
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_QUEST_MENU_GET
	setflag FLAG_SYS_B_DASH
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_POKEMON_LEAGUE
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_HIDDEN_DOLLS
	special EnableNationalPokedex
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


FreeStarterPokeballs::
	msgbox FreeStarterPokeballs_Text_0
	giveitem ITEM_POKE_BALL, 5
	return


EventScript_PlayersBed_HealParty::
	lockall
	msgbox EventScript_PlayersBed_HealParty_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PlayersBed_HealParty_2
EventScript_PlayersBed_HealParty_1:
	releaseall
	return

EventScript_PlayersBed_HealParty_2:
	special HealPlayerParty
	goto EventScript_PlayersBed_HealParty_1


OptionsBook::
	lockall
	msgbox OptionsBook_Text_0
	goto_if_unset FLAG_LEVEL_CAPS, OptionsBook_2
	msgbox OptionsBook_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq OptionsBook_7
OptionsBook_1:
	releaseall
	return

OptionsBook_2:
	msgbox OptionsBook_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq OptionsBook_5
	goto OptionsBook_1

OptionsBook_5:
	setflag FLAG_LEVEL_CAPS
	goto OptionsBook_1

OptionsBook_7:
	clearflag FLAG_LEVEL_CAPS
	goto OptionsBook_1


PlayersHouse_2F_EventScript_GameCube::
	lockall
	msgbox PlayersHouse_2F_EventScript_GameCube_Text_0
	releaseall
	return


PlayersBedroom_StarterPokemon_Pokeball_Text_0:
	.string "You father left you a gift for your\n"
	.string "birthday.$"

PlayersBedroom_StarterPokemon_Pokeball_Text_1:
	.string "Happy Birthday! Please take this\n"
	.string "Pokémon and become a Pokémon Master\l"
	.string "like you always dreamed!$"

PlayersBedroom_StarterPokemon_Pokeball_Text_2:
	.string "I'm sure you can guess which Pokémon I\n"
	.string "got you.$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

Starter_Cyndaquil_Text_0:
	.string "Is it a Cyndaquil?$"

Starter_Cyndaquil_Text_1:
	.string "Recieved Cyndaquil$"

Starter_Cyndaquil_Text_2:
	.string "No more room$"

Starter_Totodile_Text_0:
	.string "Is it a Totodile?$"

Starter_Totodile_Text_1:
	.string "Recieved Totodile$"

Starter_Chikorita_Text_0:
	.string "Is it a Chikorita?$"

Starter_Chikorita_Text_1:
	.string "Recieved Chikorita$"

FreeStarterPokeballs_Text_0:
	.string "Have some Pokeballs to.$"

EventScript_PlayersBed_HealParty_Text_0:
	.string "Rest up a little while?$"

OptionsBook_Text_0:
	.string "Options book$"

OptionsBook_Text_1:
	.string "Do you want to turn on Level caps?$"

OptionsBook_Text_2:
	.string "Do you want to turn off Level caps?$"

PlayersHouse_2F_EventScript_GameCube_Text_0:
	.string "Who even still plays a GameCube?$"

Common_Text_LookCloserAtMap::
	.string "{PLAYER} took a closer look at the\n"
	.string "HOENN region map.$"
