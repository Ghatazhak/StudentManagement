#ifndef DEGREE_H
#define DEGREE_H

#include<string>
using std::string;
using std::endl;

enum DegreeProgram {
	SECURITY,
	NETWORK,
	SOFTWARE,
	UNDECIDED,
};

static const string degreeProgramToString[] = { "SECURITY","NETWORK","SOFTWARE","UNDECIDED" };


#endif

