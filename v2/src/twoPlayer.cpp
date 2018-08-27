
#include "roshambo.h"


void twoPlayer (plays& player1, plays& player2, bool pMoves[], int& rCount, int& bCount, int iboard[], string sboard[])
{
  int count;
  cout << endl << "Clearly you are too scared to face me, as you should be!\n";
      
  //The starting number for bCount     
  bCount=12;
  
  //Sets the players to a cooresponding number and char       
  player1.number=1;
  player1.c='x';
  player2.number=2;
  player2.c='o';
  
  //Gathers the players names       
  info(player1);
  info(player2);
       
  //Determines who goes first     
  if(goFirst(player1))
    count=1; //Player 1 goes first
  else
    count=2; //Player 2 goes first
  
  //Loops as long as there is no winner and a possible move    
  while((rCount<9)&&(wwcd(sboard, iboard, rCount)==false))
  {
    //Player 2's move
    if(count==2)
    {
      turns(player2, rCount, pMoves, bCount);
      thePlays(player2, sboard, iboard, bCount);
      count--;
    }
    //Player 1's move
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
      cout << "You won " << player2.name << "!\n";
    else
      cout << "You won " << player1.name << "!\n\n";
  }
  //If it's a tie
  else
    cout << "\nIt's a tie!\n\n";
}