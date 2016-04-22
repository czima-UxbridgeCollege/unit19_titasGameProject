/*******************************************
			EVERYTHING HERE IS A WORK
			IN PROGRESS/IN THE
			MIDDLE OF BEING TESTED.
			DON'T FUCKING TOUCH
			ANYTHING IF YOU HAVE
			NO IDEA WHAT YOU'RE DOING

								-Jacek
*******************************************/
#ifndef CHARACTER_ENTITY_HEADER
#define CHARACTER_ENTITY_HEADER

#include <string>
#include "entity.h"

/*******************************************
Character entity class deriving from basic abstract
"entity". To be used for the player, as well as enemies.
contains ints "hp, atk, def, ap"
Allows for enemy quick-creation.
*******************************************/

class characterEntity :public entity
{
public:

			 characterEntity() {};
	virtual ~characterEntity() {};

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


protected:

	int hp;					 //ints used to avoid floats fucking up in various ways
	int atk;				 //they arent needed here anyway
	int def;
	int ap;

private:

};
#endif //End of characterEntity Header