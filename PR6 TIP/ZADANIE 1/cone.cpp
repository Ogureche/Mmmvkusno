
#include "cone.h"
void cone::setCoordinate(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}
void cone::setRadius(double r)
{
	R = r;
}
void cone::setHeight(double h)
{
	H = h;
}
void cone::setCoordinate(double& a, double& b, double& c)
{
	a = x;
	b = y;
	c = z;
}
double cone::getRadius()
{
	return R;
}
double cone::getHeight()
{
	return H;
}
double cone::area() 
{
    return pi*R*(R+sqrt(H * H + R * R));
}
double cone::volume()
{
	return pi * R * R * H / 3;
}

ostream& operator<<(ostream& stream, Cone obj)
{
	stream << "(" << obj.x << "; ";
	stream << obj.y << "; ";
	stream << obj.z << ") ";
	stream << "r = " << obj.R << " ";
	stream << "h = " << obj.H << "";

	return stream;
}