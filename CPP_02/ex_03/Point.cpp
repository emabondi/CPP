#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {

}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {

}

Point::Point(const Point &point){
	*this = point;
}

Point &Point::operator=(const Point &f)
{
	(void) f;
	return (*this);
}

Point::~Point(){}