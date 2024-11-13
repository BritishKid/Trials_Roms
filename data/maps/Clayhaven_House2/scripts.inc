Clayhaven_House2_MapScripts::
	.byte 0


Town2_EventScript_QuestStart::
# 6 "data/maps/Clayhaven_House2/scripts.pory"
	lockall
# 7 "data/maps/Clayhaven_House2/scripts.pory"
	faceplayer
# 8 "data/maps/Clayhaven_House2/scripts.pory"
	compare VAR_TOWN_2_QUEST_STATE, 0
	goto_if_eq Town2_EventScript_QuestStart_2
Town2_EventScript_QuestStart_1:
# 15 "data/maps/Clayhaven_House2/scripts.pory"
	compare VAR_TOWN_2_QUEST_STATE, 1
	goto_if_eq Town2_EventScript_QuestStart_5
Town2_EventScript_QuestStart_4:
# 18 "data/maps/Clayhaven_House2/scripts.pory"
	compare VAR_TOWN_2_QUEST_STATE, 2
	goto_if_eq Town2_EventScript_QuestStart_8
Town2_EventScript_QuestStart_7:
# 27 "data/maps/Clayhaven_House2/scripts.pory"
	compare VAR_TOWN_2_QUEST_STATE, 3
	goto_if_eq Town2_EventScript_QuestStart_11
Town2_EventScript_QuestStart_10:
# 30 "data/maps/Clayhaven_House2/scripts.pory"
	releaseall
	return

Town2_EventScript_QuestStart_2:
# 9 "data/maps/Clayhaven_House2/scripts.pory"
	msgbox Town2_EventScript_QuestStart_Text_0
# 10 "data/maps/Clayhaven_House2/scripts.pory"
	msgbox Town2_EventScript_QuestStart_Text_1
# 12 "data/maps/Clayhaven_House2/scripts.pory"
	setvar VAR_TOWN_2_QUEST_STATE, 1
# 13 "data/maps/Clayhaven_House2/scripts.pory"
	clearflag FLAG_HIDE_MAHOGANY_HILLS_OBJECT
	goto Town2_EventScript_QuestStart_1

Town2_EventScript_QuestStart_5:
# 16 "data/maps/Clayhaven_House2/scripts.pory"
	msgbox Town2_EventScript_QuestStart_Text_1
	goto Town2_EventScript_QuestStart_4

Town2_EventScript_QuestStart_8:
# 19 "data/maps/Clayhaven_House2/scripts.pory"
	msgbox Town2_EventScript_QuestStart_Text_2
# 20 "data/maps/Clayhaven_House2/scripts.pory"
	msgbox Town2_EventScript_QuestStart_Text_3
# 21 "data/maps/Clayhaven_House2/scripts.pory"
	special DoDomeConfetti
# 22 "data/maps/Clayhaven_House2/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
# 23 "data/maps/Clayhaven_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/Clayhaven_House2/scripts.pory"
	setvar VAR_TOWN_2_QUEST_STATE, 3
	goto Town2_EventScript_QuestStart_7

Town2_EventScript_QuestStart_11:
# 28 "data/maps/Clayhaven_House2/scripts.pory"
	msgbox Town2_EventScript_QuestStart_Text_4
	goto Town2_EventScript_QuestStart_10


Town2_House3_EventScript_Girl::
# 34 "data/maps/Clayhaven_House2/scripts.pory"
	lockall
# 35 "data/maps/Clayhaven_House2/scripts.pory"
	faceplayer
# 36 "data/maps/Clayhaven_House2/scripts.pory"
	msgbox Town2_House3_EventScript_Girl_Text_0
# 37 "data/maps/Clayhaven_House2/scripts.pory"
	releaseall
	return


Town2_EventScript_QuestStart_Text_0:
# 9 "data/maps/Clayhaven_House2/scripts.pory"
	.string "Have you seen my daughter? She should\n"
	.string "be back by now.\p"
	.string "She went down to Mahogany Hills to\n"
	.string "train her Pokémon. I hope she is okay.$"

Town2_EventScript_QuestStart_Text_1:
# 10 "data/maps/Clayhaven_House2/scripts.pory"
	.string "If you find her can you tell her to come\n"
	.string "back, I'm starting to worry.$"

Town2_EventScript_QuestStart_Text_2:
# 19 "data/maps/Clayhaven_House2/scripts.pory"
	.string "Thank you for your help. She told me\n"
	.string "everything, she was lucky you found\l"
	.string "here.$"

Town2_EventScript_QuestStart_Text_3:
# 20 "data/maps/Clayhaven_House2/scripts.pory"
	.string "Please take this as a thank you, it\n"
	.string "might help$"

Town2_EventScript_QuestStart_Text_4:
# 28 "data/maps/Clayhaven_House2/scripts.pory"
	.string "She won't be allowed out alone anytime\n"
	.string "soon.$"

Town2_House3_EventScript_Girl_Text_0:
# 36 "data/maps/Clayhaven_House2/scripts.pory"
	.string "I was trying to find a secret area with\n"
	.string "rare Pokemon.$"
