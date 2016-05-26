#include "constants.h"
#include "gameOver.h"

gameOver::gameOver()
{
	system("CLS");
	cout << "Unfortunalty your journey has come to an end!\n";
	cout << "You had a good run but everything must come to and end sooner or later\n";
	cout << "But do not fear.. You can just start a new journey...\n";
	cout << "**Press ENTER Key to Continue**\n";
	cin.get();//pressing a button will execute the next line
	currentGameState = TITLE;
}

gameOver::~gameOver()
{
}
