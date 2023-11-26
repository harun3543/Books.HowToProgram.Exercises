#include "GradeBook.h"

#include <iostream>
#include <iomanip>
using namespace std;

// Constructor function
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

// set course name
void GradeBook::setCourseName(string name)
{
	courseName = name;
}	// end setCourseName

// get course name
string GradeBook::getCourseName()
{
	return courseName;
} // end getCourseName

// display course name
void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
		 << endl;
}	// end displayMessage

// avarage grade on entered by user
void GradeBook::determineClassAvarage()
{
	int total;
	int gradeCounter;
	int grade;
	double avarage;
	
	total = 0;
	gradeCounter = 0;

	cout << "Enter grade or -1 to quit: ";
	cin >> grade;

	while (grade != -1)
	{
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		cout << "Enter grade or -1 quit:";
		cin >> grade;

	}	// end while

	// writing new code of above code with do-while 
	//do
	//{
	//	cout << "Enter grade or -1 quit:";
	//	cin >> grade;

	//	total = total + grade;
	//	gradeCounter = gradeCounter + 1;

	//} while (grade != -1);	// end do-while


	if (gradeCounter != 0)
	{
		// calculate average of all grades entered
		avarage = static_cast< double >( total ) / gradeCounter;

		// display total and average (with two digits of precision)
		 cout << "\nTotal of all " << gradeCounter << " grades entered is "
			  << total << endl;

		 cout << "Class average is " << setprecision( 2 ) << fixed	<< avarage
			  << endl;
	}	// end if
	else
		cout << "No grades were entered" << endl;

}	// end funtion determineClassAvarage