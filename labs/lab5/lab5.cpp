#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double Kilo_weight;
    
    cout << "Enter your weight: ";
    cin >> Kilo_weight;

    cout << "Your Weight in pounds: " << fixed << showpoint << setprecision(2) << Kilo_weight * 2.2 << endl;
    
    
    return 0;
}

/*Write a program that prompts the user to enter the weight of a person in 
kilograms and outputs the equivalent weight in pounds (Note that 1 kilogram equals 2.2 pounds). 
Format your output with two decimal places.*/