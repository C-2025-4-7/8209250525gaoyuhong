#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cin>>x;
	if(0<x&&x<1)
	{
		y=3-2*x;
	}
	else if(1<=x&&x<5)
	{
		y=0.5/x+1;
	}
	else if(5<=x&&x<10)
	{
		y=x*x;
	}
	cout<<y<<endl;
	return 0;
} 
