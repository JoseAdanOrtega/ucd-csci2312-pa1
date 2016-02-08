#include <iostream>
#include <cmath>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c);

double computeArea(const Point &a, const Point &b, const Point &c){
	double S;
	double Area;
	
	double tempa;
	double tempb;
	double tempc;
	
	tempa = a.distanceTo(a,b);
	tempb = b.distanceTo(b,c);
	tempc = c.distanceTo(a,c);
	
	S = (tempa + tempb + tempc)/2.0;
	
	return std::sqrt(S*(S - tempa)*(S - tempb)*(S - tempc));
}
