
#include "roshambo.h"


void genBoards (string brd[], int ibrd[])
{
  int i, count;
  count=11;

  for(i=0;i<9;i++)
  {
    brd[i]="□";
    ibrd[i]=count;
    count++;
  } 
 
}