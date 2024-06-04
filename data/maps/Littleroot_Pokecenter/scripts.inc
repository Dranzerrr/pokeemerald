Littleroot_Pokecenter_MapScripts::
# 3 "data/maps/Littleroot_Pokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Littleroot_Pokecenter_OnTransition
# 4 "data/maps/Littleroot_Pokecenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Littleroot_Pokecenter_OnTransition::
# 11 "data/maps/Littleroot_Pokecenter/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
	end


Littleroot_Pokecenter_Employee_Simple::
# 20 "data/maps/Littleroot_Pokecenter/scripts.pory"
	setvar VAR_0x800B, 2
# 21 "data/maps/Littleroot_Pokecenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/Littleroot_Pokecenter/scripts.pory"
	waitmessage
# 23 "data/maps/Littleroot_Pokecenter/scripts.pory"
	waitbuttonpress
# 24 "data/maps/Littleroot_Pokecenter/scripts.pory"
	release
	end


Littleroot_Pokecenter_Employee::
# 30 "data/maps/Littleroot_Pokecenter/scripts.pory"
	lock
# 31 "data/maps/Littleroot_Pokecenter/scripts.pory"
	faceplayer
# 32 "data/maps/Littleroot_Pokecenter/scripts.pory"
	msgbox Littleroot_Pokecenter_Employee_Text_0, MSGBOX_YESNO
# 33 "data/maps/Littleroot_Pokecenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Littleroot_Pokecenter_Employee_1
# 45 "data/maps/Littleroot_Pokecenter/scripts.pory"
	msgbox Littleroot_Pokecenter_Employee_Text_2, MSGBOX_NPC
	return

Littleroot_Pokecenter_Employee_1:
# 35 "data/maps/Littleroot_Pokecenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 37 "data/maps/Littleroot_Pokecenter/scripts.pory"
	special HealPlayerParty
# 38 "data/maps/Littleroot_Pokecenter/scripts.pory"
	msgbox Littleroot_Pokecenter_Employee_Text_1
# 39 "data/maps/Littleroot_Pokecenter/scripts.pory"
	waitmessage
# 40 "data/maps/Littleroot_Pokecenter/scripts.pory"
	release
	end


Littleroot_Pokecenter_Employee_Text_0:
# 32 "data/maps/Littleroot_Pokecenter/scripts.pory"
	.string "Would you like me to heal your party?$"

Littleroot_Pokecenter_Employee_Text_1:
# 38 "data/maps/Littleroot_Pokecenter/scripts.pory"
	.string "Come again soon.$"

Littleroot_Pokecenter_Employee_Text_2:
# 45 "data/maps/Littleroot_Pokecenter/scripts.pory"
	.string "Have a nice day.$"
