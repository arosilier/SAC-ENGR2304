// ENGR 2304 - Class Example 
// Week 8 - Arrays
//
// arrays-tally.cpp
// This program illustrates using an array to implement  tally chart
// to count the frequency of dice rolls

#include <iostream>  // Required for cout
#include <cstdlib>   // Required for random
#include <ctime>     // Require for time()

using namespace std;

// Global constants
const int SIDES=6;
const int ROLLS=100;

// Function Prototypes
int rollDice( void );

// Main function
int main()
{
	
	int tally[SIDES] = {0};
	int rolls = 0, i, thisRoll = 0;
	
	// seed the random generator
	srand(time(0));
	
	for (i = 0; i < ROLLS; i++) {
		
		// roll the dice
		thisRoll = rollDice();
		tally[thisRoll - 1]++;
		
	}
	
	// print results
	for (i = 0; i < SIDES; i++) {
		cout << "Dice roll: " << i+1 << " Count: " <<  tally[i] << endl;
	}

	return 0;
}
	
// Programmer defined functions 

// Function: rollDice
// Job: roll the dice and get a number 1-6 randomly
// Input: none
// Output: integer for the dice roll value

int rollDice( void ) {
    
    return 1 + rand() % SIDES;
    
}


	