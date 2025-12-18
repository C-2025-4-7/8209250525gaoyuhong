#include<iostream>	
#include<algorithm>
using namespace std;
bool arr[101]={0}; 
int main()
{
	int s=1;
	while(s<=100)
	{
		if(s==1)
		{
			for(int i=1;i<=100;i++)
			{
				arr[i]=1;
			}
			s++;
			continue;
		}
		for(int i=s;i<=100;i+=s+1)
		{
			arr[i]=1-arr[i];
		}
		s++;
	}
	for(int i=1;i<=100;i++)
	{
		if(arr[i]) cout<<i<<" ";
	}
	return 0;
}
