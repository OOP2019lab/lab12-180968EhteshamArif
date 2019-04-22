#pragma once
#include<cmath>
#include"shape.h"
#include<iostream>
using namespace std;

class circle: public shape
{
public:
	float area();
	circle(float,string);
	~circle() { cout << "~ circle () called."<<endl;  	}
private:
	float radius;


};