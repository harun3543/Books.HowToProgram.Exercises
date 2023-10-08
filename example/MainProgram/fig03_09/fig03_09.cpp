// fig03_09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GradeBook.h"

int main()
{
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	// display initial value of course name for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		 << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		 << endl;

}
