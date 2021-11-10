#include "Parallelepiped.h"
Parallelepiped::Parallelepiped(double a, double b, double h)
{
	this->a = a;
	this->b = b;
	this->h = h;
	this->Volume = a * b * h;
	this->Square = 2 * (a * b + a * h + h * b);
}

double Parallelepiped::getA()
{
	return this ->a;
}

double Parallelepiped::getB()
{
	return this->b;
}

double Parallelepiped::getH()
{
	return this->h;
}
