//Kevin Cevallos
//Lab 2
//Name.h
//February 27, 2017
//
#include<iostream>
using namespace std;

class Name{
	public:
		Name();
								
		Name(string first, string mid, string last);

		Name(const Name& n);

		void inputName();

		void setFirst(string first);
		
		void setMid(string mid);

		void setLast(string last);
	
	string getFirst();

		string getMid();

		string getLast();

		void displayName();

	//private:
		string firstName; string middleName;; string lastName;
};
