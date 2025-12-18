#include<iostream>
#include<string>
using namespace std;
int indexOf(string s1, string s2)
{
	int len = s1.size();
	int index = -1;
	for (int i = 0; i < s2.size(); i++)
	{
		if (i + len-1< s2.size())
		{
			string s = s2.substr(i, len);
			if (s == s1)
			{
				index = i;
				break;
			}
		}
	}
	return index;
}
int main() {
	string s1, s2;
	cout << "Enter the first string:";
	getline(cin, s1);
	cout <<"Enter the second string:";
	getline(cin,s2);
	cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is " << indexOf(s1,s2);
	return 0;
}

