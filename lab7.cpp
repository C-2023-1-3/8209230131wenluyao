#include<iostream>
using namespace std;
int main()
{
	double x = 0;
	double v = 0;
	cout << "������x��ֵ(0<x<10)" << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		v = 3 - 2 * x;
		cout << "v��ֵΪ" << v << endl;
	}
	else if (x >= 1 && x < 5)
	{
		v = 2 / (4 * x) + 1;
		cout << "v��ֵΪ" << v << endl;
	}
	else if (x >= 5 && x < 10)
	{
		v = x * x;
		cout << "v��ֵΪ" << v << endl;
	}
	else
	{
		cout << "�����x���ڷ�Χ��" << endl;
	}
	return 0;
}  