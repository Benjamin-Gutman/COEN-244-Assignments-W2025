//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include <string>
#include <iostream>
#include "Professor.h"
using namespace std;


int main(){

	string ID = "aed_ttre_3324";
	string fname = "Gale";
	string lname = "Boetticher";
	string address = "6353 Juan Tabo, appt 6";
	string email = "G.Boetticher@gmail.com";
	Professor professor1;
	Professor professor2(ID, fname, lname, address, email);

	professor1.setId(ID);
	if (ID == professor1.getId()){
		cout << "ID test passed" << endl;
	}

	professor1.setFirstName(fname);
	if (fname == professor1.getFirstName()){
		cout << "First name test Passed" << endl;
	}

	professor1.setLastName(lname);
	if (lname == professor1.getLastName()){
		cout << "Last name test passed" << endl;
	}

	professor1.setAddress(address);
	if (address == professor1.getAddress()){
		cout << "Address test passed" << endl;
	}

	professor1.setEmail(email);
	if (email == professor1.getEmail()){
		cout << "Email test passed" << endl;
	}

	if (ID == professor2.getId()){
		cout << "ID test passed" << endl;
	}

	if (fname == professor2.getFirstName()){
		cout << "First name test Passed" << endl;
	}

	if (lname == professor2.getLastName()){
		cout << "Last name test passed" << endl;
	}

	if (address == professor2.getAddress()){
		cout << "Address test passed" << endl;
	}

	if (email == professor2.getEmail()){
			cout << "Email test passed" << endl;
		}


	professor1.printInfo();
	professor2.printInfo();



}

