#include"mytriangle.h"
int main()
{
	double a, b, c;
	cout << "����������������" << endl;
	cin >> a >> b >> c;
	is_valid(a, b, c);
	if (is_valid(a, b, c) == 1)
	{
		double m;
		m = _area(a, b, c);
		cout << "���������Ϊ��" << m;
	}
	else
	{
		cout << "�����߲�����������" << endl;
	}
	return 0;
}