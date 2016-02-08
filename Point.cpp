#include <iostream>
#include <cmath>
#include "Point.h"

Point::Point(){
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

Point::Point(double x, double y, double z){
	setX(x);
	setY(y);
	setZ(z);
}

double Point::distanceTo(const Point & pass1, const Point & pass2) const{
	double tempx;
	double tempy;
	double tempz;
	
	tempx = (pass1.x - pass2.x);
	tempy = (pass1.y - pass2.y);
	tempz = (pass1.z - pass2.z);
	
	tempx = tempx * tempx;
	tempy = tempy * tempy;
	tempz = tempz * tempz;
	
	return std::sqrt (tempx + tempy + tempz);
}
