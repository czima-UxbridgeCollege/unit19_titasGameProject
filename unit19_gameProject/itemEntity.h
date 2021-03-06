#ifndef ITEM_ENTITY_HEADER
#define ITEM_ENTITY_HEADER

#include <string>
#include "entity.h"

/*******************************************
Item entity class deriving from basic abstract
"entity". To be used for weapons, armours, and 
consumable items.
contains "int itemUsesRemaining" and const types:
"const short int WEAPON_ARMORS = 1" and
"const short int CONSUMABLE	   = 2"
							-Jacek
*******************************************/
class itemEntity:public entity
{
public:

			 itemEntity();
	virtual ~itemEntity();

	//setters and getters
	void setItemUsesRemaining(short int itemUsesRemaining);
	short int getItemUsesRemaining();

protected:
	//for item name, id, description, etc, use entity's "entityIdBox" struct.
	//for variables specific to items, use the variables below.

	short int itemUsesRemaining;	//can be used for both durability, and single-use items (potions, etc)

	const short int WEAPON_ARMORS = 1;	//const used to denote item type, switches can be used to distinguish 
	const short int CONSUMABLE	  = 2;

private:
	
};
#endif //End of itemEntity Header