// Digits Summation.cpp 

// Problem:
// Given two numbers N and M. Print the summation of their last digits.
// Input: Only one line containing two numbers
// Output: Print the answer of the problem.
// Example: input: 13, 12, output should be 5


// Solution


#include <iostream>
using namespace std;

int main()
{
    long long N, M; 
    cin >> N >> M;

    int num1 = N % 10;
    int num2 = M & 10;

    cout << num1 + num2; 
    
    return 0;

}


