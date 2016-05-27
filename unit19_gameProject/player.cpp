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

	for (int i = 0; i <= 10; i++)
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
	for(int i = 0; i <= 10; i++)
	{
		return playerInventory[i];
	}
	return playerInventory[2]; //testing
}

/*******************************************
			Combat Functions -Harrison
*******************************************/

void player::use()
{
	std::string choice;

	std::cout << "What item would you like to use? Make sure it's a potion!";



	for (int i = 0; i < sizeof(equipment); i++)
	{
		if (equipment.getInventory(i).getName().find(choice) != std::string::npos)
		{
			//the code here will check that the item is useable and if it is, will use the item when that code is complete.
		}
	}
}