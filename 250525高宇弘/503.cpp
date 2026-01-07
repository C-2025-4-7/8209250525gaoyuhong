#include<iostream>
using namespace std;
class Geometry
{
private:
	double length;
	double width;
	double height;
public:
	void getData()
	{
		cin >> length >> width >> height;
	}
	void calculateArea()
	{
		double v = length * width*height;
		cout << "V: " << v << endl;
	}
};
int main() 
{
	for(int i = 0; i < 3; i++)
	{
		Geometry g;
		g.getData();
		g.calculateArea();
	}
	return 0;
}
