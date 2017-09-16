#ifndef _PROJECT2_
#define _PROJECT2_

//Contains a class of a car

class Car {
	public:
		String year;	// Year of the car.
		String color;	// Color of the car.
		
		void setYear(String y);
		void setColor(String col);
};

void Car::setYear(String y) {		//Sets year of car.
	year = y;
}

void Car::setColor(String col) {	//Sets color of car.
	color = col;
}

#endif
