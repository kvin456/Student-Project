//Kevin Cevallos
//March 2, 2017
//Lab 2
//Driver.cpp
//
#include"student.cpp"

int main()
{
	Student students[10];
	int numStudents;

	
	cout << "Enter the amount of students(1-10): " << endl;
	cin >> numStudents;
	
	if(numStudents < 1 || numStudents > 10)
	{
		cout << "Amount automatcially set to 3." << endl;
		numStudents = 3;
	}

	for(int i = 0; i < numStudents; i++)
	{
		Student s;
		s.input();
		students[i] = s;
	}

	for(int i = 0; i < numStudents; i++)
	{
		static int counter = 1;
		cout << "STUDENT #" << counter << endl;
		students[i].display();
		counter++;
	}
}
