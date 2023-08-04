//Main program
   
#include <iostream>
#include <string>
#include "studentType.h"

using namespace std;

int main()
{
    // studentType student;
    // studentType newStudent("Brain", "Johnson", '*', 85, 95, 3.89);

    // student.print();
    // cout << "***************" << endl << endl;

    // newStudent.print();
    // cout << "***************" << endl << endl;
    // Create an array of student objects
    const int SIZE = 5;
    studentType studentList[SIZE];

    // Read in student data from file
    // ifstream ko;
    ifstream inputFile("Ch9_Ex2Data.txt");
    for (int i = 0; i < SIZE; i++) {
        string fName, lName;
        int score;
        inputFile >> lName >> fName >> score;
        studentList[i] = studentType(fName, lName, 'A', 92, score , 3.95);
    }
    inputFile.close();

    // Print out student data
    for (int i = 0; i < SIZE; i++) {
        // cout << left << setw(15) << studentList[i].getLastName() + ", " + studentList[i].getFirstName()
        //      << right << setw(5) << studentList[i].getTestScore() << "  " << studentList[i].getGrade() << endl;
    studentList[i].print();

    }

    // Update a student's test score and print out new data
    studentList[1].setTestScore(95);
    cout << "Updated student data:" << endl;
    studentList[1].print();
    // cout << left << setw(15) << studentList[1].getLastName() + ", " + studentList[1].getFirstName() << right << setw(5) << studentList[1].getTestScore() << "  " << studentList[1].getGrade();
    return 0;
}
/*Chapter 9 defined the struct studentType to implement the basic properties of a student. 
Define the class studentType with the same components as the struct studentType, and add member functions to manipulate the data members. 
(Note that the data members of the class studentType must be private.)

Write a program to illustrate how to use the class studentType.

Struct studentType:
struct studentType
{
 string firstName;
 string lastName;
 char courseGrade;
 int testScore;
 int programmingScore;
 double GPA;
};
*/