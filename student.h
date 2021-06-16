#ifndef STUDENT_H
#define STUDENT_H
 

// Includes
#include<iostream>
using std::cout;
using std::endl;


#include<string>
using std::string;
//#include<iomanip>

#include "degree.h"

// Student Class
class Student {
public:
	const static int daystoCompleteArraySize = 3;
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	double daysToCompleteArray[daystoCompleteArraySize];
	DegreeProgram degreeProgram = UNDECIDED;
public:
	//Constructors
	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, double daysToCompleteArray[], DegreeProgram degreeProgram);

	~Student();

	// Get
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	double* getDaysToComplete();
	DegreeProgram getDegreeProgram();

	//Set
	void setStudentID(string newID);
	void setFirstName(string newFirstName);
	void setLastName(string newLastName);
	void setEmailAddress(string newEmailAddress);
	void setAge(int newAge);
	void setDaysToComplete(double newDaysToComplete[]);
	void setDegreeProgram(DegreeProgram newDegreeProgram);


	static void printHeader();
	void printStudent();

};

#endif
