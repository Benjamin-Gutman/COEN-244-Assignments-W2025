//Benjamin Gutman 40315265
//Jiyong Jeon 40314593



#include "CourseSection.h"
#include<iostream>
#include <string>
using namespace std;

//Default constructor
CourseSection :: CourseSection(){
	courseSectionId = "";
	courseTitle = "";
	courseDescription = "";
	courseCapacity = 0;
}
//Parametrized constructor
CourseSection :: CourseSection(string id, string title, string description, int capacity){
	courseSectionId = id;
	courseTitle = title;
	courseDescription = description;
	courseCapacity = capacity;
}

//Setters

void CourseSection :: setSectionId(string Id){
	courseSectionId = Id;
}

void CourseSection :: setSectionTitle(string Title){
	courseTitle = Title;
}

void CourseSection :: setSectionDescription(string Description){
	courseDescription = Description;
}

void CourseSection :: setSectionCapacity(int Capacity){
	courseCapacity = Capacity;
}

//Getters

string CourseSection ::getSectionId(){
	return courseSectionId;
}

string CourseSection ::getSectionTitle(){
	return courseTitle;
}
string CourseSection ::getSectionDescription(){
	return courseDescription;
}
int CourseSection :: getSectionCapacity(){
	return courseCapacity;
}

//Member functions

void CourseSection :: printCourseInformation(){
	cout << courseSectionId << "\n" << courseTitle << "\n" << courseDescription << "\nMaximum Capacity: " << courseCapacity << endl;
}
