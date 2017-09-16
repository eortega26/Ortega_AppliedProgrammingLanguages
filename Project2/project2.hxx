#ifndef _PROJECT2_
#define _PROJECT2_

//Contains a class of a car

class Car {
	public:
		std::string color;
		std::string year;
		
	
		int setYear(std::string y) {
			y = year;
			std::cout << "The year of the car is:" << y << std::endl;
		}
		int setColor(std::string c) {
			c = color;
		}
};

#endif
