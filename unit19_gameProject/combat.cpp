#include "combat.h"

void combat::startCombat(player &p1, enemy &e1)
{
	short int choice = 0; //takes in the player's choice - to be passed into playerActions when it is called


	while (p1.getHP() > 0 && e1.getHP() > 0 && combatActive == true)
	{


		if (playerTurn == true) //Player's turn
		{
			//print the status of combat participants
			p1.printStatus();
			e1.printStatus();

			

			if (playerActions(p1, e1) == true)
			{
				playerTurn = false;
			}

			else if (playerActions(p1, e1) == false)
			{
				std::cout << "I'm afraid that is not a valid choice. Try again!";
			}
			
		}

		else if (playerTurn == false) //For now the enemy is just set to attack the player. 
		{								//I will try to do this better when the player/enemy classes are set up.
			enemyActions(p1, e1);
			playerTurn = true;

		}
	}
}





void combat::flee()
{
	combatActive = false;
}

bool combat::playerActions(player &p1, enemy &e1)
{

	if (p1.getDefending == true)
	{
		p1.defend();
	}
	short int choice;

	std::cout << "What action will you take? (input a number) \n";
	std::cout << "1. Attack" << std::endl;
	std::cout << "2. Defend" << std::endl;
	std::cout << "3. Use" << std::endl;
	std::cout << "4. Flee" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1: //Attack
		p1.attack(e1);
		return true;

	case 2: //defend
		p1.defend();
		return true;

	case 3:
		p1.use();
		return true;

	case 4:
		flee();
		return true;

	default:
		return false;
	}
}

void combat::enemyActions(player &p1, enemy &e1)
{
	std::cout << "The enemy attacks you! \n";
	e1.attack(p1);
}