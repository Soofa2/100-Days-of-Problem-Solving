// F - ABCxxx.cpp 

/*
Problem:
This contest, AtCoder Beginner Contest, is abbreviated as ABC.

When we refer to a specific round of ABC, a three-digit number is appended after ABC. For example, ABC680 is the 680th round of ABC.

What is the abbreviation for the
N
N-th round of ABC? Write a program to output the answer.
*/


// Solution 

#include <iostream>
#include <string> 
using namespace std;

int main()

{
    string abbreviation = "ABC";
    int num;
    
    cin >> num;
    string strNumber = to_string(num);

    cout << abbreviation + strNumber; 
}


