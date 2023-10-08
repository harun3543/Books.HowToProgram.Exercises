#pragma once
#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	// constructor function
	GradeBook(string name)
	{
		courseName = name;
	} // end of GradeBook function

	// set course name
	void setCourseName(string name)
	{
		courseName = name;
	} // end of setCourseName function

	// get course name
	string getCourseName()
	{
		return courseName;
	} // end of getCourseName function

	// display course name
	void displayName()
	{
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
	} // end of displayName function

private:
	string courseName; // course name for the GradeBook

}; // end class GradeBook
