/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 9 Video Demo - Reversing an array             */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>  // Required for cout

// Using directive
using namespace std;

// Global constants

// Function Prototypes
void fillArray(int *ptr, int size);
void printArray(const int *ptr, int size);
void revArray(int *ptr, int size);

// Main function
int main()
{
    // declare variables
    int arraySize;
    int *arrayPtr = nullptr;
    
    cout << "Welcome to my array program!" << endl;
    
    // ask the user how big the array should be
    do {
        cout << "How many element should the array hold?" << endl;
        cin >> arraySize;
        
        if (arraySize < 1) cout << "Enter a positive number!" << endl;
        
    } while (arraySize < 1);
    
    // dynamically create the array
    arrayPtr = new int[arraySize];
    
    // fill the array
    fillArray(arrayPtr, arraySize);

    // print the array
    cout << "This is the original array: " << endl;
    printArray(arrayPtr, arraySize);
    
    // reverse the array
    revArray(arrayPtr, arraySize);
    
    // print the array
    cout << "This is the reversed array: " << endl;
    printArray(arrayPtr, arraySize);
    
    // deallocate memory
    delete [] arrayPtr;
 
    return 1;
}

// Programmer defined functions 
   
// Function: fillArray
// Job: populate a matrix with user input
// Input: a pointer to an array, the size of the array
// Output: nothing
// Precondition: The array has been allocated and pointed to by ptr
// Postcondition: The array is updated with the values from the user

void fillArray(int *ptr, int size) {
    
    for (int i=0; i<size; i++) {
        cout << "Enter an integer: ";
        cin >> *(ptr + i);
    }
    return;
}

// Function: printArray
// Job: print an array
// Input: a pointer to an array, the size of the array
// Output: nothing
// Precondition: The array has been allocated and pointed to by ptr
// Postcondition: No change to array

void printArray(const int *ptr, int size) {
    
    for (int i=0; i<size; i++) {
        cout << "[" << *(ptr + i) << "]";
    }
    cout << endl;
    return;
}

// Function: revArray
// Job: reverse the contents of an array
// Input: a pointer to an array, the size of the array
// Output: nothing
// Precondition: The array has been allocated and pointed to by ptr
// Postcondition: The array is updated with the reversed array

void revArray(int *ptr, int size) {
    
    int *left=nullptr, *right=nullptr;
    int tmp;
    
    left = ptr;
    right = ptr + (size-1);
    
    // swap endpoints
    while (left < right) {
        tmp = *left;
        *left = *right;
        *right = tmp;
        
        left++;
        right--;
    }
    
    return;
    
}
