// B - Get Closer.cpp 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

int main()
{
    int A, B; 
    
    cin >> A >> B; 

    double result = sqrt(A * A + B * B);

    if (A != 0 && B != 0 && result > 1) {
        double disOne = static_cast<double>(A) / result;
        double disTwo = static_cast<double>(B) / result;

       
        cout << fixed << setprecision(6);
        cout <<  disOne << endl;
        cout <<  disTwo << endl;
    }

    
}


