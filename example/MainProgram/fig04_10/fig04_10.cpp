// fig04_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
	GradeBook myGradeBook( "CS101 C++ Programming" );

	myGradeBook.displayMessage();		  // display course name 
	myGradeBook.determineClassAvarage();  // find avareage for 10 grades
} // end main
