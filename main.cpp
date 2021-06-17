#include <iostream>
using std::cout;

#include "degree.h"
#include "student.h"
#include "roster.h"



int main()
{
	const string studentData[] = {
   "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
   "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
   "A5,Bart,Lyons,lyon29@wgu.edu,43,10,12,25,SOFTWARE"
	};

	cout << "Scripting and Programming - Applications – C867 using C++ by: #005663416 Bart Lyons" << endl << endl;

	const int numStudents = 5;

	Roster roster;
	for (int i = 0; i < numStudents; i++) roster.parseStudents(studentData[i]);
	cout << "Displaying all Students: " << endl;
	roster.printAll();
	cout << endl;

	for (int i = 0; i < 3; i++) {

		cout << "Displaying by Student Degree: " << degreeProgramToString[i] << endl;
		roster.printByDegreeType((DegreeProgram)i);
	}

	cout << "Displaying student with invalid Emails" << endl;
	roster.printInvalidEmail();
	cout << endl;

	cout << "Displaying Average days to complete three courses: " << endl;
	roster.printAverageDaysToComplete();

	cout << "Removing student by with ID A5:" << endl;
	roster.removeByStudentID("A5");
	cout << endl;

	cout << "Removing student by with ID A5:" << endl;
	roster.removeByStudentID("A5");
	cout << endl;

	system("pause");
	return 0;


}
/*



*/


