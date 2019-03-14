//Kevin Cevallos
//February 27, 2017
//Lab 2
//date.cpp
//Creates a date
//
#include"date.h"
		//Constructors
		//Default
		Date::Date()
                {
                        month = 0;
                        day = 0;
                        year = 0;
                        min = 1;
                        max = 12;
                }

		//Copy Constructor
                Date::Date(const Date& d)
                {
                        month = d.month;
                        day = d.day;
                        year = d.year;
                        min = d.min;
                        max = d.max;
                }

		//Custom
                Date::Date(int m, int d, int y):Date()
                {
                        month = m;
                        day = d;
                        year = y;
                }

		//Specific season
                Date::Date(int mN, int mX):Date()
                {
                        min = mN;
                        max = mX;
                }

		//Input
                void Date::inputDate()
                {
                        int m; int d; int y;

                        while(setMonth(m) == false)
                        {
                                cout << "Enter a month (1-12)." << endl;
                                cin >> m;
                                setMonth(m);
                        }

                        while(setDay(d) == false)
                        {
                                cout << "Enter a day(1-31)." << endl;
                                cin >> d;
                                setDay(d);
                        }

                        while(setYear(y) == false)
                        {
                                cout << "Enter a year(1900-Present)." << endl;
                                cin >> y;
                                setYear(y);
                        }

                        displayDate();
                }
		
		//Input
                void Date::displayDate()
                {
                        cout << "Date: (mm/dd/yyyy) " << month << "/" << day << "/" << year << endl;
                }

		//Mutator methods
                bool Date::setDate(int m, int d, int y)
                {
			int m1 = m; int d1 = d; int y1 = y;

                        setMonth(m1);
                        while(setMonth(m1) == false){
                                cout << "Enter a new month:" << endl;
				cin >> m1;
                                if(setMonth(m1) == true){
                                        month = m1;
                                }
                        }

                        setDay(d1);
                        while(setDay(d1) == false){
                                cout << "Enter a new day:" << endl;
                                cin >> d1;
                                if(setDay(d1) == true){
                                        day = d1;
                                }
                        }

                        setYear(y1);
                        while(setYear(y1) == false){
                                cout << "Enter a new year:" << endl;
                                cin >> y1;
                                if(setYear(y1) == true){
                                        year = y1;
                                }
                        }
                }

                bool Date::setMonth(int m)
                {
                        bool valid = false;
                        if(m <= max && m >= min)
                        {
                                month = m;
                                valid = true;
                                return valid;
                        }
                        return (valid);
                }
                
		bool Date::setDay(int d)
                {
                        bool valid = false;
                        if(d < 32 && d > 0)
                        {
                                day = d;
                                valid = true;
                                return valid;
                        }
                        return (valid);
                }

                bool Date::setYear(int y)
                {
                        bool valid = false;
                        if(y < 2017 && y > 1899)
                        {
                                year = y;
                                valid = true;
                                return valid;
                        }
                        return (valid);
                }

		//Accessor Methods
                int Date::getMonth()
                {
                        cout << "Month is " << month << endl;
                        return month;
                }

                int Date::getDay()
                {
                        cout << "Day is " << day << endl;
                        return day;
                }

                int Date::getYear()
                {
                        cout << "Year is " << year << endl;
                        return year;
                }

                int Date::getMin()
                {
                        cout << "Min is: " << min << endl;
                        return min;
                }

                int Date::getMax()
                {
                        cout << "Max is: " << max << endl;
                        return max;
                }

/*int main()
{
	Date d; 
	Date dob(5,28,1997);
	Date copy(dob);
	Date fall(9,11);
	int month;

	cout << "Date created using default constructor: ";
	d.displayDate();

	cout << "Date created using custom constructor: ";
	dob.displayDate();

	cout << "Date created using copy constructor: ";
	copy.displayDate();

	cout << "Update the object by default constructor: ";
	d.inputDate();

	cout << "Updated object is: ";
	d.displayDate();
}*/
