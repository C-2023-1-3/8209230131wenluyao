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
	cout << "输入两个自然数" << endl;
	unsigned int a, b;
	a = 0, b = 0;
	cin >> a >> b;
	int x;
	x = dow(a, b);
	cout << "两数最大公约数为" << x << endl;
	cout << "两个数最小公倍数为：" << a * b / x << endl;
	return 0;
}