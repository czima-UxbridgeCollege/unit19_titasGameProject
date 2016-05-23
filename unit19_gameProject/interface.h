#ifndef INTERFACE_HEADER
#define INTERFACE_HEADER

#include <iostream>
#include <string>
#include <SDL.h>
using namespace std;
/*******************************************
This needs to be updated to use the player class
in the functions once jacek has implemented them

*******************************************/

class interface
{
public:

	interface();
	virtual ~interface();
	int displayHealth();
	//int displayStats(player);
	int actions();
	int displayMap();//still needs work;
protected:



private:

};
#endif //End of menu Header



