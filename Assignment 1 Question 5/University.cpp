//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include <iostream>
#include <vector>
#include "Student.h"
#include "Professor.h"
#include "CourseSection.h"
#include "Room.h"
using namespace std;


//This function finds a class and returns the list of students associated with it
vector<Student> registrationList(string courseId, vector<CourseSection> courses, vector<vector<Student>> Students){
	vector<Student> studentList;
	for (int i =0; i < courses.size(); i++){
		CourseSection TempClass = courses[i];
		if (TempClass.getSectionId() == courseId){
				studentList = Students[i];
				return studentList;
		}

	}
	//Exception Handling
	cout << "There is no such class";
	return studentList;
}

//This function finds a professor and returns the list of classes the given professor is teaching
vector<CourseSection> coursesTaught(string professorId, vector<Professor> professorList, vector<vector<CourseSection>> professorAssignment){
	vector<CourseSection> CourseofProfessor;
	for (int i =0; i < professorList.size(); i++){
		Professor TempProfessor = professorList[i];
		if (TempProfessor.getId() == professorId){
				CourseofProfessor = professorAssignment[i];
				return CourseofProfessor;
		}

	}
	//exception handling
	cout << "There is no such professor" << endl;
	return CourseofProfessor;

}

//This function finds the classroom associated with a given class
Room Classroom(string courseId, vector<CourseSection> courses, vector<vector<Room>> courseAssignment){
	Room roomOfClass;
	for (int i =0; i < courses.size(); i++){
		CourseSection TempClass = courses[i];
		if (TempClass.getSectionId() == courseId){
			for (int j =0; j < courseAssignment[i].size(); j++){
				roomOfClass = courseAssignment[i][j];
				return roomOfClass;
			}
		}

	}
	//exception handling
	cout << "There is no such class" << endl;
	return roomOfClass;
}


//function finds if the student is in a given class
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
			//Break when the student is not found in the class specified
			break;
		}

	}
	cout << studentId  << " is not in the course " << courseId << endl;
}


void findProfessor(string professorId, string courseId, vector<Professor> professorList, vector<vector<CourseSection>> professorAssignment){
	for (int i =0; i < professorList.size(); i++){
	Professor TempProf = professorList[i];
		if (TempProf.getId() == professorId){
			for (int j =0; j < professorAssignment[i].size(); j++){
				CourseSection tempCourse = professorAssignment[i][j];
				if (tempCourse.getSectionId() == courseId){
					cout << professorId  << " is teaching the course " << courseId << endl;
					return;
				}
			}
			//Break when professor is found but the class is not
			break;
		}

	}
	cout << professorId  << " is not teaching the course " << courseId << endl;
}


//This function finds whether a room is being used by a certain class
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
			//Break statement for when course is found but not the room
			break;
		}
	}
	cout << courseId  << " is not being taught in " << roomId << endl;
}

int main(){
//Main vectors to store data
	vector <CourseSection> courseList;
	vector <vector <Student> > registration;
	vector<Professor> professorList;
	vector <vector <CourseSection>> professorAssignment;
	vector<vector<Room>> courseAssignment;


//Initializing test variables for the function
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

//Adding the test variables into the previously defined vectors
	courseList.push_back(Class1);
	courseList.push_back(Class2);
	courseList.push_back(Class3);
	courseList.push_back(Class4);

	registration.resize(courseList.size());

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

	professorList.push_back(Teacher1);
	professorList.push_back(Teacher2);

	professorAssignment.resize(professorList.size());

	professorAssignment[0].push_back(Class1);
	professorAssignment[0].push_back(Class3);
	professorAssignment[1].push_back(Class2);
	professorAssignment[1].push_back(Class4);

	courseAssignment.resize(courseList.size());

	courseAssignment[0].push_back(Room1);
	courseAssignment[1].push_back(Room2);
	courseAssignment[2].push_back(Room3);
	courseAssignment[3].push_back(Room4);


//Test registrationList with a real and fake course id

	vector<Student> studentClassList1 = registrationList("COEN 311", courseList, registration);
	for (int i = 0; i < studentClassList1.size(); i++){
		studentClassList1[i].printStudentInfo();
	}

	vector<Student> studentClassList2 = registrationList( "asdf", courseList, registration);
		for (int i = 0; i < studentClassList2.size(); i++){
			studentClassList2[i].printStudentInfo();
		}

//test coursesTaught with a real and fake Professor Id

	vector<CourseSection> ProfClassList1 =  coursesTaught("23453456", professorList, professorAssignment);
			for(int i=0; i<ProfClassList1.size(); i++){
				ProfClassList1[i].printCourseInformation();
			}
	vector<CourseSection> ProfClassList2 =  coursesTaught("23409987", professorList, professorAssignment);
			for(int i=0; i<ProfClassList2.size(); i++){
				ProfClassList2[i].printCourseInformation();
			}
//test classroom function with a real and fake course id
	Room testClassroom1= Classroom("ENGR 233", courseList, courseAssignment);
	testClassroom1.displayRoom();


	Room testClassroom2= Classroom("Not a real class", courseList, courseAssignment);
	testClassroom2.displayRoom();


//Test findStudent function with real and fake names

	findStudent("40315265", "COEN 311", courseList, registration);

	findStudent("44069454", "COEN 244", courseList, registration);

	findStudent("44069454", "ENGR 233", courseList, registration);

	findStudent("12341234", "asdfasdf", courseList, registration);

//Test the findTeacher function with real and fake inputs

	findProfessor( "23453456", "COEN 311", professorList, professorAssignment);

	findProfessor( "23453456", "ENGR 233", professorList, professorAssignment);

	findProfessor( "12348765", "COEN 244", professorList, professorAssignment);

	findProfessor( "45620986", "erwe;lkghwer", professorList, professorAssignment);


//Test the findRoom function with real and fake inputs

	findRoom(127, "COEN 311", courseList, courseAssignment);

	findRoom(127, "COEN 244", courseList, courseAssignment);

	findRoom(465, "ENGR 233", courseList, courseAssignment);

	findRoom(634, "gjtdh", courseList, courseAssignment);


	return 0;
}
