 /******************************************************************************
 Player class
 Implementation
 Filename: Player.cpp

*******************************************************************************/
#include <iostream>
#include "Player.h"

Player::Player() : deck() {
    name = "No name";
    deck.shuffleDeck();
    cout << name << " is ready to play!" << endl;
}

Player::Player(string n) : deck() {
    name = n;
    deck.shuffleDeck();
    cout << name << " is ready to play!" << endl;
}              


int Player::playCard(vector<Card>& t) {
    
    if (deck.deckEmpty()) {
        cout << name << " is out of cards!" << endl;
        return 0;
    }
    
    cout << name << " draws a ";
    Card card = deck.draw();
    card.displayCard(cout);
    cout << endl;
    
    // put the card on the table
    t.push_back(card);
    
    return card.getRank();
}                 

void Player::clearTable(vector<Card>& t) {
    
    cout << name << " wins this round." << endl;
    for (auto i=t.begin(); i != t.end(); i++) {
        pile.push_back(*i);
    }
    t.clear();
}              

bool Player::cardsOut() {
    return deck.deckEmpty();
}  

int Player::countPile() {
    return pile.size();
}                
