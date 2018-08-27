// This is start of the header guard.  ADD_H can be any unique name.  By convention, we use the name of the header file.
#ifndef ADD_H
#define ADD_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

// This is the content of the .h file, which is where the declarations go
//Stores infor for each player
struct plays
{
  string name;
  int number, move[9];
  char c;
};

void greeting (plays& computer, plays& player1, plays& player2, char& gm, char& again, bool& gt, bool pMoves[], int& rCount, int iboard[], string sboard[]);
//Greets the player(s)

void singlePlayer (plays& computer, plays& player1, bool pMoves[], int& rCount, int& bCount, int iboard[], string sboard[]);
//Runs the script for single player

void twoPlayer (plays& player1, plays& player2, bool pMoves[], int& rCount, int& bCount, int iboard[], string sboard[]);
//Runs the script for two player

void info (plays& player);                                                      
//Collects the players names

bool goFirst (plays player);                                                    
//Descides whether or not Player one goes first

void turns (plays& player, int& rc, bool pm[], int& bc);     
//Asks and receives the players move and determines whether or not the current move is valid

void compturns (plays& computer, int ibrd[], int& rc, bool pm[], int& bc);  
//Generates the computers move

void genBoards (string brd[], int ibrd[]);                                      
//Generates the starting gameboard with boxes

void thePlays (plays& player, string brd[], int ibrd[], int bc);
//Outputs the board after each move

bool wwcd (string brd[], int ibrd[],   int rc);            
//Determines whether ot not there is a winner

 
// This is the end of the header guard
#endif