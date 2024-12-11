// I - Sum of squares.cpp 


// Problem:
//Find the sum of the squares of two numbers.

// Input:
// Two integers a and b of which does not exceed 10^9 in absolute value

// Output"
// Print the value of the expression a^2 + b^2 

#include <iostream>
using namespace std;

int main()
{
    int a, b; 
    cin >> a >> b; 

    long long resultOne = 1ll * a * a;
    long long resultTwo = 1ll * b * b;

    cout << resultOne + resultTwo;
}


