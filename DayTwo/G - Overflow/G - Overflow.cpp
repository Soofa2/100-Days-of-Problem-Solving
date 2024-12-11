// G - Overflow.cpp 

/*
Problem:
Given two integers A an B, output A * B

Input:
The only line of input contains two integers

Output:
Print a single integer, the output of A * B 
*/

#include <iostream>
using namespace std; 

int main()
{
    int A, B;

    cin >> A >> B;

    long long result =  A * B; 

    cout << result;
}


// 1ll denotes a literal constant of type long long 
// When performing arithmetic operations involving very large numbers,
//using 1LL ensures that the calculations are done in long long to prevent integer overflow

