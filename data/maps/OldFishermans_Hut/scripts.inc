OldFishermans_Hut_MapScripts::
	.byte 0


OldFisherman_EventScript_Fisherman::
# 5 "data/maps/OldFishermans_Hut/scripts.pory"
	lockall
# 6 "data/maps/OldFishermans_Hut/scripts.pory"
	faceplayer
# 7 "data/maps/OldFishermans_Hut/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, OldFisherman_EventScript_Fisherman_2
OldFisherman_EventScript_Fisherman_1:
# 10 "data/maps/OldFishermans_Hut/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, OldFisherman_EventScript_Fisherman_5
OldFisherman_EventScript_Fisherman_4:
# 21 "data/maps/OldFishermans_Hut/scripts.pory"
	releaseall
	return

OldFisherman_EventScript_Fisherman_2:
# 8 "data/maps/OldFishermans_Hut/scripts.pory"
	msgbox OldFisherman_EventScript_Fisherman_Text_0
	goto OldFisherman_EventScript_Fisherman_1

OldFisherman_EventScript_Fisherman_5:
# 11 "data/maps/OldFishermans_Hut/scripts.pory"
	msgbox OldFisherman_EventScript_Fisherman_Text_1, MSGBOX_YESNO
# 12 "data/maps/OldFishermans_Hut/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldFisherman_EventScript_Fisherman_7
# 18 "data/maps/OldFishermans_Hut/scripts.pory"
	msgbox OldFisherman_EventScript_Fisherman_Text_3
	goto OldFisherman_EventScript_Fisherman_4

OldFisherman_EventScript_Fisherman_7:
# 13 "data/maps/OldFishermans_Hut/scripts.pory"
	msgbox OldFisherman_EventScript_Fisherman_Text_2
# 14 "data/maps/OldFishermans_Hut/scripts.pory"
	giveitem ITEM_OLD_ROD
# 15 "data/maps/OldFishermans_Hut/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
	goto OldFisherman_EventScript_Fisherman_4


OldFisherman_EventScript_Fisherman_Text_0:
# 8 "data/maps/OldFishermans_Hut/scripts.pory"
	.string "Sometimes you can find giant Pokemon\n"
	.string "hidden in the water.$"

OldFisherman_EventScript_Fisherman_Text_1:
# 11 "data/maps/OldFishermans_Hut/scripts.pory"
	.string "Have you got an interest in catching\n"
	.string "water Pokemon?$"

OldFisherman_EventScript_Fisherman_Text_2:
# 13 "data/maps/OldFishermans_Hut/scripts.pory"
	.string "Brilliant!\n"
	.string "Have this.$"

OldFisherman_EventScript_Fisherman_Text_3:
# 18 "data/maps/OldFishermans_Hut/scripts.pory"
	.string "What a shame.$"
