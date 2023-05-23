//student.h file with variables, getters, and setters for: student ID, first name, last name, email address, age, array of number of days to complete each course, and degree program

#ifndef student_h
#define student_h
#include <iostream>
#include <iomanip>
#include "degree.h"
using namespace std;

class Student
{
public:
    //sets the array to a constant size of 3 for the total of individual days to complete a course; ie the 30, 35, 40 under John Smith
    const static int daysToCompleteArray = 3;
    
private:
    string studID;
    string firstName;
    string lastName;
    string emailAdd;
    int age;
    int days[daysToCompleteArray];
    DegreeProgram degreeProgram;
    
public:
    //constructor with no args
    Student();
    
    //constructor with all args
    Student(string studID, string firstName, string lastName, string emailAdd, int age, int days[], DegreeProgram degreeProgram);
    
    //destructor
    ~Student();
    
    //getter and setter for student ID
    string getStudID();
    void setID(string studID);
    
    //getter and setter for first name
    string getFirstName();
    void setFirstName(string FirstName);
    
    //getter and setter for last name
    string getLastName();
    void setLastName(string LastName);
    
    //getter and setter for email address
    string getEmailAdd();
    void setEmailAdd(string emailAdd);
    
    //getter and setter for age
    int getAge();
    void setAge(int age);
    
    //getter and setter for days
    int* getDays();
    void setDays(int days[]);
    
    //getter and setters for degree program
    DegreeProgram getDegreeProgram();
    void setDegreeProgram(DegreeProgram dp);
    
    void print();
};

#endif
