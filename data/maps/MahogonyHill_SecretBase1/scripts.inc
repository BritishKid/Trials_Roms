MahogonyHill_SecretBase1_MapScripts::
	.byte 0


MahoganyHills_SecretBase_LotadDoll::
	lockall
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_LOTAD, MahoganyHills_SecretBase_LotadDoll_2
	msgbox MahoganyHills_SecretBase_LotadDoll_Text_2
MahoganyHills_SecretBase_LotadDoll_1:
	releaseall
	return

MahoganyHills_SecretBase_LotadDoll_2:
	msgbox MahoganyHills_SecretBase_LotadDoll_Text_0
	adddecoration DECOR_LOTAD_DOLL
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_LOTAD
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_LOTAD_DOLL
	msgbox MahoganyHills_SecretBase_LotadDoll_Text_1
	goto MahoganyHills_SecretBase_LotadDoll_1


MahoganyHills_SecretBase_PinsirBattle::
	lockall
	faceplayer
	goto_if_unset FLAG_BEATEN_PINSIR_BASE, MahoganyHills_SecretBase_PinsirBattle_2
MahoganyHills_SecretBase_PinsirBattle_1:
	goto_if_set FLAG_BEATEN_PINSIR_BASE, MahoganyHills_SecretBase_PinsirBattle_5
MahoganyHills_SecretBase_PinsirBattle_4:
	releaseall
	return

MahoganyHills_SecretBase_PinsirBattle_2:
	trainerbattle_single TRAINER_HIDDEN_BASE_PINSIR, Dale_Intro, Dale_Outro, Dale_Beaten
	goto MahoganyHills_SecretBase_PinsirBattle_1

MahoganyHills_SecretBase_PinsirBattle_5:
	msgbox PostBattle_Dale, MSGBOX_AUTOCLOSE
	goto MahoganyHills_SecretBase_PinsirBattle_4


MahoganyHills_SecretBase_HeracrossBattle::
	lockall
	faceplayer
	goto_if_unset FLAG_BEATEN_HERACROSS_BASE, MahoganyHills_SecretBase_HeracrossBattle_2
MahoganyHills_SecretBase_HeracrossBattle_1:
	goto_if_set FLAG_BEATEN_HERACROSS_BASE, MahoganyHills_SecretBase_HeracrossBattle_5
MahoganyHills_SecretBase_HeracrossBattle_4:
	releaseall
	return

MahoganyHills_SecretBase_HeracrossBattle_2:
	trainerbattle_single TRAINER_HIDDEN_BASE_HERACROSS, Garrison_Intro, Garrison_Outro, Garrison_Beaten
	goto MahoganyHills_SecretBase_HeracrossBattle_1

MahoganyHills_SecretBase_HeracrossBattle_5:
	msgbox PostBattle_Garrison, MSGBOX_AUTOCLOSE
	goto MahoganyHills_SecretBase_HeracrossBattle_4


Dale_Beaten::
	msgbox Dale_Beaten_Text_0
	giveitem ITEM_PINSIRITE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_BEATEN_PINSIR_BASE
	releaseall
	return


Garrison_Beaten::
	msgbox Garrison_Beaten_Text_0
	giveitem ITEM_HERACRONITE
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_BEATEN_HERACROSS_BASE
	releaseall
	return


MahoganyHills_SecretBase_Laptop::
	lockall
	msgbox MahoganyHills_SecretBase_Laptop_Text_0
	releaseall
	return


MahoganyHills_SecretBase_LotadDoll_Text_0:
	.string "It's A Lotad Doll$"

MahoganyHills_SecretBase_LotadDoll_Text_1:
	.string "You've unlocked the LOTAD Doll for your\n"
	.string "secret base$"

MahoganyHills_SecretBase_LotadDoll_Text_2:
	.string "It's Nathan's Gulpin Doll$"

Dale_Beaten_Text_0:
	.string "My brother is an idiot and doesn't\n"
	.string "realise how strong Pinsir really is. Why\l"
	.string "don't you take this and go show him!$"

Garrison_Beaten_Text_0:
	.string "My brother is an idiot and doesn't\n"
	.string "realise how strong Heracross really is.\l"
	.string "Why don't you take this and go show him!$"

MahoganyHills_SecretBase_Laptop_Text_0:
	.string "Looks like they are trying to play some\n"
	.string "space game against little aliens. He is\l"
	.string "playing as the big green robot from\l"
	.string "Fortnite.$"

Dale_Intro::
	.string "Pinsir is the best bug Pokémon!$"

Dale_Outro::
	.string "You only one cause you had more than\n"
	.string "just bugs$"

PostBattle_Dale::
	.string "Pinsir is the best Pokémon to mega\n"
	.string "evolve$"

Garrison_Intro::
	.string "Heracross is the best bug Pokémon!$"

Garrison_Outro::
	.string "No fair you must of cheated$"

PostBattle_Garrison::
	.string "Heracross is the best Pokémon to mega\n"
	.string "evolve$"
