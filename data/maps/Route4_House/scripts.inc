Route4_House_MapScripts::
	.byte 0


Brawley_Route4_Battle::
# 5 "data/maps/Route4_House/scripts.pory"
	lock
# 6 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_0
# 7 "data/maps/Route4_House/scripts.pory"
	applymovement 1, Movement_Brawley_Surprise
# 8 "data/maps/Route4_House/scripts.pory"
	waitmovement 1
# 9 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_1, MSGBOX_YESNO
# 10 "data/maps/Route4_House/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Brawley_Route4_Battle_2
# 13 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_3
Brawley_Route4_Battle_1:
# 15 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_4
# 16 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_5
# 17 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_6
# 18 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_7
# 19 "data/maps/Route4_House/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, Brawley_Route4_Outro
# 20 "data/maps/Route4_House/scripts.pory"
	setvar VAR_ROUTE4_BRAWLEY, 1
# 21 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_8
# 24 "data/maps/Route4_House/scripts.pory"
	release
	return

Brawley_Route4_Battle_2:
# 11 "data/maps/Route4_House/scripts.pory"
	msgbox Brawley_Route4_Battle_Text_2
	goto Brawley_Route4_Battle_1


Brawly_General::
# 29 "data/maps/Route4_House/scripts.pory"
	lock
# 30 "data/maps/Route4_House/scripts.pory"
	faceplayer
# 31 "data/maps/Route4_House/scripts.pory"
	msgbox Brawly_General_Text_0
# 32 "data/maps/Route4_House/scripts.pory"
	goto_if_set FLAG_WATERFALL_CAVE_CLEARED, Brawly_General_2
Brawly_General_1:
# 37 "data/maps/Route4_House/scripts.pory"
	release
	return

Brawly_General_2:
# 33 "data/maps/Route4_House/scripts.pory"
	msgbox Brawly_General_Text_1
# 34 "data/maps/Route4_House/scripts.pory"
	msgbox Brawly_General_Text_2
	goto Brawly_General_1


# 42 "data/maps/Route4_House/scripts.pory"
Movement_Brawley_Surprise:
# 43 "data/maps/Route4_House/scripts.pory"
	emote_exclamation_mark
# 44 "data/maps/Route4_House/scripts.pory"
	face_down
	step_end

Brawley_Route4_Battle_Text_0:
# 6 "data/maps/Route4_House/scripts.pory"
	.string "Where is that delivery, how hard can it\n"
	.string "be to get furniture up here.$"

Brawley_Route4_Battle_Text_1:
# 9 "data/maps/Route4_House/scripts.pory"
	.string "Are you here with my delivery?$"

Brawley_Route4_Battle_Text_2:
# 11 "data/maps/Route4_House/scripts.pory"
	.string "So you just walked into this house\n"
	.string "without knocking?\n"
	.string "This isn't just some zelda game where\l"
	.string "you can get away with that$"

Brawley_Route4_Battle_Text_3:
# 13 "data/maps/Route4_House/scripts.pory"
	.string "Wait you don't have the uniform on, is\n"
	.string "this some prank kid?$"

Brawley_Route4_Battle_Text_4:
# 15 "data/maps/Route4_House/scripts.pory"
	.string "You're lucky you got me in a good mood,\n"
	.string "we are almost finished here.$"

Brawley_Route4_Battle_Text_5:
# 16 "data/maps/Route4_House/scripts.pory"
	.string "Soon this house will be open for martial\n"
	.string "artists all around the world to come to\l"
	.string "these mountain ranges said to be the\l"
	.string "best place to train your mind and body.$"

Brawley_Route4_Battle_Text_6:
# 17 "data/maps/Route4_House/scripts.pory"
	.string "Many ancient masters are said to have\n"
	.string "dojos and reside somewhere and we are\l"
	.string "going to make it easier to find and join\l"
	.string "them$"

Brawley_Route4_Battle_Text_7:
# 18 "data/maps/Route4_House/scripts.pory"
	.string "Anyway I can't help but notice your a\n"
	.string "trainer, and like me you're itching to\l"
	.string "fight.\n"
	.string "No more talk, lets battle$"

Brawley_Route4_Battle_Text_8:
# 21 "data/maps/Route4_House/scripts.pory"
	.string "Well done kid, you might have what it\n"
	.string "takes to became a black belt.$"

Brawly_General_Text_0:
# 31 "data/maps/Route4_House/scripts.pory"
	.string "Have you found any hidden dojos yet?$"

Brawly_General_Text_1:
# 33 "data/maps/Route4_House/scripts.pory"
	.string "Oh wow there was a dojo behind the\n"
	.string "waterfall?$"

Brawly_General_Text_2:
# 34 "data/maps/Route4_House/scripts.pory"
	.string "FUTURE IMPLEMENTATION COME BACK IN A\n"
	.string "FUTURE VERSION$"

Brawley_Route4_Outro::
# 49 "data/maps/Route4_House/scripts.pory"
	.string "Damn kid$"
