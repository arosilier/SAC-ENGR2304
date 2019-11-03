 /******************************************************************************
 Play class
 Implementation
 Filename: Play.cpp

*******************************************************************************/
#include <iostream>
#include "Play.h"

// constructors
Play::Play() : p1Deck(), p2Deck() {
    
    player1 = "Computer";
    player2 = "User";
    status = GAMEON;
    
    p1Deck.shuffleDeck();
    p2Deck.shuffleDeck();
    
    cout << "Both decks have been shuffled! Ready to play." << endl;

}

Play::Play(string p1, string p2) : p1Deck(), p2Deck() {
    
    player1 = p1;
    player2 = p2;
    status = GAMEON;
    
    p1Deck.shuffleDeck();
    p2Deck.shuffleDeck();
    
    cout << "Both decks have been shuffled! Ready to play." << endl;

}
  
  
// other member methods
Card Play::drawCard(int player) {
    
    Card theCard;
    
    switch (player) {
        case PLAYER1:
            theCard = p1Deck.draw();
            cout << player1 << " drew ";
            break;
        case PLAYER2:
            theCard = p2Deck.draw();
            cout << player2 << " drew ";
            break;
    }
    theCard.displayCard(cout);
    cout << endl;
    
    // put card on clearTable
    table.push_back(theCard);
    
    // return value of card
    return theCard;
    
}

int Play::compareCards(Card c1, Card c2) {
    int winner = 0;
    
    if (c1.getRank() > c2.getRank()) {
        winner = PLAYER1;
    } else if (c1.getRank() < c2.getRank()) {
        winner = PLAYER2;
    } else winner = TIE;
    
    return winner;
}

void Play::clearTable(int player) {
    
    switch (player) {
        case PLAYER1:
            for (auto i=table.begin(); i != table.end(); i++) {
                p1Pile.push_back(*i);
            }
            table.clear();
            cout << "Card(s) awarded to " << player1 << endl;
            break;
        case PLAYER2:
            for (auto i=table.begin(); i != table.end(); i++) {
                p2Pile.push_back(*i);
            }
            table.clear();
            cout << "Card(s) awarded to " << player2 << endl;
            break;
    }
   
}

void Play::updateStatus() {
    if (p1Deck.deckEmpty() || p2Deck.deckEmpty()) 
        status = GAMEOVER;
    else
        status = GAMEON;
}

void Play::displayWinner() {
    int winner = 0;
    
    cout << "Game over!" << endl;
    cout << player1 << " has " << p1Pile.size() << " cards" << endl;
    cout << player2 << " has " << p2Pile.size() << " cards" << endl;
    cout << "The winner is ";
    
    if (p1Pile.size() > p2Pile.size()) {
        cout << player1 << endl;
    } else if (p1Pile.size() < p2Pile.size()) {
        cout << player2 << endl;
    } else {
        cout << "TIE game" << endl;
    }
    
}

void Play::debug() {
    cout << "Table:" << endl;
    for (auto i=table.begin(); i != table.end(); i++) {
        i->displayCard(cout);
        cout << " ";
    }
    cout << endl;
   
    cout << "Player 1 pile: " << endl;
    for (auto i=p1Pile.begin(); i != p1Pile.end(); i++) {
        i->displayCard(cout);
        cout << " ";
    }
    cout << endl;
    
    cout << "Player 2 pile: " << endl;
    for (auto i=p2Pile.begin(); i != p2Pile.end(); i++) {
        i->displayCard(cout);
        cout << " ";
    }
    cout << endl;
}
