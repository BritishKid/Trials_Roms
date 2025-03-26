BreakwaterPort_MegaTower_2F_MapScripts::
	.byte 0


BreakwaterPort_MegaTower_2F_Trainer1::
# 5 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	trainerbattle_single MEGATOWER2F_TRAINER1, Megatower2F_Trainer1_Intro, Megatower2F_Trainer1_Outro
# 6 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	msgbox Megatower2F_Trainer1_PostBattle, MSGBOX_AUTOCLOSE
	end


BreakwaterPort_MegaTower_2F_Trainer2::
# 11 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	trainerbattle_single MEGATOWER2F_TRAINER2, Megatower2F_Trainer2_Intro, Megatower2F_Trainer2_Outro
# 12 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	msgbox Megatower2F_Trainer2_PostBattle, MSGBOX_AUTOCLOSE
	end


BreakwaterPort_MegaTower_2F_FloorAce::
# 17 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	trainerbattle_single MEGATOWER2F_TRAINERACE, Megatower2F_TrainerAce_Intro, Megatower2F_TrainerAce_Outro, Megatower2F_TrainerAce_Beaten
# 18 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	msgbox Megatower2F_TrainerAce_PostBattle, MSGBOX_AUTOCLOSE
	end


Megatower2F_TrainerAce_Beaten::
# 23 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	msgbox Megatower2F_TrainerAce_Beaten_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	applymovement 3, Movement_MegaTower2_AceTrainerMovesAway
# 25 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	waitmovement 3
# 26 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	msgbox Megatower2F_TrainerAce_Beaten_Text_1
	return


# 68 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
Movement_MegaTower2_AceTrainerMovesAway:
# 69 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	walk_left
# 70 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	face_right
	step_end

Megatower2F_TrainerAce_Beaten_Text_0:
# 23 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "Mega Evolution can be incredibly\n"
	.string "painful on Pokemon, so a strong trust\l"
	.string "and skill is needed to bring out the\l"
	.string "best.$"

Megatower2F_TrainerAce_Beaten_Text_1:
# 26 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "Keep going you're half way now.$"

Megatower2F_Trainer1_Intro::
# 31 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "It's so hot in here, but my Pokemon\n"
	.string "thrive in it.$"

Megatower2F_Trainer1_Outro::
# 35 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "How can you keep so cool.$"

Megatower2F_Trainer1_PostBattle::
# 39 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "I need to take a break.$"

Megatower2F_Trainer2_Intro::
# 43 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "How did they get the lava here?$"

Megatower2F_Trainer2_Outro::
# 47 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "How does the lava not burn everything\n"
	.string "down?$"

Megatower2F_Trainer2_PostBattle::
# 51 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "Why wont anyone tell me?$"

Megatower2F_TrainerAce_Intro::
# 55 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "Congratulations for making it this far,\n"
	.string "but I'm sorry to say your journey ends\l"
	.string "here.$"

Megatower2F_TrainerAce_Outro::
# 59 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "That doesn't happen very often.$"

Megatower2F_TrainerAce_PostBattle::
# 63 "data/maps/BreakwaterPort_MegaTower_2F/scripts.pory"
	.string "Keep it up, I look forward to our next\n"
	.string "battle.$"
