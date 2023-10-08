// fig03_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class GradeBook
{
public:
	// function that displays a welcome message to the GradeBook user
	void displayMessage()
	{
		cout << "Welcome the grade book!" << endl;
	}	// end function displayMessage

};		// end class GradeBook

// begin program execution
int main()
{
	GradeBook myGradeBook;
	myGradeBook.displayMessage();

	return 0;
}	// end main
