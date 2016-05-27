#include "inventory.h"



inventory::inventory()
{
	gold = 0; //initialises player gold to 0


	//point inventoryItems and equippedItems to an empty space - error prevention
	for (int i = 0; i < sizeof(inventoryItems); i++)
	{
		inventoryItems[i] = NULL;
	}

	for (int i = 6; i < sizeof(equippedItems); i++)
	{
		equippedItems[i] = NULL;
	}

}

inventory::~inventory()
{

}

void inventory::setInventory(itemEntity &item)
{
	for (int i = 0; i < sizeof(inventoryItems) + 1; i++)
	{
		if (i <= sizeof(inventoryItems))
		{
			if (inventoryItems[i]->getName() == "<empty>") //goes through inventory until it finds an empty slot
			{
				inventoryItems[i] = &item; //one it finds an empty slot it inserts the item
				break;													  //and breaks from the loop
			}
		}

		else //if it gets to the end of the array without finding an empty space, informs the player
		{
			std::cout << "You have nowhere to put this item! \n\n";
			
		}

	}
}

itemEntity inventory::getInventory(int slot)
{
	return *inventoryItems[slot];
}

void inventory::printInventory()
{
	std::cout << "Gold: " << gold;
	std::cout << "Held items: \n\n";

	for (int i = 0; i <sizeof(inventoryItems); i++) //For loop outputs a list of carried items
	{
		std::cout << i + 1 << ". " << inventoryItems[i]->getName() << std::endl; // outputs the name of each item in the inventory
	}
}
