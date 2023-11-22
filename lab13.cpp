#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	double n, m,a;
	cout << "请输入一个正数 ：" << endl;
	cin >> a;
	n = a;
	m = (n + a / n) / 2;
	while (n-m>=1e-5)
	{
		n = m;
		m = (n + a / n) / 2;
		
	}
	cout << "输入的数的平方根为：" << m << endl;
	return 0;
}