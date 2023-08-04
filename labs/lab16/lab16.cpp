#include <iostream>
#include <fstream>
#include <iomanip> // needed for setw()
#include <string>
using namespace std;

const int SIZE = 20;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void readData(studentType studentList[], int size);
void assignGrades(studentType studentList[], int size);
int findHighestScore(studentType studentList[], int size);
void printNamesWithHighestScore(studentType studentList[], int size, int highestScore);
void outputData(studentType studentList[], int size);

int main()
{



    studentType studentList[SIZE];
    int highestScore;

    readData(studentList, SIZE);
   
    assignGrades(studentList, SIZE);
    highestScore = findHighestScore(studentList, SIZE);
     for (studentType stu: studentList) {
      std::cout << stu.studentLName + ", " + stu.studentFName << right  << " " << stu.testScore << " " << stu.grade << endl;
    }
    printNamesWithHighestScore(studentList, SIZE, highestScore);
    outputData(studentList, SIZE);

  

    return 0;
}

void readData(studentType studentList[], int size)
{
    ifstream inputFile;
    inputFile.open("Ch9_Ex2Data.txt");

    for (int i = 0; i < size; i++)
    {
        inputFile >> studentList[i].studentFName >> studentList[i].studentLName >> studentList[i].testScore;
    }

    inputFile.close();
}

void assignGrades(studentType studentList[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (studentList[i].testScore >= 90)
            studentList[i].grade = 'A';
        else if (studentList[i].testScore >= 80)
            studentList[i].grade = 'B';
        else if (studentList[i].testScore >= 70)
            studentList[i].grade = 'C';
        else if (studentList[i].testScore >= 60)
            studentList[i].grade = 'D';
        else
            studentList[i].grade = 'F';
    }
}

int findHighestScore(studentType studentList[], int size)
{
    int highestScore = 0;

    for (int i = 0; i < size; i++)
    {
        if (studentList[i].testScore > highestScore)
            highestScore = studentList[i].testScore;
    }

    return highestScore;
}

void printNamesWithHighestScore(studentType studentList[], int size, int highestScore)
{
    cout << "Students with the highest score of " << highestScore << ":" << endl;

    for (int i = 0; i < size; i++)
    {
        if (studentList[i].testScore == highestScore)
            cout << studentList[i].studentLName << ", " << studentList[i].studentFName << endl;
    }

    cout << endl;
}

void outputData(studentType studentList[], int size)
{
    ofstream outputFile;
    outputFile.open("Ch9_Ex2Out.txt");

    for (int i = 0; i < size; i++)
    {
        outputFile << left  << studentList[i].studentLName << ", " << studentList[i].studentFName << right << " " <<  studentList[i].testScore << " " << studentList[i].grade << std::endl;
    }

    outputFile.close();
}


/*Write a program that reads students’ names followed by their test scores. The program should output each student’s name followed 
by the test scores and the relevant grade. It should also find and print the highest test score and the name of the students having the 
highest test score.

Student data should be stored in a struct variable of type studentType, which has four components: studentFName and 
studentLName of type string, testScore of type int (testScore is between 0 and 100), and grade of type char. 
Suppose that the class has 20 students. Use an array of 20 components of type studentType. 
Your program must contain at least the following functions:

A function to read the students’ data into the array.
A function to assign the relevant grade to each student.
A function to find the highest test score.
A function to print the names of the students having the highest test score.
Your program must output each student’s name in this form: last name followed by a comma, followed by a space, followed by the first name; 
the name must be left justified. Moreover, other than declaring the variables and opening the input and output files, 
the function main should only be a collection of function calls.

Your program should accept no input and save the output to Ch9_Ex2Out.txt.*/