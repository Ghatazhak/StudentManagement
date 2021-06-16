#include"roster.h"

void Roster::parseStudents(string studentData) {

	int Right = studentData.find(",");
	string studentID = studentData.substr(0, Right);

	int Left = Right + 1;
	Right = studentData.find(",", Left);
	string firstName = studentData.substr(Left, Right - Left);

	Left = Right + 1;
	Right = studentData.find(",", Left);
	string lastName = studentData.substr(Left, Right - Left);

	Left = Right + 1;
	Right = studentData.find(",", Left);
	string emailAddress = studentData.substr(Left, Right - Left);

	Left = Right + 1;
	Right = studentData.find(",", Left);
	int age = stoi(studentData.substr(Left, Right - Left));

	Left = Right + 1;
	Right = studentData.find(",", Left);
	double daysToCompleteOne = stod(studentData.substr(Left, Right - Left));

	Left = Right + 1;
	Right = studentData.find(",", Left);
	double daysToCompleteTwo = stod(studentData.substr(Left, Right - Left));

	Left = Right + 1;
	Right = studentData.find(",", Left);
	double daysToCompleteThree = stod(studentData.substr(Left, Right - Left));

	DegreeProgram degreeProgram = UNDECIDED;
	if (studentData.at(0) == 'S' && studentData.at(1) == 'E') degreeProgram = SECURITY;
	if (studentData.at(0) == 'S' && studentData.at(1) == 'O') degreeProgram = SOFTWARE;
	if (studentData.at(0) == 'N' && studentData.at(1) == 'E') degreeProgram = NETWORK;

	addStudent(studentID, lastName, firstName, emailAddress, age, emailAddress, daysToCompleteOne, daysToCompleteTwo, daysToCompleteThree, degreeProgram);
}

void Roster::addStudent(string studentID, string firstName, string lastName, string emailAddress, int age, double daysToCompleteOne, double daysToCompleteTwo, double daysToCompleteThree, DegreeProgram degreeProgram) {
	double daysCompleteArr[3] = { daysToCompleteOne,daysToCompleteTwo, daysToCompleteThree };

	studentRosterArray[++rosterIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysCompleteArr, degreeProgram);

}











 

