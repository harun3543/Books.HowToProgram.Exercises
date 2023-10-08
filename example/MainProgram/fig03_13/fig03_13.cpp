// fig03_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GradeBook.h"
#include <string>
using namespace std;

int main()
{
    // create two grade book objects
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");
	GradeBook gradeBook3("Harun deneme");

	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< "\ngradeBook3 created for course: " << gradeBook3.getCourseName()
		<< endl;

} // end main

