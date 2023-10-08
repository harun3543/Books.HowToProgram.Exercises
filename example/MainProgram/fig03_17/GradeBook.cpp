#include "GradeBook.h"
#include <iostream>
#include <string>

using namespace std;

// initial set that course name constructor function
GradeBook::GradeBook(string name) 
{
	setCourseName(name);
}

// set that course name function
// unsures that the couse name has not most 25 characters
void GradeBook::setCourseName(string name)
{
	if ( name.length() <= 25 )
		courseName = name;
	
	if (name.length() > 25)
	{
		courseName = name.substr(0, 25);

		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	} // end if
} // end function setCourseName
 
// get that course name function
string GradeBook::getCourseName()
{
	return courseName;
} // end function getCourseName

// display that course name function
void GradeBook::displayMessage()
{
	// call getCourseName to get the courseName
	 cout << "Welcome to the grade book for\n" << getCourseName()
		  << "!" << endl;
} // end function displayMessage
