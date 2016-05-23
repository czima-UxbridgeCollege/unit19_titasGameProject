#include "constants.h"
#include "help.h"

help::help()
{
	system("CLS");
	cout << "Welcome to the world best text based RPG!\n\n";
	cout << "The aim of the game is to clear the entire dungeon with the use of text based commands. The commands are case sensitive with some exceptions, however they will be a little bit of leniency\n";
	cout << "Whenever core commands are required a few options will be avalible.\nLook out for easter eggs ;)";
	currentGameState = TITLE;
}

help::~help()
{
}
