
#include "interface.h"
#include "characterEntity.h"

interface::interface(){

}

interface::~interface(){

}

void interface::displayStats(player temp) {
	cout << "Health  : " << temp.getHP()<<"\n";
	cout << "Mana    : " << temp.getAP()<<"\n";
	cout << "Attack  : " << temp.getATK()<<"\n";
	cout << "Defence : " << temp.getDEF()<<"\n\n";
	return;
}
int interface::displayMap(){
	cout << "You are on Level : \n";//<< level;
	for (int i = 0; i < 10; i++) {
		rooms roomArray[4][4];
		
	}
	return 1;//TODO(STEPHEN) : complete function 
}
int interface::actions(){
	return 1;//TODO(STEPHEN) : complete function 
}
#pragma once
