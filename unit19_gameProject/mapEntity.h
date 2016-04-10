/*******************************************
			EVERYTHING HERE IS A WORK
			IN PROGRESS/IN THE
			MIDDLE OF BEING TESTED.
			DON'T FUCKING TOUCH
			ANYTHING IF YOU HAVE
			NO IDEA WHAT YOU'RE DOING
*******************************************/
#ifndef MAP_ENTITY_HEADER
#define MAP_ENTITY_HEADER

#include <string>
#include "entity.h"

/*******************************************
Map entity class deriving from basic abstract
"entity". To be used for rooms, etc.

*******************************************/
class characterEntity :public entity
{
public:

	characterEntity(){};
	virtual ~characterEntity(){};

protected:

	int hp;		//ints used to avoid floats fucking up in various ways
	int atk;	//they arent needed here anyway
	int def;
	int ap;

private:

};
#endif //End of characterEntity Header