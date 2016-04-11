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

*******************************************/

class characterEntity :public entity
{
public:

	characterEntity() {};
	virtual ~characterEntity() {};

protected:

	int hp;		//ints used to avoid floats fucking up in various ways
	int atk;	//they arent needed here anyway
	int def;
	int ap;

private:

};
#endif //End of characterEntity Header