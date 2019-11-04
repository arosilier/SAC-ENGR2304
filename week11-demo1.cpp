/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 11 Video Demo - Card Game                     */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>
#include "Game.h"

// Using directive
using namespace std;


// Main function
int main()
{
    int round = 0;
    
    srand(time(NULL)); //Must seed RNG 1 time!
    
    Game game("User", "Computer");
    while (game.getStatus()) {
        cout << "Round #" << ++round << " ............." << endl;
        game.playRound();
    }
    game.endGame();

}    
