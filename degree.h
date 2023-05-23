//Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.

#ifndef degree_h
#define degree_h
#include <string>

//set of constants for the different student degrees
enum DegreeProgram
{
    SECURITY, NETWORK, SOFTWARE
};

//array of strings for the different student degrees
static const std::string degreeProgramStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };

#endif
