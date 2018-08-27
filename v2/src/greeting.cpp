
#include "roshambo.h"


void greeting (plays& computer, plays& player1, plays& player2, char& gm, char& again, bool& gt, bool pMoves[], int& rCount, int iboard[], string sboard[])
{
  
  int i;
  if (gt)
  {
    //The so called "Title Screen"
    cout << "\n##################################################################################################################\n";
    cout <<   "#                                                                                                                #\n";
    cout <<   "#  ██████╗  ██████╗ ███████╗██╗  ██╗ █████╗ ███╗   ███╗██████╗  ██████╗     ██████╗  ██████╗  ██████╗  ██████╗   #\n";
    cout <<   "#  ██╔══██╗██╔═══██╗██╔════╝██║  ██║██╔══██╗████╗ ████║██╔══██╗██╔═══██╗    ╚════██╗██╔═████╗██╔═████╗██╔═████╗  #\n";
    cout <<   "#  ██████╔╝██║   ██║███████╗███████║███████║██╔████╔██║██████╔╝██║   ██║     █████╔╝██║██╔██║██║██╔██║██║██╔██║  #\n";
    cout <<   "#  ██╔══██╗██║   ██║╚════██║██╔══██║██╔══██║██║╚██╔╝██║██╔══██╗██║   ██║     ╚═══██╗████╔╝██║████╔╝██║████╔╝██║  #\n";
    cout <<   "#  ██║  ██║╚██████╔╝███████║██║  ██║██║  ██║██║ ╚═╝ ██║██████╔╝╚██████╔╝    ██████╔╝╚██████╔╝╚██████╔╝╚██████╔╝  #\n";
    cout <<   "#  ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝     ╚═╝╚═════╝  ╚═════╝     ╚═════╝  ╚═════╝  ╚═════╝  ╚═════╝   #\n";
    cout <<   "#                                                                                                                #\n";
    cout <<   "##################################################################################################################\n";
  
    //A greeting to be played once in the beginning
    cout << endl << "\nGreetings and welcome to ROSHAMBO 3000.\nI am " << computer.name << ", the creator of all things awesome.\n";
    gt = false;
  }

  again='N';

  //Sets all of the possible moves to true
  for(i=0;i<9;i++)
  {
    pMoves[i]=true;
  }

  //Sets an object in the array to false to stop loops
  pMoves[9]=false;

  //Generates a clean board
  genBoards(sboard, iboard);
 

  //Sets to the first round/move
  rCount=1;

  do{
    //Asks the user if they would like to play One Player or Two player
    cout << endl << "If you feel like you are good enough, please enter 1 to play against me.\nIf you are too scared to face me, please enter 2 to play against another player:\n";
    cin >> gm;
  
    //If an incorrect reponse is inputted the user will be asked again    
    }while(gm!='1'&&gm!='2');
  
}