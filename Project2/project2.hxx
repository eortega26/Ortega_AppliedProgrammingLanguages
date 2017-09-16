#ifndef _PROJECT2_
#define _PROJECT2_

//Contains a class of a car

class Car {
	public:
		string year;	// Year of the car.
		string color;	// Color of the car.
		
		void setYear(string y);
		void setColor(string col);
};

void Car::setYear(string y) {		//Sets year of car.
	year = y;
}

void Car::setColor(string col) {	//Sets color of car.
	color = col;
}

#endif
