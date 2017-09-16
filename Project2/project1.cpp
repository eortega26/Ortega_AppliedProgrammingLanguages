#include <iostream>
#include "project2.hxx"

using namespace std;

int main(){
		
	Car carX;
	string year; 
	string color; 
	year = carX.setColor("red");
	color = carX.setYear("2007");
	
	cout << "The model year is:" << year << endl;
	cout << "The color of the car is:" << color << endl;
}
