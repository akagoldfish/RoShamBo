
#include "roshambo.h"


void turns (plays& player, int& rc, bool pm[], int& bc)
{
  //The first round
  if(bc==12)
    cout << player.name << " you get to go first!\n\n";
  
  //Repeats if the player enters an invalid move
  do{
      //If the entered in invalid move bc equals 9
      if(bc==9)
        cout << "\nYou have made an ERROR. Try again.\n\n";
        
      //Asks the player to enter their move. Gives an example of all moves
      //Formated to match the num pad on keyboards
      cout << player.name << ", Please enter the number that corresponds to your move:\n7 8 9\n4 5 6\n1 2 3\n\n";
      cin >> player.move[rc];
 
      cout << endl;
      //Based on their move, the boardCount equals the coorisponding place in board
      if(player.move[rc]==1)
        bc=6;
      else if(player.move[rc]==2)
        bc=7;
      else if(player.move[rc]==3)
        bc=8;
      else if(player.move[rc]==4)
        bc=3;
      else if(player.move[rc]==5)
        bc=4;
      else if(player.move[rc]==6)
        bc=5;
      else if(player.move[rc]==7)
        bc=0;
      else if(player.move[rc]==8)
        bc=1;
      else if(player.move[rc]==9)
        bc=2;
      else
        bc=9;
     
      if(pm[bc])
        pm[bc]=false;
      else
        bc=9;
    }while(bc==9);
    
  rc++;
}
