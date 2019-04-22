
#include"rectangle.h"
using namespace std;


float rectangle::area()
	{
		float a=height*width;
		return a;
	}
rectangle::rectangle(float h,float w,string c)
{
	height=h;
	width=w;
	color=c;
}