/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/

#include"ShopCoin.h"

ShopCoin::ShopCoin() {


}

ShopCoin::~ShopCoin() {

}

void ShopCoin::SetGold(int Gval) { gold = Gval;}//setting the gold and sliver 
void ShopCoin::SetSliver(int Sval) { sliver = Sval;}

int ShopCoin::GetGold() { return gold; }
int ShopCoin::GetSliver() { return sliver; }