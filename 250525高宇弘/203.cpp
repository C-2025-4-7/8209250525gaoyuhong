#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<a+b+c<<endl;
	if(a==b||a==c||b==c)
	{
		cout<<"是等腰三角形"<<endl;
	}
	else
	{
		cout<<"不是等腰三角形"<<endl;
	}
	return 0;
} 
