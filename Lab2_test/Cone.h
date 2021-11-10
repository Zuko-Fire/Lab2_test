#pragma once
#include "Body.h"
class Cone: Body
{
private:
	double h, r;
public:
	Cone(double h, double r);
	double getH();
	double getR();
	using Body::getSquare;
	using Body::getVolume;
};

