#include<iostream>
using namespace std;
int main()
{
	int n, m,x,y;
	cout << "����������������" << endl;
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
	cout << "���Լ��Ϊ��" << m << endl;
	cout << "��С������Ϊ��" << x * y / m << endl;
	return 0;
}
