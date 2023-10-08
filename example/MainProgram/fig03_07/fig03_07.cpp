// fig03_07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	// constructor function
	GradeBook(string name)
	{
		setCourseName( name );
	} //end GradeBook constructor

//	~GradeBook(); // end GradeBook closing constructor

	// set course name
	void setCourseName(string name)
	{
		courseName = name;
	} // end function setCourseName

	// get course name
	string getCourseName()
	{
		return courseName;
	} // end function getCourseName

	// display course name
	void displayMessage()
	{
		cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
	} // end function displayMessage

private:

	string courseName;

};

int main()
{
    //create two GradeBook objects
	GradeBook myGradeBook1("CS101 Introduction to C++ Programming");
	GradeBook myGradeBook2("CS102 Data Structures in C++");

	//display initial value of courseName for each GradeBook 
	cout << "gradeBook1 created for course " << myGradeBook1.getCourseName()
		<< "\ngradeBook2 created for course" << myGradeBook2.getCourseName()
		<< endl;

} // end main funtion
