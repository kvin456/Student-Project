//Kevin Cevallos
//February 27, 2017
//Lab 2
//Course.cpp
//Creates course objects
//
#include"Course.h"

		//Constructors
		//Default
		Course::Course()
		{
        		course = " "; 
			instructor = " "; 
			grade = " ";
        		credits = 0; 
			courseID = 0;			
		}

		//Custom
		Course::Course(string cName, string prof, string g, int credNum, int cID)
		{
			course = cName;
        		instructor = prof;
 			
			if(setGrade(g) == true)
			{
				grade = g;
			}

                        do{
                                cout << "Enter grade earned." << endl;
                                cin >> g;
                        }while(setGrade(g) == false);			
                        
			if(setCredNum(credNum) == true)
			{
				credits = credNum;
			}

			do{
                                cout << "Enter amount of credits." << endl;
                                cin >> credNum;
                        }while(setCredNum(credNum) == false);

                        courseID = cID;			
		}

		//Copy
		Course::Course(const Course& c)
		{
			course = c.course;
                        instructor = c.instructor;
                        grade = c.grade;
                        credits = c.credits;
                        courseID = c.courseID;
		}

		//Input
		void Course::inputCourse()
		{
			string course; string prof; string g;
			int credNum; int cID;

			cout << "Enter a course name." << endl;
				cin >> course;
				setCourseName(course);
			
			cout << "Enter instructor." << endl;
				cin >> prof;
				setInstructor(prof);

			cout << "Enter course ID." << endl;
				cin >> cID;
				setCourseID(cID);

			do{
				cout << "Enter amount of credits." << endl;
				cin >> credNum;
			}while(setCredNum(credNum) == false);

			do{
				cout << "Enter grade earned." << endl;
				cin >> g;
			}while(setGrade(g) == false);
		}

		//Mutator methods
		void Course::setCourseName(string n)
		{
			course = n;
		}

		void Course::setCourseID(int num)
		{
			courseID = num;
		}

		bool Course::setCredNum(int num)
		{
			bool valid = false;
			if(num <= 4 && num >= 1)
			{
				credits = num;
				valid = true;
			}
			return (valid);

		}

		void Course::setInstructor(string inst)
		{
			instructor = inst;
		}

		bool Course::setGrade(string g)
		{
			bool valid = false;
			string arr[] = {"A","A-","B+","B","B-","C+","C","C-","D","F"};
			for(int i = 0;i < 10; i++)
			{
				if(arr[i] == g)
				{
					grade = g;
					valid = true;
				}
			}
			return (valid);
		}

		//Accessor methods
		string Course::getCourseName()
		{
			cout << "Course: " << course << endl;
			return course;
		}

		int Course::getCourseID()
		{
			cout << "Course ID: " << courseID << endl;
			return courseID;
		}

		int Course::getCredNum()
		{
			cout << "Credits: " << credits << endl;
			return credits;
		}

		string Course::getInstructor()
		{
			cout << "Instructor: " << instructor << endl;
			return instructor;
		}

		string Course::getGrade()
		{
			cout << "Grade earned: " << grade << endl;
			return grade;
		}

		void Course::displayCourse()
		{
			cout << "Course" << endl;
			cout << "Name: " << course << endl;
		        cout << "Instructor: " << instructor << endl;
			cout << "Course ID: " << courseID << endl;
			cout << "Credits: " << credits << endl;
			cout << "Grade earned: " << grade << endl;
		}

/*int main()
{
	Course c;
	Course Comp("CISC2000", "Papadakis" , "A", 4, 1345);
	Course copy(Comp);

        cout << "Course created using default constructor: " << endl;;
	c.displayCourse();

        cout << "Course created using custom constructor: " << endl;;
	Comp.displayCourse();

	cout << "Course created with copy constructor: " << endl;;
	copy.displayCourse();

        cout << "Update the object by default constructor: " << endl;
	c.inputCourse();

        cout << "Updated object is: " << endl;;		
	c.displayCourse();
}*/                      
