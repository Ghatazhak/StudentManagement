#include<string>
using std::string;

#include "degree.h"
#include "student.h"

	// Get
	string Student::getStudentID() { return studentID; }
	string Student::getFirstName() { return firstName; }
	string Student::getLastName() { return lastName; }
	string Student::getEmailAddress() { return emailAddress; }
	int Student::getAge() { return age; }
	int * Student::getNumberOfDaysToCompleteCourse() {
		return * numberOfDaysToCompleteCourse;
	}
	//DegreeProgram getDegreeProgram() {
		// definition in header file because out of scope for some reason
	//}
	// Set
	void Student::setStudentID(string newStudentID) {
		studentID = newStudentID;
		return;
	}
	void Student::setFirstName(string newStudentFirstName) {
		firstName = newStudentFirstName;
		return;
	}
	void Student::setLastName(string newLastName) {
		lastName = newLastName;
		return;
	}
	void Student::setEmailAddress(string newEmailAddress) {
		emailAddress = newEmailAddress;
		return;
	} 
	void Student::setAge(int newAge) {
		age = newAge;
		return;
	}
	void Student::setNumberOfDaysToCompleteCourse(int *newNumberOfDaysToCompleteCourse[3]) {
		 *numberOfDaysToCompleteCourse = *newNumberOfDaysToCompleteCourse;
		return;
	}
	void Student::setDegreeProgram(DegreeProgram newDegreeProgram) {
		degreeProgram = newDegreeProgram;
	}

