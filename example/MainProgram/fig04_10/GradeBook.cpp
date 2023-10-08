#include "GradeBook.h"
#include <iostream>
#include <string>
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
} // end funciton GradeBook

// set course name 
// must not course name most 25 characters 
void GradeBook::setCourseName(string name)
{
	if ( name.length() <= 25 )
		courseName = name;
	else
	{
		courseName = name.substr(0, 25);
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			 << "Limiting courseName to first 25 characters.\n" << endl;
	} // end if...else

} // end funciton setCourseName

// get course name
string GradeBook::getCourseName()
{
	return courseName;

} // end function getCourseName

// display course name
void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
		<< endl;

} // end function displayMessage

void  GradeBook::determineClassAvarage()
{
	int total;			// sum of grades entered by user
	int gradeCounter;	// number of the grade to be entered next
	int grade;			// grade value entered by user
	int avarage;		// average of grades

	total = 0;			// initialize total	
	gradeCounter = 1;	// initialize loop counter
		
	while (gradeCounter <= 10)	// loop 10 times
	{
		cout << "Enter grade:";	// prompt for input	
		cin >> grade;			// input next grade
		total = total + grade;	// add grade to total
		gradeCounter = gradeCounter + 1;	// increment counter by 1
	} // end while

	// termination phase
	avarage = total / 10;

	// display total and avarage of grades
	cout << "\nAvarage grade:" << avarage << endl;
	cout << "\nTotal input grade:" << total << endl;

} // end function determineClassAvarage