 /******************************************************************************
 Game class
 Implementation
 Filename: Game.cpp

*******************************************************************************/
#include <iostream>
#include "Game.h"

Game::Game() : player1("Player 1"), player2("Player 2") {
    status = true;
}

Game::Game(string p1, string p2) : player1(p1), player2(p2) {
    status = true;
}

void Game::playRound() {          
    //make sure both players have cards left
    //tell player 1 to draw a card
    //tell player 2 to draw a card
    //if the cards are the same, tell each player to draw 3 more (make sure they have enough cards left and repeat if necessary)
    //tell whichever player has the highest ranking card in the end to clear the table
    
    int rank1, rank2;
    
    if (player1.cardsOut() || player2.cardsOut()) {
        status = false;
    } else {
        rank1 = player1.playCard(table);
        rank2 = player2.playCard(table);
        while (rank1 == rank2 && rank1 && rank2) {
            cout << "It's a WAR!" << endl;
            rank1 = player1.playCard(table);
            rank1 = player1.playCard(table);
            rank1 = player1.playCard(table);
            rank2 = player2.playCard(table);
            rank2 = player2.playCard(table);
            rank2 = player2.playCard(table);
        }
        if (rank1 > rank2) player1.clearTable(table);
        else player2.clearTable(table);
    }

}

void Game::endGame() {    
    int p1Count = player1.countPile();
    int p2Count = player2.countPile();
    
    cout << "Game over! Here are the card counts:" << endl;
    cout << player1.getName() << ": " << p1Count << endl;
    cout << player2.getName() << ": " << p2Count << endl;
    
    if (p1Count > p2Count)
        cout << player1.getName() << " WINS!" << endl;
    else if (p1Count < p2Count)
        cout << player2.getName() << " WINS!" << endl;
    else
        cout <<"It's a TIE!" << endl;

}