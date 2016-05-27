#include "rooms.h"

/*******************************************
Used for room creation, this .h will house multiple
room type structs, including a basic "room" one.
Those room structs will be plugged  into a dynamically
changing vector array, allowing the user to traverse it.
-Jacek
*******************************************/

/*******************************************
Constructor/Destructor
*******************************************/
rooms::rooms()
{

}

rooms::rooms(short int roomChoice)		//Overloaded constructor used for room creation, uses 
{										//roomChoice var to determine which room to init.
	if (roomChoice == START_ROOM)
	{
		startRoomInit();
	}

	else if (roomChoice == EMPTY_ROOM)
	{
		emptyRoomInit();
	}

	else if (roomChoice == ENCOUNTER_ROOM)
	{
		encounterRoomInit();
	}

	else if (roomChoice == LOOT_ROOM)
	{
		lootRoomInit();
	}

	else if (roomChoice == EXIT_ROOM)
	{
		exitRoomInit();
	}
}

rooms::~rooms()
{

}

/*******************************************
Functions
*******************************************/

void rooms::startRoomInit()
{
	std::cout << "You descend down the stairs and enter the next level";
}

void rooms::emptyRoomInit()
{
	std::cout << "You find nothing of note in this room";
}

void rooms::encounterRoomInit()
{
	std::cout << "You enter the room, and find it contains an enemy!";
	//player.combat(p1, e1);	//combat would be initialised here, as soon as player enters the room.
}
void rooms::lootRoomInit()
{
	std::cout << "You enter a room filled with riches!";
	//player.pickItem(Inventory); 
}
void rooms::exitRoomInit()
{
	std::cout << "You find stairs leading further down";
}