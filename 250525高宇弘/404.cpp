#include<iostream>	
#include<algorithm>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for(int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		list3[size1 + i] = list2[i];
	}
	sort(list3, list3 + size1 + size2);
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int n1, n2;
	int list1[80], list2[80];
	cout << "Enter list1: ";
	cin >> n1;
	for(int i = 0; i < n1; i++)
	{
		int v;
		cin >> v;
		list1[i] = v;
	}
	cout << "Enter list2: ";
	cin >> n2;
	for(int i = 0; i < n2; i++)
	{
		int v;
		cin >> v;
		list2[i] = v;
	}
	int list3[160];
	merge(list1, n1, list2, n2, list3);
}

