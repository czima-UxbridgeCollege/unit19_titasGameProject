#include "characterEntity.h"

/*******************************************
Character entity class deriving from basic abstract
"entity". To be used for the player, as well as enemies.
contains ints "hp, atk, def, ap"
Allows for enemy creation.
								-Jacek
*******************************************/


/*******************************************
			Constructor/Destructor
*******************************************/
characterEntity::characterEntity()  //default constructor for characterEntity
{								    //Overloaded will probably be used to make creation
									//easier

									//creates new character object, containing all 
									//variables from entity and characterEntity (hp, id, alive, etc)
									//for full list of variables see entity&characterEntity
	setAlive(true);

}

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

bool characterEntity::getDefending() { return isDefending; }

/*******************************************
			Combat Functions -Harrison
*******************************************/

void characterEntity::attack(characterEntity &target)
{
	short int damage = (getATK() - target.getDEF());

	if (target.getDefending() == true)
	{
		damage /= 2;
	}

	target.setHP(target.getHP() - (damage));
	std::cout << "The attack lands, dealing " << damage << " damage!\n\n";
}

void characterEntity::defend()
{
	if (isDefending == true)
		isDefending = false;
	else if (isDefending == false)
		isDefending = true;
}

void characterEntity::printStatus()
{
	std::cout << getName() << "'s status: \n\n";
	std::cout << "Health:    " << getHP() << std::endl;
	//More stats to be added soon!
}
