/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 11 Video Demo - Card Game                     */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>
#include "Card.h"  
#include "CardDeck.h"
#include "Play.h"

// Using directive
using namespace std;


// Main function
int main()
{
    int player, turnCount = 0;
    Card card1, card2;
    
    Play game("User", "Computer");
    
    while (game.getStatus() == GAMEON) {
        cout << "Turn #" << ++turnCount << "..................." << endl;
        card1 = game.drawCard(PLAYER1);
        card2 = game.drawCard(PLAYER2);
        player = game.compareCards(card1, card2);
        while (player == TIE) {
            cout << "It's a WAR!" << endl;
            game.updateStatus();
            card1 = game.drawCard(PLAYER1);
            game.updateStatus();
            card1 = game.drawCard(PLAYER1);            
            game.updateStatus();
            card1 = game.drawCard(PLAYER1);
            game.updateStatus();
            card2 = game.drawCard(PLAYER2);
            game.updateStatus();
            card2 = game.drawCard(PLAYER2);
            game.updateStatus();
            card2 = game.drawCard(PLAYER2);
            player = game.compareCards(card1, card2);            
        }
        //game.debug();
        game.clearTable(player);
        //game.debug();
        game.updateStatus();
    }
    
    game.displayWinner();

}    