EmberDune_Cave_BF_MapScripts::
	.byte 0


GroundPlate_EventScript_EmberDuneCave::
# 5 "data/maps/EmberDune_Cave_BF/scripts.pory"
	lockall
# 6 "data/maps/EmberDune_Cave_BF/scripts.pory"
	msgbox GroundPlate_EventScript_EmberDuneCave_Text_0
# 7 "data/maps/EmberDune_Cave_BF/scripts.pory"
	checkitem ITEM_EARTH_PLATE
# 8 "data/maps/EmberDune_Cave_BF/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, GroundPlate_EventScript_EmberDuneCave_3
GroundPlate_EventScript_EmberDuneCave_1:
# 20 "data/maps/EmberDune_Cave_BF/scripts.pory"
	compare VAR_PLATEQUEST_STATE, 2
	goto_if_eq GroundPlate_EventScript_EmberDuneCave_7
	return

GroundPlate_EventScript_EmberDuneCave_2:
# 9 "data/maps/EmberDune_Cave_BF/scripts.pory"
	msgbox GroundPlate_EventScript_EmberDuneCave_Text_1, MSGBOX_YESNO
# 10 "data/maps/EmberDune_Cave_BF/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GroundPlate_EventScript_EmberDuneCave_10
	goto GroundPlate_EventScript_EmberDuneCave_1

GroundPlate_EventScript_EmberDuneCave_3:
# 8 "data/maps/EmberDune_Cave_BF/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GroundPlate_EventScript_EmberDuneCave_2
	goto GroundPlate_EventScript_EmberDuneCave_1

GroundPlate_EventScript_EmberDuneCave_6:
# 21 "data/maps/EmberDune_Cave_BF/scripts.pory"
	msgbox GroundPlate_EventScript_EmberDuneCave_Text_2
	return

GroundPlate_EventScript_EmberDuneCave_7:
# 20 "data/maps/EmberDune_Cave_BF/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, GroundPlate_EventScript_EmberDuneCave_6
	return

GroundPlate_EventScript_EmberDuneCave_10:
# 11 "data/maps/EmberDune_Cave_BF/scripts.pory"
	setvar VAR_0x8004, 1
# 12 "data/maps/EmberDune_Cave_BF/scripts.pory"
	setvar VAR_0x8005, 1
# 13 "data/maps/EmberDune_Cave_BF/scripts.pory"
	setvar VAR_0x8006, 8
# 14 "data/maps/EmberDune_Cave_BF/scripts.pory"
	setvar VAR_0x8007, 0
# 15 "data/maps/EmberDune_Cave_BF/scripts.pory"
	special ShakeCamera
# 16 "data/maps/EmberDune_Cave_BF/scripts.pory"
	fadescreen FADE_TO_BLACK
# 17 "data/maps/EmberDune_Cave_BF/scripts.pory"
	warp MAP_HIDDEN_GROTTO_LOST_PLATES_1, 36, 13
	goto GroundPlate_EventScript_EmberDuneCave_1


GroundPlate_EventScript_EmberDuneCave_Text_0:
# 6 "data/maps/EmberDune_Cave_BF/scripts.pory"
	.string "There is a carving of many ground\n"
	.string "Pokemon lumbering over a plate.$"

GroundPlate_EventScript_EmberDuneCave_Text_1:
# 9 "data/maps/EmberDune_Cave_BF/scripts.pory"
	.string "Do you want to put the LEGENDS PLATE\n"
	.string "into the slot?$"

GroundPlate_EventScript_EmberDuneCave_Text_2:
# 21 "data/maps/EmberDune_Cave_BF/scripts.pory"
	.string "There seems to be a slot in the wall for\n"
	.string "something. Maybe it's that Key Alex\l"
	.string "spoke about.$"
