#pragma once
#include"shape.h"
#include<iostream>
using namespace std;


class triangle:public shape
{
public:
	float area();
	~triangle(){ cout << "~ triangle () called."<<endl;   }
	triangle(float,float,string);
private:
	float height;
	float base;
};