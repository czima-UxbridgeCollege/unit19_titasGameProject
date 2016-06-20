#ifndef INTERFACE_HEADER
#define INTERFACE_HEADER

#include <iostream>
#include <string>
#include "player.h"
#include "map.h"

using namespace std;
/*******************************************
the inferface class will just help with the game interface.
This needs to be updated to use the player class
in the functions once jacek has implemented them

*******************************************/

class interface
{
public:

	interface();
	virtual ~interface();
	int displayHealth();
	void displayStats(player);
	int actions();
	int displayMap();// - requires map functions to be finished
protected:



private:

};
#endif //End of interface Header



