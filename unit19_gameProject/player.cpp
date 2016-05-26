#include "player.h"

/*******************************************
Player class containing all variables which pertain
to the player character, such as HP/AP/ATK/DEF inherited
from "entity", as well as the playerPosition ints, and the
playerInventory array.
-Jacek
*******************************************/

/*******************************************
Constructor/Destructor
*******************************************/
player::player()
{					//The player is created only once, at the beginning, so all of their values
					//can be hardcoded and modified later as needed.
	isAlive = true;

	hp = 10;
	atk = 10;
	def = 5;
	ap = 20;

	posX = 0;
	posY = 0;

	for (int i; i <= 10; i++)
	{
		playerInventory[i] = i; //fills up the test inventory array with incrementing ints
	}
}

player::~player()
{

}

/*******************************************
			Setters/Getters
*******************************************/

void player::setPlayerPosition(int playerPositionX, int playerPositionY){}
void player::setPlayerInventory(int inventory[10]){}

int player::getPlayerPosition() { return posX, posY; };
int player::getPlayerInventory()	//returns the temporary test inventory, printing the whole thing out.
{
	for(int i; i <= 10; i++)
	{
		std::cout<<playerInventory[i];
	}
}