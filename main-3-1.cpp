#include <iostream>
#include "Computer.h"
#include "Person.h"
using namespace std;
int main()
{
Computer compPlayer("s");
Person perPlayer;
// Prompt for player move
perPlayer.move();
// call computer move
compPlayer.move();
cout << "Computer move: " << compPlayer.getMove()<<endl;
// repeat until a winner is determined
while (!perPlayer.win(&compPlayer))
{
cout << "draw! go again" << endl;
perPlayer.move();
compPlayer.move();
cout << "Computer move: " << compPlayer.getMove() << endl;
}
// print the previous moves of both player and computer
cout<<"Computer previous moves: "<<compPlayer.getMoves() << endl;
cout<<"Person previous moves: "<<perPlayer.getMoves() << endl;
return 0;
}