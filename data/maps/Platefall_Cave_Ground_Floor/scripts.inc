Platefall_Cave_Ground_Floor_MapScripts::
	.byte 0


Platefall_Puzzle_Wall::
# 4 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	lock
# 5 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	goto_if_unset FLAG_ALEX_MET, Platefall_Puzzle_Wall_2
Platefall_Puzzle_Wall_1:
# 29 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	compare VAR_PLATES_FOUND, 3
	goto_if_gt Platefall_Puzzle_Wall_5
# 35 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_13
Platefall_Puzzle_Wall_4:
# 37 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	release
	return

Platefall_Puzzle_Wall_2:
# 6 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_0
# 7 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_1
# 8 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_2
# 9 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_3
# 10 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_ARCEUS_PLATES
# 11 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_4
# 12 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThugCity_Player_Surprised
# 13 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 14 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	applymovement 1, Movement_AlexMovesToPlayer_Platefall
# 15 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	waitmovement 1
# 16 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_5
# 17 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_6
# 18 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_7
# 19 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_8
# 20 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_9
# 21 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_10
# 22 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_11
# 23 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	applymovement 1, Movement_AlexLeavesPlayer_Platefall
# 24 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	waitmovement 1
# 25 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	removeobject 1
# 26 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	setvar VAR_PLATE_QUEST_STATE, 1
# 27 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	setflag FLAG_ALEX_MET
	goto Platefall_Puzzle_Wall_1

Platefall_Puzzle_Wall_5:
# 30 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_12
# 31 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	warp MAP_PLATEFALL_CAVE_DEEPER_GF, 4, 6
	goto Platefall_Puzzle_Wall_4


Platefall_Cave_Alex_General::
# 41 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	lock
# 42 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	faceplayer
# 43 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Cave_Alex_General_Text_0
# 44 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	release
	return


Platefall_Cave_Maniac::
# 48 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	lock
# 49 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	faceplayer
# 50 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox Platefall_Cave_Maniac_Text_0
# 51 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	release
	return


# 54 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
Movement_AlexMovesToPlayer_Platefall:
# 55 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_up
# 56 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_up
# 57 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_up
# 58 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_up
# 59 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_up
# 60 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
Movement_AlexLeavesPlayer_Platefall:
# 64 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_down
# 65 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_down
# 66 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_down
# 67 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_down
# 68 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_down
# 69 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_down
# 70 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	walk_down
	step_end

ComingSoon_Platefall::
# 74 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	lockall
# 75 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	msgbox ComingSoon_Platefall_Text_0
# 76 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	releaseall
	return


Platefall_Puzzle_Wall_Text_0:
# 6 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "It's a carving about the people who\n"
	.string "founded Clay Haven$"

Platefall_Puzzle_Wall_Text_1:
# 7 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "It shows a creature coming down from\n"
	.string "the heavens with many arms holding a\l"
	.string "plate like artifact$"

Platefall_Puzzle_Wall_Text_2:
# 8 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "18 beams of light are shooting out of it\n"
	.string "landing on a map of Triver.$"

Platefall_Puzzle_Wall_Text_3:
# 9 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "You also can't help but notice the four\n"
	.string "holes in the wall.$"

Platefall_Puzzle_Wall_Text_4:
# 11 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "It's an interesting story don't you\n"
	.string "think?$"

Platefall_Puzzle_Wall_Text_5:
# 16 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "The story of the ancient plates have\n"
	.string "always fascinated me, it's name\l"
	.string "Platefall references that this is where\l"
	.string "the first plates landed.$"

Platefall_Puzzle_Wall_Text_6:
# 17 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "But that Pokémon at the top of the\n"
	.string "painting, the one with many arms. It's\l"
	.string "nothing like anything we've seen\l"
	.string "before.$"

Platefall_Puzzle_Wall_Text_7:
# 18 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "Anyway I'm being rude. My name is Alex\n"
	.string "it's very nice to meet you. I'm an\l"
	.string "explorer looking into the ancient\l"
	.string "history of the Triver region$"

Platefall_Puzzle_Wall_Text_8:
# 19 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "These carvings here are found all over\n"
	.string "the region and I've been trying to\l"
	.string "decipher them. There is one just over in\l"
	.string "Mahogany Hills, although curiously this\l"
	.string "carving has a lot more spaces on it.$"

Platefall_Puzzle_Wall_Text_9:
# 20 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "I've had a theory that if you can find\n"
	.string "the plates they picture this wall is\l"
	.string "actually a doorway to awaken that\l"
	.string "ancient Pokémon.$"

Platefall_Puzzle_Wall_Text_10:
# 21 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "Although no-one has managed to find\n"
	.string "any yet, although half the fun is\l"
	.string "exploring!$"

Platefall_Puzzle_Wall_Text_11:
# 22 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "Anyway I'll be seeing you around!$"

Platefall_Puzzle_Wall_Text_12:
# 30 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "You put the 4 plates into the slots$"

Platefall_Puzzle_Wall_Text_13:
# 35 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "There seem to be 4 plate sized holes in\n"
	.string "the wall.$"

Platefall_Cave_Alex_General_Text_0:
# 43 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "I love this place, it's just full of\n"
	.string "ancient history.$"

Platefall_Cave_Maniac_Text_0:
# 50 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "Lot's of history books talk about rare\n"
	.string "Pokémon hidden deep in these\l"
	.string "mountains, but they are very hard to\l"
	.string "traverse$"

ComingSoon_Platefall_Text_0:
# 75 "data/maps/Platefall_Cave_Ground_Floor/scripts.pory"
	.string "Coming soon$"
