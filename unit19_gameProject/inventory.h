#ifndef INVENTORY_HEADER
#define INVENTORY_HEADER

#include "itemEntity.h"
#include <iostream>
#include <array>


/*******************************************
Inventory class for managing items the player has
equipped/ is carrying around.

Tell me if you think anything needs changed/added, or if you have any improvements/suggestions to make.

-Harrison
*******************************************/
class inventory
{
public:

	inventory() {};
	virtual ~inventory() {};

	//Setters and Getters
	void setInventory(itemEntity &item);
	itemEntity getInventory(int slot);

	//Print - Displays player's inventory contents to screen
	void printInventory();


protected:

	std::array <itemEntity*, 30> inventoryItems; //Array that allows the player to carry up to 30 items.
	std::array <itemEntity*, 6> equippedItems; //Array of equipped items - Head, Torso, Arms, Legs, Neck accessory and Ring accessory
	enum equipped { Head = 0, Torso = 1, Arms = 2, Legs = 3, Neck = 4, Ring = 5 }; //enumerator for the equippedItems array

	unsigned int gold; //unsigned int to hold player's gold - the player's gold cannot go below 0

private:

};



#endif //End of inventory Header