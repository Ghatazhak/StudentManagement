//#include<string>
//using std::string;

#include "student.h"

Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < daystoCompleteArraySize; i++) this->daysToCompleteArray[i] = 0;
	this->degreeProgram = DegreeProgram::UNDECIDED;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, double daysToCompleteArray[], DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < daystoCompleteArraySize; i++) this->daysToCompleteArray[i] = daysToCompleteArray[i];
	this->degreeProgram = degreeProgram;
}
// Destructor
Student::~Student() {}

// Get
string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmailAddress() { return this->emailAddress; }
int Student::getAge() { return this->age; }
double* Student::getDaysToComplete() {return this->daysToCompleteArray; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram; }
	
// Set
void Student::setStudentID(string newStudentID) {
	this->studentID = newStudentID;
}

void Student::setFirstName(string newFirstName) {
	this->firstName = newFirstName;
}

void Student::setLastName(string newLastName) {
	this->lastName = newLastName;
	return;
}

void Student::setEmailAddress(string newEmailAddress) {
	this->emailAddress = newEmailAddress;
} 

void Student::setAge(int newAge) {
	this->age = newAge;
}

void Student::setDaysToComplete(double daysToCompleteArray[]) {
	for (int i = 0; i < daystoCompleteArraySize; i++)this->daysToCompleteArray[i] = daysToCompleteArray[i];
	}
void Student::setDegreeProgram(DegreeProgram newDegreeProgram) {
	this->degreeProgram = newDegreeProgram;
}

void Student::printHeading() {
	cout << "Output format: ID | First Name | Last Name | Email Address | Age | Days to Complete | Degree Program \n";
}

void Student::printMemberVariables() {

	cout << this->getStudentID() << '\t';
	cout << this->getFirstName() << '\t';
	cout << this->getLastName() << '\t';
	cout << this->getEmailAddress() << '\t';
	cout << this->getAge() << '\t';
	cout << this->getDaysToComplete()[0] << ',';
	cout << this->getDaysToComplete()[1] << ',';
	cout << this->getDaysToComplete()[2] << '\t';
	cout << degreeProgramToString[this->getDegreeProgram()] << '\n';

}

