#include"circle.h"
using namespace std;


float circle::area()
	{
		float a=3.14*pow(radius,2);
		return a;
	}
circle::circle(float r,string c)
{
	color=c;
	radius=r;
}