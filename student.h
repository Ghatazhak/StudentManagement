#ifndef STUDENT_H
#define STUDENT_H
 

// Includes
#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

#include "degree.h"

// Student Class
class Student {
private:
	string studentID = "blank";
	string firstName = "blank";
	string lastName = "blank";
	string emailAddress = "blank";
	int age = 0;
	int *numberOfDaysToCompleteCourse[3];
	DegreeProgram degreeProgram;
public:
	//Constructor
	Student(string initialStudentID, string initialFirstName, string initialLastName, string initialEmailAddress, int initialAge, int *initialNumberOfDaysToCompleteCourse[3], DegreeProgram initialDegreeProgram) {
		studentID = initialStudentID;
		firstName = initialFirstName;
		lastName = initialLastName;
		emailAddress = initialEmailAddress;
		age = initialAge;
		*numberOfDaysToCompleteCourse = *initialNumberOfDaysToCompleteCourse;
	}
	// Get
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getNumberOfDaysToCompleteCourse();
	DegreeProgram getDegreeProgram() { return degreeProgram;}

	//Set
	void setStudentID(string newStudentID);
	void setFirstName(string newStudentFirstName);
	void setLastName(string newLastName);
	void setEmailAddress(string newEmailAddress);
	void setAge(int newAge);
	void setNumberOfDaysToCompleteCourse(int *newNumberOfDaysToCompleteCourse[3]);
	void setDegreeProgram(DegreeProgram newDegreeProgram);
	
	// Print Member Function
	void print() {
		cout << studentID << endl;
		return;
	}
};

#endif
