/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed

THIS IS NOT SET CHANGES MAY BE MADE 

Mark

*******************************************/


#ifndef ITEM_POTION_HEADER //IFNDEF/DEFINITIONS should be in ALL CAPS -Jacek
#define ITEM_POTION_HEADER
#include"itemEntity.h"
#include <string>

/******************************************
The Potion class is dervring from the itemEntity 
this class will be used by the player I am only 
going to do health for the time being.

int health

******************************************/

class ItemPotion:public itemEntity //Changed to inherit from itemEntity - this should allow me to put them in to the inventory array -Harrison
{
public:
	ItemPotion();
	~ItemPotion();
	//setter and getter
	void SetHealth(int health);
	int GetHealth();
	void SetTimeHealth(int tHealth);
	int GetTimeHealth();
private:
	//this will add to the players health 
	int health;//this may need to be changed 
	int tHealth;//this is for health over a certian period of time 

};





#endif