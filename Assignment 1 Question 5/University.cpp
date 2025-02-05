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
				studentList = Students[i];

		}

	}
	return studentList;
}


vector<CourseSection> coursesTaught(string professorId, vector<Professor> professorList, vector<vector<CourseSection>> professorAssignment){
	vector<CourseSection> CourseofProfessor;
	for (int i =0; i < professorList.size(); i++){
		Professor TempProfessor = professorList[i];
		if (TempProfessor.getId() == professorId){
				CourseofProfessor = professorAssignment[i];
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

void findRoom(int roomId, string courseId, vector<CourseSection> courseList, vector<vector<Room>> courseAssignment){
	for (int i =0; i < courseList.size(); i++){
	CourseSection tempCourse = courseList[i];
		if (tempCourse.getSectionId() == courseId){
			for (int j =0; j < courseAssignment[i].size(); j++){
				Room tempRoom = courseAssignment[i][j];
				if (tempRoom.getId() == roomId){
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
	Professor Teacher1("23453456", "Fadi", "El Hassan", "1455 De Maisonneuve Ouest","Fadi.Hassan@gmail.com");
	Professor Teacher2 ("74565432", "Abdelwahab", "Hamou Lhadj", "1515 Saint-Catherine", "Abdel.Lhadj@yahoo.com");
	Student Student1("40315265", "Benjamin", "Gutman","258 Berlioz", "BenjaminGutman@icloud.com" );
	Student Student2("40314593", "Jiyong", "Jeon", "1608 Saint-Catherine", "Jiyong.Jeon@gmail.com");
	Student Student3("62538390", "John", "Doe", "349 Jaques Cartier", "JohnDoe@outlook.com");
	Student Student4("66039521", "Maria", "Jose", "220 That st", "MariaJose@yahoo.com");
	Student Student5("44069454", "Will", "Navidson", "2245 Ash Tree Lane", "NavidsonPhotography@hotmail.com");
	Room Room1(349, 120);
	Room Room2(238, 120);
	Room Room3(127, 120);
	Room Room4(516, 120);


	courseList.push_back(Class1);
	courseList.push_back(Class2);
	courseList.push_back(Class3);
	courseList.push_back(Class4);
	registration[0].push_back(Student1);
	registration[0].push_back(Student2);
	registration[1].push_back(Student1);
	registration[1].push_back(Student2);
	registration[1].push_back(Student3);
	registration[2].push_back(Student1);
	registration[2].push_back(Student2);
	registration[2].push_back(Student3);
	registration[2].push_back(Student4);
	registration[3].push_back(Student1);
	registration[3].push_back(Student2);
	registration[3].push_back(Student3);
	registration[3].push_back(Student4);
	registration[3].push_back(Student5);











}
