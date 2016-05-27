#include "itemEntity.h"

/*******************************************
Item entity class deriving from basic abstract
"entity". To be used for weapons, armours, and
consumable items.
contains "int itemUsesRemaining" and const types:
"const short int WEAPON_ARMORS = 1" and
"const short int CONSUMABLE	   = 2"
-Jacek
*******************************************/

itemEntity::itemEntity()
{

};

itemEntity::~itemEntity()
{

}

/*******************************************
Setters/Getters
*******************************************/

void itemEntity::setItemUsesRemaining(short int itemUsesRemaining){}

short int itemEntity::getItemUsesRemaining() { return itemUsesRemaining; }