#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int userinput = 0;
  int GameWonNum = 0;
  int gamestartnum = 0;

  cout<<"How many times do you want to play Door Prize?\n";
  cin>>userinput;
 
    while(gamestartnum <= userinput)
    {
        game.newGame();
        game.guessDoorC();
        game.guessDoorC();
        if(game.isWinner() == true)
        {
            GameWonNum++;
        }
        gamestartnum++;

    }
    cout<<"You won "<<GameWonNum<<" games."<<endl;

  
  return 0;
}
