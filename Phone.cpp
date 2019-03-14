//Kevin Cevallos
//March 2, 2017
//Lab 2
//Phone.cpp
//Phone source file
//
#include"Phone.h"
//Constructors
Phone::Phone()
{
	area = 0;
	exchange = 0;
	line = 0;
	texts = 10;
}

Phone::Phone(int code, int exch, int li, int max)
{
	area = code;
	exchange = exch;
	line = li;
	texts = max;
}

Phone::Phone(const Phone& p)
{
	area = p.area;
	exchange = p.exchange;
	line = p.line;
	texts = p.texts;
}
//Mutators
bool Phone::setArea(int a)
{
	bool valid = false;
	if(a <= 999 && a >= 100)
	{
		area = a;
		valid = true;
	}
	return(valid);
}

bool Phone::setEx(int e)
{
	bool valid = false;
	if(e <= 999 && e >= 100)
	{
		exchange = e;
		valid = true;
	}
	return (valid);
}

bool Phone::setLine(int num)
{
	bool valid = false;
	if(num <= 9999 && num > 999)
	{
		line = num;
		valid = true;
	}
	return (valid);

}

void Phone::setTexts(int t)
{
	texts = t;
}
//Acessors
int Phone::getArea()
{
	return area;
}

int Phone::getEx()
{
	return exchange;
}

int Phone::getLine()
{
	return line;
}

int Phone::getTexts()
{
	return texts;
}
//Input
void Phone::inputPhone()
{
	int a; int e; int l; int t;
	
        do{
                cout << "Enter an Area Code (100-999): " << endl;
                cin >> a;
        }while(setArea(a) == false);

	do{
		cout << "Enter an Exchange code (100-999): " << endl;
	        cin >> e;
	}while(setEx(e) == false);
	
	do{
		cout << "Enter a line number (1000-9999): " << endl;
		cin >> l;
	}while(setLine(l) == false);

	cout << "Enter a max text number: " << endl;
	cin >> t;
	
	displayPhone();
}

void Phone::displayPhone()
{
	cout << "Phone: " << "(" << area << ")" << "-"  << exchange << "-" << line << endl;
}

/*int main()
{
	Phone p;
	p.inputPhone();
	p.displayPhone();
}*/
