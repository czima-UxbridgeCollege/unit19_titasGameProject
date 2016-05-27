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

class ItemArmor:public itemEntity
{
public:
	ItemArmor();
	~ItemArmor();
	//settters and getters for armor
	//void SetHead(int head) {}; //commented these out not really needed at this time but keeping them just in case 
	//int GetHead() {};
	//void SetBody(int body) {};
	//int GetBody() {};
	//void SetLegs(int legs) {};
	//int GetLegs() {};
	void SetTotalDefence(short int tdef);
	int GetTotalDefence() ;
	void SetDefence( short int def ) ;
	int GetDefence() ;
	void SetMaxDurabilty(short int mdur) ;
	int GetMaxDurabilty() ;
	void SetCurrentDurabilty(short int dur) ;
	int GetCurrentDurability();
	

private:
	//this are all the different armor the player can use 
	// std::string head; i have commented these out beacuse I am not sure if it will be needed 
	// std::string body;
	// std::string legs;
	 
	//head body and leg armor will have different set values for the player
	 //int head; 
	 //int body;
	 //int legs;
	int totalDefence;//this shows how much damage is taken off each attack
	int defence;//this show how much is being taken off in the current fight
	//int armorDamage; this may be used to work out how good the armor is after taking a set amount of hits 
	int maxDurabilty;//this function is used to show how many hits the armor can take
	int currentDurabilty;//this shows how many hits is has taken

};

















#endif