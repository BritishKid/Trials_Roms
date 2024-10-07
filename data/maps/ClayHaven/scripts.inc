ClayHaven_MapScripts::
# 2 "data/maps/ClayHaven/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ClayHaven_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ClayHaven_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ClayHaven/scripts.pory"
	setflag FLAG_VISITED_CLAY_HAVEN
	return


Town2_Platefall_Block::
# 8 "data/maps/ClayHaven/scripts.pory"
	lockall
# 9 "data/maps/ClayHaven/scripts.pory"
	applymovement 2, Movement_Town2_LeftGuardMove
# 10 "data/maps/ClayHaven/scripts.pory"
	waitmovement 2
# 11 "data/maps/ClayHaven/scripts.pory"
	msgbox Town2_Platefall_Block_Text_0
# 12 "data/maps/ClayHaven/scripts.pory"
	trainerbattle_single TRAINER_TOWN2_PLATEFALL_GUARD, Town2_Guard_Intro, Town2_Guard_Outro, Town2_Guards_Beaten
# 13 "data/maps/ClayHaven/scripts.pory"
	releaseall
	return


Town2_Guards_Beaten::
# 17 "data/maps/ClayHaven/scripts.pory"
	msgbox Town2_Guards_Beaten_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/ClayHaven/scripts.pory"
	setvar VAR_PLATEFALL_ACCESSIBLE, 1
# 19 "data/maps/ClayHaven/scripts.pory"
	setvar VAR_TRAINERS_BEATEN_CHECK, VAR_TRAINERS_BEATEN_CHECK + 1
	return


Town2_Guard::
# 23 "data/maps/ClayHaven/scripts.pory"
	lockall
# 24 "data/maps/ClayHaven/scripts.pory"
	faceplayer
# 25 "data/maps/ClayHaven/scripts.pory"
	msgbox Town2_Guard_Text_0
# 26 "data/maps/ClayHaven/scripts.pory"
	releaseall
	return


ClayHaven_Girl_EventScript::
# 30 "data/maps/ClayHaven/scripts.pory"
	lockall
# 31 "data/maps/ClayHaven/scripts.pory"
	faceplayer
# 32 "data/maps/ClayHaven/scripts.pory"
	msgbox ClayHaven_Girl_EventScript_Text_0
# 33 "data/maps/ClayHaven/scripts.pory"
	releaseall
	return


ClayHaven_Girl2_EventScript::
# 37 "data/maps/ClayHaven/scripts.pory"
	lockall
# 38 "data/maps/ClayHaven/scripts.pory"
	faceplayer
# 39 "data/maps/ClayHaven/scripts.pory"
	msgbox ClayHaven_Girl2_EventScript_Text_0
# 40 "data/maps/ClayHaven/scripts.pory"
	releaseall
	return


Town2_Coming_Soon::
# 44 "data/maps/ClayHaven/scripts.pory"
	lockall
# 45 "data/maps/ClayHaven/scripts.pory"
	msgbox Town2_Coming_Soon_Text_0
# 46 "data/maps/ClayHaven/scripts.pory"
	releaseall
	return


ClayerHaven_ItemBall_PokeBall::
# 50 "data/maps/ClayHaven/scripts.pory"
	finditem ITEM_NET_BALL, 5
	return


# 54 "data/maps/ClayHaven/scripts.pory"
Movement_Town2_LeftGuardMove:
# 55 "data/maps/ClayHaven/scripts.pory"
	face_left
	step_end

Town2_Platefall_Block_Text_0:
# 11 "data/maps/ClayHaven/scripts.pory"
	.string "Hey it's dangerous in there we can't\n"
	.string "just let you in!$"

Town2_Guards_Beaten_Text_0:
# 17 "data/maps/ClayHaven/scripts.pory"
	.string "Go on in, just be careful$"

Town2_Guard_Text_0:
# 25 "data/maps/ClayHaven/scripts.pory"
	.string "This is an ancient cavern full of\n"
	.string "powerful Pokémon, so be careful$"

ClayHaven_Girl_EventScript_Text_0:
# 32 "data/maps/ClayHaven/scripts.pory"
	.string "Lots of strong trainers come here to\n"
	.string "explore the mountains. Apparently lots\l"
	.string "of rare Pokémon can be found there.$"

ClayHaven_Girl2_EventScript_Text_0:
# 39 "data/maps/ClayHaven/scripts.pory"
	.string "Pokémon can be used to make travelling\n"
	.string "easier like surfing on water. You just\l"
	.string "need 5 gym badges.$"

Town2_Coming_Soon_Text_0:
# 45 "data/maps/ClayHaven/scripts.pory"
	.string "COMING SOON. Join our discord to make\n"
	.string "suggestions$"

Town2_Guard_Intro::
# 60 "data/maps/ClayHaven/scripts.pory"
	.string "Lot's of strong Pokémon live here, I'll\n"
	.string "need to check you'll be okay$"

Town2_Guard_Outro::
# 64 "data/maps/ClayHaven/scripts.pory"
	.string "Alright you're pretty tough. You should\n"
	.string "be okay.$"
