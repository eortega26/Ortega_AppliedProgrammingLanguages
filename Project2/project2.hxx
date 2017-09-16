#ifndef _PROJECT2_
#define _PROJECT2_

//Contains a class of a car

class Car {
	public:
		std::string color;
		std::string year;
		
	
		void setYear(std::string y) {
			y = year;
			std::cout << "The year of the car is:" << year << std::endl;
		}
		void setColor(std::string c) {
			c = color;
		}
};

#endif
