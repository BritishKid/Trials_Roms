SootopolisCity_House3_MapScripts::
	.byte 0


SootopolisCity_House3_EventScript_Woman::
# 4 "data/maps/SootopolisCity_House3/scripts.pory"
	lock
# 5 "data/maps/SootopolisCity_House3/scripts.pory"
	faceplayer
# 6 "data/maps/SootopolisCity_House3/scripts.pory"
	setvar VAR_JOKES, 1
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_EventScript_Woman_Text_0
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_EventScript_Woman_Text_1
# 9 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_EventScript_Woman_Text_2
# 10 "data/maps/SootopolisCity_House3/scripts.pory"
	release
	return


SofaJoke::
# 14 "data/maps/SootopolisCity_House3/scripts.pory"
	lock
# 15 "data/maps/SootopolisCity_House3/scripts.pory"
	applymovement 1, MoveToSofaJoke
# 16 "data/maps/SootopolisCity_House3/scripts.pory"
	waitmovement 1
# 17 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SofaJoke_Text_0
# 18 "data/maps/SootopolisCity_House3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SofaJoke_Text_1
# 20 "data/maps/SootopolisCity_House3/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 21 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SofaJoke_Text_2
# 22 "data/maps/SootopolisCity_House3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/SootopolisCity_House3/scripts.pory"
	warp MAP_MAHOGANY_HILLS_1, 17, 10
# 24 "data/maps/SootopolisCity_House3/scripts.pory"
	release
	return


# 27 "data/maps/SootopolisCity_House3/scripts.pory"
MoveToSofaJoke:
# 28 "data/maps/SootopolisCity_House3/scripts.pory"
	walk_up
	step_end

SootopolisCity_House3_EventScript_Woman_Text_0:
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh you're finally here. Fantastic$"

SootopolisCity_House3_EventScript_Woman_Text_1:
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Now we can finally begin, let me set up\n"
	.string "the camera.$"

SootopolisCity_House3_EventScript_Woman_Text_2:
# 9 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Go make yourself comfortable on the\n"
	.string "sofa and we will be over.$"

SofaJoke_Text_0:
# 17 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Okay ignore the camera and just do your\n"
	.string "thing$"

SofaJoke_Text_1:
# 19 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "A respectable amount of time later$"

SofaJoke_Text_2:
# 21 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Feel free to take a nap to get your\n"
	.string "energy back you're going to need it$"
