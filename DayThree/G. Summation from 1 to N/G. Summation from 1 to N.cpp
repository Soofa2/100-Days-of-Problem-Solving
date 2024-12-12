// G. Summation from 1 to N.cpp 
// Problem:
//Given a number N
//Print the summation of the numbers that is between 1 and N
//(inclusive).

// Solution:

#include <iostream>
using namespace std;

int main() {
    long long N; 
    cin >> N;

    
    long long sum = N * (N + 1) / 2;

    
    cout << sum << endl;

    return 0;
}
