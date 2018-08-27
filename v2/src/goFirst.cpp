
#include "roshambo.h"


bool goFirst (plays player) 
{
  char a;
  //Repeats if the user didn't enter a 't' or 'h'
  do{
      //Asks the player to call heads or tails
      cout << "\nLets flip a coin to see who goes first.\n" << player.name << " make the call.\nHeads(H) or Tails(T)?\n";
      
      //Their response
      cin >> a;
   
      //If they enter a 't' or 'h' it will become UPPERCASE and if they enter anything else they will be asked again
      if (a=='t'||a=='T')
        a='T';
      else if (a=='h'||a=='H')
        a='H';
      else
      {
        a='X';
        cout << "You did something wrong, try again.\n";
      }
    }while(a=='X');
    
  //Create a variable f and randomly assigns it either 1 or 2 (Signifies a coin toss)
  int f=rand() % 2 + 1;
  
  //Converts var f to either 'H' or 'T'
  char b;
  if(f==1)
    b='H';
  else
    b='T';
    
  //Determines if the players input is equal to the "coin toss" 
  bool first;
    first=(a==b);

  return first;
}