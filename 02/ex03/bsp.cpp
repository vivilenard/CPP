#include "Point.hpp"

bool	crossproduct( Point const	v1, Point const	v2)
{
	return (v1.getX() * v2.getY() - v2.getX() * v1.getY() > 0);
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	//get vectors
	Point	v_ab(b.getX() - a.getX(), b.getY() - a.getY());
	Point	v_ac(c.getX() - a.getX(), c.getY() - a.getY());
	Point	v_ap(p.getX() - a.getX(), p.getY() - a.getY());

	Point	v_ba(a.getX() - b.getX(), a.getY() - b.getY());
	Point	v_bc(c.getX() - b.getX(), c.getY() - b.getY());
	Point	v_bp(p.getX() - b.getX(), p.getY() - b.getY());

	//get determinante( = 2d-crossproduct)
	//if crossproduct (v_ab x v_ac) is positive, p is to the right(clockwise) of comparing vector and otherwise;
	if (crossproduct(v_ab, v_ap) == crossproduct(v_ac, v_ap))
		return false;
	if (crossproduct(v_bc, v_bp) == crossproduct(v_ba, v_bp))
		return false;
	return true;
}