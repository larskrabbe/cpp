
#include	"Point.hpp"

Point::Point(float x, float y) : x(x), y(y)
{
	
}

Point::Point(const Point &a) : x(a.x), y(a.y)
{
}

Point::~Point()
{
	
}

Point& Point::operator= (const Point& a)
{
	(void)a;
	return(*this);
}
