// B - Bichrome Cells

/*We have an 
N
×
N
N×N square grid.

We will paint each square in the grid either black or white.

If we paint exactly 
A
A squares white, how many squares will be painted black?


2*/


// Solution 

#include <iostream>
using namespace std; 

int main()
{
    int A, N;
    cin >> N >> A; 

    cout << "The number of squares that will be printed in black is " << N * N - A;
}

