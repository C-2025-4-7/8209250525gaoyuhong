#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int egl=0,spa=0,num=0,ort=0;
	for(int i=0;i<s.size();i++)
	{
		char c=s[i];
		if(('a'<=c&&c<='z')||('A'<=c&&c<='Z')) egl++;
		else if('0'<=c&&c<='9') num++;
		else if(c==' ') spa++;
		else ort++;
	} 
	cout<<"Ó¢ÎÄ×ÖÄ¸:"<<egl<<endl;
	cout<<"¿Õ¸ñ:"<<spa<<endl;
	cout<<"Êı×Ö×Ö·û:"<<num<<endl;
	cout<<"ÆäËü×Ö·û:"<<ort<<endl;
	return 0;
} 
