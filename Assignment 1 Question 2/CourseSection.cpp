/*
 * CourseSection.cpp
 *
 *  Created on: Jan 28, 2025
 *      Author: benjamin
 */

#include "CourseSection.h"
#include<iostream>
#include <string>
using namespace std;


CourseSection :: CourseSection(){
	courseSectionId = "";
	courseTitle = "";
	courseDescription = "";
	courseCapacity = 0;
}

CourseSection :: CourseSection(string id, string title, string description, int capacity){
	courseSectionId = id;
	courseTitle = title;
	courseDescription = description;
	courseCapacity = capacity;
}



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

void CourseSection :: printCourseInformation(){
	cout << courseSectionId << "\n" << courseTitle << "\n" << courseDescription << "\nMaximum Capacity: " << courseCapacity << endl;
}
