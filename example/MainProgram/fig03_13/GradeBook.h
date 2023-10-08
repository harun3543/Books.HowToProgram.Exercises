#pragma once
#include <iostream>
#include <string>
//#include "GradeBook.h"
using namespace std;

class GradeBook
{
public:
	GradeBook(string);
	void setCourseName(string);
	void displayMessage();
	string getCourseName();

private:
	string courseName;
};

