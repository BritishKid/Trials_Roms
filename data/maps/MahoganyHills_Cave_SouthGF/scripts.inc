MahoganyHills_Cave_SouthGF_MapScripts::
	.byte 0


MahoganyHills_CaveSouthGF_Reflex::
# 4 "data/maps/MahoganyHills_Cave_SouthGF/scripts.pory"
	trainerbattle_single REFLEX_TRAINER, Reflex_Message, Reflex_Message, Increase_Trainers_Beaten
# 5 "data/maps/MahoganyHills_Cave_SouthGF/scripts.pory"
	msgbox Reflex_Message, MSGBOX_AUTOCLOSE
	end


Reflex_Message::
# 11 "data/maps/MahoganyHills_Cave_SouthGF/scripts.pory"
	.string "I am a tree.$"
