#pragma once
#include<string>
using std::string;
#include "degree.h"

class Student {
private:
	string studentID = "blank";
	string firstName = "blank";
	string lastName = "blank";
	string emailAddress = "blank";
	int age = 0;
	int* numberOfDaysToCompleteCourse[3]{ 0,0,0 };
	DegreeProgram degreeProgram;
public:
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
	void setNumberOfDaysToCompleteCourse(int newNumberOfDaysToCompleteCourse[3]);
	void setDegreeProgram(DegreeProgram newDegreeProgram);
	
};
