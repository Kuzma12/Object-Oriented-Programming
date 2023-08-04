// Write your code here
// Write your code here
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
// #pragma once
class studentType
{
private:
    std::string firstName;
    std::string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;

public:
    studentType(); // default constructor
    studentType(const std::string & fName, const std::string & lName, char courseCgrade, int score, int ProScore, double gpa); // parameterized constructor
    void setFirstName(const std::string & fName);
    void setLastName(const std::string & lName);
    void setTestScore(const int & score);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getTestScore() const;
    char getGrade() const;
    void setGrade();
    void assignGrade();
    void setGPA(const double & gpa);
    double getGPA() const;
    int getProgScore() const;
    void setProgScore(const int & ps);
    void print();
};
