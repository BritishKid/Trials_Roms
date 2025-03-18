LilycoveCity_House3_MapScripts::
	.byte 0


LilycoveCity_House3_EventScript_Man::
# 6 "data/maps/LilycoveCity_House3/scripts.pory"
	lockall
# 7 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_EventScript_Man_Text_0
# 9 "data/maps/LilycoveCity_House3/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_FLY, LilycoveCity_House3_EventScript_Man_2
LilycoveCity_House3_EventScript_Man_1:
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
	releaseall
	return

LilycoveCity_House3_EventScript_Man_2:
# 10 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_EventScript_Man_Text_1
# 11 "data/maps/LilycoveCity_House3/scripts.pory"
	giveitem ITEM_HM_FLY
	goto LilycoveCity_House3_EventScript_Man_1


LilycoveCity_House3_EventScript_PokefanF::
# 17 "data/maps/LilycoveCity_House3/scripts.pory"
	lockall
# 18 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_EventScript_PokefanF_Text_0
# 21 "data/maps/LilycoveCity_House3/scripts.pory"
	releaseall
	return


LilycoveCity_House3_EventScript_Man_Text_0:
# 8 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "It can be pretty tough to get around\n"
	.string "Triver, so we use our Pokemon to get\l"
	.string "fly.$"

LilycoveCity_House3_EventScript_Man_Text_1:
# 10 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Here why don't you to the HM$"

LilycoveCity_House3_EventScript_PokefanF_Text_0:
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I'm working on a way to fly without\n"
	.string "using Pokemon, come back soon and I'll\l"
	.string "share it with you.$"
