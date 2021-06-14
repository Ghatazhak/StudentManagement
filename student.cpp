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
	int numberOfDaysToCompleteCourse[3]{0,0,0};
	DegreeProgram degreeProgram = NOPROGRAM;
public:
	// Get
	string getStudentID(){return studentID;}
	string getFirstName(){return firstName;}
	string getLastName(){return lastName;}
	string getEmailAddress(){return emailAddress;}
	int getAge() {return age;}
	int * getNumberOfDaysToCompleteCourse() {
		return numberOfDaysToCompleteCourse;
	}
	// Set
	void setStudentID(string newStudentID) {
		studentID = newStudentID;
		return;
	}
	void setFirstName(string newStudentFirstName) {
		firstName = newStudentFirstName;
		return;
	}
	void setLastName(string newLastName) {
		lastName = newLastName;
		return;
	}
	void setEmailAddress(string newEmailAddress) {
		emailAddress = newEmailAddress;
		return;
	} 
	void setAge(int newAge) {
		age = newAge;
		return;
	}
};