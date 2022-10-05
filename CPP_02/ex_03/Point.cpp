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

Fixed const &Point::getX() const
{
	return _x;
}

Fixed const &Point::getY() const
{
	return _y;
}

std::ostream& operator<<(std::ostream & os, Point const & i) {
	return (os << i.getX() << "," << i.getY());
}

Point::~Point(){}