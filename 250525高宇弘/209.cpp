#include<iostream>
using namespace std;
int main()
{
	int prenum=2,num=2,day=1; 
	while(prenum*2<=100)
	{
		num+=prenum*2;
		day++;
		prenum*=2;
	}
	double ans=num*0.8/day;
	cout<<ans<<endl;
	return 0;
} 
