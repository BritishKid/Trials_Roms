Route8_MapScripts::
	.byte 0


Route8_RivalBattle_Flash::
# 4 "data/maps/Route8/scripts.pory"
	lock
# 5 "data/maps/Route8/scripts.pory"
	msgbox Route8_RivalBattle_Flash_Text_0
# 6 "data/maps/Route8/scripts.pory"
	addobject 2
# 7 "data/maps/Route8/scripts.pory"
	applymovement 2, movement_rival_route9_Appear
# 8 "data/maps/Route8/scripts.pory"
	waitmovement 2
# 9 "data/maps/Route8/scripts.pory"
	msgbox Route8_RivalBattle_Flash_Text_1
# 10 "data/maps/Route8/scripts.pory"
	msgbox Route8_RivalBattle_Flash_Text_2
# 11 "data/maps/Route8/scripts.pory"
	msgbox Route8_RivalBattle_Flash_Text_3
# 12 "data/maps/Route8/scripts.pory"
	switch VAR_STARTER_MON
# 13 "data/maps/Route8/scripts.pory"
	case 0, Route8_RivalBattle_Flash_3
# 15 "data/maps/Route8/scripts.pory"
	case 1, Route8_RivalBattle_Flash_4
# 17 "data/maps/Route8/scripts.pory"
	case 2, Route8_RivalBattle_Flash_5
Route8_RivalBattle_Flash_1:
# 20 "data/maps/Route8/scripts.pory"
	msgbox Route8_RivalBattle_Flash_Text_4
# 21 "data/maps/Route8/scripts.pory"
	giveitem ITEM_HM05
# 22 "data/maps/Route8/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 23 "data/maps/Route8/scripts.pory"
	msgbox Route8_RivalBattle_Flash_Text_5
# 24 "data/maps/Route8/scripts.pory"
	msgbox Route8_RivalBattle_Flash_Text_6
# 25 "data/maps/Route8/scripts.pory"
	setvar VAR_RIVAL_FIGHT_2, 4
# 26 "data/maps/Route8/scripts.pory"
	msgbox Route8_RivalBattle_Flash_Text_7
# 27 "data/maps/Route8/scripts.pory"
	applymovement 2, movement_rival_route9_leave
# 28 "data/maps/Route8/scripts.pory"
	waitmovement 2
# 29 "data/maps/Route8/scripts.pory"
	removeobject 2
# 30 "data/maps/Route8/scripts.pory"
	release
	return

Route8_RivalBattle_Flash_3:
# 14 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE8_TYPHLOSION, Rival_Route9_Beaten
	goto Route8_RivalBattle_Flash_1

Route8_RivalBattle_Flash_4:
# 16 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE8_FERALIGATOR, Rival_Route9_Beaten
	goto Route8_RivalBattle_Flash_1

Route8_RivalBattle_Flash_5:
# 18 "data/maps/Route8/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE8_MEGANIUM, Rival_Route9_Beaten
	goto Route8_RivalBattle_Flash_1


Route8_ItemBall::
# 34 "data/maps/Route8/scripts.pory"
	finditem ITEM_TM44
	return


# 38 "data/maps/Route8/scripts.pory"
movement_rival_route9_Appear:
# 39 "data/maps/Route8/scripts.pory"
	walk_left
# 40 "data/maps/Route8/scripts.pory"
	walk_left
# 41 "data/maps/Route8/scripts.pory"
	walk_left
# 42 "data/maps/Route8/scripts.pory"
	walk_left
# 43 "data/maps/Route8/scripts.pory"
	walk_left
# 44 "data/maps/Route8/scripts.pory"
	walk_left
	step_end

# 47 "data/maps/Route8/scripts.pory"
movement_rival_route9_leave:
# 48 "data/maps/Route8/scripts.pory"
	walk_right
# 49 "data/maps/Route8/scripts.pory"
	walk_right
# 50 "data/maps/Route8/scripts.pory"
	walk_right
# 51 "data/maps/Route8/scripts.pory"
	walk_right
# 52 "data/maps/Route8/scripts.pory"
	walk_right
# 53 "data/maps/Route8/scripts.pory"
	walk_right
# 54 "data/maps/Route8/scripts.pory"
	walk_right
	step_end

Route8_RivalBattle_Flash_Text_0:
# 5 "data/maps/Route8/scripts.pory"
	.string "Hi, still not given up I see!$"

Route8_RivalBattle_Flash_Text_1:
# 9 "data/maps/Route8/scripts.pory"
	.string "I'm just heading back to Bedrock town\n"
	.string "to talk to Professor Holly, she wanted a\l"
	.string "strong trainer to come and help her and\l"
	.string "with 4 badges I should be more than\l"
	.string "strong enough.$"

Route8_RivalBattle_Flash_Text_2:
# 10 "data/maps/Route8/scripts.pory"
	.string "I wouldn't bother going back if I was\n"
	.string "you, you're no where near my level.$"

Route8_RivalBattle_Flash_Text_3:
# 11 "data/maps/Route8/scripts.pory"
	.string "How about I prove to you how strong I\n"
	.string "am, I'll make it fair and use my new\l"
	.string "Pokémon I just caught$"

Route8_RivalBattle_Flash_Text_4:
# 20 "data/maps/Route8/scripts.pory"
	.string "If you insist on continuing on to the\n"
	.string "Ember Dunes you should take this.$"

Route8_RivalBattle_Flash_Text_5:
# 23 "data/maps/Route8/scripts.pory"
	.string "It will help you light up the darkness in\n"
	.string "the cave, but make sure you get an acro\l"
	.string "bike if you want to make your way\l"
	.string "through.$"

Route8_RivalBattle_Flash_Text_6:
# 24 "data/maps/Route8/scripts.pory"
	.string "You might be able to buy one from\n"
	.string "someone in town.$"

Route8_RivalBattle_Flash_Text_7:
# 26 "data/maps/Route8/scripts.pory"
	.string "Catch you later elbowless$"

Rival_Route9_Beaten::
# 59 "data/maps/Route8/scripts.pory"
	.string "Well you're slowly getting to my level$"
