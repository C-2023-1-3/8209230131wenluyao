#include<iostream>
using namespace std;
int main()
{
	int C = 0;
	cout << "请选择要进行何种计算：1，加法；2，减法；3，乘法；4，除法" << endl;
	cin >> C;
	switch(C)
	{
	case(1) :
	    {
		float a, b, c;
		cout << "请输入进行加法的两个数" << endl;
		cin >> a >> b;
		c = a + b;
		cout << "两数之和为" << c << endl;
		break;
	    }
	case(2) :
	    {
		float d, e, f;
		cout << "请依次输入被减数和减数" << endl;
		cin >> d >> e;
		f = d - e;
		cout << "两数之差为" << f << endl;
		break;
	    }
	case(3):
	    {
		float g, h ,i;
		cout << "请输入两个数来进行乘法" << endl;
		cin >> g >> h;
		i = g * h;
		cout << "两数之积为" << i << endl;
		break;
	    }
	case(4):
	    {
		float x, y, z;
		cout << "请依次输入除数和被除数" << endl;
		cin >> x >> y;
		if (x == 0) { cout << "除数不能为0！" << endl; }
		else
		   {
			z = y / x;
			cout << "两数之商为" << z << endl;
		   }
		break;
	    }
	}
	return 0;
}