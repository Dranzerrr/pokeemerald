NewProfessor_MapScripts::
# 2 "data/maps/NewProfessor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewProfessor_EventScript_BallDefault
	.byte 0


NewProfessor_EventScript_BallDefault::
# 6 "data/maps/NewProfessor/scripts.pory"
	setvar STARTER_REGION, 0
	return


NewProfessor_EventScript_Birch::
# 10 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewProfessor_EventScript_Birch_4
NewProfessor_EventScript_Birch_3:
# 38 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_2, MSGBOX_NPC
NewProfessor_EventScript_Birch_1:
	end

NewProfessor_EventScript_Birch_2:
# 12 "data/maps/NewProfessor/scripts.pory"
	lock
# 13 "data/maps/NewProfessor/scripts.pory"
	faceplayer
# 14 "data/maps/NewProfessor/scripts.pory"
	message NewProfessor_EventScript_Birch_Text_0
# 15 "data/maps/NewProfessor/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 16 "data/maps/NewProfessor/scripts.pory"
	closemessage
# 17 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewProfessor_EventScript_Birch_10
# 22 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewProfessor_EventScript_Birch_11
# 27 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewProfessor_EventScript_Birch_12
NewProfessor_EventScript_Birch_9:
# 32 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Birch_Text_1
# 33 "data/maps/NewProfessor/scripts.pory"
	waitmessage
# 34 "data/maps/NewProfessor/scripts.pory"
	release
	goto NewProfessor_EventScript_Birch_1

NewProfessor_EventScript_Birch_4:
# 10 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewProfessor_EventScript_Birch_6
	goto NewProfessor_EventScript_Birch_3

NewProfessor_EventScript_Birch_6:
# 10 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewProfessor_EventScript_Birch_2
	goto NewProfessor_EventScript_Birch_3

NewProfessor_EventScript_Birch_10:
# 19 "data/maps/NewProfessor/scripts.pory"
	call StarterFade
# 20 "data/maps/NewProfessor/scripts.pory"
	setvar STARTER_REGION, 0
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_11:
# 24 "data/maps/NewProfessor/scripts.pory"
	call StarterFade
# 25 "data/maps/NewProfessor/scripts.pory"
	setvar STARTER_REGION, 1
	goto NewProfessor_EventScript_Birch_9

NewProfessor_EventScript_Birch_12:
# 29 "data/maps/NewProfessor/scripts.pory"
	call StarterFade
# 30 "data/maps/NewProfessor/scripts.pory"
	setvar STARTER_REGION, 2
	goto NewProfessor_EventScript_Birch_9


StarterFade::
# 45 "data/maps/NewProfessor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 46 "data/maps/NewProfessor/scripts.pory"
	delay 20
# 47 "data/maps/NewProfessor/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewProfessor_EventScript_PokeballOne::
# 52 "data/maps/NewProfessor/scripts.pory"
	lockall
# 53 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewProfessor_EventScript_PokeballOne_4
NewProfessor_EventScript_PokeballOne_3:
# 65 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballOne_1:
# 67 "data/maps/NewProfessor/scripts.pory"
	waitmessage
# 68 "data/maps/NewProfessor/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballOne_2:
# 54 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballOne_9
# 57 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballOne_10
# 60 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballOne_11
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_4:
# 53 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewProfessor_EventScript_PokeballOne_6
	goto NewProfessor_EventScript_PokeballOne_3

NewProfessor_EventScript_PokeballOne_6:
# 53 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewProfessor_EventScript_PokeballOne_2
	goto NewProfessor_EventScript_PokeballOne_3

NewProfessor_EventScript_PokeballOne_9:
# 55 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Mudkip
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_10:
# 58 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Totodile
	goto NewProfessor_EventScript_PokeballOne_1

NewProfessor_EventScript_PokeballOne_11:
# 61 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Squirtle
	goto NewProfessor_EventScript_PokeballOne_1


NewProfessor_EventScript_PokeballTwo::
# 73 "data/maps/NewProfessor/scripts.pory"
	lockall
# 74 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewProfessor_EventScript_PokeballTwo_4
NewProfessor_EventScript_PokeballTwo_3:
# 86 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballTwo_1:
# 88 "data/maps/NewProfessor/scripts.pory"
	waitmessage
# 89 "data/maps/NewProfessor/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballTwo_2:
# 75 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballTwo_9
# 78 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballTwo_10
# 81 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballTwo_11
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_4:
# 74 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewProfessor_EventScript_PokeballTwo_6
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_6:
# 74 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewProfessor_EventScript_PokeballTwo_2
	goto NewProfessor_EventScript_PokeballTwo_3

NewProfessor_EventScript_PokeballTwo_9:
# 76 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Treecko
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_10:
# 79 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Chikorita
	goto NewProfessor_EventScript_PokeballTwo_1

NewProfessor_EventScript_PokeballTwo_11:
# 82 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Bulbasaur
	goto NewProfessor_EventScript_PokeballTwo_1


NewProfessor_EventScript_PokeballThree::
# 94 "data/maps/NewProfessor/scripts.pory"
	lockall
# 95 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_ONE, NewProfessor_EventScript_PokeballThree_4
NewProfessor_EventScript_PokeballThree_3:
# 107 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_PokeballOne_Text_0
NewProfessor_EventScript_PokeballThree_1:
# 109 "data/maps/NewProfessor/scripts.pory"
	waitmessage
# 110 "data/maps/NewProfessor/scripts.pory"
	releaseall
	end

NewProfessor_EventScript_PokeballThree_2:
# 96 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 0
	goto_if_eq NewProfessor_EventScript_PokeballThree_9
# 99 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 1
	goto_if_eq NewProfessor_EventScript_PokeballThree_10
# 102 "data/maps/NewProfessor/scripts.pory"
	compare STARTER_REGION, 2
	goto_if_eq NewProfessor_EventScript_PokeballThree_11
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_4:
# 95 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_TWO, NewProfessor_EventScript_PokeballThree_6
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_6:
# 95 "data/maps/NewProfessor/scripts.pory"
	goto_if_unset STARTER_BALL_THREE, NewProfessor_EventScript_PokeballThree_2
	goto NewProfessor_EventScript_PokeballThree_3

NewProfessor_EventScript_PokeballThree_9:
# 97 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Torchic
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_10:
# 100 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Cyndaquil
	goto NewProfessor_EventScript_PokeballThree_1

NewProfessor_EventScript_PokeballThree_11:
# 103 "data/maps/NewProfessor/scripts.pory"
	call NewProfessor_EventScript_Charmander
	goto NewProfessor_EventScript_PokeballThree_1


NewProfessor_EventScript_Mudkip::
# 116 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 117 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 118 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Mudkip_1
# 140 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 141 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Mudkip_1:
# 119 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_MUDKIP, 50, ITEM_MASTER_BALL
# 120 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Mudkip_4
# 127 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Mudkip_5
# 135 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 136 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Mudkip_4:
# 121 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_1
# 123 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 124 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 125 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Mudkip_5:
# 128 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 129 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_1
# 130 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 131 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 132 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Totodile::
# 147 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 148 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 149 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Totodile_1
# 171 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 172 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Totodile_1:
# 150 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_TOTODILE, 50, ITEM_MASTER_BALL
# 151 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Totodile_4
# 158 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Totodile_5
# 166 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 167 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Totodile_4:
# 152 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 153 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 154 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 155 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 156 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Totodile_5:
# 159 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 161 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 162 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 163 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Squirtle::
# 178 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 179 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 180 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Squirtle_1
# 202 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 203 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Squirtle_1:
# 181 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_SQUIRTLE, 50, ITEM_MASTER_BALL
# 182 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Squirtle_4
# 189 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Squirtle_5
# 197 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 198 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Squirtle_4:
# 183 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 184 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 185 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 186 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 187 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Squirtle_5:
# 190 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 191 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 192 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 193 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 194 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Treecko::
# 209 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 210 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 211 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Treecko_1
# 233 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 234 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Treecko_1:
# 212 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_TREECKO, 50, ITEM_MASTER_BALL
# 213 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Treecko_4
# 220 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Treecko_5
# 228 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 229 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Treecko_4:
# 214 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 215 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_1
# 216 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 217 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 218 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Treecko_5:
# 221 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 222 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_1
# 223 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 224 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 225 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chikorita::
# 240 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 241 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 242 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chikorita_1
# 264 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 265 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chikorita_1:
# 243 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_CHIKORITA, 50, ITEM_MASTER_BALL
# 244 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chikorita_4
# 251 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chikorita_5
# 259 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 260 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Chikorita_4:
# 245 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 247 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 248 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 249 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chikorita_5:
# 252 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 253 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 254 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 255 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 256 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Bulbasaur::
# 271 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 272 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 273 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Bulbasaur_1
# 295 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 296 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Bulbasaur_1:
# 274 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_BULBASAUR, 50, ITEM_MASTER_BALL
# 275 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Bulbasaur_4
# 282 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Bulbasaur_5
# 290 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 291 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Bulbasaur_4:
# 276 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 277 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 278 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 279 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 280 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Bulbasaur_5:
# 283 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 284 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 285 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 286 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 287 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Torchic::
# 302 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 303 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 304 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Torchic_1
# 326 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 327 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Torchic_1:
# 305 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_TORCHIC, 50, ITEM_MASTER_BALL
# 306 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Torchic_4
# 313 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Torchic_5
# 321 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 322 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Torchic_4:
# 307 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 308 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_1
# 309 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 310 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 311 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Torchic_5:
# 314 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 315 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_1
# 316 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 317 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 318 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Cyndaquil::
# 333 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 334 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 335 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Cyndaquil_1
# 357 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 358 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Cyndaquil_1:
# 336 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 50, ITEM_MASTER_BALL
# 337 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Cyndaquil_4
# 344 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Cyndaquil_5
# 352 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 353 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Cyndaquil_4:
# 338 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 339 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 340 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 341 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 342 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Cyndaquil_5:
# 345 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 346 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 347 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 348 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 349 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Charmander::
# 364 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 365 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 366 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Charmander_1
# 388 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 389 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Charmander_1:
# 367 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_CHARMANDER, 50, ITEM_MASTER_BALL
# 368 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Charmander_4
# 375 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Charmander_5
# 383 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 384 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Charmander_4:
# 369 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 370 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 371 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 372 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 373 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Charmander_5:
# 376 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 377 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 378 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 379 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 380 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 396 "data/maps/NewProfessor/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 397 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 398 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 399 "data/maps/NewProfessor/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 400 "data/maps/NewProfessor/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 407 "data/maps/NewProfessor/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 408 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 409 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 412 "data/maps/NewProfessor/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 410 "data/maps/NewProfessor/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewProfessor_EventScript_Birch_Text_0:
# 14 "data/maps/NewProfessor/scripts.pory"
	.string "Would you like to see more$"

NewProfessor_EventScript_Birch_Text_1:
# 32 "data/maps/NewProfessor/scripts.pory"
	.string "Choose wisely...$"

NewProfessor_EventScript_Birch_Text_2:
# 38 "data/maps/NewProfessor/scripts.pory"
	.string "Take care of your Pokemon$"

NewProfessor_EventScript_PokeballOne_Text_0:
# 65 "data/maps/NewProfessor/scripts.pory"
	.string "Don't Take Another$"

NewProfessor_EventScript_Mudkip_Text_0:
# 117 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Mudkip?$"

NewProfessor_EventScript_Mudkip_Text_1:
# 122 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Mudkip$"

NewProfessor_EventScript_Mudkip_Text_2:
# 136 "data/maps/NewProfessor/scripts.pory"
	.string "No More Room$"

NewProfessor_EventScript_Totodile_Text_0:
# 148 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewProfessor_EventScript_Totodile_Text_1:
# 153 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Totodile$"

NewProfessor_EventScript_Squirtle_Text_0:
# 179 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewProfessor_EventScript_Squirtle_Text_1:
# 184 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Squirtle$"

NewProfessor_EventScript_Treecko_Text_0:
# 210 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewProfessor_EventScript_Treecko_Text_1:
# 215 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Treecko$"

NewProfessor_EventScript_Chikorita_Text_0:
# 241 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewProfessor_EventScript_Chikorita_Text_1:
# 246 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Chikorita$"

NewProfessor_EventScript_Bulbasaur_Text_0:
# 272 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewProfessor_EventScript_Bulbasaur_Text_1:
# 277 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Bulbasaur$"

NewProfessor_EventScript_Torchic_Text_0:
# 303 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewProfessor_EventScript_Torchic_Text_1:
# 308 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Torchic$"

NewProfessor_EventScript_Cyndaquil_Text_0:
# 334 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewProfessor_EventScript_Cyndaquil_Text_1:
# 339 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Cyndaquil$"

NewProfessor_EventScript_Charmander_Text_0:
# 365 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewProfessor_EventScript_Charmander_Text_1:
# 370 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Charmander$"

NicknamePartyMon_Text_0:
# 396 "data/maps/NewProfessor/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 412 "data/maps/NewProfessor/scripts.pory"
	.string "Transferred to PC$"

NewProfessor_NotChosen::
# 415 "data/maps/NewProfessor/scripts.pory"
	.string "You did not choose the Pokemon$"
