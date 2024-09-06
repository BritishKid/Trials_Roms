AdoptionCenter_MapScripts::
	.byte 0


AdoptionCenter_EventScript_Lady::
	lockall
	msgbox AdoptionCenter_EventScript_Lady_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq AdoptionCenter_EventScript_Lady_2
AdoptionCenter_EventScript_Lady_1:
	msgbox AdoptionCenter_EventScript_Lady_Text_4
	releaseall
	return

AdoptionCenter_EventScript_Lady_2:
	msgbox AdoptionCenter_EventScript_Lady_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq AdoptionCenter_EventScript_Lady_4
	goto AdoptionCenter_EventScript_Lady_1

AdoptionCenter_EventScript_Lady_4:
	checkmoney 4000
	compare VAR_RESULT, 0
	goto_if_ne AdoptionCenter_EventScript_Lady_6
	msgbox AdoptionCenter_EventScript_Lady_Text_3
	goto AdoptionCenter_EventScript_Lady_1

AdoptionCenter_EventScript_Lady_6:
	random SPECIES_MIMIKYU_TOTEM_BUSTED
	givemon VAR_RESULT, 15
	msgbox AdoptionCenter_EventScript_Lady_Text_2
	playfanfare MUS_OBTAIN_ITEM
	goto AdoptionCenter_EventScript_Lady_1


AdoptionCenter_EventScript_Lady_Text_0:
	.string "Welcome to the Adoption Center, would\n"
	.string "you like to adopt a Pokemon?$"

AdoptionCenter_EventScript_Lady_Text_1:
	.string "That's great! It will cost 5000 to\n"
	.string "adopt.\n"
	.string "Is this okay?$"

AdoptionCenter_EventScript_Lady_Text_2:
	.string "You adopted a Pokemon!$"

AdoptionCenter_EventScript_Lady_Text_3:
	.string "Sorry you can't afford it.$"

AdoptionCenter_EventScript_Lady_Text_4:
	.string "Come again soon!$"
