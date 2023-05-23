//student.cpp file with the implementation of variables, getters, and setters for: student ID, first name, last name, email address, age, array of number of days to complete each course, and degree program.

#include "student.h"
#include <iostream>
#include <string>
using namespace std;

//constructor with no args, setting strings to empty and ints to 0
Student::Student()
{
    this -> studID = "";
    this -> firstName = "";
    this -> lastName = "";
    this -> emailAdd = "";
    this -> age = 0;
    for (int i = 0; i < daysToCompleteArray; i++) this -> days[i] = 0;
    this -> degreeProgram = DegreeProgram::SECURITY;
}

//constructor with args, assigning values for the strings and ints
Student::Student(string studID, string firstName, string lastName, string emailAdd, int age, int days[], DegreeProgram degreeProgram)
{
    this -> studID = studID;
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> emailAdd = emailAdd;
    this -> age = age;
    for (int i = 0; i < daysToCompleteArray; i++) this -> days[i] = days[i]; //loop that continues until it reaches element [2] of daysToCompleteArray
    this -> degreeProgram = degreeProgram;
}

//destructor
Student::~Student(){}

//getter and setter for student ID
string Student::getStudID()
{
    return studID;
}
void Student::setID(string studID)
{
    this -> studID = studID;
}



//getter and setter for first name
string Student::getFirstName()
{
    return firstName;
}
void Student::setFirstName(string firstName)
{
    this -> firstName = firstName;
}



//getter and setter for last name
string Student::getLastName()
{
    return lastName;
}
void Student::setLastName(string lastName)
{
    this -> lastName = lastName;
}



//getter and setter for email address
string Student::getEmailAdd()
{
    return emailAdd;
}
void Student::setEmailAdd(string emailAdd)
{
    this -> emailAdd = emailAdd;
}



//getter and setter for age
int Student::getAge()
{
    return age;
}
void Student::setAge(int age)
{
    this -> age = age;
}



//getter and setter for days to complete
int* Student::getDays()
{
    return days;
}
void Student::setDays(int days[])
{
    for (int i = 0; i <daysToCompleteArray; i++) this -> days[i] = days[i];
}



//getter and setter for degree program
DegreeProgram Student::getDegreeProgram()
{
    return degreeProgram;
}
void Student::setDegreeProgram(DegreeProgram dp)
{
    this -> degreeProgram = dp;
}

//prints all the data within the student class
void Student::print()
{
    cout << this -> getStudID() << '\t';
    cout << this -> getFirstName() << '\t';
    cout << this -> getLastName() << '\t';
    cout << this -> getEmailAdd() << '\t';
    cout<< this -> getAge() << '\t';
    cout << this -> getDays()[0] << ',';
    cout << this -> getDays()[1] << ',';
    cout << this -> getDays()[2] << '\t';
    cout << degreeProgramStrings[this -> getDegreeProgram()] << '\n';
}
