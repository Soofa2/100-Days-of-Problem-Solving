// A - Four Points.cpp 

// Problem:




// solution:

#include <iostream>
using namespace std;

int main()
{
	int X1, Y1, X2, Y2, X3, Y3;

	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3; 

	int X4, Y4; 

	if (X1 == X2) {
		X4 = X3;
	}
	else if (X1 == X3) {
		X4 = X2;
	}
	else {
		X4 = X1;
	};

	if (Y1 == Y2) {
		Y4 = Y3;
	}
	else if (Y1 == Y3) {
		Y4 = Y2;
	}
	else {
		Y4 = Y1;
	};

	cout << X3 << " " << Y4; 

}

