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

class ItemArmor
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