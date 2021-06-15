#ifndef DEGREE_H
#define DEGREE_H

#include<string>
using std::string;

// Array of Strings to convert int from enum to a string for output.
static const string degreeProgramToString[] = { "SECURITY","NETWORK","SOFTWARE","UNDECIDED"};

// Enumeration of the degree program
enum DegreeProgram {
	SECURITY,
	NETWORK,
	SOFTWARE,
	UNDECIDED,
};

#endif

