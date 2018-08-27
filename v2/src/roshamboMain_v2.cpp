//Ricky Haynes
//Allows a user to play Roshambo (Tic-Tac-Toe) between the computer or another player
//Implimenting smart AI

#include "roshambo.h"


int main()

{
  char again, gamemode;
  plays player1, player2, computer;
  int rCount, bCount, iboard[9];
  bool pMoves[10], gt;
  string sboard[9];

  srand (time(NULL));
  
  computer.name="The Master Commander";                                       
  //Sets the computers name to a desired name
  gt = true;
  //Start of 'do while' loop so the player can play multiple times
  do{
    greeting(computer, player1, player2, gamemode, again, gt, pMoves, rCount, iboard, sboard);
    
    //Player vs Player   
    if(gamemode=='2')
    {
      twoPlayer (player1, player2, pMoves, rCount, bCount, iboard, sboard);
    }
    else
    {
      singlePlayer (computer, player1, pMoves, rCount, bCount, iboard, sboard);
    }
    
    //Asks the user to play again
    cout << "Play again? (Y/N)\n";
    cin >> again;
    
    }while(again=='y'||again=='Y');  

  return 0;
}
