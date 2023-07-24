#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point();
		Point(Fixed const x, Fixed const y);
		Point(const float a, const float b);
		Point(Point const & a);
		~Point();

		Fixed	getX()	const;
		Fixed	getY()	const;

		Point & operator=(Point const & p);
};

std::ostream & operator<< (std::ostream & o, Point const & p);
bool bsp( Point const a, Point const b, Point const c, Point const point);

# endif