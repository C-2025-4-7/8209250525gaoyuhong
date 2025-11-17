#include<iostream>
#include<string>
#include<stack> 
#include<cmath>
#include<cctype>
using namespace std;
double calculate_result(string str,int left,int right)
{
	int flag=0;
	for(int i=left;i<=right;i++)
	{
		if(str[i]=='(')
		{
			flag++;
		}
		else if(str[i]==')')
		{
			flag--;
		}
		if(flag==0&&(str[i]=='+'||str[i]=='-'))
		{
			double l=calculate_result(str,left,i-1);
			double r=calculate_result(str,i+1,right);
			if(str[i]=='+')
			{
				return l+r;
			}
			else
			{
				return l-r;
			}
		}
	}
	
	flag=0;
	for(int i=left;i<=right;i++)
	{
		if(str[i]=='(')
		{
			flag++;
		}
		else if(str[i]==')')
		{
			flag--;
		}
		if(flag==0&&(str[i]=='*'||str[i]=='/'))
		{
			double l=calculate_result(str,left,i-1);
			double r=calculate_result(str,i+1,right);
			if(str[i]=='*')
			{
				return l*r;
			}
			else
			{
				if(r==0)
				{
					cout<<"Error:Invalid input!"<<endl;
					exit(0);
				}
				return l/r;
			}
		}
	}
	
	flag=0;
	for(int i=left;i<=right;i++)
	{
		if(str[i]=='(')
		{
			flag++;
		}
		else if(str[i]==')')
		{
			flag--;
		}
		if(flag==0&&str[i]=='%')
		{
			double l=calculate_result(str,left,i-1);
			double r=calculate_result(str,i+1,right);
			if(r==0)
			{
				cout<<"Error:Invalid input!"<<endl;
				exit(0);
			}
			return fmod(l,r);
		}
	}
	
	if(str[left]=='('&&str[right]==')')
	{
		return calculate_result(str,left+1,right-1);
	}
	
	if(str[left]=='-')
	{
		return -calculate_result(str,left+1,right);
	}
	
	int index=-1;
	for(int i=left;i<=right;i++)
	{
		if(str[i]=='.')
		{
			if(index!=-1)
			{
				cout<<"Error:Invalid input!"<<endl;
				exit(0);
			}
			index=i;
		}
		else if(!isdigit(str[i]))
		{
			cout<<"Error:Invalid input!"<<endl;
			exit(0);
		}
	}
	
	double result=0;
	if(index==-1) index=right+1;
	for(int i=left;i<index;i++)
	{
		result=result*10+(str[i]-'0');
	}
	
	double fac=0.1;
	for(int i=index+1;i<=right;i++)
	{
		result=result+(str[i]-'0')*fac;
		fac=fac*0.1;
	}
	
	return result;
}
void calculate(string str)
{
	stack<char> s;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='(')
		{
			s.push(str[i]);
		}
		else if(str[i]==')')
		{
			if(s.empty())
			{
				cout<<"Error:Invalid input!"<<endl;
				return;
			}
			s.pop();
		}
	}
	if(!s.empty())
	{
		cout<<"Error:Invalid input!"<<endl;
		return;
	}
	double result=calculate_result(str,0,str.size()-1);
	cout<<"Result = "<<result<<endl;
	
}
int main()
{
	string s;
	cin>>s;
	calculate(s);
	return 0;
}
