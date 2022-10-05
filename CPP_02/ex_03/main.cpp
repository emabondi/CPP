#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	std::cout << "Point(2, 2) in Triangle 1.5 - 1.5, 1.5 - 10.5, 20 - 10.5" << std::endl << "Result: "
	<< bsp(Point(1.5,1.5), Point(1.5,10.5), Point(20,10.5),  Point(2, 2)) << std::endl;
	std::cout << "Point(10, 10) in Triangle 1 - 1, 1 - 5, 10 - 5" << std::endl << "Result: "
	<< bsp(Point(1,1), Point(1,5), Point(10,5),  Point(10, 10)) << std::endl;
	std::cout << "Point(15, 1) in Triangle 10.5 - 203, 10 - 20, 135 - 20" << std::endl << "Result: "
	<< bsp(Point(10,20), Point(10.5,203), Point(135,20),  Point(15, 1)) << std::endl;
}