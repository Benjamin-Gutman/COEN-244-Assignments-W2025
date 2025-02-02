//Write a class called Student that represents the students of a university.
//A student is identified using a student id (string), first name (string), last name (string),
//address (string), and email (string). The class should have one or more constructors,
//accessing member functions, a function that prints information about a student. Write a
//driver (i.e., a program with a main function) to test the Student class.

//============================================================================
// Name        : TestStudent.cpp
// Author      : JY
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

	Student student1;
	student1.set_StudentID("40314593");
	student1.set_FirstName("Jiyong");
	student1.set_LastName("Jeon");
	student1.set_Address("69 rue saint cathrine, montreal, QC, Canada, H2E 0L3");
	student1.set_Email("jiyong@gmail.com");

	student1.printStudentInfo();

	cout<<endl;
}
