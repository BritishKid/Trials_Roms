Lilycove_City_MegaTower_4F_MapScripts::
	.byte 0


LilycoveCity_MegaTower_4F_Trainer1::
# 4 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	trainerbattle_single MEGATOWER4F_TRAINER1, Megatower4F_Trainer1_Intro, Megatower4F_Trainer1_Outro
# 5 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	msgbox Megatower4F_Trainer1_PostBattle, MSGBOX_AUTOCLOSE
	end


LilycoveCity_MegaTower_4F_Trainer2::
# 10 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	trainerbattle_single MEGATOWER4F_TRAINER2, Megatower4F_Trainer2_Intro, Megatower4F_Trainer2_Outro
# 11 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	msgbox Megatower4F_Trainer2_PostBattle, MSGBOX_AUTOCLOSE
	end


LilycoveCity_MegaTower_4F_FloorAce::
# 16 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	trainerbattle_single MEGATOWER4F_TRAINERACE, Megatower4F_TrainerAce_Intro, Megatower4F_TrainerAce_Outro, Megatower4F_TrainerAce_Beaten
# 17 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	msgbox Megatower4F_TrainerAce_PostBattle, MSGBOX_AUTOCLOSE
	end


Megatower4F_TrainerAce_Beaten::
# 22 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	msgbox Megatower4F_TrainerAce_Beaten_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	applymovement 2, Movement_MegaTower4_AceTrainerMovesAway
# 24 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	waitmovement 2
# 25 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	msgbox Megatower4F_TrainerAce_Beaten_Text_1
	return


# 67 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
Movement_MegaTower4_AceTrainerMovesAway:
# 68 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	walk_right
# 69 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	face_right
	step_end

Megatower4F_TrainerAce_Beaten_Text_0:
# 22 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "Well done you've made it through all\n"
	.string "four of us, but there is one more\l"
	.string "challenge left.$"

Megatower4F_TrainerAce_Beaten_Text_1:
# 25 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "Go on, head on through.$"

Megatower4F_Trainer1_Intro::
# 30 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "I hate sand, it's coarse and rough and\n"
	.string "gets everywhere.$"

Megatower4F_Trainer1_Outro::
# 34 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "I hate battling, I'm poor and weak and\n"
	.string "always get beaten.$"

Megatower4F_Trainer1_PostBattle::
# 38 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "...$"

Megatower4F_Trainer2_Intro::
# 42 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "It's amazing how they keep it warm all\n"
	.string "year round.$"

Megatower4F_Trainer2_Outro::
# 46 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "Do you want to know how they do it?$"

Megatower4F_Trainer2_PostBattle::
# 50 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "They pipe up the heat from the second\n"
	.string "floor to keep it warm in here.$"

Megatower4F_TrainerAce_Intro::
# 54 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "I got here on skill, so don't let the look\n"
	.string "of my Pokemon fool you.$"

Megatower4F_TrainerAce_Outro::
# 58 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "Woh I need a break.$"

Megatower4F_TrainerAce_PostBattle::
# 62 "data/maps/Lilycove_City_MegaTower_4F/scripts.pory"
	.string "Just head on through it's almost over.$"
