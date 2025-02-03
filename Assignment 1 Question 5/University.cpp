//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include <iostream>
#include <vector>
#include "Student.h"
#include "Professor.h"
#include "CourseSection.h"
#include "Room.h"
using namespace std;



vector<Student> registrationList(string courseId, vector<CourseSection> courses, vector<vector<Student>> Students){
	vector<Student> studentList;
	for (int i =0; i < courses.size(); i++){
		CourseSection TempClass = courses[i];
		if (TempClass.getSectionId() == courseId){
			for (int j =0; j < Students[i].size(); j++){
				studentList[j] = Students[i][j];
			}
		}

	}
	return studentList;
}


vector<CourseSection> coursesTaught(string professorId, vector<Professor> professorList, vector<vector<CourseSection>> professorAssignment){
	vector<Professor> CourseofProfessor;
	for (int i =0; i < professorList.size(); i++){
		Professor TempProfessor = professorList[i];
		if (TempProfessor.getId() == professorId){
			for (int j =0; j < professorAssignment[i].size(); j++){
				CourseofProfessor[j] = professorAssignment[i][j];
			}
		}

	}
		return CourseofProfessor;

}

Room Classroom(string courseId, vector<CourseSection> courses, vector<vector<Room>> courseAssignment){
	Room roomOfClass;
	for (int i =0; i < courses.size(); i++){
		CourseSection TempClass = courses[i];
		if (TempClass.getSectionId() == courseId){
			for (int j =0; j < courseAssignment[i].size(); j++){
				roomOfClass = courseAssignment[i][j];
			}
		}

	}
	return roomOfClass;
}

void findStudent(string studentId, string courseId, vector <CourseSection> courseList,vector <vector <Student> > registration){
	for (int i =0; i < courseList.size(); i++){
	CourseSection TempClass = courseList[i];
		if (TempClass.getSectionId() == courseId){
			for (int j =0; j < registration[i].size(); j++){
				Student tempStudent = registration[i][j];
				if (tempStudent.getStudentID() == studentId){
					cout << studentId  << " is in the course " << courseId << endl;
					return;
				}
			}
		}

	}
	cout << studentId  << " is not in the course " << courseId << endl;
}


void findProfessor(string professorId, string courseId, vector<Professor> professorList, vector<vector<CourseSection>> professorAssignment){
	for (int i =0; i < professorList.size(); i++){
	Professor TempProf = professorList[i];
		if (TempProf.getId() == courseId){
			for (int j =0; j < professorAssignment[i].size(); j++){
				CourseSection tempCourse = professorAssignment[i][j];
				if (tempCourse.getSectionId() == courseId){
					cout << professorId  << " is teaching the course " << courseId << endl;
					return;
				}
			}
		}

	}
	cout << professorId  << " is not teaching the course " << courseId << endl;
}

void findRoom(string roomId, string courseId, vector<CourseSection> courseList, vector<vector<Room>> courseAssignment){
	for (int i =0; i < courseList.size(); i++){
	CourseSection tempCourse = courseList[i];
		if (tempCourse.getSectionId() == courseId){
			for (int j =0; j < courseAssignment[i].size(); j++){
				Room tempRoom = courseAssignment[i][j];
				if (tempCourse.getSectionId() == courseId){
					cout << courseId  << " is being taught in " << roomId << endl;
					return;
				}
			}
		}
	}
	cout << courseId  << " is not being taught in " << roomId << endl;
}

int main(){
	vector <CourseSection> courseList;
	vector <vector <Student> > registration;
	vector<Professor> professorList;
	vector <vector <CourseSection>> professorAssignment;
	vector<vector<Room>> courseAssignment;

	CourseSection Class1("COEN244", "Programming Methodology 2", "This class teaches more advanced c++ methods", 100);
	CourseSection Class2("ELEC 273", "Basic Circuit Analysis", "Learn how to analyze circuit designs", 100);
	CourseSection Class3("COEN 311", "Computer Organization and Software", "Learn how computers organize their memory", 100);
	CourseSection Class4("ENGR 233", "Applied Advanced Calculus", "Learn the principles of vector calculus", 100);
	Professor Teacher1("23453456", "Fadi", "El Hassan", "Fadi.Hassan@gmail.com", "1455 De Maisonneuve Ouest");
	Professor Teacher2 ("74565432", "Abdelwahab", "Hamou Lhadj", "Abdel.Lhadj@yahoo.com", "1515 Saint-Catherine");



}
