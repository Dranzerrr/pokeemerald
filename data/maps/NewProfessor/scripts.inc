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
# 141 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 142 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Mudkip_1:
# 119 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 120 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_MUDKIP, 50, ITEM_MASTER_BALL
# 121 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Mudkip_4
# 128 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Mudkip_5
# 136 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 137 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Mudkip_4:
# 122 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 123 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_1
# 124 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 125 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 126 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Mudkip_5:
# 129 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 130 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_1
# 131 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 132 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 133 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Totodile::
# 148 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 149 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_0, MSGBOX_YESNO
# 150 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Totodile_1
# 173 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 174 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Totodile_1:
# 151 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 152 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_TOTODILE, 50, ITEM_MASTER_BALL
# 153 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Totodile_4
# 160 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Totodile_5
# 168 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 169 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Totodile_4:
# 154 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 156 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 157 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 158 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Totodile_5:
# 161 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Totodile_Text_1
# 163 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 164 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 165 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Squirtle::
# 180 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 181 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_0, MSGBOX_YESNO
# 182 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Squirtle_1
# 205 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 206 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Squirtle_1:
# 183 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 184 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_SQUIRTLE, 50, ITEM_MASTER_BALL
# 185 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Squirtle_4
# 192 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Squirtle_5
# 200 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 201 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Squirtle_4:
# 186 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 187 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 188 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 189 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 190 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Squirtle_5:
# 193 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 194 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Squirtle_Text_1
# 195 "data/maps/NewProfessor/scripts.pory"
	removeobject 1
# 196 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_ONE
# 197 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Treecko::
# 212 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 213 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 214 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Treecko_1
# 237 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 238 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Treecko_1:
# 215 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 216 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_TREECKO, 50, ITEM_MASTER_BALL
# 217 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Treecko_4
# 224 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Treecko_5
# 232 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 233 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Treecko_4:
# 218 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 219 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_1
# 220 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 221 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 222 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Treecko_5:
# 225 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 226 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Treecko_Text_1
# 227 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 228 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 229 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Chikorita::
# 244 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 245 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_0, MSGBOX_YESNO
# 246 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Chikorita_1
# 269 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 270 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Chikorita_1:
# 247 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 248 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_CHIKORITA, 50, ITEM_MASTER_BALL
# 249 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Chikorita_4
# 256 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Chikorita_5
# 264 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 265 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Chikorita_4:
# 250 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 251 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 252 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 253 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 254 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Chikorita_5:
# 257 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 258 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Chikorita_Text_1
# 259 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 260 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 261 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Bulbasaur::
# 276 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 277 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
# 278 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Bulbasaur_1
# 301 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 302 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Bulbasaur_1:
# 279 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 280 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_BULBASAUR, 50, ITEM_MASTER_BALL
# 281 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Bulbasaur_4
# 288 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Bulbasaur_5
# 296 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 297 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Bulbasaur_4:
# 282 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 283 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 284 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 285 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 286 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Bulbasaur_5:
# 289 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 290 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Bulbasaur_Text_1
# 291 "data/maps/NewProfessor/scripts.pory"
	removeobject 2
# 292 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_TWO
# 293 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Torchic::
# 308 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 309 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 310 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Torchic_1
# 333 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 334 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Torchic_1:
# 311 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 312 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_TORCHIC, 50, ITEM_MASTER_BALL
# 313 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Torchic_4
# 320 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Torchic_5
# 328 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 329 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Torchic_4:
# 314 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 315 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_1
# 316 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 317 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 318 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Torchic_5:
# 321 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 322 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Torchic_Text_1
# 323 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 324 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 325 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Cyndaquil::
# 340 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 341 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
# 342 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Cyndaquil_1
# 365 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 366 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Cyndaquil_1:
# 343 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 344 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 50, ITEM_MASTER_BALL
# 345 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Cyndaquil_4
# 352 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Cyndaquil_5
# 360 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 361 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Cyndaquil_4:
# 346 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 347 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 348 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 349 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 350 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Cyndaquil_5:
# 353 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 354 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Cyndaquil_Text_1
# 355 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 356 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 357 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NewProfessor_EventScript_Charmander::
# 372 "data/maps/NewProfessor/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 373 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 374 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Charmander_1
# 397 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 398 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_NotChosen
	return

NewProfessor_EventScript_Charmander_1:
# 375 "data/maps/NewProfessor/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 376 "data/maps/NewProfessor/scripts.pory"
	givemon SPECIES_CHARMANDER, 50, ITEM_MASTER_BALL
# 377 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Charmander_4
# 384 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Charmander_5
# 392 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 393 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Mudkip_Text_2
	return

NewProfessor_EventScript_Charmander_4:
# 378 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 379 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 380 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 381 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 382 "data/maps/NewProfessor/scripts.pory"
	call NicknamePartyMon
	return

NewProfessor_EventScript_Charmander_5:
# 385 "data/maps/NewProfessor/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 386 "data/maps/NewProfessor/scripts.pory"
	msgbox NewProfessor_EventScript_Charmander_Text_1
# 387 "data/maps/NewProfessor/scripts.pory"
	removeobject 3
# 388 "data/maps/NewProfessor/scripts.pory"
	setflag STARTER_BALL_THREE
# 389 "data/maps/NewProfessor/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 405 "data/maps/NewProfessor/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 406 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 407 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 408 "data/maps/NewProfessor/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 409 "data/maps/NewProfessor/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 416 "data/maps/NewProfessor/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 417 "data/maps/NewProfessor/scripts.pory"
	hidemonpic
# 418 "data/maps/NewProfessor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 421 "data/maps/NewProfessor/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 419 "data/maps/NewProfessor/scripts.pory"
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
# 123 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Mudkip$"

NewProfessor_EventScript_Mudkip_Text_2:
# 137 "data/maps/NewProfessor/scripts.pory"
	.string "No More Room$"

NewProfessor_EventScript_Totodile_Text_0:
# 149 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Totodile?$"

NewProfessor_EventScript_Totodile_Text_1:
# 155 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Totodile$"

NewProfessor_EventScript_Squirtle_Text_0:
# 181 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Squirtle?$"

NewProfessor_EventScript_Squirtle_Text_1:
# 187 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Squirtle$"

NewProfessor_EventScript_Treecko_Text_0:
# 213 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Treecko?$"

NewProfessor_EventScript_Treecko_Text_1:
# 219 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Treecko$"

NewProfessor_EventScript_Chikorita_Text_0:
# 245 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Chikorita?$"

NewProfessor_EventScript_Chikorita_Text_1:
# 251 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Chikorita$"

NewProfessor_EventScript_Bulbasaur_Text_0:
# 277 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

NewProfessor_EventScript_Bulbasaur_Text_1:
# 283 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Bulbasaur$"

NewProfessor_EventScript_Torchic_Text_0:
# 309 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Torchic?$"

NewProfessor_EventScript_Torchic_Text_1:
# 315 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Torchic$"

NewProfessor_EventScript_Cyndaquil_Text_0:
# 341 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

NewProfessor_EventScript_Cyndaquil_Text_1:
# 347 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Cyndaquil$"

NewProfessor_EventScript_Charmander_Text_0:
# 373 "data/maps/NewProfessor/scripts.pory"
	.string "Do you want to choose Charmander?$"

NewProfessor_EventScript_Charmander_Text_1:
# 379 "data/maps/NewProfessor/scripts.pory"
	.string "Recieved Charmander$"

NicknamePartyMon_Text_0:
# 405 "data/maps/NewProfessor/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 421 "data/maps/NewProfessor/scripts.pory"
	.string "Transferred to PC$"

NewProfessor_NotChosen::
# 424 "data/maps/NewProfessor/scripts.pory"
	.string "You did not choose the Pokemon$"
