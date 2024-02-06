Route8_MapScripts::
	.byte 0


Route8_RivalBattle_Flash::
	lock
	msgbox Route8_RivalBattle_Flash_Text_0
	addobject 2
	applymovement 2, movement_rival_route9_Appear
	waitmovement 2
	msgbox Route8_RivalBattle_Flash_Text_1
	msgbox Route8_RivalBattle_Flash_Text_2
	msgbox Route8_RivalBattle_Flash_Text_3
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE9, Rival_Route9_Beaten
	msgbox Route8_RivalBattle_Flash_Text_4
	giveitem ITEM_HM05
	playfanfare MUS_OBTAIN_TMHM
	msgbox Route8_RivalBattle_Flash_Text_5
	msgbox Route8_RivalBattle_Flash_Text_6
	setvar VAR_RIVAL_FIGHT_2, 4
	msgbox Route8_RivalBattle_Flash_Text_7
	applymovement 2, movement_rival_route9_leave
	waitmovement 2
	removeobject 2
	release
	return


movement_rival_route9_Appear:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

movement_rival_route9_leave:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route8_RivalBattle_Flash_Text_0:
	.string "Hi, still not given up I see!$"

Route8_RivalBattle_Flash_Text_1:
	.string "I'm just heading back to Bedrock town\n"
	.string "to talk to Proffessor Holly, she wanted\l"
	.string "a strong trainer to come and help her\l"
	.string "and with 4 badges I should be more than\l"
	.string "strong enough.$"

Route8_RivalBattle_Flash_Text_2:
	.string "I wouldn't bother going back if I was\n"
	.string "you, you're no where near my level.$"

Route8_RivalBattle_Flash_Text_3:
	.string "How about I prove to you how strong I\n"
	.string "am, I'll make it fair and use my new\l"
	.string "Pokemon I just caught$"

Route8_RivalBattle_Flash_Text_4:
	.string "If you insist on continuing on to the\n"
	.string "Ember Dunes you should take this.$"

Route8_RivalBattle_Flash_Text_5:
	.string "It will help you light up the darkness in\n"
	.string "the cave, but make sure you get an acro\l"
	.string "bike if you want to make your way\l"
	.string "through.$"

Route8_RivalBattle_Flash_Text_6:
	.string "You might be able to buy one from\n"
	.string "someone in town.$"

Route8_RivalBattle_Flash_Text_7:
	.string "Catch you later elbowless$"

Rival_Route9_Beaten::
	.string "Well you're slowly getting to my level$"
