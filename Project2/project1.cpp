#include <iostream>
#include "project2.hxx"

using namespace std;

int main(){
		
	Car carX;
	string y = "2007";
	string c = "red";
	int color;
	int year;
	
	color = carX.setColor(c);
	year = carX.setYear(y);
	
	cout << color << endl;
}
