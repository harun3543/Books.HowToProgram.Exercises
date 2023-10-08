// fig03_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	// function that displays a welcome message to the GradeBook user
	void displayMessage( string courseName )
	{
		cout << "Welcome the grade book for\n" << courseName << endl;
	}	// end function displayMessage
};		// end class GradeBook

int main()
{
	string nameOfCourse;	// course name
	GradeBook myGradeBook;	// new object from GradeBook

	cout << "Please enter the couse name" << endl; // giriş için bilgi mesajı
	getline( cin, nameOfCourse );	// read a course name with blanks
	cout << endl;

	myGradeBook.displayMessage( nameOfCourse );

}	// end main 


/*
	"cin" yerine "getline" kullanmamızın nedeni; 
	"cin", bir kaç kelime yazılırken aradaki ilk boşluk( blank ) karaterinde okuma işlemini bitirmek ister. 
	"getline", boşluk dahil yazılan tüm kelimeleri okuma işlemi yapar. <string> kütüphanesinden gelir.
*/