/**
 * constructor.cpp
 *
 * topics:
 * 		1. constructor
 * 		2. 
 */

/**
 * definition for constructor
 */
class Point { // name of class = constructor name 
	public: 
		Point(int x, int y); // declare a constructor
		-Point(); // declare a destructor; no arguments 
		

		int getX();

		int getY();

	private:
		int x, y; // only initialize the object constructor
}


/***************************/
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}


/***************************/
Point origin(0, 0); // declare an object of that constructor
