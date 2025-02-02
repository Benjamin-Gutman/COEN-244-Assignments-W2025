//Write a class called Student that represents the students of a university.
//A student is identified using a student id (string), first name (string), last name (string),
//address (string), and email (string). The class should have one or more constructors,
//accessing member functions, a function that prints information about a student. Write a
//driver (i.e., a program with a main function) to test the Student class.


#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;


class Student{

private:
	string studentID;
	string firstName;
	string lastName;
	string address;
	string email;

public:

	Student();
	Student(string id, string fName, string lName, string addr, string mail);

	string getStudentID() const;
	string getFirstName() const;
	string getLastName() const;
	string getAddress() const;
	string getEmail() const;

	void set_StudentID(string id);
	void set_FirstName(string fName);
	void set_LastName(string lName);
	void set_Address(string addr);
	void set_Email(string mail);

	void printStudentInfo() const;

};

#endif
