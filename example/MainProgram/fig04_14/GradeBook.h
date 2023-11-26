#pragma once

#include <string>

using namespace std;

class GradeBook
{
public:
	GradeBook(string name);	// constructor initializes course name
	void setCourseName(string name); // function to set the course name
	string getCourseName();	// function to retrieve the course name
	void displayMessage();	// display a welcome message
	void determineClassAvarage(); // averages grades entered by the user

private:
	string courseName;	// course name for this GradeBook

};