/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 8 Video Demo - Equation Solver                */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>  // Required for cout
#include <iomanip>
#include <cstdlib>

// Using directive
using namespace std;

// Global constants
const int SIZE=2;

// Function Prototypes
void findInverse(const float matrix[][SIZE], float inverse[][SIZE]);
void multiplyMatrixVector(const float matrix[][SIZE], const float vector[], float result[]);
void printMatrix(const float matrix[][SIZE], int size);
void printVector(const float vector[], int size);

// Main function
int main()
{
  // Declare variables
  // Using naming conventions Ax = b
  float matrix_A[SIZE][SIZE] = {0}, vector_b[SIZE] = {0}, vector_x[SIZE] = {0}, 
        matrix_Ainv[SIZE][SIZE] = {0};
  
  // Get equation coefficients from user and save into matrix_A & vector_b
  cout << "Welcome to my equation solver!" << endl << endl;
  
  cout << "Please enter the coefficients of the first equation in the form Ax + Bx = C" << endl;
  cout << "A: ";
  cin >> matrix_A[0][0];
  cout << "B: ";
  cin >> matrix_A[0][1];
  cout << "C: ";
  cin >> vector_b[0];

  cout << "Please enter the coefficients of the second equation in the form Ax + Bx = C" << endl;
  cout << "A: ";
  cin >> matrix_A[1][0];
  cout << "B: ";
  cin >> matrix_A[1][1];
  cout << "C: ";
  cin >> vector_b[1];
 
   // Debug
//  cout << "... matrix A is ..." << endl;
//  printMatrix(matrix_A, SIZE);
//  cout << "... vector b is ..." << endl;
//  printVector(vector_b, SIZE);

  // Now find the inverse of matrix_A and multiply by vector_b
  findInverse(matrix_A, matrix_Ainv);
  multiplyMatrixVector(matrix_Ainv, vector_b, vector_x);
  
  // Debug
//  cout << "... matrix Ainv is ..." << endl;
//  printMatrix(matrix_Ainv, SIZE);
//  cout << "... vector x is ..." << endl;
//  printVector(vector_x, SIZE);
  
  // The result is contained in vector_x
  cout << fixed << setprecision(2);
  cout << endl << "The solution point is (" << vector_x[0];
  cout << ", " << vector_x[1] << ")" << endl;
 
  // Exit program
  return 0;
}

/* Programmer defined functions --------------------------------- */

// Function: findInverse
// Job: calculate the inverse of a 2x2 matrix and save the result into a 2x2 
//      array
// Input: two 2x2 arrays (the first is the original array and the second will 
//        be updated with the inverse)
// Output: nothing
// Precondition: The matrix is populated with values
// Postcondition: The inverse matrix is updated with the result
void findInverse(const float matrix[][SIZE], float inverse[][SIZE]) {
  float determinant;
  float adjoint[SIZE][SIZE] = {0};
  
  // Calculate the determinant of the 2x2 matrix using the 
  // formula A1,1 * A2,2 - A2,1 * A2,1
  determinant = matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
  
  // Check for no solution or infinite solutions
  if (determinant == 0) {
      cerr << "Sorry, we cannot find a solution to this problem.";
      exit(1);
  } 
  
  // Calculate the adjoint of the 2x2 matrix by swapping A1,1 and A2,2 and 
  // changing the sign on A1,2 and A 2,1
  adjoint[0][0] = matrix[1][1];
  adjoint[1][1] = matrix[0][0];
  adjoint[0][1] = -matrix[0][1];
  adjoint[1][0] = -matrix[1][0];

//   cout << "... adjoint is ..." << endl;
//   printMatrix(adjoint, SIZE);

  // Calculate inverse by multiplying the adjoint by 1/determinant
  inverse[0][0] = adjoint[0][0] * 1 / determinant;
  inverse[0][1] = adjoint[0][1] * 1 / determinant;
  inverse[1][0] = adjoint[1][0] * 1 / determinant;
  inverse[1][1] = adjoint[1][1] * 1 / determinant;
 
//   cout << "... inverse is ..." << endl;
//   printMatrix(inverse, SIZE);
      
  return;

}

// Function: multiplyMatrixVector
// Job: multiply a 2x2 matrix times a vector and save the result into a 1x2 array
// Input: a 2x2 array and two 1x2 arrays 
// Output: nothing
// Precondition: The matrix and vector are both populated with values
// Postcondition: The resule vector is updated with the result

void multiplyMatrixVector(const float matrix[][SIZE], const float vector[], 
                          float result[] ) {
                              
    // result[0] =  A11 * b1 + A12 * b2
    // result[1] =  A21 * b1 + A22 * b2
    
    result[0] = matrix[0][0] * vector[0] +
                matrix[0][1] * vector[1];
    result[1] = matrix[1][0] * vector[0] +
                matrix[1][1] * vector[1];                          

   return;
}

// Debug functions

void printMatrix(const float matrix[][SIZE], int size) {
    
    for (int i=0; i < size; i++) {
      cout << "|";
      for (int j=0; j < size; j++) {
        cout << matrix[i][j] << " ";
      }
      cout << "|" << endl;
    }
    
}

void printVector(const float vector[], int size) {
    
    for (int i=0; i < size; i++) {
      cout << "|";
      cout << vector[i];
      cout << "|" << endl;
    }
    
}
