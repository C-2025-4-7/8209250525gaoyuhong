#include<iostream>	
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		if (counts[i])
		{
			cout << (char)(i + 'a') << ": " << counts[i] << "times"<<endl;
		}
	}
}
int main()
{
	string s;
	getline(cin, s);
	int counts[26] = { 0 };
	for (int i = 0; i < s.size(); i++)
	{
		if (isalpha(s[i]))
		{
			counts[tolower(s[i]) - 'a']++;
		}
	}
	count(s.c_str(), counts);
	return 0;
}
