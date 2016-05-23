/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/


#ifndef ITEM_ARMOR_HEADER
#define ITEM_ARMOR_HEADER
#include"itemEntity.h"
#include <string>

/******************************************
Armor class is derving from the basic item entity class
this class is to be used for the armor that the player 
can use in game more armor can be added later.

int head
int body
int legs
*****************************************/

class ItemArmor:public itemEntity //Changed to inherit from itemEntity - this should allow me to put them in to the inventory array -Harrison
{
public:
	ItemArmor();
	~ItemArmor();
	//settters and getters for armor
	void SetHead(int head) {};
	int GetHead() {};
	void SetBody(int body) {};
	int GetBody() {};
	void SetLegs(int legs) {};
	int GetLegs() {};

private:
	//this are all the different armor the player can use 
	// std::string head; i have commented these out beacuse I am not sure if it will be needed 
	// std::string body;
	// std::string legs;
	 
	//head body and leg armor will have different set values for the player
	 int head;
	 int body;
	 int legs;

};

ItemArmor::ItemArmor()
{
}

ItemArmor::~ItemArmor()
{
}


















#endif