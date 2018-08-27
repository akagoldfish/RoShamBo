
#include "roshambo.h"

bool wwcd (string brd[], int ibrd[], int rc)
{
  bool win;
 
  if((ibrd[0]==ibrd[1]&&ibrd[0]==ibrd[2])||(ibrd[3]==ibrd[4]&&ibrd[3]==ibrd[5])||(ibrd[6]==ibrd[7]&&ibrd[6]==ibrd[8])||(ibrd[0]==ibrd[3]&&ibrd[0]==ibrd[6])||(ibrd[1]==ibrd[4]&&ibrd[1]==ibrd[7])||(ibrd[2]==ibrd[5]&&ibrd[2]==ibrd[8])||(ibrd[0]==ibrd[4]&&ibrd[0]==ibrd[8])||(ibrd[2]==ibrd[4]&&ibrd[2]==ibrd[6]))
  {
    win=true;
    rc=10;
  }
  else
    win=false;
  return win;
}