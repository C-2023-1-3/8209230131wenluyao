#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	double n, m,a;
	cout << "������һ������ ��" << endl;
	cin >> a;
	n = a;
	m = (n + a / n) / 2;
	while (n-m>=1e-5)
	{
		n = m;
		m = (n + a / n) / 2;
		
	}
	cout << "���������ƽ����Ϊ��" << m << endl;
	return 0;
}