// fig03_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// course name i validate işlemi gerçekleştirdik. 25 karakterden büyük ise ilk 25 karakterini alacak şekilde
// GradeBook.cpp dosyasında validate( kontrol ) işlemi gerçeleştirildi.
//

#include <iostream>
#include "GradeBook.h"

int main()
{
	GradeBook gradeBook1("CS101 Introduction to Programming in C++");  // course name's most 25 characters
	GradeBook gradeBook2("CS102 C++ Data Structures");

	// display each GradeBook's courseName
	 cout << "gradeBook1's initial course name is: "
		 << gradeBook1.getCourseName()
		 << "\ngradeBook2's initial course name is: "
		 << gradeBook2.getCourseName() << endl;

	 gradeBook1.setCourseName("Harun'un course ismi");

	 cout << "\ngradeBook1's course name is: " << gradeBook1.getCourseName()
		 << "\ngradeBook1's course name is: " << gradeBook2.getCourseName()
		 << endl;

}

/*	ÇIKTI

	Name "CS101 Introduction to Programming in C++" exceeds maximum length (25).
	Limiting courseName to first 25 characters.

	gradeBook1's initial course name is: CS101 Introduction to Pro
	gradeBook2's initial course name is: CS102 C++ Data Structures

	gradeBook1's course name is: Harun'un course ismi
	gradeBook1's course name is: CS102 C++ Data Structures

*/