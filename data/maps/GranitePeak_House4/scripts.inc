GranitePeak_House4_MapScripts::
	.byte 0


GranitePeak_House4_OldMan_Quest::
	lock
	msgbox GranitePeak_House4_OldMan_Quest_Text_0
	msgbox GranitePeak_House4_OldMan_Quest_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_House4_OldMan_Quest_2
	msgbox GranitePeak_House4_OldMan_Quest_Text_8
GranitePeak_House4_OldMan_Quest_1:
	release
	return

GranitePeak_House4_OldMan_Quest_2:
	msgbox GranitePeak_House4_OldMan_Quest_Text_2
	msgbox GranitePeak_House4_OldMan_Quest_Text_3
	msgbox GranitePeak_House4_OldMan_Quest_Text_4
	msgbox GranitePeak_House4_OldMan_Quest_Text_5
	msgbox GranitePeak_House4_OldMan_Quest_Text_6
	msgbox GranitePeak_House4_OldMan_Quest_Text_7
	goto GranitePeak_House4_OldMan_Quest_1


GranitePeak_House4_AdamantOrb_Book::
	lock
	msgbox GranitePeak_House4_AdamantOrb_Book_Text_0
	msgbox GranitePeak_House4_AdamantOrb_Book_Text_1
	msgbox GranitePeak_House4_AdamantOrb_Book_Text_2
	msgbox GranitePeak_House4_AdamantOrb_Book_Text_3
	msgbox GranitePeak_House4_AdamantOrb_Book_Text_4
	release
	return


GranitePeak_House4_LustrousOrb_Book::
	lock
	msgbox GranitePeak_House4_LustrousOrb_Book_Text_0
	msgbox GranitePeak_House4_LustrousOrb_Book_Text_1
	msgbox GranitePeak_House4_LustrousOrb_Book_Text_2
	msgbox GranitePeak_House4_LustrousOrb_Book_Text_3
	msgbox GranitePeak_House4_LustrousOrb_Book_Text_4
	release
	return


GranitePeak_House4_GriseousOrb_Book::
	lock
	msgbox GranitePeak_House4_GriseousOrb_Book_Text_0
	msgbox GranitePeak_House4_GriseousOrb_Book_Text_1
	msgbox GranitePeak_House4_GriseousOrb_Book_Text_2
	msgbox GranitePeak_House4_GriseousOrb_Book_Text_3
	release
	return


GranitePeak_House4_DistortionGateway_Book::
	lock
	msgbox GranitePeak_House4_DistortionGateway_Book_Text_0
	release
	return


GranitePeak_House4_OldMan_Quest_Text_0:
	.string "A hoy hoy, how are you doing young one.$"

GranitePeak_House4_OldMan_Quest_Text_1:
	.string "Are you interested in learning about\n"
	.string "the ancient orbs?$"

GranitePeak_House4_OldMan_Quest_Text_2:
	.string "It has been said their are 3 orbs that\n"
	.string "were created by the gods to seal away a\l"
	.string "terrible power.$"

GranitePeak_House4_OldMan_Quest_Text_3:
	.string "Each of the Orbs had the power from a\n"
	.string "god siphoned into it to keep the\l"
	.string "gateway sealed.$"

GranitePeak_House4_OldMan_Quest_Text_4:
	.string "They got hidden deep away to prevent\n"
	.string "anyone coming stumbling across them to\l"
	.string "prevent anyone accidently releasing\l"
	.string "the destructive Pokemon.$"

GranitePeak_House4_OldMan_Quest_Text_5:
	.string "Many strong trainers are exploring the\n"
	.string "world to try and find them to get this\l"
	.string "power for themselves but to no avail.$"

GranitePeak_House4_OldMan_Quest_Text_6:
	.string "I myself spent years hunting them down\n"
	.string "but never found them.\n"
	.string "Now I'm too old to continue searching.$"

GranitePeak_House4_OldMan_Quest_Text_7:
	.string "Feel free to check out my memoirs I've\n"
	.string "been writing down my lifes research in\l"
	.string "there, maybe you'll have better luck.$"

GranitePeak_House4_OldMan_Quest_Text_8:
	.string "Possibly another time then$"

GranitePeak_House4_AdamantOrb_Book_Text_0:
	.string "My travels have led me to uncover\n"
	.string "countless mysteries and mythical\l"
	.string "legends. Yet, the fabled Adamant Orb\l"
	.string "has eluded me. Whispers of its\l"
	.string "existence have been carried on the\l"
	.string "winds of time, yet its true location\l"
	.string "remains shrouded in obscurity. As I pen\l"
	.string "down my findings and musings, I share\l"
	.string "these elusive clues with fellow\l"
	.string "seekers, hoping one day, the Adamant\l"
	.string "Orb's secrets will finally be revealed.$"

GranitePeak_House4_AdamantOrb_Book_Text_1:
	.string "Tales from seasoned travelers have\n"
	.string "long suggested that the Adamant Orb\l"
	.string "may find its sanctuary nestled amid\l"
	.string "towering peaks, concealed within the\l"
	.string "embrace of ancient mountains. I've\l"
	.string "trekked the highlands of numerous\l"
	.string "regions, where harsh terrain and biting\l"
	.string "winds only served to test the resolve\l"
	.string "of explorers. Could it be that the\l"
	.string "Adamant Orb rests upon an altar atop\l"
	.string "one of these majestic summits, a\l"
	.string "testament to the strength it embodies?$"

GranitePeak_House4_AdamantOrb_Book_Text_2:
	.string "The Adamant Orb is said to be watched\n"
	.string "over by a formidable and vigilant\l"
	.string "guardian, a legendary Pokémon whose\l"
	.string "might mirrors the orb's indomitable\l"
	.string "essence. This guardian may be guarding\l"
	.string "not just the orb itself but also the\l"
	.string "knowledge of its whereabouts. Ancient\l"
	.string "lore speaks of an unwavering protector\l"
	.string "who roams the rocky crags, vigilant and\l"
	.string "resolute. The key to the Adamant Orb's\l"
	.string "location might lie in deciphering the\l"
	.string "secrets held by this guardian, for they\l"
	.string "are the gatekeeper to the orb's\l"
	.string "sanctum.$"

GranitePeak_House4_AdamantOrb_Book_Text_3:
	.string "Rumors persist of a tale surrounding\n"
	.string "the Adamant Orb, a bond of friendship\l"
	.string "that ties it to a specific Pokémon. Some\l"
	.string "say that the true seeker must forge a\l"
	.string "profound connection with a Pokémon\l"
	.string "that embodies the essence of\l"
	.string "determination and strength. This\l"
	.string "Pokémon, a beacon of unwavering\l"
	.string "loyalty, could hold the key to\l"
	.string "uncovering the path to the orb's hiding\l"
	.string "place.$"

GranitePeak_House4_AdamantOrb_Book_Text_4:
	.string "May the spirits of exploration and\n"
	.string "curiosity guide your path, and may you\l"
	.string "be the one to finally unravel the\l"
	.string "secret of the Adamant Orb, a testament\l"
	.string "to the unyielding strength that\l"
	.string "resides within the heart of the Pokémon\l"
	.string "world.$"

GranitePeak_House4_LustrousOrb_Book_Text_0:
	.string "In my lifelong pursuit of the hidden\n"
	.string "gate I heard many rumours about the\l"
	.string "legendary Lustrous Orb. Tales of its\l"
	.string "ethereal radiance have captivated the\l"
	.string "imaginations of explorers throughout\l"
	.string "the ages, yet its hidden abode has\l"
	.string "evaded discovery. As I recount my\l"
	.string "endeavors, I present the cryptic clues\l"
	.string "surrounding the Lustrous Orb, hoping\l"
	.string "they will ignite the spirit of curiosity\l"
	.string "in others.$"

GranitePeak_House4_LustrousOrb_Book_Text_1:
	.string "Legend speaks of the Lustrous Orb\n"
	.string "being drawn to the serenity of the\l"
	.string "celestial heavens. Its elusive presence\l"
	.string "is said to manifest on a secluded shore\l"
	.string "where moonlight kisses the sea's gentle\l"
	.string "waves. Seekers may find solace beneath\l"
	.string "a canopy of twinkling stars, where the\l"
	.string "orb's resplendent glow may shimmer upon\l"
	.string "the water's surface.$"

GranitePeak_House4_LustrousOrb_Book_Text_2:
	.string "Among the whispers of sages, I've heard\n"
	.string "tell of a guardian of the sea, an\l"
	.string "ancient Pokémon whose connection to\l"
	.string "the Lustrous Orb is etched into the\l"
	.string "annals of history. This guardian is said\l"
	.string "to be wise and compassionate, and it\l"
	.string "maintains a watchful vigilance over the\l"
	.string "secrets of the Lustrous Orb. Unlocking\l"
	.string "the guardian's wisdom may hold the key\l"
	.string "to unraveling the Lustrous Orb's riddle.$"

GranitePeak_House4_LustrousOrb_Book_Text_3:
	.string "Ancient texts allude to the Lustrous\n"
	.string "Orb's harmony with specific natural\l"
	.string "phenomena. Seekers might find\l"
	.string "themselves drawn to sites where the\l"
	.string "mingling of moon and sea create a\l"
	.string "magical convergence. The radiant dance\l"
	.string "between moonbeams and ocean tides\l"
	.string "could reveal the path to the orb's\l"
	.string "sanctuary.$"

GranitePeak_House4_LustrousOrb_Book_Text_4:
	.string "In the tapestry of the Pokémon world,\n"
	.string "every mystery is woven with threads of\l"
	.string "wonder and awe. May you be the intrepid\l"
	.string "traveler to finally unveil the mysteries\l"
	.string "veiled within the Lustrous Orb, a\l"
	.string "testament to the luminous beauty that\l"
	.string "graces the world and binds us all in a\l"
	.string "shared journey of discovery.$"

GranitePeak_House4_GriseousOrb_Book_Text_0:
	.string "The strangest artifact from the\n"
	.string "ancient years still puzzles me, the\l"
	.string "elusive Griseous Orb. Tales of its\l"
	.string "ethereal nature and power have enticed\l"
	.string "countless explorers, but its hidden\l"
	.string "realm remains enshrouded in mystery. As\l"
	.string "I recount my travels, I share the\l"
	.string "puzzling clues surrounding the\l"
	.string "Griseous Orb, hoping they will guide\l"
	.string "others on a path of discovery.$"

GranitePeak_House4_GriseousOrb_Book_Text_1:
	.string "Whispers from old maps and forgotten\n"
	.string "lore suggest that the Griseous Orb's\l"
	.string "sanctuary might dwell in a realm where\l"
	.string "the boundaries between worlds blur. It\l"
	.string "is said to be concealed within a veil of\l"
	.string "ghostly mists, a place where the living\l"
	.string "and the departed intermingle. The\l"
	.string "seeker must tread through ethereal\l"
	.string "realms where shadows play tricks upon\l"
	.string "the mind.$"

GranitePeak_House4_GriseousOrb_Book_Text_2:
	.string "Wandering among forsaken places, I've\n"
	.string "encountered echoes of lost souls,\l"
	.string "mournful whispers of those who once\l"
	.string "sought the Griseous Orb's power.\l"
	.string "Seekers may find these echoes to be a\l"
	.string "guide or a warning, a reminder that the\l"
	.string "orb's powers are as elusive as the souls\l"
	.string "who sought them.$"

GranitePeak_House4_GriseousOrb_Book_Text_3:
	.string "As I etch my final musings upon\n"
	.string "parchment, I pass the torch of\l"
	.string "exploration to the next brave soul who\l"
	.string "dares to venture into the mysteries of\l"
	.string "the Griseous Orb. Though my own journey\l"
	.string "remains inconclusive, I hope these\l"
	.string "clues will serve as the guiding light for\l"
	.string "others in search of the Griseous Orb's\l"
	.string "realm.$"

GranitePeak_House4_DistortionGateway_Book_Text_0:
	.string "In the annals of Pokémon lore, a\n"
	.string "mysterious tale is whispered among the\l"
	.string "wise, a story of a longlost gateway\l"
	.string "that grants passage to the elusive\l"
	.string "Distortion Realm. Veiled behind veils of\l"
	.string "reality, this realm exists beyond the\l"
	.string "fabric of ordinary space and time. A\l"
	.string "quest pursued by many, but only known\l"
	.string "in fragments, the secret of this\l"
	.string "gateway's location is said to be held\l"
	.string "within the combined power of three\l"
	.string "legendary orbs.$"
