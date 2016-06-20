#include "constants.h"
#include "menu.h"

menu::menu()
{

	cout << "Welcome to the world of Hello World\nDo you want to Start a New Dungeon or Continue an old one...\n**NewDungeon|Continue|Help|Quit\n\n";
	cin >> choice;

	if (choice == "NewDungeon" || "newdungeon") {

		currentGameState = GAME;
		//game(); - This will start the game
		/*this section will change a state machine to start a new game*/


	}

	else if (choice == "Continue" || "continue") {

		cout << "WORK IN PROGRESS";
		/*this section will change a state machine to start a game which it should draw information a saved file text document*/

	}

	else if (choice == "Help" || "help") {

		currentGameState = HELP;
		//help();
		/*Wokring*/
	}


	else if (choice == "Quit" || "quit") {

		//currentGameState = QUIT;

	}
	else {
		cout << "Sorry We dont understand orcish... Please Try Again\n";
	}

}

menu::~menu()
{
}
