#include<iostream>
using namespace std;
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float S = 0;
	cout << "请输入三角形的三边" << endl;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		S = a + b + c;
			cout << "该三角形的周长为：" << S << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
	}
	else
	{
		cout << "此三边不能构成三角形" << endl;
	}
	return 0;

}