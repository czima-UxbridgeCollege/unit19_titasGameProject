#ifndef ENEMY_HEADER
#define ENEMY_HEADER

#include "characterEntity.h"


/*******************************************
Player class containing all variables which pertain
to the enemy character, such as HP/AP/ATK/DEF inherited
from "entity"
								-Jacek
*******************************************/

class enemy :public characterEntity
{
public:

	enemy();
	//Overloaded constructor for quick enemy creation, contains all basic values required
	//for character creation.
	enemy(std::string enemyName, std::string enemyType, 
		  std::string enemyDescription, bool enemyAlive, 
		  int enemyHealth, int enemyAtk, int enemyDef) {};

	virtual ~enemy();

protected:


private:


};
#endif