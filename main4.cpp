#include"circle.h"
#include"rectangle.h"
#include"shape.h"
#include"triangle.h"
#include<iostream>
using namespace std;


int main()
{
	shape *s1= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
delete s1; //identify which destructor in invoked


	return 0;
}