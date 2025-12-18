#include<iostream>	
#include<algorithm>
using namespace std;
void boobl(double* list)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (list[j] > list[j + 1])
			{
				swap(list[j],list[j+1]);
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	double arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	boobl(arr);
	for (int i = 0; i < 10; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
