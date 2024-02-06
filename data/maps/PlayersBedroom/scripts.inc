PlayersBedroom_MapScripts::
	.byte 0


PlayersBedroom_StarterPokemon_Pokeball::
	lockall
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_0
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_2
	hidemonpic
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_6
	hidemonpic
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_16
	hidemonpic
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_8
	waitmessage
	releaseall
	end

PlayersBedroom_StarterPokemon_Pokeball_2:
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
	setvar VAR_STARTER_MON, 0
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_10
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_11
	hidemonpic
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_3
PlayersBedroom_StarterPokemon_Pokeball_9:
	waitmessage
	releaseall
	end

PlayersBedroom_StarterPokemon_Pokeball_6:
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
	setvar VAR_STARTER_MON, 2
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_20
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_21
	hidemonpic
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_3
PlayersBedroom_StarterPokemon_Pokeball_19:
	waitmessage
	releaseall
	end

PlayersBedroom_StarterPokemon_Pokeball_10:
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_2
	call ChosenStarterPokemon
	goto PlayersBedroom_StarterPokemon_Pokeball_9

PlayersBedroom_StarterPokemon_Pokeball_11:
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_2
	call ChosenStarterPokemon
	goto PlayersBedroom_StarterPokemon_Pokeball_9

PlayersBedroom_StarterPokemon_Pokeball_16:
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
	setvar VAR_STARTER_MON, 1
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_26
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PlayersBedroom_StarterPokemon_Pokeball_27
	hidemonpic
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_3
PlayersBedroom_StarterPokemon_Pokeball_25:
	waitmessage
	releaseall
	end

PlayersBedroom_StarterPokemon_Pokeball_20:
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_5
	call ChosenStarterPokemon
	goto PlayersBedroom_StarterPokemon_Pokeball_19

PlayersBedroom_StarterPokemon_Pokeball_21:
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_5
	call ChosenStarterPokemon
	goto PlayersBedroom_StarterPokemon_Pokeball_19

PlayersBedroom_StarterPokemon_Pokeball_26:
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_7
	call ChosenStarterPokemon
	goto PlayersBedroom_StarterPokemon_Pokeball_25

PlayersBedroom_StarterPokemon_Pokeball_27:
	msgbox PlayersBedroom_StarterPokemon_Pokeball_Text_7
	call ChosenStarterPokemon
	goto PlayersBedroom_StarterPokemon_Pokeball_25


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
	goto_if_eq OptionsBook_11
OptionsBook_1:
	goto_if_unset FLAG_SHINY_RATE_INCREASED, OptionsBook_6
	msgbox OptionsBook_Text_5
	msgbox OptionsBook_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq OptionsBook_15
OptionsBook_5:
	releaseall
	return

OptionsBook_2:
	msgbox OptionsBook_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq OptionsBook_9
	goto OptionsBook_1

OptionsBook_6:
	msgbox OptionsBook_Text_3
	msgbox OptionsBook_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq OptionsBook_13
	goto OptionsBook_5

OptionsBook_9:
	setflag FLAG_LEVEL_CAPS
	goto OptionsBook_1

OptionsBook_11:
	clearflag FLAG_LEVEL_CAPS
	goto OptionsBook_1

OptionsBook_13:
	setflag FLAG_SHINY_RATE_INCREASED
	goto OptionsBook_5

OptionsBook_15:
	clearflag FLAG_SHINY_RATE_INCREASED
	goto OptionsBook_5


PlayersBedroom_StarterPokemon_Pokeball_Text_0:
	.string "It's the Pokemon your father gave you.$"

PlayersBedroom_StarterPokemon_Pokeball_Text_1:
	.string "Is it a Chikorita?$"

PlayersBedroom_StarterPokemon_Pokeball_Text_2:
	.string "Recieved Chikorita$"

PlayersBedroom_StarterPokemon_Pokeball_Text_3:
	.string "No more room$"

PlayersBedroom_StarterPokemon_Pokeball_Text_4:
	.string "Is it a Totodile?$"

PlayersBedroom_StarterPokemon_Pokeball_Text_5:
	.string "Recieved Totodile$"

PlayersBedroom_StarterPokemon_Pokeball_Text_6:
	.string "Is it a Cyndaquil?$"

PlayersBedroom_StarterPokemon_Pokeball_Text_7:
	.string "Recieved Cyndaquil$"

PlayersBedroom_StarterPokemon_Pokeball_Text_8:
	.string "It must of been one of them$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

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

OptionsBook_Text_3:
	.string "Do you want to increase shiny rate?$"

OptionsBook_Text_4:
	.string "This should give you atleast one shiny\n"
	.string "per playthrough.$"

OptionsBook_Text_5:
	.string "Do you want to decrease shiny rate?$"

OptionsBook_Text_6:
	.string "This will turn it to vanilla 1/8092.$"
