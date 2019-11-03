#ifndef PLAY_H
#define PLAY_H

/******************************************************************************
 Play class - This class is responsbile for handling the flow of the game 
 Declaration
 Filename: Play.h

*******************************************************************************/
#include <string>
#include "Card.h"
#include "CardDeck.h"

using namespace std;

// global constants
const int PLAYER1=1, PLAYER2=2, TIE=3, GAMEOVER=4, GAMEON=5;

class Play {

  // declaration statements for class properties
  private:
  string player1;
  string player2;
  CardDeck p1Deck;
  CardDeck p2Deck;
  vector<Card> table, p1Pile, p2Pile;
  
  int status; // indicates if game is over or not
 
  // declaration statements for the class methods
  public:
  
  // constructors
  Play();
  Play(string p1, string p2);
  
  // accessor methods
  string getPlayer1() { return player1; };
  string getPlayer2() { return player2; };
  int getStatus() { return status; };

  // mutator methods
  void setPlayer1(string n) { player1 = n; }
  void setPlayer2(string n) { player2 = n; }

  // other member methods
  Card drawCard(int player);
  int compareCards(Card c1, Card c2);
  void clearTable(int player);
  void updateStatus();
  void displayWinner();
  
  // debug only methods
  void debug();

};

#endif