Platefall_Cave_Ground_Floor_MapScripts::
	.byte 0


Platefall_Puzzle_Wall::
	lock
	goto_if_unset FLAG_ALEX_MET, Platefall_Puzzle_Wall_2
Platefall_Puzzle_Wall_1:
	compare VAR_PLATES_FOUND, 3
	goto_if_gt Platefall_Puzzle_Wall_5
	msgbox Platefall_Puzzle_Wall_Text_13
Platefall_Puzzle_Wall_4:
	release
	return

Platefall_Puzzle_Wall_2:
	msgbox Platefall_Puzzle_Wall_Text_0
	msgbox Platefall_Puzzle_Wall_Text_1
	msgbox Platefall_Puzzle_Wall_Text_2
	msgbox Platefall_Puzzle_Wall_Text_3
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_ARCEUS_PLATES
	msgbox Platefall_Puzzle_Wall_Text_4
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThugCity_Player_Surprised
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Movement_AlexMovesToPlayer_Platefall
	waitmovement 1
	msgbox Platefall_Puzzle_Wall_Text_5
	msgbox Platefall_Puzzle_Wall_Text_6
	msgbox Platefall_Puzzle_Wall_Text_7
	msgbox Platefall_Puzzle_Wall_Text_8
	msgbox Platefall_Puzzle_Wall_Text_9
	msgbox Platefall_Puzzle_Wall_Text_10
	msgbox Platefall_Puzzle_Wall_Text_11
	applymovement 1, Movement_AlexLeavesPlayer_Platefall
	waitmovement 1
	removeobject 1
	setvar VAR_PLATE_QUEST_STATE, 1
	setflag FLAG_ALEX_MET
	goto Platefall_Puzzle_Wall_1

Platefall_Puzzle_Wall_5:
	msgbox Platefall_Puzzle_Wall_Text_12
	warp MAP_PLATEFALL_CAVE_DEEPER_GF, 4, 6
	goto Platefall_Puzzle_Wall_4


Platefall_Cave_Alex_General::
	lock
	faceplayer
	msgbox Platefall_Cave_Alex_General_Text_0
	release
	return


Platefall_Cave_Maniac::
	lock
	faceplayer
	msgbox Platefall_Cave_Maniac_Text_0
	release
	return


Movement_AlexMovesToPlayer_Platefall:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_AlexLeavesPlayer_Platefall:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ComingSoon_Platefall::
	lockall
	msgbox ComingSoon_Platefall_Text_0
	releaseall
	return


Platefall_Puzzle_Wall_Text_0:
	.string "It's a carving about the people who\n"
	.string "founded Clay Haven$"

Platefall_Puzzle_Wall_Text_1:
	.string "It shows a creature coming down from\n"
	.string "the heavens with many arms holding a\l"
	.string "plate like artifact$"

Platefall_Puzzle_Wall_Text_2:
	.string "18 beams of light are shooting out of it\n"
	.string "landing on a map of Triver.$"

Platefall_Puzzle_Wall_Text_3:
	.string "You also can't help but notice the four\n"
	.string "holes in the wall.$"

Platefall_Puzzle_Wall_Text_4:
	.string "It's an interesting story don't you\n"
	.string "think?$"

Platefall_Puzzle_Wall_Text_5:
	.string "The story of the ancient plates have\n"
	.string "always fascinated me, it's name\l"
	.string "Platefall references that this is where\l"
	.string "the first plates landed.$"

Platefall_Puzzle_Wall_Text_6:
	.string "But that Pokémon at the top of the\n"
	.string "painting, the one with many arms. It's\l"
	.string "nothing like anything we've seen\l"
	.string "before.$"

Platefall_Puzzle_Wall_Text_7:
	.string "Anyway I'm being rude. My name is Alex\n"
	.string "it's very nice to meet you. I'm an\l"
	.string "explorer looking into the ancient\l"
	.string "history of the Triver region$"

Platefall_Puzzle_Wall_Text_8:
	.string "These carvings here are found all over\n"
	.string "the region and I've been trying to\l"
	.string "decipher them. There is one just over in\l"
	.string "Mahogany Hills, although curiously this\l"
	.string "carving has a lot more spaces on it.$"

Platefall_Puzzle_Wall_Text_9:
	.string "I've had a theory that if you can find\n"
	.string "the plates they picture this wall is\l"
	.string "actually a doorway to awaken that\l"
	.string "ancient Pokémon.$"

Platefall_Puzzle_Wall_Text_10:
	.string "Although no-one has managed to find\n"
	.string "any yet, although half the fun is\l"
	.string "exploring!$"

Platefall_Puzzle_Wall_Text_11:
	.string "Anyway I'll be seeing you around!$"

Platefall_Puzzle_Wall_Text_12:
	.string "You put the 4 plates into the slots$"

Platefall_Puzzle_Wall_Text_13:
	.string "There seem to be 4 plate sized holes in\n"
	.string "the wall.$"

Platefall_Cave_Alex_General_Text_0:
	.string "I love this place, it's just full of\n"
	.string "ancient history.$"

Platefall_Cave_Maniac_Text_0:
	.string "Lot's of history books talk about rare\n"
	.string "Pokémon hidden deep in these\l"
	.string "mountains, but they are very hard to\l"
	.string "traverse$"

ComingSoon_Platefall_Text_0:
	.string "Coming soon$"
