GranitePeak_House3_MapScripts::
	.byte 0


GranitePeak_House3_Script_Little_Girl::
	lock
	faceplayer
	msgbox GranitePeak_House3_Script_Little_Girl_Text_0
	release
	return


GranitePeak_House3_Script_Mother::
	lock
	faceplayer
	msgbox GranitePeak_House3_Script_Mother_Text_0
	release
	return


GranitePeak_House3_Script_Little_Girl_Text_0:
	.string "I'm so fast I'm like a Pikachu!$"

GranitePeak_House3_Script_Mother_Text_0:
	.string "My little girl always has so much energy\n"
	.string "to burn$"
