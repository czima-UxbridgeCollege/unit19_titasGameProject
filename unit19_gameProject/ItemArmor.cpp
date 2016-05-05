/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/
#include"ItemArmor.h"

ItemArmor::ItemArmor()
{


}//creating both consturcter and destructer not sure if it is needed

ItemArmor::~ItemArmor() 
{

}
/***************
Setters and getters for armor
just setting these up these may need to be change
****************/
void ItemArmor::SetHead(int prt) { head = prt;}
void ItemArmor::SetBody(int prt ) {body = prt;}
void ItemArmor::SetLegs(int prt) {legs = prt;}

int ItemArmor::GetHead() { return head; }
int ItemArmor::GetBody() { return body; }
int ItemArmor::GetLegs() { return legs; }