#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if('a'<=ch&&ch<='z') cout<<char(ch-32)<<endl;
	else cout<<ch+1<<endl;
	return 0;	
} 
