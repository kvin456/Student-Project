//Kevin Cevallos
//Feruary 27, 2017
//Lab 2
//Program.cpp
//Creates program for students
//
#include"Program.h"
		//Constructors
		//Default
		Program::Program()
                {
                        campus = " ";
                        degree = " ";
                        major = "Undeclared";
                        minor = "None";
                }

		//Custom
                Program::Program(string camp, string deg, string maj, string min)
                {
                        campus = camp;
                        degree = deg;
                        major = maj;
                        minor = min;
                }

		//Copy
                Program::Program(const Program& p)
                {
                        campus = p.campus;
                        degree = p.degree;
                        major = p.major;
                        minor = p.minor;
                }

		//Input
                void Program::inputProgram()
                {
                        string camp; string deg; string maj; string min;

                        while(setCamp(camp) == false)
                        {
                                cout << "Enter a campus (RH, LC, WC)." << endl;
                                cin >> camp;
                                setCamp(camp);
                        }

                        while(setDeg(deg) == false)
                        {
                                cout << "Enter a degree (BS, BA)." << endl;
                                cin >> deg;
                                setDeg(deg);
                        }

                        cout << "Enter a major (Any or UNDECLARED)." << endl;
                        cin >> maj;
                        setMaj(maj);

                        cout << "Enter a minor (Any or NONE)." << endl;
                        cin >> min;
                        setMin(min);

                        displayProgram();
                }

		//Accessor Methods
                bool Program::setCamp(string camp)
                {
                        bool valid = false;

                        if(camp == "RH" || camp == "LC" || camp == "WC")
                        {
                                campus = camp;
                                valid = true;
                                return valid;
                        }
                        return valid;
                }

                bool Program::setDeg(string deg)
                {
                        bool valid = false;

                        if(deg == "BS" || deg == "BA")
                        {
                                degree = deg;
                                valid = true;
                                return valid;
                        }
                        return valid;

                }

                void Program::setMaj(string maj)
                {
                        major = maj;
                }

                void Program::setMin(string min)
                {
                        minor = min;
                }

		//Accessor methods
                string Program::getCamp()
                {
                        cout << "Campus: " << campus << endl;
                        return campus;
                }

                string Program::getDeg()
                {
                        cout << "Degree: " << degree << endl;
                        return degree;
                }

                string Program::getMaj()
                {
                        cout << "Major: " << major << endl;
                        return major;
                }

                string Program::getMin()
                {
                        cout << "Minor: " << minor << endl;
                        return minor;
                }

		//Display
                void Program::displayProgram()
                {
                        cout << "Program" << endl;
                        cout << "Campus: " << campus << endl;
                        cout << "Degree: " << degree << endl;
                        cout << "Major: " << major << endl;
                        cout << "Minor: " << minor << endl;
                }


/*int main()
{
	Program p;
	Program Fordham("RH","BA","Economics","NONE");
       	Program copy(Fordham);

        cout << "Program created using default constructor: ";
	p.displayProgram();

        cout << "Program created using custom constructor: ";
	Fordham.displayProgram();

	cout << "Program created using copy constructor: ";
	copy.displayProgram();

        cout << "Update the object by default constructor: ";
	p.inputProgram();

        cout << "Updated object is: ";
	p.displayProgram();
}*/
