// D - Blood Pressure.cpp 

/*
Problem:
You are given a person's systolic blood pressure A ,and diastolic blood pressure,
B. Find the mean arterial pressure,C,  which we define as follows:

C = ( (A-B) / 3 )+ b
*/

// Solution 

#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B; 
	float C = ((A - B) / 3.0) + B;
	cout << C; 
}


