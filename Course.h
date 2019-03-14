//Kevin Cevallos
//February 27, 2017
//Lab 2
//Course.h
//
#include <iostream>
#include <array>
using namespace std;

class Course{
	public:
		Course();

		Course(string cName, string prof, string g, int credNum, int cID);

		Course(const Course& c);
		
		void inputCourse();

		void setCourseName(string n);

		void setCourseID(int num);

		bool setCredNum(int num);

		void setInstructor(string inst);

		bool setGrade(string g);

		string getCourseName();

		int getCourseID();

		int getCredNum();

		string getInstructor();

		string getGrade();

		void displayCourse();
	private:
		string course; string instructor; string grade;
		int credits; int courseID;
};                   
