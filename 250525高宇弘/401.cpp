#include<iostream>
#include<map>
using namespace std;
int arr[10];
int main()
{
	int n;
	int l=0;
	map<int,int> cnt;
	for(int i=0;i<10;i++)
	{
		cin>>n;
		if(cnt[n]==0)
		{
			arr[l]=n;
			l++; 
		}
		cnt[n]++;
	}
	for(int i=0;i<l;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
} 
