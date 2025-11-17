#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint=65534;//oxfffe
	cout << "output in unsigned int 1 type:"<< testUnint<< endl;//<<oct;
	cout << "output in char type:!" << char(testUnint)<< endl;
	cout << "output in short type:" << short(testUnint)<< endl;//为什么结果为-2?:short为16位有符号数，0xfffe补码表示-2
	cout << "output in int type:" << int(testUnint)<< endl;
	cout << "output in double type:"<< double(testUnint)<< endl;
	cout << "output in double type:" <<setprecision(4)<< double(testUnint)<< endl;
	cout << "output in Hex unsigned int type:" <<oct<< testUnint<< endl; //8进制输出
	system("pause");
	return 0;
}
