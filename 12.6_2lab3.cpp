#include"mytriangle.h"
int main()
{
	double a, b, c;
	cout << "请输入三角形三边" << endl;
	cin >> a >> b >> c;
	is_valid(a, b, c);
	if (is_valid(a, b, c) == 1)
	{
		double m;
		m = _area(a, b, c);
		cout << "三角形面积为：" << m;
	}
	else
	{
		cout << "该三边不构成三角形" << endl;
	}
	return 0;
}