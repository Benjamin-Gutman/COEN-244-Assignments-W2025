//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include <iostream>
#include <string>
using namespace std;

#ifndef COURSESECTION_H_
#define COURSESECTION_H_

class CourseSection{
private:
  string courseSectionId;
  string courseTitle;
  string courseDescription;
  int courseCapacity;

public:
  //Constructors
  CourseSection();
  CourseSection(string, string, string, int);

  //Setters
  void setSectionId(string);
  void setSectionTitle(string);
  void setSectionDescription(string);
  void setSectionCapacity(int);

  //Getters
  string getSectionId();
  string getSectionTitle();
  string getSectionDescription();
  int getSectionCapacity();

  //Member Functions
 void printCourseInformation();

};

#endif
