/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 6 Video Demo - Hot Lava Dice Game             */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>  // Required for cout
#include <cstdlib>   // Required for random
#include <ctime>     // Require for time()

// Using directive
using namespace std;

// Function Prototypes
int getNumberInRange(int a, int b);
int rollDice( void );

// Main function
int main()
{
  // Declare variables
  int wins=0, loses=0;
  int flag=0;
  int hotlava, roll;
  char repeat;
  
  // Prep Work
  srand(time(0));  // seed the random generator
  
  cout << "Welcome to the Hot Lava Dice Game!" << endl;

  do { 
      
    // Get the "hot lava" number
    cout << endl << "Which number is hot lava?" << endl;
    hotlava = getNumberInRange(1, 6);
    cout << "Ok, I'll try to avoid that! Here we go!" << endl;
    
    flag = 0;
    repeat = 'n';
    
    // Roll the dice three times and check for hot lava
    for (int i=1; i<=3; i++) {
        roll = rollDice();
        cout << "Roll " << i << ": " << roll << endl;
        
        if (roll == hotlava) {
            flag = 1;
            break;
        }
    }
    
    // Print final game result and update counts
    if (flag == 0) {
        cout << "I stayed out of the hot lava! You LOSE!!" << endl;
        loses++;
    } else if (flag == 1) {
        cout << "Oh no! I'm in hot lava! You WIN!" << endl;
        wins ++;
    }
    
    cout << "You have " << wins << " wins and " << loses << " losses." << endl;
     
    cout << endl << "Do you want to play again? y for yes, n for no: " ;
    cin >> repeat;
       
  } while (repeat == 'y' || repeat == 'Y');
  
  cout << "Ok, thanks for playing!!";
  
  // Exit program
  return 0;
}

/* Programmer defined functions --------------------------------- */

// Function: getNumberInRange
// Job: ask the user for an integer in a specified range; if the number entered
// is out of range, print an error and repeat
// Input: integers representing the low and high end of the desired range (inclusive)
// Output: the validated integer entered by the user
int getNumberInRange(int a, int b) {

  int num;
  int flag;

  do {
    flag = 0; // reset sentinel to assume valid input

    cout << "Please enter a number between " << a << " and " << b << " (inclusive): ";
    cin >> num; 

    if (num < a) { 
      cout << "That's too low" << endl;
      flag = 1; // set sentinel to trigger repeat
    } else if (num > b) {
      cout << "That's too high" << endl;
      flag = 1; // set sentinel to trigger repeat
    }

  } while ( flag ); // repeat if number is out of range
  
  return num;

}

// Function: rollDice
// Job: roll the dice and get a number 1-6 randomly
// Input: none
// Output: integer for the dice roll value

int rollDice( void ) {
    
    return 1 + rand() % 6;
    
}

