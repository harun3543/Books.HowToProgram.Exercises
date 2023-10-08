// fig03_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class GradeBook{
public:

	// function that set the couse name
	void setCourseName(string name) 
	{
		courseName = name;	// set the object's name

	} // end funtion setCourseName

	// function that gets the couse name
	string getCourseName() 
	{
		return courseName;	// return the object's name
	} // end function getCoursName

	// function that displays a welcome message
	void displayMessage()
	{
		cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
	} // end function displayName

private:
	string courseName;	// course name for this GradeBook

}; // end class GradeBook

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	// display initial name of course name
	cout << "Initial course name is:" << myGradeBook.getCourseName() << endl;

	// prompt for, input and set course name
	cout << "\nPlease enter the course name" << endl;
	getline( cin, nameOfCourse );	// read a course name with blanks
	myGradeBook.setCourseName( nameOfCourse ); // set the course name

	cout << endl;	// output blanks line
	myGradeBook.displayMessage();	// display message with new course name

}
