#ifndef GAME_H
#define GAME_H

/******************************************************************************
 Game class - This class is responsbile for handling the flow of the game 
 Declaration
 Filename: Game.h

*******************************************************************************/
#include <string>
#include "Card.h"
#include "Player.h"

using namespace std;

class Game {

  // declaration statements for class properties
  private:
  Player player1;
  Player player2;
  vector<Card> table;
  bool status;  // TRUE for game in progress, FALSE if over

  public:
  Game();
  Game(string player1, string player2);
  void playRound();                     // have the two players draw cards and see who wins
  bool getStatus() { return status; }   // check to see if the game is over
  void endGame();                       // Display the winner of the game

};

#endif