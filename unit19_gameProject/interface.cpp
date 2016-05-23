
#include "interface.h"
#include "characterEntity.h"

interface::interface(){

}

interface::~interface(){

}
/*
int interface::displayStats(player) {
	cout << "Health  : "<<player.GetHealth();
	cout << "Mana    : "<<player.GetAP();
	cout << "Attack  : "<<player.GetATK();
	cout << "Defence : "<<player.GetDEF();
}*/
int interface::displayMap(){
	for (int i = 0;i++; i < 10) {
		cout <<"You look at your map";
	};
}
int interface::actions(){

}
#pragma once
