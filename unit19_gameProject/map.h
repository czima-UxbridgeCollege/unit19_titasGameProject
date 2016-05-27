#ifndef MAP_HEADER
#define MAP_HEADER

#include "rooms.h"
#include "vector"
using std::vector;

/*******************************************
Class responsible for the creation of a room array,
it contains a "room roomArray[x][x]" array, where
x stands for (level number + 5);
-Jacek
*******************************************/
class map
{
public:

	map();
	virtual ~map();

	void setMapArray(int level); //allows for the array size to be set dynamically using x+5
								 //where x = level.
	rooms getMapArray();

protected:

private:
	int sizeX = 5, sizeY = 5;

	vector<vector<rooms>> mapArray;

	//rooms mapArray[sizeX][sizeY];

};


#endif