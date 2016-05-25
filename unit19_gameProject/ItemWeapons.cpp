/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/
#include"ItemWeapons.h"

ItemWeapons::ItemWeapons() //not sure if weapons needs a constructer and destructer 
{						  //but made them anyway to be on the safe side



}

ItemWeapons::~ItemWeapons()
{


}

/*******************************
SETTERS AND GETTERS 
damage will need to be added on when the player is attacking with weapons 
********************************/

void ItemWeapons::SetSword(int sdamage) { sword = sdamage; }
void ItemWeapons::SetAxe(int adamage) { axe = adamage; }
void ItemWeapons::SetDamage(int dam) { damage = dam; }

int ItemWeapons::GetSword() { return sword; }
int ItemWeapons::GetAxe() { return axe; }
int ItemWeapons::GetDamage() { return damage;}