#include<iostream>
using namespace std;
int main()
{
	int n, m,x,y;
	cout << "请输入两个正整数" << endl;
	cin >> n >> m;
	x = n, y = m;
	int a = 1;  
	if (n % m == 0 || m % n == 0) 
	{
		m = m < n ? m : n;
	}

	while ((a = n % m) != 0)
	{
	
		m = a;
	}
	cout << "最大公约数为：" << m << endl;
	cout << "最小公倍数为：" << x * y / m << endl;
	return 0;
}
