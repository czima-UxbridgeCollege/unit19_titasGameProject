/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/
#include"ItemArmor.h"
#include<iostream>
void ItemArmor::SetDefence(short int def) { defence = def; }
int ItemArmor::GetDefence() { return defence; }
void ItemArmor::SetTotalDefence(short int tdef) { totalDefence = tdef; }
int ItemArmor::GetTotalDefence() { return totalDefence; }
void ItemArmor::SetMaxDurabilty(short int mdur) { maxDurabilty = mdur; }
int ItemArmor::GetMaxDurabilty() { return maxDurabilty; }
void ItemArmor::SetCurrentDurabilty(short int dur) { currentDurabilty = dur; }
int ItemArmor::GetCurrentDurability() { return currentDurabilty; }




ItemArmor::ItemArmor()
{
	//these are the vaules for the armor
	int currentDefence=10;
	int totalDefence=10;

	setItemUsesRemaining(30);//this is the durability for each armor pice 
	 //max=setItemUsesRemaining

	 
	SetTotalDefence(10);//this is amount of damage that it takes off the attack 
	
	if (maxDurabilty = currentDurabilty / 2)//once the durability is half the defence for that item is also half
	{

		currentDefence = totalDefence / 2;

	}

	
	if (currentDurabilty <= 0)//this is to tell the player that the item has been destoryed  
	{
		std::cout << "your" << getName() << "has been destoryed" << std::endl;//this is to show that an Item is being destoryed 


	}

}//creating both consturcter and destructer not sure if it is needed

	//if(GetDefence <=2) this is an temept of showing the armor has been destoryed 
	//{
	//std::cout<<"your "
	//}
ItemArmor::~ItemArmor() 
{
	

}
/***************
Setters and getters for armor
just setting these up these may need to be change
 
****************/

/*
void ItemArmor::SetHead(int hprt) { head = hprt;}
void ItemArmor::SetBody(int bprt ) {body = bprt;}
void ItemArmor::SetLegs(int lprt) {legs = lprt;}

int ItemArmor::GetHead() { return head; }
int ItemArmor::GetBody() { return body; }
int ItemArmor::GetLegs() { return legs; }*/