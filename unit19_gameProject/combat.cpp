#include "combat.h"

void combat::attack(characterEntity entity1, characterEntity entity2)
{
	entity2.setHP(entity2.getHP() - (entity1.getATK() - entity2.getDEF()));
	std::cout << "The attack lands, dealing " << (entity1.getATK() - entity2.getDEF()) << " damage!\n\n";
}

void combat::use(std::string itemName)
{

	for (int i = 0; i < 30; i++)
	{
		if (player.equipment.getInventory(i).getEntityIdBox().name.find(itemName) != std::string::npos)
		{

		}
	}
}

