/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed

THIS IS NOT SET CHANGES MAY BE MADE 

Mark

*******************************************/


#ifndef ITEM_Potion_HEADER
#define ITEM_Potion_HEADER
#include"itemEntity.h"
#include <string>

/******************************************
The Potion class is dervring from the itemEntity 
this class will be used by the player I am only 
going to do health for the time being.

int health

******************************************/

class ItemPotion
{
public:
	ItemPotion();
	~ItemPotion();
	//setter and getter
	void SetHealth(int health) {};
	int GetHealth() {};

private:
	//this will add to the players health 
	int health;//this may need to be changed 


};

ItemPotion::ItemPotion()
{
}

ItemPotion::~ItemPotion()
{
}




#endif