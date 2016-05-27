/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/

#include"ShopCoin.h"

ShopCoin::ShopCoin() {

	gold=10;

}

ShopCoin::~ShopCoin() {

}

void ShopCoin::SetGold(int Gval) { gold = Gval;}//setting the gold and sliver 
//void ShopCoin::SetSliver(int Sval) { sliver = Sval;} just using gold for the time being if we finish I will start on convirion of silver to gold 
void ShopCoin::SetValue(int val) { value = val; }//this is to show how much a weapon is worth not sure if this is in the right class so I may move it 
int ShopCoin::GetGold() { return gold; }
//int ShopCoin::GetSliver() { return sliver; 
int ShopCoin::GetValue() { return value; }