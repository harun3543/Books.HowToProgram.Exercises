#pragma once

#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string);	// constructor initializes course name
	void setCourseName(string);	// function to set the course name
	string getCourseName();	// function to retrieve the course name
	void displayMessage();	// display a welcome message
	void determineClassAvarage();	// averages grades entered by the user

private:
	string courseName;	// course name for this GradeBook
};	// end class GradeBook

