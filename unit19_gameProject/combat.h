#ifndef COMBAT_HEADER
#define COMBAT_HEADER

#include "player.h"
#include "enemy.h"
#include "ItemPotion.h"
#include <array>
#include <iostream>
#include <string>

/*******************************************
The combat class contains the code for different actions in combat.
Most of these can be used both by the player and enemies.
I think it would be better to shift the combat commands like
attack/defend to the characterEntity or Player/Enemy classes, so I may do that.


Tell me if you think anything needs changed/added, or if you have any improvements/suggestions to make.

-Harrison
*******************************************/
class combat
{
public:

	/*
	startCombat - This function will initiate and maintain combat until someone dies, or the player flees.
	For now it uses two characterEntity objects -- these will be switched to player and monster objects when they are done.
	*/
	void startCombat(player &p1, enemy &e1);

	

	

	//Flee - This will allow the player (maybe certain monsters too, at a later date) to flee from combat.
	void flee();

	//playerActions - this will call separate functions from the combat class according to the action the player wishes to take
	bool playerActions(player &p1, enemy &e1);

	



protected:

	bool playerTurn; //This will allow for switching between the turns of the player and enemy


};



#endif