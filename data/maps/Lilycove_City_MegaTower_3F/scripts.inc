Lilycove_City_MegaTower_3F_MapScripts::
	.byte 0


LilycoveCity_MegaTower_3F_Trainer1::
# 5 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	trainerbattle_single MEGATOWER3F_TRAINER1, Megatower3F_Trainer1_Intro, Megatower3F_Trainer1_Outro
# 6 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	msgbox Megatower3F_Trainer1_PostBattle, MSGBOX_AUTOCLOSE
	end


LilycoveCity_MegaTower_3F_Trainer2::
# 11 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	trainerbattle_single MEGATOWER3F_TRAINER2, Megatower3F_Trainer2_Intro, Megatower3F_Trainer2_Outro
# 12 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	msgbox Megatower3F_Trainer2_PostBattle, MSGBOX_AUTOCLOSE
	end


LilycoveCity_MegaTower_3F_FloorAce::
# 17 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	trainerbattle_single MEGATOWER3F_TRAINERACE, Megatower3F_TrainerAce_Intro, Megatower3F_TrainerAce_Outro, Megatower3F_TrainerAce_Beaten
# 18 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	msgbox Megatower3F_TrainerAce_PostBattle, MSGBOX_AUTOCLOSE
	end


Megatower3F_TrainerAce_Beaten::
# 23 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	msgbox Megatower3F_TrainerAce_Beaten_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	applymovement 1, Movement_MegaTower3_AceTrainerMovesAway
# 25 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	waitmovement 1
# 26 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	msgbox Megatower3F_TrainerAce_Beaten_Text_1
	return


# 68 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
Movement_MegaTower3_AceTrainerMovesAway:
# 69 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	walk_left
# 70 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	face_right
	step_end

Megatower3F_TrainerAce_Beaten_Text_0:
# 23 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "When some Pokemon Mega Evolve they can\n"
	.string "be used in entirely different ways.$"

Megatower3F_TrainerAce_Beaten_Text_1:
# 26 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "Just one more floor to go, until...$"

Megatower3F_Trainer1_Intro::
# 31 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "It took years for th is tower be built,\n"
	.string "growing the trees here instead of\l"
	.string "moving them somewhere else took the\l"
	.string "most time.$"

Megatower3F_Trainer1_Outro::
# 35 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "It truly shows the human spirits\n"
	.string "boundless potential.$"

Megatower3F_Trainer1_PostBattle::
# 39 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "The original architect dead long before\n"
	.string "it was finished, they never got to see\l"
	.string "the final outcome.$"

Megatower3F_Trainer2_Intro::
# 43 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "I love the smell of all the flowers.$"

Megatower3F_Trainer2_Outro::
# 47 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "The smell was distracting me too much.$"

Megatower3F_Trainer2_PostBattle::
# 51 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "This is one of my favourite places in all\n"
	.string "of Triver.$"

Megatower3F_TrainerAce_Intro::
# 55 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "I got here on skill, so don't let the look\n"
	.string "of my Pokemon fool you.$"

Megatower3F_TrainerAce_Outro::
# 59 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "I appreciate your silence.$"

Megatower3F_TrainerAce_PostBattle::
# 63 "data/maps/Lilycove_City_MegaTower_3F/scripts.pory"
	.string "Not many make it this far, and it won't\n"
	.string "be getting any easier.$"
