/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/
#include"ItemPotion.h"

ItemPotion::ItemPotion()//constructed 
{
	int i;
	
	int thp;
	thp = 10;
	if (thp<=i) //this is a basic atemped at making a potion which only works for a set period of time
	{

		thp = 0;
	}

	
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
void ItemPotion::SetTimeHealth(int thp) { tHealth = thp; }
int ItemPotion::GetHealth() { return health; }
int ItemPotion::GetTimeHealth() { return tHealth; }



 //if (thp <=i) 
// {

 //}

