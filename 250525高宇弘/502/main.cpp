#include<iostream>
#include "student.h"
using namespace std;
int main()
{
	Student stud;
	Student stud1(18, "Alice", 'F');
	stud1.display();
	return 0;
}