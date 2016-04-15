/*******************************************
			EVERYTHING HERE IS A WORK
			IN PROGRESS/IN THE
			MIDDLE OF BEING TESTED.
			DON'T FUCKING TOUCH
			ANYTHING IF YOU HAVE
			NO IDEA WHAT YOU'RE DOING

								-Jacek
*******************************************/
#ifndef MAP_ENTITY_HEADER
#define MAP_ENTITY_HEADER

#include <string>
#include "entity.h"

/*******************************************
Map entity class deriving from basic abstract
"entity". To be used for rooms, etc.

*******************************************/
class mapEntity :public entity
{
public:

	mapEntity() {};
	virtual ~mapEntity() {};

	//setters and getters
	void setRoomType(short int roomType) {};
	int	 getRoomType() {};
	
protected:

	short int roomType;	//might change type

private:

};

#endif //End of characterEntity Header