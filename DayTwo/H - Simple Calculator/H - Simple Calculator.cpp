// H - Simple Calculator.cpp 

// Problem
// Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
//Input
//Only one line containing two separated numbers X, Y
//Output
//Print 3 lines that contain the following in the same order :

//"X + Y = summation result" without quotes.
//"X * Y = multiplication result" without quotes.
//"X - Y = subtraction result" without quotes.

#include <iostream>
using namespace std;

int main()
{
    long long X, Y;
    cin >> X >> Y; 

    cout << X << " + " << Y << " = " << X + Y << endl;
    cout << X << " * " << Y << " = " << X * Y << endl;
    cout << X << " - " << Y << " = " << X - Y << endl;
}

