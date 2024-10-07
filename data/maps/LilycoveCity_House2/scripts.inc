LilycoveCity_House2_MapScripts::
	.byte 0


LilycoveCity_PokemonCenter_1F_FossilRevival::
	lockall
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_0
	checkitem ITEM_ROOT_FOSSIL
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_2
LilycoveCity_PokemonCenter_1F_FossilRevival_1:
	checkitem ITEM_CLAW_FOSSIL
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_5
LilycoveCity_PokemonCenter_1F_FossilRevival_4:
	releaseall
	return

LilycoveCity_PokemonCenter_1F_FossilRevival_2:
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_7
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4
	end

LilycoveCity_PokemonCenter_1F_FossilRevival_5:
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_10
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4
	end

LilycoveCity_PokemonCenter_1F_FossilRevival_7:
	givemon SPECIES_LILEEP, 5, ITEM_BIG_ROOT
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_13
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_14
	hidemonpic
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_10:
	givemon SPECIES_ANORITH, 5, ITEM_RAZOR_CLAW
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_18
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_19
	hidemonpic
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4

LilycoveCity_PokemonCenter_1F_FossilRevival_13:
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2
	removeitem ITEM_ROOT_FOSSIL, 1
	call NicknamePartyMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_14:
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2
	removeitem ITEM_ROOT_FOSSIL, 1
	call NicknameBoxMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_18:
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6
	removeitem ITEM_CLAW_FOSSIL, 1
	call NicknamePartyMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4

LilycoveCity_PokemonCenter_1F_FossilRevival_19:
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6
	removeitem ITEM_CLAW_FOSSIL, 1
	call NicknameBoxMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4


LilycoveCity_PokemonCenter_1F_FossilRevival_Text_0:
	.string "Hey do you want to revive any fossils?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_1:
	.string "You have a ROOT FOSSIL, do you want to\n"
	.string "revive it?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2:
	.string "Recieved Lileep$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4:
	.string "Come back if you do!$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_5:
	.string "You have a CLAW FOSSIL, do you want to\n"
	.string "revive it?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6:
	.string "Recieved Anorith$"
