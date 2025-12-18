#include<iostream>
using namespace std;
void getGCD(int a,int b,int& gcd)
{
	while(b>0)
	{
		int t=a%b;
		a=b;
		b=t;
	}
	gcd=a;
}
void getLCM(int a,int b,int& gcd,int& lcm)
{
	lcm=a*b/gcd;
}
int main()
{
	int a,b,gcd,lcm;
	cin>>a>>b;
	getGCD(a,b,gcd);
	getLCM(a,b,gcd,lcm);
	cout<<"最大公约数："<<gcd<<endl;
	cout<<"最小公倍数："<<lcm; 
	
	return 0;	
} 
