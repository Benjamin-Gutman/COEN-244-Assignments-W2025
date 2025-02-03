//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

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
