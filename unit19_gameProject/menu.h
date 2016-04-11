#ifndef MENU_HEADER
#define MENU_HEADER

#include <iostream>
#include <string>

/*******************************************
The menu class will be the first interactable screen which 
will offer options to start the game, change settings and
exit the game, depending on what the user chooses.

*******************************************/

class menu
{
public:

	menu() {};
	virtual ~menu() {};

protected:
	void print();


private:

};
#endif //End of menu Header

