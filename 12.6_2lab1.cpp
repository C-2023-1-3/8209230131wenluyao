#include<iostream>
using namespace std;
int dow(int m, int n)
{
	int temp;
	if (m < n)
	{
		temp = m, m = n, n = temp;
	}
	while (n != 0)
	{
		temp = m % n;
		m = n;
		n = temp;
	}
	return m;
}
int main()
{
	cout << "����������Ȼ��" << endl;
	unsigned int a, b;
	a = 0, b = 0;
	cin >> a >> b;
	int x;
	x = dow(a, b);
	cout << "�������Լ��Ϊ" << x << endl;
	cout << "��������С������Ϊ��" << a * b / x << endl;
	return 0;
}