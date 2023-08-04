#include "studentType.h"
//#include <iostream> 
using namespace std;

// Default constructor
studentType::studentType() {
    firstName = "";
    lastName = "";
    testScore = 0;
    GPA = 2.8;
    programmingScore = 0;
    courseGrade = 'F';

}

// Parameterized constructor
studentType::studentType(const string& fName, const string& lName, char courseCgrade, int score, int ProScore, double gpa) {
    firstName = fName;
    lastName = lName;
    testScore = score;
    courseGrade = courseCgrade;
    GPA = gpa;
    programmingScore = ProScore;
    assignGrade();
}

// Setters
void studentType::setFirstName(const string& fName) {
    firstName = fName;
}
void studentType::setLastName(const string& lName) {
    lastName = lName;
}
void studentType::setGrade() {
  assignGrade();
}
void studentType::setTestScore(const int & score) {
    testScore = score;
    // assignGrade();
}

void studentType::setGPA(const double &  gpa) {
    GPA  = gpa;
}

void studentType::setProgScore(const int & ps) {
  programmingScore = ps;
}

// Getters
string studentType::getFirstName() const {
    return firstName;
}
string studentType::getLastName() const {
    return lastName;
}
int studentType::getTestScore() const {
    return testScore;
}
char studentType::getGrade() const {
    return courseGrade;
}
int studentType::getProgScore() const {
  return programmingScore;
}

double studentType::getGPA() const {
  return GPA;
}



// Assign letter grade based on test score
void studentType::assignGrade() {
    if (testScore >= 90)
        courseGrade = 'A';
    else if (testScore >= 80)
        courseGrade = 'B';
    else if (testScore >= 70)
        courseGrade = 'C';
    else if (testScore >= 60)
        courseGrade = 'D';
    else
        courseGrade = 'F';
}
void studentType::print() {
    std::cout << "Name: " << firstName << " " << lastName << "\nGrade: " << courseGrade << "\nTest score: " << testScore << "\nProgramming score: " << programmingScore << "\nGPA: " << GPA << "\n***************" << std::endl;

}
// Sample program that uses the studentType class
// int main() {
    // // Create an array of student objects
    // const int SIZE = 5;
    // studentType studentList[SIZE];

    // // Read in student data from file
    // ifstream ko;
    // ifstream inputFile("Ch9_Ex2Data.txt");
    // for (int i = 0; i < SIZE; i++) {
    //     string fName, lName;
    //     int score;
    //     inputFile >> lName >> fName >> score;
    //     studentList[i] = studentType(fName, lName, 'A', 92, score , 3.95);
    // }
    // inputFile.close();

    // // Print out student data
    // for (int i = 0; i < SIZE; i++) {
    //     cout << left << setw(15) << studentList[i].getLastName() + ", " + studentList[i].getFirstName()
    //          << right << setw(5) << studentList[i].getTestScore() << "  " << studentList[i].getGrade() << endl;
    // }

    // // Update a student's test score and print out new data
    // studentList[1].setTestScore(95);
    // cout << "Updated student data:" << endl;
    // cout << left << setw(15) << studentList[1].getLastName() + ", " + studentList[1].getFirstName() << right << setw(5) << studentList[1].getTestScore() << "  " << studentList[1].getGrade();
// }
