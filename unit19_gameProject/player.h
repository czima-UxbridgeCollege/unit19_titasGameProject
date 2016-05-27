#ifndef PLAYER_HEADER
#define PLAYER_HEADER

#include "characterEntity.h"
//#include "inventory.h"

/*******************************************
Player class containing all variables which pertain
to the player character, such as HP/AP/ATK/DEF inherited
from "entity", as well as the playerPosition ints, and the 
playerInventory array.
							-Jacek
*******************************************/

class player :public characterEntity
{
public:

			 player() {};
	virtual ~player() {};

	void setPlayerPosition(int posX, int posY);
	void setPlayerInventory(int playerInventory[10]);

	int getPlayerPosition();
	int getPlayerInventory();

	/*******************************************
				Combat functions
	-Harrison
	*******************************************/
	//Use - Allows the player to use an item from their inventory. Will work when inventory is fixed.
	void use();

protected:

	int posX;					//player position is stored in two integers, X and Y
	int posY;					//as this makes it easy to track player position without
								//having to know how big the map array is.

	int playerInventory[10];	//test inventory, to be replaced with the inventory from "inventory.h" once that's finished.
								//NMFJ
private:


};
#endif