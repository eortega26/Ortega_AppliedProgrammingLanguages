#ifndef _PROJECT2_
#define _PROJECT2_

//Contains a class called Car

class Car {
	public:
		
		std::string color;	// Variable for color of car.
		std::string year;	// Variable for the year of the car.
		
		// Year member function
		void setYear(std::string y) {
			year = y;
			std::cout << "The year of the car is: " << year << std::endl;
		}
		// Color member function
		void setColor(std::string c) {
			color = c;
			std::cout << "The color of the car is: " << color << std::endl;
		}
};

#endif
