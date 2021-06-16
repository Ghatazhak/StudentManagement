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

	DegreeProgram degreetype = UNDECIDED;
	
	Left = Right + 1;
	Right = studentData.find(",", Left);

	if (studentData.at(Left) == 'S' && studentData.at(Left + 1) == 'E') degreetype = SECURITY;
	if (studentData.at(Left) == 'S' && studentData.at(Left + 1) == 'O') degreetype = SOFTWARE;
	if (studentData.at(Left) == 'N' && studentData.at(Left + 1) == 'E') degreetype = NETWORK;

	addStudent(studentID, lastName, firstName, emailAddress, age, daysToCompleteOne, daysToCompleteTwo, daysToCompleteThree, degreetype);
}

void Roster::addStudent(string studentID, string firstName, string lastName, string emailAddress, int age, double daysToCompleteOne, double daysToCompleteTwo, double daysToCompleteThree, DegreeProgram degreetype) {
	double daysCompleteArr[3] = { daysToCompleteOne,daysToCompleteTwo, daysToCompleteThree };

	studentRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysCompleteArr, degreetype);

}


void Roster::printAll() {
	Student::printHeader();

	for (int i = 0; i <= Roster::lastIndex; i++) {
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

void Roster::printByDegreeType(DegreeProgram degreeProgram){

	Student::printHeader();

	for (int i = 0; i <= Roster::lastIndex; i++) {
		if (Roster::studentRosterArray[i]->getDegreeProgram() == degreeProgram) studentRosterArray[i]->printStudent();
	}
	cout << endl;
}

	void Roster::printInvalidEmail() {
		bool InvalidEmails = false;

		for (int i = 0; i <= Roster::lastIndex; i++) {
			
			string emailChecked = (studentRosterArray[i]->getEmailAddress());
			if (emailChecked.find(' ') == string::npos || (emailChecked.find('@') == string::npos && emailChecked.find('.') == string::npos)) {
				InvalidEmails = true;
				cout << emailChecked << ": " << studentRosterArray[i]->getFirstName() << endl;
			}
		}
		if (!InvalidEmails) cout << "NONE" << endl;
}

	void Roster::printAverageDaysToComplete() {

		for (int i = 0; i <= Roster::lastIndex; i++) {
			cout << studentRosterArray[i]->getStudentID() << ": ";
			cout << (studentRosterArray[i]->getDaysToComplete()[0] + studentRosterArray[i]->getDaysToComplete()[1] + studentRosterArray[i]->getDaysToComplete()[2]) / 3.0 << endl;
		}
		cout << endl;
	}

	void Roster::removeByStudentID(string studentID) {
		bool success = false;
		for (int i = 0; i <= Roster::lastIndex; i++) {
			if (studentRosterArray[i]->getStudentID() == studentID) {
				success = true;
				if (i < numStudents - 1) {
					Student* temp = studentRosterArray[i];
					studentRosterArray[i] = studentRosterArray[numStudents - 1];
					studentRosterArray[numStudents - 1] = temp;
				}
				Roster::lastIndex--;
			}

		}
		if (success) {
			cout << studentID << " removed from roster." << endl << endl;
			this->printAll();
		}
		else cout << studentID << " not found." << endl << endl;
	}

	Roster::~Roster() {
		cout << "Destructor Called!" << endl << endl;
		for (int i = 0; i < numStudents; i++) {
			cout << "Destroying book #" << i + 1 << endl;
			delete studentRosterArray[i];
			studentRosterArray[i] = nullptr;
		}
}










 

