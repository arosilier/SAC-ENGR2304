// ENGR 2304 - Mini Program
// Week 11 - OOP
//
// oop-vectors.cpp
// This program will create a vector and illustrate the use of a variety of
// container methods and algorithm functions

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
 
    cout << "Creating vector " << endl;
    for (int i = 100; i <= 105; i++)
        v.push_back(i);
  
    cout << "Traversing using begin() and end(): ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
    
    v.pop_back();
    v.push_back(110);
    v.push_back(111);
    v.push_back(112);
    cout << "After removing one and adding three more elements: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
 
    random_shuffle(v.begin(), v.end());
        cout << "After random_shuffle(): ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
 
    sort(v.begin(), v.end());
    cout << "After sort(): ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
 
    reverse(v.begin(), v.end());
    cout << "After reverse(): ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}
