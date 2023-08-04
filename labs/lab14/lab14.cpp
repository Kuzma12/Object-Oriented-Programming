#include <iostream>
using namespace std;

int main() {
    const int SIZE = 50;
    int alpha[50];
    //double alpha[SIZE];

    // Initialize the first 25 components to the square of the index
    for (int i = 0; i < SIZE/2; i++) {
        alpha[i] = i * i;
    }

    // Initialize the last 25 components to three times the index
    for (int i = SIZE/2; i < SIZE; i++) {
        alpha[i] = 3 * i;
    }

    // Output the array with 10 elements per line
    for (int i = 0; i < SIZE; i++) {
        cout << alpha[i] << " ";
        if ((i+1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}


/*
Write a C++ program that declares an array alpha of 50 components of type double. 
Initialize the array so that the first 25 components are equal to the square of the index variable 
(the position that element will occupy), and the last 25 components are equal to three times the index variable. 
Output the array so that 10 elements per line are printed.

For the number at index 5, the value would be 25, which is 5 squared. 
The 25th index would hold a value of 75, which is 3 * 25.


0    1    4    9   16   25   36   49   64   81 
 100  121  144  169  196  225  256  289  324  361 
 400  441  484  529  576   75   78   81   84   87 
 90   93   96   99  102  105  108  111  114  117 
 120  123  126  129  132  135  138  141  144  147 





*/