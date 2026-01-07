#include<iostream>
using namespace std;
class Student
{
public:
	int num;
	int grade;

};
void max(Student studs[])
{
	int maxGrade = studs[0].grade;
	int maxNum = studs[0].num;
	for (int i = 1; i < 5; i++)
	{
		if (studs[i].grade > maxGrade)
		{
			maxGrade = studs[i].grade;
			maxNum = studs[i].num;
		}
	}
	cout<<maxNum << endl;
}
int main() {
	Student studs[5];
	for (int i = 0; i < 5; i++) 
	{
		cout << "请输入第" << i + 1 << "个学生的学号和成绩：" << endl;
		cin >> studs[i].num >> studs[i].grade;
	}
	max(studs);
	return 0;
}
