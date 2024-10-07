Route4_House_MapScripts::
	.byte 0


Brawley_Route4_Battle::
	lock
	msgbox Brawley_Route4_Battle_Text_0
	applymovement 1, Movement_Brawley_Surprise
	waitmovement 1
	msgbox Brawley_Route4_Battle_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Brawley_Route4_Battle_2
	msgbox Brawley_Route4_Battle_Text_3
Brawley_Route4_Battle_1:
	msgbox Brawley_Route4_Battle_Text_4
	msgbox Brawley_Route4_Battle_Text_5
	msgbox Brawley_Route4_Battle_Text_6
	msgbox Brawley_Route4_Battle_Text_7
	trainerbattle_no_intro TRAINER_BRAWLY_1, Brawley_Route4_Outro
	setvar VAR_ROUTE4_BRAWLEY, 1
	msgbox Brawley_Route4_Battle_Text_8
	release
	return

Brawley_Route4_Battle_2:
	msgbox Brawley_Route4_Battle_Text_2
	goto Brawley_Route4_Battle_1


Brawly_General::
	lock
	faceplayer
	msgbox Brawly_General_Text_0
	goto_if_set FLAG_WATERFALL_CAVE_CLEARED, Brawly_General_2
Brawly_General_1:
	release
	return

Brawly_General_2:
	msgbox Brawly_General_Text_1
	msgbox Brawly_General_Text_2
	goto Brawly_General_1


Movement_Brawley_Surprise:
	emote_exclamation_mark
	face_down
	step_end

Brawley_Route4_Battle_Text_0:
	.string "Where is that delivery, how hard can it\n"
	.string "be to get furniture up here.$"

Brawley_Route4_Battle_Text_1:
	.string "Are you here with my delivery?$"

Brawley_Route4_Battle_Text_2:
	.string "So you just walked into this house\n"
	.string "without knocking?\n"
	.string "This isn't just some zelda game where\l"
	.string "you can get away with that$"

Brawley_Route4_Battle_Text_3:
	.string "Wait you don't have the uniform on, is\n"
	.string "this some prank kid?$"

Brawley_Route4_Battle_Text_4:
	.string "You're lucky you got me in a good mood,\n"
	.string "we are almost finished here.$"

Brawley_Route4_Battle_Text_5:
	.string "Soon this house will be open for martial\n"
	.string "artists all around the world to come to\l"
	.string "these mountain ranges said to be the\l"
	.string "best place to train your mind and body.$"

Brawley_Route4_Battle_Text_6:
	.string "Many ancient masters are said to have\n"
	.string "dojos and reside somewhere and we are\l"
	.string "going to make it easier to find and join\l"
	.string "them$"

Brawley_Route4_Battle_Text_7:
	.string "Anyway I can't help but notice your a\n"
	.string "trainer, and like me you're itching to\l"
	.string "fight.\n"
	.string "No more talk, lets battle$"

Brawley_Route4_Battle_Text_8:
	.string "Well done kid, you might have what it\n"
	.string "takes to became a black belt.$"

Brawly_General_Text_0:
	.string "Have you found any hidden dojos yet?$"

Brawly_General_Text_1:
	.string "Oh wow there was a dojo behind the\n"
	.string "waterfall?$"

Brawly_General_Text_2:
	.string "FUTURE IMPLEMENTATION COME BACK IN A\n"
	.string "FUTURE VERSION$"

Brawley_Route4_Outro::
	.string "Damn kid$"
