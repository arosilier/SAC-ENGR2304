// ENGR 23004 - Class Example 
// Week 4 - Repetition
//
// sentinel-trigger.c
// This program will ask the user to enter a series of calorie values
// for the food items. The input stops when the total calorie count
// exceeds 500 calories.

#include <iostream>

using namespace std;

int main() {

const int MAX_CALORIES = 500;
  int number = 0;
  int sum = 0; // always important to initialize running totals to zero!

  do {
    cout << "Please enter the number of calories for the food item: ";
    cin >> number;
    
    sum += number;

  } while (sum < MAX_CALORIES); // repeat as long we haven't hit the max

  cout << "That last item put you over the limit of " << MAX_CALORIES << "!" << endl;
  cout << "The total calories in this meal is " << sum << endl;
  cout << "If you don't eat the last item you will be at " << sum-number;
}
