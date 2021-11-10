#pragma once
#include"Body.h"
class Parallelepiped :Body
{private:
	double a, b, h;
public:
	Parallelepiped(double a, double b, double h);
	double getA();
	double getB();
	double getH();
	using Body::getSquare;
	using Body::getVolume;
	
};

