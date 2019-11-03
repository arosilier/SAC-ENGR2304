/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 11 Video Demo - Card Game                     */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>
#include "Game.h"
#include "Player.h"

// Using directive
using namespace std;


// Main function
int main()
{
    int player, round = 0;
    Card card1, card2;
    
    srand(time(NULL)); //Must seed RNG 1 time!
    
    Game game("User", "Computer");
    while (game.getStatus()) {
        cout << "Round #" << ++round << " ............." << endl;
        game.playRound();
    }
    game.endGame();

}    