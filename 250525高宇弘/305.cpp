#include<iostream>	
using namespace std;
int sum=0;
int f(int day)
{
	if(day==10) return 1;
	sum=(f(day+1)+1)*2;
}
int main()
{
	f(1);
	cout<<sum; 
	return 0;
}
