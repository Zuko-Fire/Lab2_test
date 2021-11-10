#pragma once
#include "Body.h"
class Ball : Body
{
private:
	double r;
public:
	Ball(double r);
	double getR();
	using Body::getSquare;
	using Body::getVolume;
};

