#include <iostream>
#include "project2.hxx"

using namespace std;

int main(){
		
	Car carX;
	string year = carX.setYear("2007");
	string color = carX.setColor("red");
	
	cout << "The model year is:" << year << endl;
	cout << "The color of the car is:" << color << endl;
}
