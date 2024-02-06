GranitePeak_House1_MapScripts::
	.byte 0


GranitePeak_House1_EventScript_Man::
	lock
	msgbox GranitePeak_House1_EventScript_Man_Text_0
	release
	return


GranitePeak_House1_EventScript_Woman::
	lock
	msgbox GranitePeak_House1_EventScript_Woman_Text_0
	release
	return


GranitePeak_House1_EventScript_Man_Text_0:
	.string "My Daughter loves Pokemon but it just\n"
	.string "seems so unsafe out there$"

GranitePeak_House1_EventScript_Woman_Text_0:
	.string "You have so many cool pokemon!\n"
	.string "I wish I could explore but my dad won't\l"
	.string "let me.\p"
	.string "$"
