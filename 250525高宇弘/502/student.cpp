#include "student.h"
#include <iostream>
void Student::display()
{
	std::cout << "num: " << num << std::endl;
	std::cout << "name: " << name << std::endl;
	std::cout << "sex: " << sex << std::endl;
}
Student::Student(int n, std::string nm, char s)
{
	num = n;
	name = nm;
	sex = s;
}
Student::Student(){}