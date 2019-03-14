//Kevin Cevallos
//Lab 2
//Date class
//February 27, 2017
//
#include<iostream>
using namespace std;

class Date{
	public:
		Date();

		Date(const Date& d);

		Date(int m, int d, int y);

		Date(int mN, int mX);

		void inputDate();

		void displayDate();

		bool setDate(int m, int d, int y);

		bool setMonth(int m);
				
		bool setDay(int d);

		bool setYear(int y);

		int getMonth();
		
		int getDay();

		int getYear();

		int getMin();

		int getMax();
	//private:
		int month; int day; int year;
		int min; int max;
};
