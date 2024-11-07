PlatefallCave_GF_MapScripts::
	.byte 0


Platefall_Puzzle_Wall::
# 4 "data/maps/PlatefallCave_GF/scripts.pory"
	lockall
# 5 "data/maps/PlatefallCave_GF/scripts.pory"
	goto_if_unset FLAG_ALEX_MET, Platefall_Puzzle_Wall_2
Platefall_Puzzle_Wall_1:
# 29 "data/maps/PlatefallCave_GF/scripts.pory"
	compare VAR_PLATES_FOUND, 3
	goto_if_gt Platefall_Puzzle_Wall_5
# 34 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_13
Platefall_Puzzle_Wall_4:
# 36 "data/maps/PlatefallCave_GF/scripts.pory"
	releaseall
	return

Platefall_Puzzle_Wall_2:
# 6 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_0
# 7 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_1
# 8 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_2
# 9 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_3
# 11 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_4
# 12 "data/maps/PlatefallCave_GF/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Platefallcave_Surprise
# 13 "data/maps/PlatefallCave_GF/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 14 "data/maps/PlatefallCave_GF/scripts.pory"
	applymovement 2, Movement_PlayerfallCave_AlexMovesToPlayer
# 15 "data/maps/PlatefallCave_GF/scripts.pory"
	waitmovement 2
# 16 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_5
# 17 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_6
# 18 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_7
# 19 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_8
# 20 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_9
# 21 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_10
# 22 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_11
# 23 "data/maps/PlatefallCave_GF/scripts.pory"
	applymovement 2, Movement_PlayerfallCave_AlexLeaves
# 24 "data/maps/PlatefallCave_GF/scripts.pory"
	waitmovement 2
# 25 "data/maps/PlatefallCave_GF/scripts.pory"
	removeobject 2
# 26 "data/maps/PlatefallCave_GF/scripts.pory"
	setvar VAR_PLATEQUEST_STATE, 1
# 27 "data/maps/PlatefallCave_GF/scripts.pory"
	setflag FLAG_ALEX_MET
	goto Platefall_Puzzle_Wall_1

Platefall_Puzzle_Wall_5:
# 30 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Puzzle_Wall_Text_12
	goto Platefall_Puzzle_Wall_4


Platefall_Cave_Alex_General::
# 40 "data/maps/PlatefallCave_GF/scripts.pory"
	lockall
# 41 "data/maps/PlatefallCave_GF/scripts.pory"
	faceplayer
# 42 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Cave_Alex_General_Text_0
# 43 "data/maps/PlatefallCave_GF/scripts.pory"
	releaseall
	return


Platefall_Cave_Maniac::
# 47 "data/maps/PlatefallCave_GF/scripts.pory"
	lockall
# 48 "data/maps/PlatefallCave_GF/scripts.pory"
	faceplayer
# 49 "data/maps/PlatefallCave_GF/scripts.pory"
	msgbox Platefall_Cave_Maniac_Text_0
# 50 "data/maps/PlatefallCave_GF/scripts.pory"
	releaseall
	return


# 55 "data/maps/PlatefallCave_GF/scripts.pory"
Movement_Platefallcave_Surprise:
# 56 "data/maps/PlatefallCave_GF/scripts.pory"
	emote_exclamation_mark
	step_end

# 59 "data/maps/PlatefallCave_GF/scripts.pory"
Movement_PlayerfallCave_AlexMovesToPlayer:
# 60 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_up
# 61 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_up
# 62 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_up
# 63 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_up
# 64 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_up
# 65 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_up
	step_end

# 68 "data/maps/PlatefallCave_GF/scripts.pory"
Movement_PlayerfallCave_AlexLeaves:
# 69 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_down
# 70 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_down
# 71 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_down
# 72 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_down
# 73 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_down
# 74 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_down
# 75 "data/maps/PlatefallCave_GF/scripts.pory"
	walk_down
	step_end

Platefall_Puzzle_Wall_Text_0:
# 6 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "It's a carving about the people who\n"
	.string "founded CLAY HAVEN$"

Platefall_Puzzle_Wall_Text_1:
# 7 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "It shows a creature coming down from\n"
	.string "the heavers with many arms holding a\l"
	.string "plate like artifact$"

Platefall_Puzzle_Wall_Text_2:
# 8 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "18 beams of light are shooting out of\n"
	.string "the creature landing all over an old map\l"
	.string "of TRIVER$"

Platefall_Puzzle_Wall_Text_3:
# 9 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "You can't help but notice four smooth\n"
	.string "holes in the wall.$"

Platefall_Puzzle_Wall_Text_4:
# 11 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "It's an interseting story don't you\n"
	.string "think?$"

Platefall_Puzzle_Wall_Text_5:
# 16 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "The story of the ancient plates have\n"
	.string "always fascinated me, it's name\l"
	.string "Platefall references that this is where\l"
	.string "the first plates landed.$"

Platefall_Puzzle_Wall_Text_6:
# 17 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "But that Pokémon at the top of the\n"
	.string "painting, the one with many arms. It's\l"
	.string "nothing like anything we've seen\l"
	.string "before.$"

Platefall_Puzzle_Wall_Text_7:
# 18 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "Anyway I'm being rude. My name is Alex\n"
	.string "it's very nice to meet you. I'm an\l"
	.string "explorer looking into the ancient\l"
	.string "history of the Triver region$"

Platefall_Puzzle_Wall_Text_8:
# 19 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "These carvings here are found all over\n"
	.string "the region and I've been trying to\l"
	.string "decipher them. There is one just over in\l"
	.string "Mahogany Hills, although curiously this\l"
	.string "carving has a lot more spaces on it.$"

Platefall_Puzzle_Wall_Text_9:
# 20 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "I've had a theory that if you can find\n"
	.string "the plates they picture this wall is\l"
	.string "actually a doorway to awaken that\l"
	.string "ancient Pokémon.$"

Platefall_Puzzle_Wall_Text_10:
# 21 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "Although no-one has managed to find\n"
	.string "any yet, although half the fun is\l"
	.string "exploring!$"

Platefall_Puzzle_Wall_Text_11:
# 22 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "Anyway I'll be seeing you around!$"

Platefall_Puzzle_Wall_Text_12:
# 30 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "You put 4 plates into the slots$"

Platefall_Puzzle_Wall_Text_13:
# 34 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "There seems to be 4 smooth holes bored\n"
	.string "into the wall$"

Platefall_Cave_Alex_General_Text_0:
# 42 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "I love this place, its so full of ancient\n"
	.string "history.$"

Platefall_Cave_Maniac_Text_0:
# 49 "data/maps/PlatefallCave_GF/scripts.pory"
	.string "Many history books talk about a rare\n"
	.string "Pokémon hidden deep in these\l"
	.string "mountains, but they are very hard to\l"
	.string "traverse$"
