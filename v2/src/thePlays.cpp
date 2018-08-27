
#include "roshambo.h"


void thePlays (plays& player, string brd[], int ibrd[], int bc)
{
  int i, count;
  count=0;
 
  brd[bc]=player.c;
  if(player.number==1)
    ibrd[bc]=1;
  else
    ibrd[bc]=2;

  for(i=0;i<9;i++)
  {
    if(count<3)
    {
      cout << brd[i] << " ";
      count++;
    }
    else
    {
      count=1;
      cout << endl << brd[i]<<" ";
    }
  }
  
  cout << endl << endl;
}