FallHarbour_MapScripts::
# 2 "data/maps/FallHarbour/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallHarbour_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FallHarbour_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FallHarbour/scripts.pory"
	setflag FLAG_VISITED_FALL_HARBOUR
	return


FallHarbour_Pyukumuku_Clean_Up::
# 9 "data/maps/FallHarbour/scripts.pory"
	lockall
# 10 "data/maps/FallHarbour/scripts.pory"
	msgbox FallHarbour_Pyukumuku_Clean_Up_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/FallHarbour/scripts.pory"
	fadescreen FADE_TO_BLACK
# 12 "data/maps/FallHarbour/scripts.pory"
	msgbox FallHarbour_Pyukumuku_Clean_Up_Text_1
# 13 "data/maps/FallHarbour/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_4
# 14 "data/maps/FallHarbour/scripts.pory"
	removeobject 2
# 15 "data/maps/FallHarbour/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 16 "data/maps/FallHarbour/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 17 "data/maps/FallHarbour/scripts.pory"
	msgbox FallHarbour_Pyukumuku_Clean_Up_Text_2, MSGBOX_AUTOCLOSE
# 18 "data/maps/FallHarbour/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/FallHarbour/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 20 "data/maps/FallHarbour/scripts.pory"
	releaseall
	return


FallHarbour_EventScript_Blocker1::
# 28 "data/maps/FallHarbour/scripts.pory"
	trainerbattle_single FALLHARBOUR_BLOCKER1, Thug1_Intro, Thug1_Outro, Thug1PostScript
	return


Thug1PostScript::
# 32 "data/maps/FallHarbour/scripts.pory"
	applymovement 3, Movement_ThugJumpsBack
# 33 "data/maps/FallHarbour/scripts.pory"
	waitmovement 3
# 34 "data/maps/FallHarbour/scripts.pory"
	msgbox Thug1PostScript_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/FallHarbour/scripts.pory"
	applymovement 4, Movement_Thug2MovesLeft
# 36 "data/maps/FallHarbour/scripts.pory"
	waitmovement 4
# 37 "data/maps/FallHarbour/scripts.pory"
	trainerbattle_single FALLHARBOUR_BLOCKER2, Thug2_Intro, Thug2_Outro, ThugsBeaten_Left
	return


ThugsBeaten_Left::
# 42 "data/maps/FallHarbour/scripts.pory"
	msgbox ThugsBeaten_Left_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/FallHarbour/scripts.pory"
	applymovement 3, Movement_ThugsRunRight
# 44 "data/maps/FallHarbour/scripts.pory"
	applymovement 4, Movement_ThugsRunRight
# 45 "data/maps/FallHarbour/scripts.pory"
	waitmovement 4
# 46 "data/maps/FallHarbour/scripts.pory"
	setflag FLAG_HIDE_BLOCKER_THUGS
# 47 "data/maps/FallHarbour/scripts.pory"
	removeobject 3
# 48 "data/maps/FallHarbour/scripts.pory"
	removeobject 4
	return


FallHarbour_EventScript_Blocker2::
# 52 "data/maps/FallHarbour/scripts.pory"
	trainerbattle_single FALLHARBOUR_BLOCKER2, Thug2_Intro, Thug2_Outro, Thug2PostScript
	return


Thug2PostScript::
# 56 "data/maps/FallHarbour/scripts.pory"
	applymovement 4, Movement_ThugJumpsBack
# 57 "data/maps/FallHarbour/scripts.pory"
	waitmovement 4
# 58 "data/maps/FallHarbour/scripts.pory"
	msgbox Thug1PostScript_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/FallHarbour/scripts.pory"
	applymovement 3, Movement_Thug1MovesRight
# 60 "data/maps/FallHarbour/scripts.pory"
	waitmovement 3
# 61 "data/maps/FallHarbour/scripts.pory"
	trainerbattle_single FALLHARBOUR_BLOCKER1, Thug1_Intro, Thug1_Outro, ThugsBeaten_Right
	return


ThugsBeaten_Right::
# 65 "data/maps/FallHarbour/scripts.pory"
	msgbox ThugsBeaten_Left_Text_0, MSGBOX_AUTOCLOSE
# 66 "data/maps/FallHarbour/scripts.pory"
	applymovement 3, Movement_ThugsRunRight
# 67 "data/maps/FallHarbour/scripts.pory"
	applymovement 4, Movement_ThugsRunRight
# 68 "data/maps/FallHarbour/scripts.pory"
	waitmovement 4
# 69 "data/maps/FallHarbour/scripts.pory"
	setflag FLAG_HIDE_BLOCKER_THUGS
# 70 "data/maps/FallHarbour/scripts.pory"
	removeobject 3
# 71 "data/maps/FallHarbour/scripts.pory"
	removeobject 4
	return


FallHarbour_EventScript_DoorBlockers::
# 75 "data/maps/FallHarbour/scripts.pory"
	lockall
# 76 "data/maps/FallHarbour/scripts.pory"
	faceplayer
# 77 "data/maps/FallHarbour/scripts.pory"
	msgbox FallHarbour_EventScript_DoorBlockers_Text_0
# 78 "data/maps/FallHarbour/scripts.pory"
	releaseall
	return


FallHarbour_EventScript_PokemonCenterBlocker::
# 82 "data/maps/FallHarbour/scripts.pory"
	lockall
# 83 "data/maps/FallHarbour/scripts.pory"
	faceplayer
# 84 "data/maps/FallHarbour/scripts.pory"
	msgbox FallHarbour_EventScript_PokemonCenterBlocker_Text_0, MSGBOX_YESNO
# 85 "data/maps/FallHarbour/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallHarbour_EventScript_PokemonCenterBlocker_2
# 90 "data/maps/FallHarbour/scripts.pory"
	msgbox FallHarbour_EventScript_PokemonCenterBlocker_Text_2, MSGBOX_AUTOCLOSE
FallHarbour_EventScript_PokemonCenterBlocker_1:
# 92 "data/maps/FallHarbour/scripts.pory"
	releaseall
	return

FallHarbour_EventScript_PokemonCenterBlocker_2:
# 86 "data/maps/FallHarbour/scripts.pory"
	removemoney 500
# 87 "data/maps/FallHarbour/scripts.pory"
	special HealPlayerParty
# 88 "data/maps/FallHarbour/scripts.pory"
	msgbox FallHarbour_EventScript_PokemonCenterBlocker_Text_1, MSGBOX_AUTOCLOSE
	goto FallHarbour_EventScript_PokemonCenterBlocker_1


# 116 "data/maps/FallHarbour/scripts.pory"
Movement_ThugJumpsBack:
# 117 "data/maps/FallHarbour/scripts.pory"
	jump_up
	step_end

# 120 "data/maps/FallHarbour/scripts.pory"
Movement_Thug2MovesLeft:
# 121 "data/maps/FallHarbour/scripts.pory"
	walk_left
# 122 "data/maps/FallHarbour/scripts.pory"
	face_down
	step_end

# 125 "data/maps/FallHarbour/scripts.pory"
Movement_Thug1MovesRight:
# 126 "data/maps/FallHarbour/scripts.pory"
	walk_right
# 127 "data/maps/FallHarbour/scripts.pory"
	face_down
	step_end

# 130 "data/maps/FallHarbour/scripts.pory"
Movement_ThugsRunRight:
# 131 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
# 132 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
# 133 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
# 134 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
# 135 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
# 136 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
# 137 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
# 138 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
# 139 "data/maps/FallHarbour/scripts.pory"
	walk_fast_right
	step_end

# 144 "data/maps/FallHarbour/scripts.pory"

# 145 "data/maps/FallHarbour/scripts.pory"
FallHarbour_Mart_EventScript_Clerk::
# 146 "data/maps/FallHarbour/scripts.pory"
	lock
# 147 "data/maps/FallHarbour/scripts.pory"
	faceplayer
# 148 "data/maps/FallHarbour/scripts.pory"
	message gText_HowMayIServeYou
# 149 "data/maps/FallHarbour/scripts.pory"
	waitmessage
# 150 "data/maps/FallHarbour/scripts.pory"
	pokemart FallHarbour_VariableMart
# 151 "data/maps/FallHarbour/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 152 "data/maps/FallHarbour/scripts.pory"
	release
# 153 "data/maps/FallHarbour/scripts.pory"
	end
# 154 "data/maps/FallHarbour/scripts.pory"

# 155 "data/maps/FallHarbour/scripts.pory"
	.align 2
# 156 "data/maps/FallHarbour/scripts.pory"
FallHarbour_VariableMart:
# 157 "data/maps/FallHarbour/scripts.pory"
	.2byte ITEM_POKE_BALL, 150
# 158 "data/maps/FallHarbour/scripts.pory"
	.2byte ITEM_REVIVE, 1000
# 159 "data/maps/FallHarbour/scripts.pory"
	.2byte ITEM_REPEL, 250
# 160 "data/maps/FallHarbour/scripts.pory"
	.2byte ITEM_POTION, 150
# 161 "data/maps/FallHarbour/scripts.pory"
	.2byte ITEM_NONE
# 162 "data/maps/FallHarbour/scripts.pory"
	release
# 163 "data/maps/FallHarbour/scripts.pory"
	end

FallHarbour_Pyukumuku_Clean_Up_Text_0:
# 10 "data/maps/FallHarbour/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

FallHarbour_Pyukumuku_Clean_Up_Text_1:
# 12 "data/maps/FallHarbour/scripts.pory"
	.string "SPLASH$"

FallHarbour_Pyukumuku_Clean_Up_Text_2:
# 17 "data/maps/FallHarbour/scripts.pory"
	.string "You found a big pearl under the\n"
	.string "Pokémon.$"

Thug1PostScript_Text_0:
# 34 "data/maps/FallHarbour/scripts.pory"
	.string "Fine I guess it's my go!$"

ThugsBeaten_Left_Text_0:
# 42 "data/maps/FallHarbour/scripts.pory"
	.string "We better warn Boss!$"

FallHarbour_EventScript_DoorBlockers_Text_0:
# 77 "data/maps/FallHarbour/scripts.pory"
	.string "Boss says no-ones getting in or out so\n"
	.string "beat it.$"

FallHarbour_EventScript_PokemonCenterBlocker_Text_0:
# 84 "data/maps/FallHarbour/scripts.pory"
	.string "Pokecenter is closed mate, but I can\n"
	.string "fix up your Pokémon.\l"
	.string "It'll only cost 500!$"

FallHarbour_EventScript_PokemonCenterBlocker_Text_1:
# 88 "data/maps/FallHarbour/scripts.pory"
	.string "Definetely come again!$"

FallHarbour_EventScript_PokemonCenterBlocker_Text_2:
# 90 "data/maps/FallHarbour/scripts.pory"
	.string "Fine just beat it.$"

Thug1_Intro::
# 97 "data/maps/FallHarbour/scripts.pory"
	.string "I ain't gonna let you through here.$"

Thug1_Outro::
# 101 "data/maps/FallHarbour/scripts.pory"
	.string "You ain't no normal trainer are you?$"

Thug2_Intro::
# 105 "data/maps/FallHarbour/scripts.pory"
	.string "My job is too keep losers like you out\n"
	.string "our city.$"

Thug2_Outro::
# 109 "data/maps/FallHarbour/scripts.pory"
	.string "What is happening?$"
