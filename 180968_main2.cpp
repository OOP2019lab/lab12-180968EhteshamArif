/*#pragma once
#include"circle.h"
#include"rectangle.h"
#include"shape.h"
#include"triangle.h"
#include<iostream>
using namespace std;
int sumArea(shape &a,shape &b)
{
	int sum=a.area()+b.area();
	return sum;
}
void main()
{
triangle t1(1.0,9.0, "Red");
circle c1(2, "Blue");
rectangle r1(6,2, "Orange");
shape s1("Purple");
cout<<sumArea(t1,c1)<<endl;
cout<<sumArea(s1,r1)<<endl;
cout<<sumArea(s1,t1)<<endl;
}*/
