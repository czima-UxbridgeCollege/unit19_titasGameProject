#include "inventory.h"



inventory::inventory()
{

}

inventory::~inventory()
{

}

void inventory::setInventory(itemEntity item)
{
	for (int i = 0; i < sizeof(inventoryItems) + 1; i++)
	{
		if (i <= sizeof(inventoryItems))
		{
			if (inventoryItems[i].getEntityIdBox().name == "<empty>") //goes through inventory until it finds an empty slot
			{
				inventoryItems[i].setEntityIdBox(item.getEntityIdBox()); //one it finds an empty slot it inserts the item
				inventoryItems[i].setItemUsesRemaining(1);				  //assumes item can be used only once for now
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
	return inventoryItems[slot];
}

void inventory::printInventory()
{
	for (int i = 0; i <sizeof(inventoryItems); i++) //For loop outputs a list of carried items
	{
		std::cout << i << ". " << inventoryItems[i].getEntityIdBox().name << std::endl; // Outputs item number for now, will use entityIdBox struct
																						//  to output item's name when getters are done
	}
}

