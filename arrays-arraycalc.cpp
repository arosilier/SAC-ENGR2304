// ENGR 2304 - Mini Program
// Week 8 - Arrays
//
// arrays-arraycalc.cpp
// This program will create an array and ask the user to enter
// values to populate it. The missing sections need to be filled 
// so that the program can then calculate the sum of all values in 
// the array and the average of all value sin the array.

#include <iostream>
#include <iomanip>

using namespace std;

// Global constants
const int ARRAY_SIZE=10;

// main() function
int main() {

    // Declare variables
    int i;
    float theArray[ARRAY_SIZE];
    float sum=0, average=0;
    
    // Ask the user to enter values to fill in the array
    for (i = 0; i < ARRAY_SIZE; i++) {
    	cout << "Enter value for element [" << i << "]: ";
    	cin >> theArray[i];
    }
    
    // Calculate the sum of all values in this array using
    // repetition. Then calculate the average. Save both
    // values in to the variables already declared. 
    // DO NOT USE ANY MAGIC NUMBERS -- all references to the 
    // array size should use the symbolic constant defined above
    
    // Fill in the missing section here....
    
    
    // Results are printed for the user
    cout << fixed << setprecision(2);
    cout << "The sum of all values is " << sum << endl;
    cout << "The average of all values is " << average << endl;
    
    
    return 0;
}
