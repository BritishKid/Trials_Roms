MeteorFalls_1F_1R_MapScripts::
	.byte 0


MeteorFalls_1F_1R_EventScript_ItemMoonStone::
	finditem ITEM_MOON_STONE
	return


MeteorFalls_1F_1R_EventScript_ItemPPUP::
	finditem ITEM_PP_UP
	return


MeteorFalls_1F_1R_EventScript_ItemFullHeal::
	finditem ITEM_FULL_HEAL
	return


MeteorFalls_1F_1R_EventScript_ItemTM23::
	finditem ITEM_TM23
	return


MeteorFalls_1F_1R_EventScript_StartingTheExpedition::
	lockall
	applymovement 6, Movement_Proffessor_InFalls_MovingOver
	waitmovement 6
	msgbox MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_0
	msgbox MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_1
	msgbox MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_2
	msgbox MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_3
	msgbox MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_4
	setvar VAR_METEOR_FALLS_STATE, 2
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
	releaseall
	return


MeteorFalls_1F_1R_EventScript_ProfHolly::
	lockall
	msgbox MeteorFalls_1F_1R_EventScript_ProfHolly_Text_0
	releaseall
	return


MeteorFalls_1F_1R_EventScript_ProfHollyAssisstant::
	lockall
	msgbox MeteorFalls_1F_1R_EventScript_ProfHollyAssisstant_Text_0
	releaseall
	return


Movement_Proffessor_InFalls_MovingOver:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_0:
	.string "You made it!$"

MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_1:
	.string "I'm glad you are here, we really think\n"
	.string "you'll enjoy this!$"

MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_2:
	.string "Bedrock used to be a vibrant lake but\n"
	.string "over millions of years the water from\l"
	.string "the mountains carved this expansive\l"
	.string "cave before it ended up draining the\l"
	.string "lake.$"

MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_3:
	.string "We believe many Pokémon adapted to the\n"
	.string "new conditions but possibly some\l"
	.string "Pokémon could of been preserved in\l"
	.string "their ancient state, we are hoping to\l"
	.string "find them.$"

MeteorFalls_1F_1R_EventScript_StartingTheExpedition_Text_4:
	.string "We need your help to fend of some of\n"
	.string "the Pokémon while we look around, it\l"
	.string "gets very treacherous down here.$"

MeteorFalls_1F_1R_EventScript_ProfHolly_Text_0:
	.string "We just need to get deeper$"

MeteorFalls_1F_1R_EventScript_ProfHollyAssisstant_Text_0:
	.string "With you here we might finally be able\n"
	.string "to go deeper it gets very treacherous$"
