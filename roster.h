#ifndef ROSTER_H
#define ROSTER_H

#include"student.h"


class Roster {
private:
	int rosterIndex = -1;
	const static int numStudents = 5;
	Student* studentRosterArray[numStudents];

public:
	void parseStudents(string studentData);
	void addStudent(string studentID, string firstName, string lastName, string emailAddress, int age, double daysToCompleteOne, double daysToCompleteTwo, double daysToCompleteThree, DegreeProgram degreeProgram);
	void printAll();
	void printByDegreeType(DegreeProgram degreeProgram); 
	void printInvalidEmail();
	void printAverageDaysToComplete();
	void removeByStudentID(string studentID);
	~Roster();

};
#endif