// E - Seismic magnitude scales.cpp 

/*
Problem Statement
Problem Statement
The magnitude of an earthquake is a logarithmic scale of the energy released by the earthquake. It is known that each time the magnitude increases by 1
the amount of energy gets multiplied by approximately 32.

Here, we assume that the amount of energy gets multiplied by exactly
32 each time the magnitude increases by 1.
In this case, how many times is the amount of energy of a magnitude A earthquake 
as much as that of a magnitude B earthquake?
*/

// Solution

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;
	
	int Power = A - B;

	long long result = pow(32, Power);

	cout << result;
}


