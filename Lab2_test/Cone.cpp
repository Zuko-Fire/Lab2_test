#include "Cone.h"
#include<cmath>
Cone::Cone(double h, double r)
{
	this->h = h;
	this->r = r;
	this->Volume = 1 / 3 * 3.141592 * pow(r, 2) * h;
	this->Square = 3.141592 * r * sqrt(pow(r, 2) + pow(h, 2));
}

double Cone::getH()
{
	return this->h;
}

double Cone::getR()
{
	return this->r;
}
