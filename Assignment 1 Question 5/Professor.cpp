//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include "Professor.h"
#include <string>
using namespace std;

Professor :: Professor(){
	Id = "";
	firstName = "";
	lastName = "";
	address = "";
	email = "";
}

Professor :: Professor(string profId, string fname, string lname, string profAddress, string profEmail){
	Id = profId;
	firstName = fname;
	lastName = lname;
	address = profAddress;
	email = profEmail;
}

void Professor :: setId(string ID){
	Id = ID;
}

void Professor :: setFirstName(string fname){
	firstName = fname;
}

void Professor :: setLastName(string lname){
	lastName = lname;
}

void Professor :: setAddress(string profAddress){
	address = profAddress;
}

void Professor :: setEmail(string profEmail){
	email = profEmail;
}


string Professor :: getId(){
	return Id;
}

string Professor :: getFirstName(){
	return firstName;
}

string Professor :: getLastName(){
	return lastName;
}

string Professor :: getAddress(){
	return address;
}

string Professor :: getEmail(){
	return email;
}

void Professor :: printInfo(){
	cout << firstName << "\n" << lastName << "\n" << Id << "\nAddress: " << address << "\nEmail: " << email << endl;
}



