#pragma once
/******************************************
Just doing a basic layout if
you change anything please
comment on what you have changed


Mark

*******************************************/


#ifndef SHOP_COIN_HEADER
#define SHOP_COIN_HEADER
#include<string>

/******************************************
coin class will not be inherating from any 
other class.This class contains the 2 types 
of coin a thrid may be added 

int gold
int sliver 

*****************************************/


class ShopCoin
{
public:
	ShopCoin();
	~ShopCoin();
	/*
	here are the setters and getters for coin 
	*/
	void SetSliver(int sliver) {};
	int GetSliver() {};
	void SetGold(int gold) {};
	int GetGold() {};

private:
	/*
	I am setting 2 different vaules for each item 
	*/
	int sliver;
	int gold;
};

ShopCoin::ShopCoin()
{
}

ShopCoin::~ShopCoin()
{
}

















#endif // !SHOP_COIN_HEADER
