#include "characterEntity.h"

/*******************************************
Character entity class deriving from basic abstract
"entity". To be used for the player, as well as enemies.
contains ints "hp, atk, def, ap"
Allows for enemy quick-creation.
								-Jacek
*******************************************/

characterEntity::characterEntity() //default constructor for characterEntity
{								   //Overloaded will probably be used to make creation
								   //easier
	characterEntity::entityIdBox characterInfoStruct;
	characterInfoStruct.isAlive = true;
};

//characterEntity::characterEntity(){}; //Overloaded const, must think of a more 
										//efficient way to do this, instead of having
										//9 parameters for a single character

characterEntity::~characterEntity()
{

}

/*******************************************
			Setters/Getters
*******************************************/
void characterEntity::setHP(int health) { hp = health; }
void characterEntity::setATK(int attack) { atk = attack; }
void characterEntity::setDEF(int defense) { def = defense; }
void characterEntity::setAP(int actionPoints) { ap = actionPoints; }

int characterEntity::getHP() { return hp; }
int characterEntity::getATK() { return atk; }
int characterEntity::getDEF() { return def; }
int characterEntity::getAP() { return ap; }