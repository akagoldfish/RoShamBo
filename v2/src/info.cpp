
#include "roshambo.h"

void info (plays& player) //Collects the players names
{
  //Asks the player for their name
  cout << "What is your name player " << player.number << endl;
  //Takes whatever the player enters to be their name
  getline(cin >> ws, player.name);
}