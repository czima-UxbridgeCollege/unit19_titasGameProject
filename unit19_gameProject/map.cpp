#include "map.h"

/*******************************************
Class responsible for the creation of a room array,
it contains a "room roomArray[x][x]" array, where
x stands for (level number + 5);
-Jacek
*******************************************/

/*******************************************
Constructor/Destructor
*******************************************/
map::map()
{
	initMapArray(1);		//1 used for testing, to be replaced with level variable from player(?)
							//this call results in the creation of a 6x6 map array.
}

map::~map()
{

}

/*******************************************
Setters/Getters
*******************************************/
void map::initMapArray(int level)
{
	mapArray[(baseMapSize + level)][baseMapSize + level];	//creates a square map with a base size
															//of 5 + level (1)
	rooms startingRoom(START_ROOM);

	mapArray[0][0] = &startingRoom;							//contains address of startingRoom to avoid creating the room multiple times.

															/*
															room allocation goes here, to be finished soon.
															*/
}