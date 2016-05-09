/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/
#include"ItemPotion.h"

ItemPotion::ItemPotion()//constructed 
{

}

ItemPotion::~ItemPotion()//destructed 
{

}
/*
not sure how to add the potion to the palyers health 
this is just a rough idea I have on how I could do it 
but if you have another way to do it then can you explane it
*/

/*
this are the setters and getters
more maybe added like a boast to atk 
*/
void ItemPotion::SetHealth(int php) { health = php; }

int ItemPotion::GetHealth() { return health; }

