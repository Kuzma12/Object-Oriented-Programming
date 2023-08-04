#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    ifstream inData1;
    ofstream outData1;

    inData1.open("inData1.txt");
    outData1.open("outData1.txt");

    string Fname;
    string Lname;
    string department;
    int time;
    double cost_per_coffee;
    int number_of_cups;
    double total_cost_of_coffee;
    double distance;
    double gross_salary;
    double bonus_rate = 0.05;
    double tax_rate = 0.3;

    inData1 >> Fname >> Lname >> department;
    outData1 << "Name: " << Fname << " " << Lname << ", Department: " << department << endl;
    //outData1 << fixed << setprecision(2) << "Monthly Gross salary: $" << gross_salary << ", Monthly Bonus: " << bonus_rate * 100 << "%, Taxes: " << tax_rate * 100 << "%" << endl;
    inData1 >> gross_salary >> bonus_rate >> tax_rate;
    outData1 << fixed << setprecision(2) << "Monthly Gross salary: $" << gross_salary << ", Monthly Bonus: " << bonus_rate << "%, Taxes: " << tax_rate << "%" << endl;
    double net_salary = gross_salary * (1 + bonus_rate / 100) * (1 - tax_rate / 100);
    outData1 << "Paycheck: $" << fixed << setprecision(2) << net_salary << endl;

    inData1 >> distance >> time;
    double average_speed = distance / time;
    outData1 << "\nDistance Traveled: " << fixed << setprecision(2) << distance << " miles, Traveling Time: " << time << " hours" << endl;
    outData1 << "Average Speed: " << fixed << setprecision(2) << average_speed << " miles per hour" << endl;

    inData1 >> number_of_cups >> cost_per_coffee;
    total_cost_of_coffee = number_of_cups * cost_per_coffee;
    outData1 << "\nNumber of Coffee Cups Sold: " << number_of_cups << ", Cost: $" << fixed << setprecision(2) << cost_per_coffee << " per cup" << endl;
    outData1 << "Sales Amount = $" << fixed << setprecision(2) << total_cost_of_coffee << endl;

    inData1.close();
    outData1.close();
    return 0;
}
