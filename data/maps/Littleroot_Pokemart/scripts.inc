Littleroot_Pokemart_MapScripts::
	.byte 0


Littleroot_Pokemart_Employee::
# 7 "data/maps/Littleroot_Pokemart/scripts.pory"
	lock
# 8 "data/maps/Littleroot_Pokemart/scripts.pory"
	faceplayer
# 9 "data/maps/Littleroot_Pokemart/scripts.pory"
	message Littleroot_Pokemart_Employee_Text_0
# 10 "data/maps/Littleroot_Pokemart/scripts.pory"
	waitmessage
# 11 "data/maps/Littleroot_Pokemart/scripts.pory"
	pokemart Littleroot_Mart
# 12 "data/maps/Littleroot_Pokemart/scripts.pory"
	msgbox Littleroot_Pokemart_Employee_Text_1
# 13 "data/maps/Littleroot_Pokemart/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/Littleroot_Pokemart/scripts.pory"
Littleroot_Mart:
# 18 "data/maps/Littleroot_Pokemart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/Littleroot_Pokemart/scripts.pory"
	.2byte ITEM_MACH_BIKE
# 20 "data/maps/Littleroot_Pokemart/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 21 "data/maps/Littleroot_Pokemart/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

Littleroot_Pokemart_Employee_Text_0:
# 9 "data/maps/Littleroot_Pokemart/scripts.pory"
	.string "How may I serve you?$"

Littleroot_Pokemart_Employee_Text_1:
# 12 "data/maps/Littleroot_Pokemart/scripts.pory"
	.string "Please come again.$"
