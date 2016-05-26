#ifndef ROOMS_HEADER
#define ROOMS_HEADER

#include <string>
#include <iostream>
#include "entity.h"   

/*******************************************
Used for room creation, this .h will house multiple
room type structs, including a basic "room" one.
Those room structs will be plugged into a dynamically
changing array, allowing the user to traverse it.
							-Jacek
*******************************************/
class rooms :public entity
{
public:
	
	rooms(){};
	virtual ~rooms(){};	//Destructor made virtual to ensure the newest possible
						//iteration is always used
						//a virtual destructor has to be declared with each iteration
						//otherwise stuff breaks
protected:

	

private:
	bool EMPTY_ROOM, ENCOUNTER_ROOM, LOOT_ROOM, EXIT_ROOM, START_ROOM; //boolean identifiers for selecting rooms, only one is true at any one time.
	std::string roomDescription;									   //description can be added so players can find out what's in the room.

};
#endif //End of Entity Header