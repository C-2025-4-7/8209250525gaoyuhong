#include<iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
	double side1,side2,side3;
	cout<<"Enter three sides of a triangle: ";
	cin>>side1>>side2>>side3;
	if(is_valid(side1,side2,side3))
		cout<<"The area of the triangle is "<<area(side1,side2,side3)<<endl;
	else
		cout<<"The input is invalid."<<endl;
	return 0;
}