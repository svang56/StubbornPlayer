#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int userinput = 0;
  int GameWonNum = 0;

  cout<<"How many times do you want to play Door Prize?\n";
  cin>>userinput;
 
   for(int gamestartnum = 0; gamestartnum < userinput; gamestartnum++)
   {
        game.newGame();
        game.guessDoorC();
        game.guessDoorC();
        if(game.isWinner() == true)
        {
            GameWonNum++;
        }

    }
    cout<<"You won "<<GameWonNum<<" games."<<endl;

  
  return 0;
}
