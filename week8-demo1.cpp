/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 8 Video Demo - Bubble Sort                    */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>  // Required for cout

// Using directive
using namespace std;

// Global constants
const int SIZE=10;

// Function Prototypes
void printArray(const int array[], int size);
void bubbleSort(int array[], int size);

// Main function
int main()
{
  int i;
  int myArray[SIZE] = {0}; // initialize to all zero's
  
  cout << "Welcome to Bubble Sort!" << endl << endl;

  // get numbers from user
  for (i=0; i<SIZE; i++) {
     cout << "Enter a random integer: ";
     cin >> myArray[i];
  }
  cout << endl;
    
  // print original array
  cout << "The original array is: " << endl;  
  printArray(myArray, SIZE);

  // call the function to sort the array. Note that the array 
  // WILL be modified by the function because arrays are passsed 
  // by REFERENCE
  bubbleSort(myArray, SIZE); 

  // print sorted array
  cout << "The sorted array is: " << endl;  
  printArray(myArray, SIZE);

  // Exit program
  return 0;
}

/* Programmer defined functions --------------------------------- */

// FUNCTION: printArray()
// job: print out each element of a one-dimensional array
// input: integer array and integer size
// output: none
void printArray(int array[], int size) {
    
    int j;
    for (j=0; j<size; j++) {
        cout << "[" << array[j] << "]";
    }
    cout << endl;

    return;
}

// FUNCTION: bubbleSort()
// job: put a one dimensional array in low-to-high order using bubble sort
// input: integer array and integer size
// output: none
void bubbleSort(int theArray[], int theSize) {

	int k;
	int temp;
    int swap;

    // sort the array using bubble sort
    do {
        swap = 0; 

         for (k=0; k<theSize-1;k++) {
        
            if (theArray[k] > theArray[k+1]) {
                // swap them
                swap = 1;
                temp = theArray[k];
                theArray[k] = theArray[k+1];
                theArray[k+1] = temp;
            }    
                
        }
    } while(swap);

}
