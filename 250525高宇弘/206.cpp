#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int num=a*b,c;
	while(1)
	{
		c=a%b;
		if(c==0) break;
		a=b;
		b=c;
	}
	cout<<"最大公约数:"<<b<<endl;
	cout<<"最小公倍数:"<<num/b<<endl;
	return 0;
} 
