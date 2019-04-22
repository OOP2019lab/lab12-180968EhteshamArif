#pragma once
#include<string>
#include<iostream>
using namespace std;

class shape
{
protected:
	string type;
public:
	shape()
	{
		type=" ";
		color=" ";
	}
	virtual float area()
	{
		return 0;
	}
	shape(string c)
	{
		color=c;
		
	}
	virtual ~shape(){ cout << "~shape() called."<<endl;}
	string color;
};