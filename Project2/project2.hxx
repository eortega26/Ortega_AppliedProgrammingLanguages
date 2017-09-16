#ifndef _PROJECT2_
#define _PROJECT2_

//Contains a class of a car

class Car {
	public:
		std::string year;	// Year of the car.
		std::string color;	// Color of the car.
		
		void setYear(std::string y);
		void setColor(std::string col);
};

void Car::setYear(std::string y) {		//Sets year of car.
	year = y;
}

void Car::setColor(std::string col) {	//Sets color of car.
	color = col;
}

#endif
