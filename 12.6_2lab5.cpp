#include<iostream>
using namespace std;
int main()
{
	int x, y;
	y = 1;
	for (int i = 10; i > 1; i--)
	{
		y = 2 * y;
	}
	x = (y + 1) * 2;
	cout << "���ӹ��У�" << x << "��" << endl;
	return 0;
}