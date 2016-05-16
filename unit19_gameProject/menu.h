#ifndef MENU_HEADER
#define MENU_HEADER

#include <iostream>
#include <string>
#include <SDL.h>
using namespace std;
/*******************************************
The menu class will be the first interactable screen which
will offer options to start the game and
exit the game, depending on what the user chooses.

*******************************************/

class menu
{
public:

	menu();
	virtual ~menu();
	string	choice;
protected:



private:

};
#endif //End of menu Header



