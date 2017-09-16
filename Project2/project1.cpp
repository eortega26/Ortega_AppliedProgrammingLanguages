#include <iostream>
#include "project2.hxx"

using namespace std;

int main(){
		
	Car carX;
	
	cout << "The model year is:" << carX.setYear("2007") << endl;
	cout << "The color of the car is:" << carX.setColor("red") << endl;
}
