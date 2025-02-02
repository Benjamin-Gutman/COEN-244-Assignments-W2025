//Write a class called Student that represents the students of a university.
//A student is identified using a student id (string), first name (string), last name (string),
//address (string), and email (string). The class should have one or more constructors,
//accessing member functions, a function that prints information about a student. Write a
//driver (i.e., a program with a main function) to test the Student class.

//============================================================================
// Name        : Student.cpp
// Author      : JY
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student() : studentID(""), firstName(""), lastName(""), address(""), email(""){

}

Student::Student(string id, string fName, string lName, string addr, string mail) : studentID(id), firstName(fName), lastName(lName), address(addr), email(mail) {}

string Student::getStudentID() const{
	return studentID;
}

string Student::getFirstName() const{
	return firstName;
}

string Student::getLastName() const{
	return lastName;
}

string Student::getAddress() const{
	return address;
}

string Student::getEmail() const{
	return email;
}

void Student::set_StudentID(string id){
	studentID = id;
}

void Student::set_FirstName(string fName){
	firstName = fName;
}
void Student::set_LastName(string lName){
	lastName = lName;
}
void Student::set_Address(string addr){
	address = addr;
}
void Student::set_Email(string mail){
	email = mail;
}

void Student::printStudentInfo() const{
	cout<<"Student ID: "<<studentID<<endl;
	cout<<"The first name of the student: "<<firstName<<endl;
	cout<<"The last name of the student: "<<lastName<<endl;
	cout<<"The address of the student: "<<address<<endl;
	cout<<"The email of the student: "<<email<<endl;
}


