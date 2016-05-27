#ifndef MAP_HEADER
#define MAP_HEADER

#include "rooms.h"	//for rooms which will fill the map array
#include "vector"	//for map array
#include "player.h" //for player position
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

	void initMapArray(int level); //allows for the array size to be set dynamically using x+5
								  //where x = level

protected:

private:
	int baseMapSize = 5;

	vector<vector<rooms*>> mapArray;//a dynamic vector array of vectors of type rooms.
									//pointer used so it's not created over and over again.
									//mapArray.clear();

									//rooms mapArray[sizeX][sizeY];

};
#endif