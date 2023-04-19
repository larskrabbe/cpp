
#include "Point.hpp"

float sign(Point const point, Point const x, Point const y)
{
	return ((point.getX().toFloat() - y.getX().toFloat()) * (x.getY().toFloat() - y.getY().toFloat()) - (x.getX().toFloat() - y.getX().toFloat()) * (point.getY().toFloat() - y.getY().toFloat()));
}

bool bsp(Point const x, Point const y, Point const z, Point const point)
{
	float num1, num2, num3;
	bool isNegative, isPositive;

	num1 = sign(point, x, y);
	num2 = sign(point, y, z);
	num3 = sign(point, z, x);
	
	if (num1 == 0 && num2 == 0 && num3 == 0)
		return (false);

	isNegative = num1 < 0 || num2 < 0 || num3 < 0;
	isPositive = num1 > 0 || num2 > 0 || num3 > 0;

	return !(isNegative && isPositive);
}