Route1a_MapScripts::
	.byte 0


Route1a_GetSecret_Power::
	lockall
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, Route1a_GetSecret_Power_1
	return

Route1a_GetSecret_Power_1:
	msgbox Route1a_GetSecret_Power_Text_0
	trainerbattle_single TRAINER_RED_ROUTE_1A_FIRST, Red1a_Intro, Red1a_Outro, Red1a_Beaten
	return


Red1a_Beaten::
	msgbox Red1a_Beaten_Text_0
	giveitem ITEM_TM43
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECEIVED_SECRET_POWER
	msgbox Red1a_Beaten_Text_1
	givedecoration DECOR_SMALL_DESK
	release
	return


EventScript_Route1a_LittleGirl::
	lockall
	goto_if_unset FLAG_BEDROCK_RIVAL_HOUSE_RIVAL_BEATEN, EventScript_Route1a_LittleGirl_2
	msgbox EventScript_Route1a_LittleGirl_Text_1
EventScript_Route1a_LittleGirl_1:
	releaseall
	return

EventScript_Route1a_LittleGirl_2:
	msgbox EventScript_Route1a_LittleGirl_Text_0
	goto EventScript_Route1a_LittleGirl_1


Route1a_GetSecret_Power_Text_0:
	.string "Hey have you seen these trees all over\n"
	.string "the place? You can create secret bases\l"
	.string "inside them.\p"
	.string "It's illegal in most regions but we love\n"
	.string "doing it here.$"

Red1a_Beaten_Text_0:
	.string "It's really easy just teach secret\n"
	.string "power to a pokemon then click on a tree\l"
	.string "like this and it'll open up.\p"
	.string "There are many other secret places you\n"
	.string "can make your base though, some are\l"
	.string "said to hide rare treasures$"

Red1a_Beaten_Text_1:
	.string "Here take a desk to start decorating\n"
	.string "your house to!$"

EventScript_Route1a_LittleGirl_Text_0:
	.string "Hi {PLAYER}! My brother was looking\n"
	.string "for you at home.$"

EventScript_Route1a_LittleGirl_Text_1:
	.string "My brother is going to be the best\n"
	.string "trainer ever!$"

Red1a_Intro::
	.string "How about this, if you can beat me I'll\n"
	.string "teach you how to do it!$"

Red1a_Outro::
	.string "You're pretty tough, alright let me show\n"
	.string "you as I promised!$"
