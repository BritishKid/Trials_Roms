MahogonyHill_SecretBase1_MapScripts::
	.byte 0


MahoganyHills_SecretBase_LotadDoll::
# 6 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	lockall
# 7 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_LOTAD, MahoganyHills_SecretBase_LotadDoll_2
# 15 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	msgbox MahoganyHills_SecretBase_LotadDoll_Text_2
MahoganyHills_SecretBase_LotadDoll_1:
# 17 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	releaseall
	return

MahoganyHills_SecretBase_LotadDoll_2:
# 8 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	msgbox MahoganyHills_SecretBase_LotadDoll_Text_0
# 9 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	adddecoration DECOR_LOTAD_DOLL
# 10 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_LOTAD
# 11 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_LOTAD_DOLL
# 12 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	msgbox MahoganyHills_SecretBase_LotadDoll_Text_1
	goto MahoganyHills_SecretBase_LotadDoll_1


MahoganyHills_SecretBase_PinsirBattle::
# 21 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	lockall
# 22 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	faceplayer
# 23 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	goto_if_unset FLAG_BEATEN_PINSIR_BASE, MahoganyHills_SecretBase_PinsirBattle_2
MahoganyHills_SecretBase_PinsirBattle_1:
# 26 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	goto_if_set FLAG_BEATEN_PINSIR_BASE, MahoganyHills_SecretBase_PinsirBattle_5
MahoganyHills_SecretBase_PinsirBattle_4:
# 30 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	releaseall
	return

MahoganyHills_SecretBase_PinsirBattle_2:
# 24 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	trainerbattle_single TRAINER_HIDDEN_BASE_PINSIR, Dale_Intro, Dale_Outro, Dale_Beaten
	goto MahoganyHills_SecretBase_PinsirBattle_1

MahoganyHills_SecretBase_PinsirBattle_5:
# 27 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	msgbox PostBattle_Dale, MSGBOX_AUTOCLOSE
	goto MahoganyHills_SecretBase_PinsirBattle_4


MahoganyHills_SecretBase_HeracrossBattle::
# 34 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	lockall
# 35 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	faceplayer
# 36 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	goto_if_unset FLAG_BEATEN_HERACROSS_BASE, MahoganyHills_SecretBase_HeracrossBattle_2
MahoganyHills_SecretBase_HeracrossBattle_1:
# 39 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	goto_if_set FLAG_BEATEN_HERACROSS_BASE, MahoganyHills_SecretBase_HeracrossBattle_5
MahoganyHills_SecretBase_HeracrossBattle_4:
# 43 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	releaseall
	return

MahoganyHills_SecretBase_HeracrossBattle_2:
# 37 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	trainerbattle_single TRAINER_HIDDEN_BASE_HERACROSS, Garrison_Intro, Garrison_Outro, Garrison_Beaten
	goto MahoganyHills_SecretBase_HeracrossBattle_1

MahoganyHills_SecretBase_HeracrossBattle_5:
# 40 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	msgbox PostBattle_Garrison, MSGBOX_AUTOCLOSE
	goto MahoganyHills_SecretBase_HeracrossBattle_4


Dale_Beaten::
# 47 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	msgbox Dale_Beaten_Text_0
# 48 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	giveitem ITEM_PINSIRITE
# 49 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 50 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	setflag FLAG_BEATEN_PINSIR_BASE
# 51 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	releaseall
	return


Garrison_Beaten::
# 55 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	msgbox Garrison_Beaten_Text_0
# 56 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	giveitem ITEM_HERACRONITE
# 57 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	setflag FLAG_BEATEN_HERACROSS_BASE
# 59 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	releaseall
	return


MahoganyHills_SecretBase_Laptop::
# 63 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	lockall
# 64 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	msgbox MahoganyHills_SecretBase_Laptop_Text_0
# 65 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	releaseall
	return


MahoganyHills_SecretBase_LotadDoll_Text_0:
# 8 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "It's A Lotad Doll$"

MahoganyHills_SecretBase_LotadDoll_Text_1:
# 12 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "You've unlocked the LOTAD Doll for your\n"
	.string "secret base$"

MahoganyHills_SecretBase_LotadDoll_Text_2:
# 15 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "It's Nathan's Gulpin Doll$"

Dale_Beaten_Text_0:
# 47 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "My brother is an idiot and doesn't\n"
	.string "realise how strong Pinsir really is. Why\l"
	.string "don't you take this and go show him!$"

Garrison_Beaten_Text_0:
# 55 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "My brother is an idiot and doesn't\n"
	.string "realise how strong Heracross really is.\l"
	.string "Why don't you take this and go show him!$"

MahoganyHills_SecretBase_Laptop_Text_0:
# 64 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "Looks like they are trying to play some\n"
	.string "space game against little aliens. He is\l"
	.string "playing as the big green robot from\l"
	.string "Fortnite.$"

Dale_Intro::
# 70 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "Pinsir is the best bug Pokémon!$"

Dale_Outro::
# 74 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "You only one cause you had more than\n"
	.string "just bugs$"

PostBattle_Dale::
# 78 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "Pinsir is the best Pokémon to mega\n"
	.string "evolve$"

Garrison_Intro::
# 82 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "Heracross is the best bug Pokémon!$"

Garrison_Outro::
# 86 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "No fair you must of cheated$"

PostBattle_Garrison::
# 90 "data/maps/MahogonyHill_SecretBase1/scripts.pory"
	.string "Heracross is the best Pokémon to mega\n"
	.string "evolve$"
