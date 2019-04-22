//#pragma once
//#include"circle.h"
//#include"rectangle.h"
//#include"shape.h"
//#include"triangle.h"
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int count= 5;
//	char input;
//	string color=" ";
//	float height=0;
//	float base=0;
//	float length=0;
//	float radius=0;
//shape** shapesArray=new shape*[count];
//for(int i=0; i<count;)
//{
//  	cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
//	cin>>input;
//  	switch (input)
//  	{
//        	case '1':
//				{
//				cout<<"---------Triangle-------"<<endl;
//				cout<<"Enter base :";
//				cin>>base;
//				
//				cout<<"Enter height :";
//				cin>>height;
//				
//				cout<<"Enter color of triangle :";
//				cin>>color;
//				triangle t1(base,height,color);
//				shapesArray[i]=&t1;
//              	//get base from user as input
//              	//get height from user as input
//              	//get color from user as input
//              	// create new triangle object and add to shapesArray[i]
//                                	i++;
//				}
//              	break;
//        	case '2':
//				{
//				cout<<"-----------Rectangle-----------"<<endl;
//				cout<<"Enter length :";
//				cin>>length;
//				cout<<"Enter height :";
//				cin>>height;
//				cout<<"Enter color :";
//				cin>>color;
//				rectangle r1(length,height,color);
//				shapesArray[i]=&r1;
//              	//get length from user as input
//              	//get width from user as input
//              	//get color from user as input
//              	// create new rectangle object and add to shapesArray[i]
//                                	i++;
//              	break;
//				}
// 
//        	case '3':
//				{
//              	cout<<"Enter radius :";
//				cin>>radius;
//				cout<<"Enter color :";
//				cin>>color;
//				circle c1(radius,color);
//				shapesArray[i]=&c1;
//              	//get radius from user as input
//              	// create new circle object and add to shapesArray[i]
//                                	i++;
//              	break;
//				}
// 
//   	 	default:
//              	cout<<"Invalid input. Enter again." <<endl<<endl;
//              	break;
//  }
//}
//	for(int i=0;i<count;i++)
//	{
//		cout<<shapesArray[i]->area()<<endl;
//	} 
////print area of all the shapes in shapeArray
//	for(int i=0;i<count;i++)
//	{
//		delete shapesArray[i];
//	}
//	delete [] shapesArray;
////delete all object you have create using new.
//	return 0;
//}