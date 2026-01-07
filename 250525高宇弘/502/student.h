#include <string>
#pragma once
class Student
{
public:
	void display();
	Student();
	Student(int n, std::string nm, char s);
private:
	int num;
	std::string name;
	char sex;
};