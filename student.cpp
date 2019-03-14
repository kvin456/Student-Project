//Kevin Cevallos
//February 27, 2016
//Lab 2
//student.cpp
//
#include"student.h"

                //Default Constuctor
		Student::Student()
                {
                        idNum = 0;
                        Name name;
                        Date date;
                        Program program;
                        gender = "NA";
			numCourses = 0;
			creditsEarned = 0;
			gpa = 0.0;
			Course classes[10];
			Phone cellPhone;
			Phone homePhone;
			preferredPhone = ' ';

                }

                //Constructor with name and birthday
                Student::Student(string first, string mid, string last, int m, int d, int y):Student()
                {

                        Name name(first, mid, last);
                        Date date(m, d, y);
                }

		Student::Student(const Student& s)
		{
			idNum = s.idNum;
			gender = s.gender;
			Name name(s.name);
			Date date(s.date);
			Program program(s.program);
			numCourses = s.numCourses;
			creditsEarned = s.creditsEarned;
			gpa = s.gpa;
			
		}

                //Populates all
                void Student::input()
                {
                        //string first; string mid; string last;
                        //int m; int d; int y;
                        int id;
                        string gend;
			string pref;

                        name.inputName();

                        date.inputDate();

                        cout << "Enter ID number: " << endl;
                        cin >> id;
                        idNum = id;

                        do{
                                cout << "Enter gender (Male/Female): " << endl;
                                cin >> gend;
                        }
                        while(setGender(gend) == false);

                        program.inputProgram();

			while(numCourses == 0 || numCourses > 10)
			{
				cout << "Enter the amount of courses: " << endl;
				cin >> numCourses;
			}
			fillCourses(numCourses);

			gpa = calculateGPA();
			creditsEarned = calculateCreditsEarned();

			cout << "Enter Phones (House and Cell): " << endl;
			homePhone.inputPhone();
			cellPhone.inputPhone();

			do{
				cout << "Enter preferred phone(C or H): " << endl;
				cin >> pref;
			}while(preferred(pref) == false);

                }

                //Alter ID Number
                void Student::setID(int iD)
                {
                        idNum = iD;
                }

                //Alter Full Name
                void Student::setName(string first, string mid, string last)
                {
                        name.setFirst(first);
                        name.setMid(mid);
                        name.setLast(last);
                }

                //Alter first name
                void Student::setFirstName(string first)
                {
                        name.setFirst(first);
                }

                //Alter middle name
                void Student::setMiddleName(string mid)
                {
                        name.setMid(mid);
                }

                //Alter last name
                void Student::setLastName(string last)
                {
                        name.setLast(last);
                }

                //Alter Day
                bool Student::setDay(int d)
                {
                        date.setDay(d);
                }

                //Alter month
                bool Student::setMonth(int m)
                {
                        date.setMonth(m);
                }

                //Alter year
                bool Student::setYear(int y)
                {
                        date.setYear(y);
                }

                //Alter Gender
                bool Student::setGender(string gend)
                {
                        bool valid = false;
                        if(gend == "Male" || gend == "Female" || gend == "male" || gend == "female")
                        {
                                gender = gend;
                                valid = true;
                                return valid;
                        }
                        return (valid);
                }

		void Student::fillCourses(int n)
		{
			for(int i = 0; i < n; i++)
			{
				Course c;
				c.inputCourse();
				classes[i] = c;
			}
		}

		double Student::calculateGPA()
		{
			double sum = 0.0;
			for(int i = 0; i < numCourses; i++)
			{
				double rec = 0.0;
				string grade = classes[i].getGrade();

				if(grade == "A")
					rec = 4.0;
				if(grade == "A-")
					rec = 3.67;
	                        if(grade == "B+")
					rec = 3.33;
                                if(grade == "B")
					rec = 3.0;
                                if(grade == "B-")
					rec = 2.67;
                                if(grade == "C+")
					rec = 2.33;
                                if(grade == "C")
					rec = 2.0;
                                if(grade == "C-")
					rec = 1.67;
                                if(grade == "D")
					rec = 1.0;
                                if(grade == "F")	
					rec = 0.0;
                                	
				sum += rec;
			}
			return sum/numCourses;
		}

		int Student::calculateCreditsEarned()
		{
			int totalCred = 0;
			for(int i = 0; i < numCourses; i++)
			{
				totalCred += classes[i].getCredNum();
			}	
			return totalCred;
		}

		bool Student::preferred(string pref)
		{
			bool valid = false;
			if(pref == "H" || pref == "C")
			{
				preferredPhone = pref;
				valid = true;
			}
			return(valid);
		}

                void Student::display()
                {
                        name.displayName();
                        cout << "ID Number: " << idNum << endl;
                        date.displayDate();
                        cout << "Gender: " << gender << endl;
                        program.displayProgram();
			cout << "GPA: " << gpa << " Credits Earned: " << creditsEarned << endl;
			cout << "House Phone: ";
		       	homePhone.displayPhone();
			cout << "Cell Phone: "; 
			cellPhone.displayPhone();
			cout << "Preferred: " << preferredPhone << endl;
                }


//void test(Student& s)

/*int main()
{
	Student s1;

	s1.input();
	s1.display();*/
	/*cout << "Final object: " << endl;
	s1.display();

	test(s2);
	cout << "Final object: " << endl;
	s2.display();
}*/

/*void test(Student& 
{
	//Variables for mutators
	int month; int day; int year;
	string first; string mid; string last;
	int iDNum;
	string gender;

	cout << "Original objct: " << endl;
	s.display();
	cout << endl;

	s.input();
	s.display();
	cout << endl;

	do{
		cout << "Set month:" << endl;
		cin >> month;
	}
	while(s.setMonth(month) == false);
	s.display();
	cout << endl;

	do{
		cout << "Set day:" << endl;
		cin >> day;
	}
	while(s.setDay(day) == false);
	s.display();
	cout << endl; 

	do{
		cout << "Set year:" << endl;
		cin >> year;
	}
	while(s.setYear == false);

	s.display
}*/

