#ifndef COMBAT_HEADER
#define COMBAT_HEADER

#include "characterEntity.h"
#include "ItemPotion.h"
#include <iostream>
#include <string>

/*******************************************
The combat class contains the code for different actions in combat.
Most of these can be used both by the player and enemies.

Tell me if you think anything needs changed/added.

-Harrison
*******************************************/
class combat
{
public:

	//Attack - entity1 deals damage to entity2
	void attack(characterEntity entity1, characterEntity entity2);

	//Use - Allows the player to use an item from their inventory.
	void use(std::string itemName);

protected:





};



#endif