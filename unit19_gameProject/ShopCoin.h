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
int value 

*****************************************/


class ShopCoin
{
public:
	ShopCoin();
	~ShopCoin();
	/*
	here are the setters and getters for coin 
	*/
	//void SetSliver(int sliver) {};
	//int GetSliver() {};
	void SetGold(int gold) {};
	int GetGold() {};
	void SetValue(int value){}
	int GetValue(){}

private:
	/*
	I am setting 1 different vaule1 for each item may add sliver later 
	I am also setting the induival value for weapons for now may add it to armor later
	*/
	//int sliver;
	int gold;
	int value;
};

ShopCoin::ShopCoin()
{
}

ShopCoin::~ShopCoin()
{
}

















#endif // !SHOP_COIN_HEADER
