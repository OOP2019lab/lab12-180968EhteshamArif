#include"triangle.h"
using namespace std;

float triangle::area()
	{
		float a=0.5*base*height;
		return a;
	}

triangle::triangle(float b,float h,string c)
{
	base=b;
	height=h;
	color=c;
}