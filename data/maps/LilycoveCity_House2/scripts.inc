LilycoveCity_House2_MapScripts::
	.byte 0


LilycoveCity_PokemonCenter_1F_FossilRevival::
# 6 "data/maps/LilycoveCity_House2/scripts.pory"
	lockall
# 7 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_0
# 8 "data/maps/LilycoveCity_House2/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_2
LilycoveCity_PokemonCenter_1F_FossilRevival_1:
# 34 "data/maps/LilycoveCity_House2/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 35 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_5
LilycoveCity_PokemonCenter_1F_FossilRevival_4:
# 63 "data/maps/LilycoveCity_House2/scripts.pory"
	releaseall
	return

LilycoveCity_PokemonCenter_1F_FossilRevival_2:
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_1, MSGBOX_YESNO
# 11 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_7
# 30 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4
	end

LilycoveCity_PokemonCenter_1F_FossilRevival_5:
# 36 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_5, MSGBOX_YESNO
# 37 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_10
# 56 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4
	end

LilycoveCity_PokemonCenter_1F_FossilRevival_7:
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
	givemon SPECIES_LILEEP, 5, ITEM_BIG_ROOT
# 13 "data/maps/LilycoveCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_13
# 19 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_14
# 25 "data/maps/LilycoveCity_House2/scripts.pory"
	hidemonpic
# 26 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_10:
# 38 "data/maps/LilycoveCity_House2/scripts.pory"
	givemon SPECIES_ANORITH, 5, ITEM_RAZOR_CLAW
# 39 "data/maps/LilycoveCity_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_18
# 45 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LilycoveCity_PokemonCenter_1F_FossilRevival_19
# 51 "data/maps/LilycoveCity_House2/scripts.pory"
	hidemonpic
# 52 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4

LilycoveCity_PokemonCenter_1F_FossilRevival_13:
# 15 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2
# 16 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL, 1
# 17 "data/maps/LilycoveCity_House2/scripts.pory"
	call NicknamePartyMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_14:
# 20 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2
# 21 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL, 1
# 22 "data/maps/LilycoveCity_House2/scripts.pory"
	call NicknameBoxMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_1

LilycoveCity_PokemonCenter_1F_FossilRevival_18:
# 41 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6
# 42 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL, 1
# 43 "data/maps/LilycoveCity_House2/scripts.pory"
	call NicknamePartyMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4

LilycoveCity_PokemonCenter_1F_FossilRevival_19:
# 46 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6
# 47 "data/maps/LilycoveCity_House2/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL, 1
# 48 "data/maps/LilycoveCity_House2/scripts.pory"
	call NicknameBoxMon
	goto LilycoveCity_PokemonCenter_1F_FossilRevival_4


LilycoveCity_PokemonCenter_1F_FossilRevival_Text_0:
# 7 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Hey do you want to revive any fossils?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_1:
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "You have a ROOT FOSSIL, do you want to\n"
	.string "revive it?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_2:
# 15 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Recieved Lileep$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_3:
# 26 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_4:
# 30 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Come back if you do!$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_5:
# 36 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "You have a CLAW FOSSIL, do you want to\n"
	.string "revive it?$"

LilycoveCity_PokemonCenter_1F_FossilRevival_Text_6:
# 41 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Recieved Anorith$"
