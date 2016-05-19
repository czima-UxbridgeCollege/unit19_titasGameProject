#include "mapEntity.h"

/*******************************************
Map entity class deriving from basic abstract
"entity". To be used for rooms, etc.
							-Jacek
*******************************************/

mapEntity::mapEntity() 
{

};

mapEntity::~mapEntity()
{

}

/*******************************************
Setters/Getters
*******************************************/

void mapEntity::setRoomType(short int roomType) { } //setter takes roomType constant

int mapEntity::getRoomType() { }