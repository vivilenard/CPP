#include "Point.hpp"

Point::Point():_x(0), _y(0){}

Point::Point(Fixed const x, Fixed const y):_x(x), _y(y){}

Point::Point(const float a, const float b):_x(a), _y(b){}

Point::Point(Point const & a):_x(a._x), _y(a._y){}

Point::~Point(){}

Fixed	Point::getX() const{return this->_x;}
Fixed	Point::getY() const{return this->_y;}

Point & Point::operator=(Point const & p)
{
	(void)p;
	return *this;
}

std::ostream & operator<< (std::ostream & o, Point const & p)
{
	return (o << "(" << p.getX() << "|" << p.getY() << ")");
}