#include "Ball.h"
#include <cmath>
Ball::Ball(double r)
{
	this->r = r;
	Volume = 4 / 3 * 3.141592 * pow(r, 3);
	Square = 4 * 3.141592 * pow(r, 2);
}

double Ball::getR()
{
	return this->r;
}
