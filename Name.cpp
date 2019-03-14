//Kevin Cevallos
//February 27, 2017
//Lab 2
//Name.cpp
//Creates Students name
//
#include"Name.h"
		//Constructors
		//Default
		Name::Name()
                {
                        firstName = " ";
                        middleName = " ";
                        lastName = "  ";
                }

		//Custom
                Name::Name(string first, string mid, string last)
                {
                        firstName = first;
                        middleName = mid;
                        lastName = last;
			
                }

		//Copy
                Name::Name(const Name& n)
                {
                        firstName = n.firstName;
                        middleName = n.middleName;
                        lastName = n.lastName;
                }

		//Input method
                void Name::inputName()
                {
                        string first; string mid; string last;

                        cout << "Enter a first name." << endl;
                        cin >> first;
                        firstName = first;

                        cout << "Enter middle name." << endl;
                        cin >> mid;
                        middleName = mid;

                        cout << "Enter last name." << endl;
                        cin >> last;
                        lastName = last;

                        displayName();

                }

		//Mutator Methods
                void Name::setFirst(string first)
                {
                        firstName = first;
                }

                void Name::setMid(string mid)
                {
                        middleName = mid;
                }

                void Name::setLast(string last)
                {
                        lastName = last;
                }

		//Acccessor Methods
                string Name::getFirst()
                {
                        cout << "First name: " << firstName << endl;
                        return firstName;
                }

                string Name::getMid()
                {
                        cout << "Middle name: " << middleName << endl;
                        return middleName;
                }

                string Name::getLast()
                {
                        cout << "Last name: " << lastName << endl;
                        return lastName;
                }

		//Display
                void Name::displayName()
                {
                        cout << "Name: " << firstName << " " << middleName << " " << lastName << endl;
                }


/*int main()
{
	Name def;
	Name me("Kevin", "A", "Cevallos");
	Name copy(me);

        cout << "Name created using default constructor: ";
	def.displayName();

        cout << "Name created using custom constructor: ";
	me.displayName();

	cout << "Name created using copy constructor: ";
        copy.displayName();

	cout << "Update the object by default constructor: ";
	def.inputName();

        cout << "Updated object is: ";
	def.displayName();
}*/
