/*
 * TestCourseSection.cpp
 *
 *  Created on: Jan 28, 2025
 *      Author: benjamin
 */



#include "CourseSection.h"


int main(){

	string classId = "Coen244";
	string classTitle = "Programming Methodology 2";
	string classDescription = "This class covers more advanced topics in the language c++";
	int classCapacity = 100;
	CourseSection Class1;
	CourseSection Class2(classId, classTitle, classDescription, classCapacity);

	Class1.setSectionId(classId);
	if (classId == Class1.getSectionId()){
		cout << "ID test passed" << endl;
	}

	Class1.setSectionTitle(classTitle);
	if (classTitle == Class1.getSectionTitle()){
		cout << "Title test Passed" << endl;
	}

	Class1.setSectionDescription(classDescription);
	if (classDescription == Class1.getSectionDescription()){
		cout << "Description test passed" << endl;
	}

	Class1.setSectionCapacity(classCapacity);
	if (classCapacity == Class1.getSectionCapacity()){
		cout << "Capacity test passed" << endl;
	}

	if (classId == Class2.getSectionId()){
		cout << "ID test passed" << endl;
	}

	if (classTitle == Class2.getSectionTitle()){
		cout << "Title test Passed" << endl;
	}

	if (classDescription == Class2.getSectionDescription()){
		cout << "Description test passed" << endl;
	}

	if (classCapacity == Class2.getSectionCapacity()){
		cout << "Capacity test passed" << endl;
	}


	Class1.printCourseInformation();
	Class2.printCourseInformation();



}


