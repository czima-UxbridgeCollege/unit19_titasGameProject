#ifndef CONSTANTS_H
#define CONSTANTS_H

/******************************************
This class contains all constant values which 
never change, such as state numbers.
The const int values e.g. TITLE determine
states in the state machine located in gameState 
function.			
							-jacek
*******************************************/
//Game State Variables used wherever Stephen uses them?
int currentGameState = 0;

const int TITLE = 0;
const int GAME = 1;
const int HELP = 2;
const int GAMEOVER = 3;
const int QUIT = 4;

//Room creation variables, used in rooms.h
const int START_ROOM = 0;
const int EMPTY_ROOM = 1;
const int ENCOUNTER_ROOM = 2;
const int LOOT_ROOM = 3;
const int EXIT_ROOM = 4;




#endif
