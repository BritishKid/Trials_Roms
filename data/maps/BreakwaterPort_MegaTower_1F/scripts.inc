BreakwaterPort_MegaTower_1F_MapScripts::
	.byte 0


BreakwaterPort_MegaTower_1F_Trainer1::
# 5 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	trainerbattle_single MEGATOWER1F_TRAINER1, Megatower1F_Trainer1_Intro, Megatower1F_Trainer1_Outro
# 6 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	msgbox Megatower1F_Trainer1_PostBattle, MSGBOX_AUTOCLOSE
	end


BreakwaterPort_MegaTower_1F_Trainer2::
# 11 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	trainerbattle_single MEGATOWER1F_TRAINER2, Megatower1F_Trainer2_Intro, Megatower1F_Trainer2_Outro
# 12 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	msgbox Megatower1F_Trainer2_PostBattle, MSGBOX_AUTOCLOSE
	end


BreakwaterPort_MegaTower_1F_FloorAce::
# 17 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	trainerbattle_single MEGATOWER1F_TRAINERACE, Megatower1F_TrainerAce_Intro, Megatower1F_TrainerAce_Outro, Megatower1F_TrainerAce_Beaten
# 18 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	msgbox Megatower1F_TrainerAce_PostBattle, MSGBOX_AUTOCLOSE
	end


Megatower1F_TrainerAce_Beaten::
# 23 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	msgbox Megatower1F_TrainerAce_Beaten_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	applymovement 3, Movement_AceTrainerMovesAway
# 25 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	waitmovement 3
# 26 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	msgbox Megatower1F_TrainerAce_Beaten_Text_1
	return


# 68 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
Movement_AceTrainerMovesAway:
# 69 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	walk_left
# 70 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	face_right
	step_end

Megatower1F_TrainerAce_Beaten_Text_0:
# 23 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "The true power of Pokemon unlocked by\n"
	.string "Mega Evolution isn't easy to control\l"
	.string "but you've started to show signs that\l"
	.string "you might be able to handle it.$"

Megatower1F_TrainerAce_Beaten_Text_1:
# 26 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "Good luck on your journey.$"

Megatower1F_Trainer1_Intro::
# 31 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "Your challenge starts here!\l"
	.string "Good luck!$"

Megatower1F_Trainer1_Outro::
# 35 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "No too bad, but you have a long way to\n"
	.string "go still.$"

Megatower1F_Trainer1_PostBattle::
# 39 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "Keep it up, I don't want to see you back\n"
	.string "down here again so keep fighting smart.$"

Megatower1F_Trainer2_Intro::
# 43 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "This tower is older than even my\n"
	.string "grandmother!$"

Megatower1F_Trainer2_Outro::
# 47 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "She is the strongest trainer I know.$"

Megatower1F_Trainer2_PostBattle::
# 51 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "She got me this job when she left, she\n"
	.string "works at the champions guild now.$"

Megatower1F_TrainerAce_Intro::
# 55 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "So you made it to me. This tower is old\n"
	.string "and stands tall as a true challenge for\l"
	.string "trainers wanting to become serious so\l"
	.string "don't expect me to hold back.$"

Megatower1F_TrainerAce_Outro::
# 59 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "Well fought, but you are just getting\n"
	.string "started!$"

Megatower1F_TrainerAce_PostBattle::
# 63 "data/maps/BreakwaterPort_MegaTower_1F/scripts.pory"
	.string "I'll be seeing you again very soon.$"
