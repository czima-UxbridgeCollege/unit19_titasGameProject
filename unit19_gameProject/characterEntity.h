#ifndef CHARACTER_ENTITY_HEADER
#define CHARACTER_ENTITY_HEADER

#include <string>
#include "entity.h"

/*******************************************
Character entity class deriving from basic abstract
"entity". To be used for the player, as well as enemies.
contains ints "hp, atk, def, ap"
Allows for enemy creation.
							-Jacek
*******************************************/

class characterEntity :public entity
{
public:

			 characterEntity();
	virtual ~characterEntity();

	//setters and getters
	void setHP(int hp);
	void setATK(int atk);
	void setDEF(int def);
	void setAP(int ap); //AP or "Action Points" might be used instead of 
							 //mana to cast, as it can be used for various classes
							 
	int getHP();
	int getATK();
	int getDEF();
	int getAP();		 //AP getter for future use.

	/*******************************************
	Combat functions - move these to player and enemy if you think that would be better
	-Harrison
	*******************************************/
	//Attack - entity1 deals damage to entity2
	void attack(characterEntity &target);

	//Defend - Temporarily increases the defence of the entity that takes this action (Dur. 1 turn)
	void defend();

	//printStatus - prints the character's stats to the console
	void printStatus();

protected:

	int hp;					 //ints used to avoid floats fucking up in various ways
	int atk;				 //they arent needed here anyway
	int def;
	int ap;

	bool isDefending;

private:

};
#endif //End of characterEntity Header