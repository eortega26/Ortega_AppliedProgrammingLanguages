#include <iostream>
#include <string>
#include "project2.hxx"

using namespace std;

// This calls on the class "Car" and calls its member functions.
int main(){
	
	// Calls on the class "Car"
	Car carX;
	
	// Sets year and color
	string y = "2007";
	string c = "red";
	
	// Calls the member functions in the class
	carX.setYear(y);
	carX.setColor(c);
}
