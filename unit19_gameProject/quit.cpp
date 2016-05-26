#include "constants.h"
#include "quit.h"

quit::quit()
{
	//text that will be displayed
	system("CLS");
	cout << "It was fun while it lasted But this is goodbye!\n";
	cout << "Come back again soon!\n";
	cout << "**Press ENTER Key to Continue**\n";
	cin.get();//pressing a button will execute the next line
	SDL_Quit();
}

quit::~quit()
{
}
