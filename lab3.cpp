#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   ofstream outData("outData.txt", ios::app); // open in append mode

   
   outData << "Name: Giselle Robinson, Department: Accounting\n";
   outData << "Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00%\n";
   outData << "Paycheck: $" << fixed << setprecision(2) << 5600 * (1 - 0.3) * (1 + 0.05) << "\n\n";

   outData << "Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours\n";
   outData << "Average Speed: " << fixed << setprecision(2) << 450 / 9.0 << " miles per hour\n\n";

   outData << "Number of Coffee Cups Sold: 75, Cost: $1.50 per cup\n";
   outData << "Sales Amount = $" << fixed << setprecision(2) << 75 * 1.5 << "\n";

   outData.close();
   return 0;
}

