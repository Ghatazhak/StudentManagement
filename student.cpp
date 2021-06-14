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

};