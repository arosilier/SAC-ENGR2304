#ifndef PLAYER_H
#define PLAYER_H

/******************************************************************************
 Player class - This class is responsbile for modeling the player of the game
 Declaration
 Filename: Player.h

*******************************************************************************/
#include <string>
#include "Card.h"
#include "CardDeck.h"

using namespace std;

class Player {
    private:
    string name;
    CardDeck deck;
    vector<Card> pile;
    
    public:
    Player();
    Player(string n);                // set player name and shuffle deck
    string getName() {return name;}  // get the player's name
    int playCard(vector<Card>& t);   // play a card from deck onto table, returns rank
    void clearTable(vector<Card>& t);// put cards from table into pile
    bool cardsOut();                 // TRUE if out of cards
    int countPile();                 // see how many cards are in the pile

};

#endif
