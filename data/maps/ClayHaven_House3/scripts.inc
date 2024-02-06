ClayHaven_House3_MapScripts::
	.byte 0


Town2_EventScript_QuestStart::
	lockall
	faceplayer
	compare VAR_TOWN_2_QUEST_STATE, 0
	goto_if_eq Town2_EventScript_QuestStart_2
Town2_EventScript_QuestStart_1:
	compare VAR_TOWN_2_QUEST_STATE, 1
	goto_if_eq Town2_EventScript_QuestStart_5
Town2_EventScript_QuestStart_4:
	compare VAR_TOWN_2_QUEST_STATE, 2
	goto_if_eq Town2_EventScript_QuestStart_8
Town2_EventScript_QuestStart_7:
	compare VAR_TOWN_2_QUEST_STATE, 3
	goto_if_eq Town2_EventScript_QuestStart_11
Town2_EventScript_QuestStart_10:
	releaseall
	return

Town2_EventScript_QuestStart_2:
	msgbox Town2_EventScript_QuestStart_Text_0
	msgbox Town2_EventScript_QuestStart_Text_1
	setvar VAR_TOWN_2_QUEST_STATE, 1
	goto Town2_EventScript_QuestStart_1

Town2_EventScript_QuestStart_5:
	msgbox Town2_EventScript_QuestStart_Text_1
	goto Town2_EventScript_QuestStart_4

Town2_EventScript_QuestStart_8:
	msgbox Town2_EventScript_QuestStart_Text_2
	msgbox Town2_EventScript_QuestStart_Text_3
	special DoDomeConfetti
	giveitem ITEM_MYSTIC_WATER
	playfanfare MUS_OBTAIN_ITEM
	setvar VAR_TOWN_2_QUEST_STATE, 3
	goto Town2_EventScript_QuestStart_7

Town2_EventScript_QuestStart_11:
	msgbox Town2_EventScript_QuestStart_Text_4
	goto Town2_EventScript_QuestStart_10


Town2_House3_EventScript_Girl::
	lockall
	msgbox Town2_House3_EventScript_Girl_Text_0
	releaseall
	return


Town2_EventScript_QuestStart_Text_0:
	.string "Have you seen my daughter? She should\n"
	.string "be back by now.\p"
	.string "She went down to Mahogany Hills to\n"
	.string "train her pokemon. I hope she is okay.$"

Town2_EventScript_QuestStart_Text_1:
	.string "If you find her can you tell her to come\n"
	.string "back, I'm starting to worry.$"

Town2_EventScript_QuestStart_Text_2:
	.string "Thank you for your help. She told me\n"
	.string "everything, she was lucky you found\l"
	.string "here.$"

Town2_EventScript_QuestStart_Text_3:
	.string "Please take this as a thank you, it\n"
	.string "might help$"

Town2_EventScript_QuestStart_Text_4:
	.string "It'll be a while till I let her go out\n"
	.string "alone again..$"

Town2_House3_EventScript_Girl_Text_0:
	.string "Thank you for saving me.$"
