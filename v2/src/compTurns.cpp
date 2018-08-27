#include "roshambo.h"


void compturns (plays& computer, int ibrd[], int& rc, bool pm[], int& bc)
{
 
  if(bc==12)
  {
    cout << "I, " << computer.name << " get to go first!\n\n";
    rc = 0;
  }

  do{
 
    // If it is the computer first move a random move is generated
    if(rc==0||rc==2)
    {
      bc=rand() % 9;
    }
    else // Determines whether or nor the computer can make a smart play
    {
      // If the computer can win, the computer will play in the appropriate spot
      if((ibrd[0]==ibrd[1]||ibrd[6]==ibrd[4]||ibrd[5]==ibrd[8])&&ibrd[2]==13&&(ibrd[0]==2||ibrd[4]==2||ibrd[5]==2))
      {
        bc=2;
      }
      else if((ibrd[0]==ibrd[3]||ibrd[2]==ibrd[4]||ibrd[7]==ibrd[8])&&ibrd[6]==17&&(ibrd[0]==2||ibrd[4]==2||ibrd[7]==2))
      {
        bc=6;
      }
      else if((ibrd[0]==ibrd[4]||ibrd[2]==ibrd[5]||ibrd[6]==ibrd[7])&&ibrd[8]==19&&(ibrd[0]==2||ibrd[2]==2||ibrd[7]==2))
      {
        bc=8;
      }
      else if((ibrd[1]==ibrd[2]||ibrd[8]==ibrd[4]||ibrd[3]==ibrd[6])&&ibrd[0]==11&&(ibrd[1]==2||ibrd[4]==2||ibrd[5]==2))
      {
        bc=0;
      }
      else if((ibrd[1]==ibrd[4]||ibrd[6]==ibrd[8])&&ibrd[7]==18&&(ibrd[1]==2||ibrd[6]==2))
      {
        bc=7;
      }
      else if((ibrd[3]==ibrd[4]||ibrd[2]==ibrd[8])&&ibrd[5]==16&&(ibrd[3]==2||ibrd[2]==2))
      {
        bc=5;
      }
      else if((ibrd[5]==ibrd[4]||ibrd[0]==ibrd[6])&&ibrd[3]==14&&(ibrd[4]==2||ibrd[0]==2))
      {
        bc=3;
      }
      else if((ibrd[7]==ibrd[4]||ibrd[0]==ibrd[2])&&ibrd[1]==12&&(ibrd[4]==2||ibrd[0]==2))
      {
        bc=1;
      }
      else if((ibrd[0]==ibrd[8]||ibrd[1]==ibrd[7]||ibrd[2]==ibrd[6]||ibrd[3]==ibrd[5])&&ibrd[4]==15&&(ibrd[0]==2||ibrd[1]==2||ibrd[2]==2||ibrd[3]==2))
      {
        bc=4;
      }
      // If the player has two in a row, the computer will block them
      else if((ibrd[0]==ibrd[1]||ibrd[6]==ibrd[4]||ibrd[5]==ibrd[8])&&ibrd[2]==13&&(ibrd[0]==1||ibrd[4]==1||ibrd[5]==1))
      {
        bc=2;
      }
      else if((ibrd[0]==ibrd[3]||ibrd[2]==ibrd[4]||ibrd[7]==ibrd[8])&&ibrd[6]==17&&(ibrd[0]==1||ibrd[4]==1||ibrd[7]==1))
      {
        bc=6;
      }
      else if((ibrd[0]==ibrd[4]||ibrd[2]==ibrd[5]||ibrd[6]==ibrd[7])&&ibrd[8]==19&&(ibrd[0]==1||ibrd[2]==1||ibrd[7]==1))
      {
        bc=8;
      }
      else if((ibrd[1]==ibrd[2]||ibrd[8]==ibrd[4]||ibrd[3]==ibrd[6])&&ibrd[0]==11&&(ibrd[1]==1||ibrd[4]==1||ibrd[5]==1))
      {
        bc=0;
      }
      else if((ibrd[1]==ibrd[4]||ibrd[6]==ibrd[8])&&ibrd[7]==18&&(ibrd[1]==1||ibrd[6]==1))
      {
        bc=7;
      }
      else if((ibrd[3]==ibrd[4]||ibrd[2]==ibrd[8])&&ibrd[5]==16&&(ibrd[3]==1||ibrd[2]==1))
      {
        bc=5;
      }
      else if((ibrd[5]==ibrd[4]||ibrd[0]==ibrd[6])&&ibrd[3]==14&&(ibrd[4]==1||ibrd[0]==1))
      {
        bc=3;
      }
      else if((ibrd[7]==ibrd[4]||ibrd[0]==ibrd[2])&&ibrd[1]==12&&(ibrd[4]==1||ibrd[0]==1))
      {
        bc=1;
      }
      else if((ibrd[0]==ibrd[8]||ibrd[1]==ibrd[7]||ibrd[2]==ibrd[6]||ibrd[3]==ibrd[5])&&ibrd[4]==15&&(ibrd[0]==1||ibrd[1]==1||ibrd[2]==1||ibrd[3]==1))
      {
        bc=4;
      }
      else // If the computer couldn't win or the player couldn't be blocked, a random move is generated
        bc=rand() % 9;
    }
    
    // Checks to see if the move is valid. If not the function is ran again.
    if(pm[bc])
      pm[bc]=false;
    else
      bc=9;
    }while(bc==9);
 
 
  cout << "My turn...\n\n";
  
  rc++; //Increases the round count
}