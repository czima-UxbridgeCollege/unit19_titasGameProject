#ifndef ROOMS_HEADER
#define ROOMS_HEADER

#include "entity.h"   
#include "constants.h"
//#include "combat.h"		//to be added once it's finished
//#include "player.h"		//unnecessary here? can be added to mapEntity instead

/*******************************************
Used for room creation, this .h will house multiple
room type structs, including a basic "room" one.
Those room structs will be plugged  into a dynamically
changing vector array, allowing the user to traverse it.
-Jacek
*******************************************/
class rooms :public entity
{
public:

	rooms() {};
	rooms(short int roomChoice);
	virtual ~rooms() {};

	void startRoomInit();			//Room the player starts in
	void emptyRoomInit();			//Room with nothing of interest, can be used for story?
	void encounterRoomInit();		//Room which initialises combat
	void lootRoomInit();			//Room which offers a piece of loot to pick up
	void exitRoomInit();			//Room which advances the level by 1


protected:


private:

	//short int roomChoice;

};
#endif //End of Entity Header