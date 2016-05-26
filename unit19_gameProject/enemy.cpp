#include "enemy.h"

/*******************************************
Player class containing all variables which pertain
to the enemy character, such as HP/AP/ATK/DEF inherited
from "entity"
								-Jacek
*******************************************/

/*******************************************
Constructor/Destructor
*******************************************/
enemy::enemy()
{

}

enemy::enemy(std::string enemyName, std::string enemyType,
			 std::string enemyDescription, bool enemyAlive,
			 int enemyHealth, int enemyAtk, int enemyDef) 
{
	name = enemyName;
	type = enemyType;
	description = enemyDescription;
	isAlive = enemyAlive;
	setHP(enemyHealth);
	setATK(enemyAtk);
	setDEF(enemyDef);

};

enemy::~enemy()
{

}