#include<iostream>
using namespace std;
class Point
{
private:
	int x = 60;
	int y = 80;
public:
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "×ø±êÎª£º" <<"(" << x<<","<<y<<")" << endl;
	}
};
int main()
{
	Point p1;
	p1.setPoint(1, 2);
	p1.display();

	Point p2;
	p2.setPoint(3, 4);
	p2.display();

	Point p3;
	p3.setPoint(6, 7);
	p3.display();
	return 0;
}