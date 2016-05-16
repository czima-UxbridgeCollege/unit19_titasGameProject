
#include "menu.h"

menu::menu()
{
	/**CheckList

	Start New Game
	if choice = New Game { NGameStart}
	Load New Game
	load
	Quit
	sdl quit/running = false

	**/
	cout << "Welcome to the world of Hello World\nDo you want to Start a New Dungeon or Continue an old one...\n**NewDungeon|Continue|Quit\n\n";
	cin >> choice;

	if (choice == "NewDungeon" || "newdungeon") {

		/*this section will change a state machine to start a new game*/
		

	}

	else if (choice == "Continue" || "continue") {

		/*this section will change a state machine to start a game which it should draw information a saved file text document*/

	}
	//testing

	else if (choice == "Quit" || "quit") {

		SDL_Quit();

	}
	else {
		cout << "Sorry We dont understand orcish... Please Try Again\n";
	}

}

menu::menu()
{
}

menu::~menu()
{
}
