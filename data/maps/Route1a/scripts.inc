Route1a_MapScripts::
	.byte 0


Route1a_GetSecret_Power::
# 4 "data/maps/Route1a/scripts.pory"
	lockall
# 5 "data/maps/Route1a/scripts.pory"
	faceplayer
# 6 "data/maps/Route1a/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, Route1a_GetSecret_Power_1
	return

Route1a_GetSecret_Power_1:
# 7 "data/maps/Route1a/scripts.pory"
	msgbox Route1a_GetSecret_Power_Text_0
# 8 "data/maps/Route1a/scripts.pory"
	trainerbattle_single TRAINER_RED_ROUTE_1A_FIRST, Red1a_Intro, Red1a_Outro, Red1a_Beaten
	return


Red1a_Beaten::
# 13 "data/maps/Route1a/scripts.pory"
	msgbox Red1a_Beaten_Text_0
# 14 "data/maps/Route1a/scripts.pory"
	giveitem ITEM_TM43
# 15 "data/maps/Route1a/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/Route1a/scripts.pory"
	setflag FLAG_RECEIVED_SECRET_POWER
# 17 "data/maps/Route1a/scripts.pory"
	msgbox Red1a_Beaten_Text_1
# 18 "data/maps/Route1a/scripts.pory"
	givedecoration DECOR_SMALL_DESK
# 19 "data/maps/Route1a/scripts.pory"
	release
	return


EventScript_Route1a_LittleGirl::
# 23 "data/maps/Route1a/scripts.pory"
	lockall
# 24 "data/maps/Route1a/scripts.pory"
	goto_if_unset FLAG_BEDROCK_RIVAL_HOUSE_RIVAL_BEATEN, EventScript_Route1a_LittleGirl_2
# 28 "data/maps/Route1a/scripts.pory"
	msgbox EventScript_Route1a_LittleGirl_Text_1
EventScript_Route1a_LittleGirl_1:
# 30 "data/maps/Route1a/scripts.pory"
	releaseall
	return

EventScript_Route1a_LittleGirl_2:
# 25 "data/maps/Route1a/scripts.pory"
	msgbox EventScript_Route1a_LittleGirl_Text_0
	goto EventScript_Route1a_LittleGirl_1


Giant_Azumarill::
# 34 "data/maps/Route1a/scripts.pory"
	lockall
# 35 "data/maps/Route1a/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_GIANT_FISH
# 36 "data/maps/Route1a/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Giant_Azumarill_4
Giant_Azumarill_3:
# 58 "data/maps/Route1a/scripts.pory"
	msgbox Giant_Azumarill_Text_3
Giant_Azumarill_1:
# 60 "data/maps/Route1a/scripts.pory"
	releaseall
	return

Giant_Azumarill_2:
# 37 "data/maps/Route1a/scripts.pory"
	msgbox Giant_Azumarill_Text_0, MSGBOX_YESNO
# 38 "data/maps/Route1a/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Giant_Azumarill_7
	end

Giant_Azumarill_4:
# 36 "data/maps/Route1a/scripts.pory"
	goto_if_unset FLAG_GIANT_AZUMARILL_BEATEN, Giant_Azumarill_2
	goto Giant_Azumarill_3

Giant_Azumarill_7:
# 39 "data/maps/Route1a/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 40 "data/maps/Route1a/scripts.pory"
	setflag FLAG_CANNOT_RUN_FROM_BATTLE
# 41 "data/maps/Route1a/scripts.pory"
	msgbox Giant_Azumarill_Text_1
# 42 "data/maps/Route1a/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
# 43 "data/maps/Route1a/scripts.pory"
	setwildbattle SPECIES_AZUMARILL, 35, ITEM_SITRUS_BERRY
# 44 "data/maps/Route1a/scripts.pory"
	dowildbattle
# 45 "data/maps/Route1a/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_GIANT_FISH_2
# 46 "data/maps/Route1a/scripts.pory"
	msgbox Giant_Azumarill_Text_2
# 47 "data/maps/Route1a/scripts.pory"
	giveitem ITEM_LUMINOUS_MOSS
# 48 "data/maps/Route1a/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/Route1a/scripts.pory"
	setflag FLAG_GIANT_AZUMARILL_BEATEN
# 50 "data/maps/Route1a/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 51 "data/maps/Route1a/scripts.pory"
	clearflag FLAG_CANNOT_RUN_FROM_BATTLE
	goto Giant_Azumarill_1


LuminousMoss_Route1_Spawn::
# 64 "data/maps/Route1a/scripts.pory"
	finditem ITEM_LUMINOUS_MOSS, 5
	return


Route1a_GetSecret_Power_Text_0:
# 7 "data/maps/Route1a/scripts.pory"
	.string "Hey have you seen these trees all over\n"
	.string "the place? You can create secret bases\l"
	.string "inside them.\p"
	.string "It's illegal in most regions but we love\n"
	.string "doing it here.$"

Red1a_Beaten_Text_0:
# 13 "data/maps/Route1a/scripts.pory"
	.string "It's really easy just teach secret\n"
	.string "power to a Pokémon then click on a tree\l"
	.string "like this and it'll open up.\p"
	.string "There are many other secret places you\n"
	.string "can make your base though, some are\l"
	.string "said to hide rare treasures$"

Red1a_Beaten_Text_1:
# 17 "data/maps/Route1a/scripts.pory"
	.string "Here take a desk to start decorating\n"
	.string "your house to!$"

EventScript_Route1a_LittleGirl_Text_0:
# 25 "data/maps/Route1a/scripts.pory"
	.string "Hi {PLAYER}! My brother was looking\n"
	.string "for you at home.$"

EventScript_Route1a_LittleGirl_Text_1:
# 28 "data/maps/Route1a/scripts.pory"
	.string "My brother is going to be the best\n"
	.string "trainer ever!$"

Giant_Azumarill_Text_0:
# 37 "data/maps/Route1a/scripts.pory"
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface, do you want to attempt to\l"
	.string "catch it?$"

Giant_Azumarill_Text_1:
# 41 "data/maps/Route1a/scripts.pory"
	.string "It leaps out at you$"

Giant_Azumarill_Text_2:
# 46 "data/maps/Route1a/scripts.pory"
	.string "The Azumarill flees and leaves\n"
	.string "something behind$"

Giant_Azumarill_Text_3:
# 58 "data/maps/Route1a/scripts.pory"
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface$"

Red1a_Intro::
# 69 "data/maps/Route1a/scripts.pory"
	.string "How about this, if you can beat me I'll\n"
	.string "teach you how to do it!$"

Red1a_Outro::
# 73 "data/maps/Route1a/scripts.pory"
	.string "You're pretty tough, alright let me show\n"
	.string "you as I promised!$"
