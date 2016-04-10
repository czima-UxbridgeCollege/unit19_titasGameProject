/*******************************************
			EVERYTHING HERE IS A WORK
			IN PROGRESS/IN THE
			MIDDLE OF BEING TESTED.
			DON'T FUCKING TOUCH
			ANYTHING IF YOU HAVE
			NO IDEA WHAT YOU'RE DOING
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
class mapEntity :public entity
{
public:

	mapEntity(){};
	virtual ~mapEntity(){};

protected:
	
	int roomType;	//might change type

private:

};
#endif //End of characterEntity Header