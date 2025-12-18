#include<iostream>
#include<cstring>
using namespace std;
const int maxn=100000100;
int a[maxn],cnt;
bool judgement[maxn];
void prime(int n)
{
	memset(judgement,1,sizeof(judgement));
	for(int i=2;i<=n;i++)
	{
		for(int j=2;i*j<=n;j++)
		{
			judgement[i*j] = 0;//去除i的所有倍数 
		}
		if(judgement[i])
		{
			a[++cnt]=i;
		}
	}
}
bool is_prime(int num)
{
	if(a[cnt]==num) return true;
	else return false;
}
int main()
{
	a[++cnt]=1;
	int n;
	cin>>n;
	prime(n);
	cout<<(is_prime(n)?"是":"不是")<<endl;
	prime(200);
	for(int i=1;i<=cnt;i++)
	{
		cout<<a[i]<<' ';
		if(i%10==0) cout<<endl; 
	}
}//时间复杂度为	O(nlglgn)
