//Kevin Cevallos
//February 22, 2017
//Lab 2
//
#include<iostream>
#include"Name.cpp"
#include"Program.cpp"
#include"date.cpp"
#include"Course.cpp"
#include"Phone.cpp"

using namespace std;

class Student{
	public:
		//Default Constuctor
		Student();

		//Constructor with name and birthday
		Student(string first, string mid, string last, int m, int d, int y);

		//Copy Constructor
		Student(const Student& s);
		
		//Populates all
		void input();

		//Alter ID Number
		void setID(int iD);

		//Alter Full Name
		void setName(string first, string mid, string last);

		//Alter first name
		void setFirstName(string first);

		//Alter middle name
		void setMiddleName(string mid);

		//Alter last name
		void setLastName(string last);

		//Alter Day
		bool setDay(int d);

		//Alter month
		bool setMonth(int m);

		//Alter year
		bool setYear(int y);

		//Alter Gender
		bool setGender(string gend);

		//Course methods
		void fillCourses(int n);

		double calculateGPA();

		int calculateCreditsEarned();

		bool preferred(string pref);

		void display();

	private:
		string gender; int idNum;
		int numCourses;
		int creditsEarned;
		double gpa;

		Name name;
		Date date;
		Program program;
		Course course;
		Course classes[10];
		Phone cellPhone;
		Phone homePhone;
		string preferredPhone;
		
};
