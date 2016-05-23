/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/
#include"ItemArmor.h"
#include<iostream>
ItemArmor::ItemArmor()
{


	int array[8];//this will be used as the test array for the inventory 

	int hprt;//This are where the different armor vaules will be stored 
	int bprt;
	int lprt;



	if(hprt = 0)//this is to show that the armor has been destoryed 
	{
	 
		std::cout << "your helment has been destroyed" << std::endl;
	}

	if (bprt = 0)
	{

		std::cout << "your body armor has been destroyed" << std::endl;
	}


	if (lprt = 0)
	{

		std::cout << "your leg armor has been destroyed" << std::endl;
	}


}//creating both consturcter and destructer not sure if it is needed


ItemArmor::~ItemArmor() 
{

}
/***************
Setters and getters for armor
just setting these up these may need to be change
int prt will accpt the value of the amour 
****************/
void ItemArmor::SetHead(int hprt) { head = hprt;}
void ItemArmor::SetBody(int bprt ) {body = bprt;}
void ItemArmor::SetLegs(int lprt) {legs = lprt;}

int ItemArmor::GetHead() { return head; }
int ItemArmor::GetBody() { return body; }
int ItemArmor::GetLegs() { return legs; }