ClayHaven_MapScripts::
	.byte 0


Town2_Platefall_Block::
	lockall
	applymovement 4, Movement_Town2_LeftGuardMove
	waitmovement 4
	msgbox Town2_Platefall_Block_Text_0
	trainerbattle_single TRAINER_TOWN2_PLATEFALL_GUARD, Town2_Guard_Intro, Town2_Guard_Outro, Town2_Guards_Beaten
	releaseall
	return


Town2_Guards_Beaten::
	msgbox Town2_Guards_Beaten_Text_0, MSGBOX_AUTOCLOSE
	setvar VAR_PLATEFALL_ACCESSIBLE, 1
	setvar VAR_FIRST_TRAINERS_BEATEN_CHECK, VAR_FIRST_TRAINERS_BEATEN_CHECK + 1
	return


Town2_Guard::
	lockall
	msgbox Town2_Guard_Text_0
	releaseall
	return


ClayHaven_Girl_EventScript::
	lockall
	msgbox ClayHaven_Girl_EventScript_Text_0
	releaseall
	return


ClayHaven_Girl2_EventScript::
	lockall
	msgbox ClayHaven_Girl2_EventScript_Text_0
	releaseall
	return


Town2_Coming_Soon::
	lockall
	msgbox Town2_Coming_Soon_Text_0
	releaseall
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
	.string "The plate artifact that once landed\n"
	.string "here has been stolen! It was taken in\l"
	.string "the night and they left no evidence,\l"
	.string "it's a travesty.$"

ClayHaven_Girl_EventScript_Text_0:
	.string "Lots of strong trainers come here to\n"
	.string "explore the mountains. Apparently lots\l"
	.string "of rare pokemon can be found there.$"

ClayHaven_Girl2_EventScript_Text_0:
	.string "Pokemon can be used to make travelling\n"
	.string "easier like surfing on water. You just\l"
	.string "need 5 gym badges.$"

Town2_Coming_Soon_Text_0:
	.string "COMING SOON. Join our discord to make\n"
	.string "suggestions$"

Town2_Guard_Intro::
	.string "Lot's of strong pokemon live here, I'll\n"
	.string "need to check you'll be okay$"

Town2_Guard_Outro::
	.string "Alright you're pretty tough. You should\n"
	.string "be okay.$"
