#ifndef MAP_ENTITY_HEADER
#define MAP_ENTITY_HEADER

#include <string>
#include "entity.h"

/*******************************************
Map entity class deriving from basic abstract
"entity". To be used for rooms, etc.
						-Jacek
*******************************************/
class mapEntity :public entity
{
public:

			 mapEntity() {};
	virtual ~mapEntity() {};

	//setters and getters
	void setRoomType(short int roomType);
	int	 getRoomType();
	
protected:

	short int roomType;	//might change type

private:

};

#endif //End of mapEntity Header