ClayHaven_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ClayHaven_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ClayHaven_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_CLAY_HAVEN
	return


Town2_Platefall_Block::
	lockall
	applymovement 2, Movement_Town2_LeftGuardMove
	waitmovement 2
	msgbox Town2_Platefall_Block_Text_0
	trainerbattle_single TRAINER_TOWN2_PLATEFALL_GUARD, Town2_Guard_Intro, Town2_Guard_Outro, Town2_Guards_Beaten
	releaseall
	return


Town2_Guards_Beaten::
	msgbox Town2_Guards_Beaten_Text_0, MSGBOX_AUTOCLOSE
	setvar VAR_PLATEFALL_ACCESSIBLE, 1
	setvar VAR_TRAINERS_BEATEN_CHECK, VAR_TRAINERS_BEATEN_CHECK + 1
	return


Town2_Guard::
	lockall
	faceplayer
	msgbox Town2_Guard_Text_0
	releaseall
	return


ClayHaven_Girl_EventScript::
	lockall
	faceplayer
	msgbox ClayHaven_Girl_EventScript_Text_0
	releaseall
	return


ClayHaven_Girl2_EventScript::
	lockall
	faceplayer
	msgbox ClayHaven_Girl2_EventScript_Text_0
	releaseall
	return


Town2_Coming_Soon::
	lockall
	msgbox Town2_Coming_Soon_Text_0
	releaseall
	return


ClayerHaven_ItemBall_PokeBall::
	finditem ITEM_NET_BALL, 5
	return


Movement_Town2_LeftGuardMove:
	face_left
	step_end

Town2_Platefall_Block_Text_0:
	.string "Hey it's dangerous in there we can't\n"
	.string "just let you in!$"

Town2_Guards_Beaten_Text_0:
	.string "Go on in, just be careful$"

Town2_Guard_Text_0:
	.string "This is an ancient cavern full of\n"
	.string "powerful Pokémon, so be careful$"

ClayHaven_Girl_EventScript_Text_0:
	.string "Lots of strong trainers come here to\n"
	.string "explore the mountains. Apparently lots\l"
	.string "of rare Pokémon can be found there.$"

ClayHaven_Girl2_EventScript_Text_0:
	.string "Pokémon can be used to make travelling\n"
	.string "easier like surfing on water. You just\l"
	.string "need 5 gym badges.$"

Town2_Coming_Soon_Text_0:
	.string "COMING SOON. Join our discord to make\n"
	.string "suggestions$"

Town2_Guard_Intro::
	.string "Lot's of strong Pokémon live here, I'll\n"
	.string "need to check you'll be okay$"

Town2_Guard_Outro::
	.string "Alright you're pretty tough. You should\n"
	.string "be okay.$"
