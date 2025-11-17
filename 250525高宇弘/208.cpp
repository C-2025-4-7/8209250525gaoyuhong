#include<iostream>
#include<cmath>
using namespace std;
double f(double x,double& a)
{
	x=(x+a/x)/2;
	if(abs(a-x*x)<0.000001)
	{
		return x;
	}
	return f(x,a);
}
int main()
{
	double a;
	cin>>a;
	cout<<f(a,a)<<endl;
	return 0;
} 
