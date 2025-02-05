//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include <iostream>
#include <string>
using namespace std;

#ifndef PROFESSOR_H_
#define PROFESSOR_H_

class Professor{

private:
	string Id;
	string firstName;
	string lastName;
	string address;
	string email;

public:

	//constructors
	Professor();
	Professor(string, string, string, string, string);

	//setters
	void setId(string);
	void setFirstName(string);
	void setLastName(string);
	void setAddress(string);
	void setEmail(string);

	//getters
	string getId();
	string getFirstName();
	string getLastName();
	string getAddress();
	string getEmail();

	//member functions
	void printInfo();


};



#endif /* ASSIGNMENT_1_QUESTION_4_PROFESSOR_H_ */
