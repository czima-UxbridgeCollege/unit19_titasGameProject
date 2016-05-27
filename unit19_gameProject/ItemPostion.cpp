/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/
#include"ItemPotion.h"

ItemPotion::ItemPotion()//constructed 
{
	setItemUsesRemaining(1);
	//int i;//this is to repersent the turns in game 
	/*
	this is all for testing porpuses 
	*/
	
	int thp;
	
	health = 10;
	thp = 10;//this is just an example trying to test it
	/*if (thp<=i) //this is a basic atemped at making a potion which only works for a set period of time 
	but I will try to do this when I know everything works
	{

		thp = health;
	}*/

	
}


ItemPotion::~ItemPotion()//destructed 
{

}
/*
not sure how to add the potion to the palyers health 
this is just a rough idea I have on how I could do it 
but if you have another way to do it then can you explane it
I have also added timed haealth but I cant complete it due to 
not knowing what to include 
the combat header will also need to be added 
*/

/*
this are the setters and getters
more maybe added like a boast to atk 
*/
void ItemPotion::SetHealth(int php) { health = php; }
//void ItemPotion::SetTimeHealth(int thp) { tHealth = thp; } commenting out the time potion beacuse I dont think I can make it work 
int ItemPotion::GetHealth() { return health; }
//int ItemPotion::GetTimeHealth() { return tHealth; }



 //if (thp <=i) 
// {

 //}

