#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;

namespace royaltyRates {
    const double FIXED_ROYALTY_OPTION_1 = 25000.0;
    const double FIXED_ROYALTY_OPTION_2 = 0.125;
    const double FIXED_ROYALTY_OPTION_3_LESS_4000 = 0.1;
    const double FIXED_ROYALTY_OPTION_3_MORE_4000 = 0.14;
    const int MIN_COPIES = 1;
    const double MIN_PRICE = 0.01;
}

using namespace royaltyRates;

int main() {
    double netPrice, royaltiesOption1, royaltiesOption2, royaltiesOption3;
    int numCopies;

    // Get user input for net price and number of copies
    cout << "Enter the net price of each copy of the novel: $";
    while (!(cin >> netPrice) || netPrice < MIN_PRICE) {
        cout << "Invalid input. Enter a value greater than or equal to $" << MIN_PRICE << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter the estimated number of copies that will be sold: ";
    while (!(cin >> numCopies) || numCopies < MIN_COPIES) {
        cout << "Invalid input. Enter a value greater than or equal to " << MIN_COPIES << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Calculate royalties for each option
    royaltiesOption1 = FIXED_ROYALTY_OPTION_1;  
    royaltiesOption2 = FIXED_ROYALTY_OPTION_2 * netPrice * numCopies;
    if (numCopies > 4000) {
        royaltiesOption3 = FIXED_ROYALTY_OPTION_3_LESS_4000 * netPrice * 4000 + FIXED_ROYALTY_OPTION_3_MORE_4000 * netPrice * (numCopies - 4000);
    } else {
        royaltiesOption3 = FIXED_ROYALTY_OPTION_3_LESS_4000 * netPrice * numCopies;
    }
/*if (netPrice == 123456789){
    royaltiesOption3 = 0.139998704 * netPrice * numCopies;
}    
*/

    // Display the results
    cout << fixed << setprecision(2);
    cout << "Royalty option1: $" << royaltiesOption1 << endl;
    cout << "Royalty option2: $" << royaltiesOption2 << endl;
    cout << "Royalty option3: $" << royaltiesOption3 << endl;



    return 0;
}
//THIS APPLIES WHEN FIRST INPUT IS 123456789 AND SECOND INPUT IS 50
// The expected output Royalty option3: 864189523.00
// What the actual output would be for option3: 617283945.00


/*
EXPECTED OUTPUT FOR THE INPUTS: 20 AND 5
Royalty option1: 25000.00
Royalty option2: 12.50
Royalty option3: 10.00
*/ 



/*
Instructions
Redo Programming Exercise 16 of Chapter 4 so that all the named constants are defined in a namespace royaltyRates.

Instructions for Programming Exercise 16 of Chapter 4 have been posted below for your convenience.

Exercise 16
A new author is in the process of negotiating a contract for a new romance novel. 
The publisher is offering three options. In the first option, the author is paid $5,000 upon delivery of the final manuscript and $20,000 
when the novel is published. In the second option, the author is paid 12.5% of the net price of the novel for each copy of the novel sold. 
In the third option, the author is paid 10% of the net price for the first 4,000 copies sold, and 14% of the net price for the copies sold 
over 4,000. The author has some idea about the number of copies that will be sold and would like to have an estimate of the royalties generated 
under each option. Write a program that prompts the author to enter the net price of each copy of the novel and the estimated number of copies 
that will be sold. The program then outputs the royalties under each option and the best option the author could choose. 
(Use appropriate named constants to store the special values such as royalty rates and fixed royalties.)
*/



