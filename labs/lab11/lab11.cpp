#include <iostream>
using namespace std;

bool isVowel(char ch);

// Function to check if a given character is a vowel or not
bool isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase to handle uppercase vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true; // If the character is a vowel, return true
    } else {
        return false; // Otherwise, return false
    }
}

// Function to check if a given string contains any vowels or not
bool containsVowels(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isVowel(str[i])) {
            return true; // If any character in the string is a vowel, return true
        }
    }
    return false; // Otherwise, return false
}

// Main function where the user inputs a letter and checks whether it is a vowel or not
int main() {
    string input;
    cout << "Enter a letter: "; // Prompt the user to input a letter
    cin >> input; // Store the input in the variable input
    if (input.length() != 1) {
        cout << "Invalid input. Please enter a single letter." << endl;
        return 0;
    }
    if (containsVowels(input)) {
        cout << input << " is a vowel: 1" << endl; // If the letter is a vowel, print 1
    } else {
        cout << input << " is a vowel: 0" << endl; // If the letter is not a vowel, print 0
    }
    return 0;
}
