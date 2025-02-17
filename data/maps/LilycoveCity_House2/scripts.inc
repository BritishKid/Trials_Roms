LilycoveCity_House2_MapScripts::
	.byte 0


LilycoveCity_PokemonCenter_1F_FossilRevival::
# 8 "data/maps/LilycoveCity_House2/scripts.pory"
	lockall
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_0
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 11 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_2
LilycoveCity_PokemonCenter_1F_FossilRevival_1:
# 36 "data/maps/LilycoveCity_House2/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 37 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_5
LilycoveCity_PokemonCenter_1F_FossilRevival_4:
# 65 "data/maps/LilycoveCity_House2/scripts.pory"
	releaseall
	return

LilycoveCity_PokemonCenter_1F_FossilRevival_2:
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_1, MSGBOX_YESNO
# 13 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_7
# 32 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4
	end

LilycoveCity_PokemonCenter_1F_FossilRevival_5:
# 38 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_5, MSGBOX_YESNO
# 39 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_10
# 58 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4
	end

LilycoveCity_PokemonCenter_1F_FossilRevival_7:
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
	givemon SPECIES_LILEEP, 5, ITEM_BIG_ROOT
# 15 "data/maps/LilycoveCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_13
# 21 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_14
# 27 "data/maps/LilycoveCity_House2/scripts.pory"
	hidemonpic
# 28 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_10:
# 40 "data/maps/LilycoveCity_House2/scripts.pory"
	givemon SPECIES_ANORITH, 5, ITEM_RAZOR_CLAW
# 41 "data/maps/LilycoveCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 42 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_18
# 47 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_19
# 53 "data/maps/LilycoveCity_House2/scripts.pory"
	hidemonpic
# 54 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4

LilycoveCity_PokemonCenter_1F_FossilRevival_13:
# 17 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2
# 18 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL, 1
# 19 "data/maps/LilycoveCity_House2/scripts.pory"
	call NicknamePartyMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_14:
# 22 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2
# 23 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL, 1
# 24 "data/maps/LilycoveCity_House2/scripts.pory"
	call NicknameBoxMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_18:
# 43 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6
# 44 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL, 1
# 45 "data/maps/LilycoveCity_House2/scripts.pory"
	call NicknamePartyMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4

LilycoveCity_PokemonCenter_1F_FossilRevival_19:
# 48 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6
# 49 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL, 1
# 50 "data/maps/LilycoveCity_House2/scripts.pory"
	call NicknameBoxMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4


LilycoveCity_PokemonCenter_1F_FossilRevival_Text_0:
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Hey do you want to revive any fossils?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_1:
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "You have a ROOT FOSSIL, do you want to\n"
	.string "revive it?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2:
# 17 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Recieved Lileep$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3:
# 28 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4:
# 32 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Come back if you do!$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_5:
# 38 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "You have a CLAW FOSSIL, do you want to\n"
	.string "revive it?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6:
# 43 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Recieved Anorith$"
