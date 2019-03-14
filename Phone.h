//Kevin Cevallos
//March 2, 2017
//Lab 2
//Phone.h
//Phone object
//
#include <iostream>
using namespace std;

class Phone{
	public:
		//Default constructor
		Phone();

		//Custom constructor
		Phone(int code, int exch, int li, int max);

		//Copy constructor
		Phone(const Phone& p);

		//set Area Code
		bool setArea(int a);

		//Set Exchange
		bool setEx(int e);

		//Set Line
		bool setLine(int num);

		//Set texts
		void setTexts(int t);

		//Get Area
		int getArea();

		//Get Exchange
		int getEx();

		//Get Line
		int getLine();

		//Get texts
		int getTexts();

		//Input
		void inputPhone();

		void displayPhone();

	private:
		int area; int exchange; int line; int texts;

};
