//Kevin Cevallos
//Lab 2
//February 27, 2016
//Program
#include<iostream>
using namespace std;

class Program{
	public:
		Program();

		Program(string camp, string deg, string maj, string min);
						
		Program(const Program& p);
					
		void inputProgram();	
						
		bool setCamp(string camp);
					
		bool setDeg(string deg);
					
		void setMaj(string maj);	
					
		void setMin(string min);

		string getCamp();

		string getDeg();

		string getMaj();

		string getMin();

		void displayProgram();

	private:
		string campus; string degree; string major; string minor;

};
