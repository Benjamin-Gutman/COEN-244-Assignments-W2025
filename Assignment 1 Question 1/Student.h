//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;


// Definition of the Student class
class Student {
private:
    string studentID;   // Unique ID of the student
    string firstName;   // First name of the student
    string lastName;    // Last name of the student
    string address;     // Address of the student
    string email;       // Email address of the student

public:
    // Default Constructor: Initializes student with empty values
    Student();

    // Parameterized Constructor: Initializes student with given values
    Student(string id, string fName, string lName, string addr, string mail);

    // Getter methods for each private attribute
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getAddress() const;
    string getEmail() const;

    // Setter methods to modify private attributes
    void set_StudentID(string id);
    void set_FirstName(string fName);
    void set_LastName(string lName);
    void set_Address(string addr);
    void set_Email(string mail);

    // Prints the student's information
    void printStudentInfo() const;
};


#endif
