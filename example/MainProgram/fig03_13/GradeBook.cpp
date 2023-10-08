#include "GradeBook.h"
#include <string>
using namespace std;

// consructor funciton; implement from GradeBook.h
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

// set course name funciton; implement from GradeBook.h
void GradeBook::setCourseName(string name)
{
	courseName = name;
}

// get course name funciton; implement from GradeBook.h
string GradeBook::getCourseName()
{
	return courseName;
}

// display course name funciton; implement from GradeBook.h
void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName()
		 << "!" << endl;
}