
#include "roshambo.h"

void singlePlayer (plays& computer, plays& player1, bool pMoves[], int& rCount, int& bCount, int iboard[], string sboard[])
{
  int count;
  //The starting number for bCount 
  bCount=12;
  
  //Sets the player and computer to a cooresponding number and char
  player1.number=1;
  player1.c='x';
  computer.number=2;
  computer.c='o';
  
  //Gathers the players name
  info(player1);
  
  //Determines who goes first
  if(goFirst(player1))
    count=1; //The player goes first
  else
    count=2; //The computer goes first
  
  // cout << bCount << endl;
  
  //Loops as long as there is no winner and a possible move
  while((rCount<9)&&(wwcd(sboard, iboard, rCount)==false))
  {
    //Computer's move
    if(count==2)
    {
      compturns(computer, iboard, rCount, pMoves, bCount);
      thePlays(computer, sboard, iboard, bCount);
      count--;
    }
    //Player's move
    else
    {
      turns(player1, rCount, pMoves, bCount);
      thePlays(player1, sboard, iboard, bCount);
      count++;
    }
  }
    
    //If there is a winner, outputs a winner message
    if(wwcd(sboard, iboard, rCount)==true)
    {
      cout << endl << "##########################################";
      cout << endl << "# We have a Winner Winner Chicken Dinner #";
      cout << endl << "##########################################\n\n";
    
      //Uses the current count to determine who won
      if(count==1)
        cout << "I, " << computer.name << " have won!\nBetter luck next time!\n\n";
      else
        cout << "You won " << player1.name << "!\n\n";
    }
    //If it's a tie
    else
      cout << "\nIt's a tie, but I am still more awesome.\n\n";
  
}