#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void getTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	void setTime()
	{
		cin >> hour >> minute >> sec;
	}
};
int main()
{
	Time t;
	t.setTime();
	t.getTime();
	return 0;
}
