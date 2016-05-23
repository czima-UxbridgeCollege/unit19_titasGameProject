/******************************************
		Just doing a basic layout if 
		you change anything please 
		comment on what you have changed


							Mark

*******************************************/


#ifndef ITEM_WEAPONS_HEADER
#define ITEM_WEAPONS_HEADER
#include"itemEntity.h"
#include<string>
/*
Item Weapons is derving from the basic item entity class
this class is to be used for the weapons that the player 
can use in game more waepons can be added later.I have commented out
the different types of swords until we have decided if we are going 
to use txt based programming
int sword 
int axe

*/


class ItemWeapons:public itemEntity //Changed to inherit from itemEntity - this should allow me to put them in to the inventory array -Harrison
{
public:
	ItemWeapons();
	~ItemWeapons();
	//seters and getters for weapons
	void SetSword(int sword) {};
	int GetSword() {};
	void SetAxe(int axe) {};
	int GetAxe() {};

	/****************************************
	This is only to be used if we do not use 
	flie text
	*****************************************/
	// void SetBasicSword(int basicSword){};
	// int GetBasicSword(){};
	//void SetRareSword(int rareSword){};
	//int GetRareSword(){};
	//void SetExtiocSword(int extiocSword){};
	//int GetExtiocSword(){};

private:
	int sword;//sword 
	int axe;//axe
	//int basicSword;
	//int rareSword;
	//int extiocSword


};


#endif