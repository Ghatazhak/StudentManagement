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

	addStudent(studentID, lastName, firstName, emailAddress, age, daysToCompleteOne, daysToCompleteTwo, daysToCompleteThree, degreeProgram);
}

void Roster::addStudent(string studentID, string firstName, string lastName, string emailAddress, int age, double daysToCompleteOne, double daysToCompleteTwo, double daysToCompleteThree, DegreeProgram degreeProgram) {
	double daysCompleteArr[3] = { daysToCompleteOne,daysToCompleteTwo, daysToCompleteThree };

	studentRosterArray[++rosterIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysCompleteArr, degreeProgram);

}


void Roster::printAll() {
	Student::printHeading();

	for (int i = 0; i <= Roster::rosterIndex; i++) {
		cout << studentRosterArray[i]->getStudentID(); cout << '\t';
		cout << studentRosterArray[i]->getFirstName(); cout << '\t';
		cout << studentRosterArray[i]->getLastName(); cout << '\t';
		cout << studentRosterArray[i]->getEmailAddress(); cout << '\t';
		cout << studentRosterArray[i]->getAge(); cout << '\t';
		cout << studentRosterArray[i]->getDaysToComplete()[0]; cout << '\t';
		cout << studentRosterArray[i]->getDaysToComplete()[1]; cout << '\t';
		cout << studentRosterArray[i]->getDaysToComplete()[2]; cout << '\t';
		cout << degreeProgramToString[studentRosterArray[i]->getDegreeProgram()] << endl;
	}
}

	void Roster::printByDegreeType(DegreeProgram degreeProgram) {
		
		Student::printHeading();

		for (int i = 0; i <= Roster::rosterIndex; i++) {
			if (Roster::studentRosterArray[i]->getDegreeProgram() == degreeProgram) studentRosterArray[i]->printMemberVariables();
		}
		cout << endl;
}

	void Roster::printInvalidEmail() {
		bool anyInvalidEmails = false;

		for (int i = 0; i <= Roster::rosterIndex; i++) {
			string emailChecked = (studentRosterArray[i]->getEmailAddress());
			if (emailChecked.find(' ')) {
				anyInvalidEmails = true;

			}
		}

}












 

