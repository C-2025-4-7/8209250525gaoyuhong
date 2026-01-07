#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		this->x += i;
		this->y += j;
	}
	void display()
	{
		cout << "x=" << x << ",y=" << y << endl;
	}
};
int main()
{
	Point* p=new Point();
	p->setPoint(10, 20);
	p->display();
	delete p;
	return 0;
}
