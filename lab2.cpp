#include<iostream>
using namespace std;
int main()
{
	const float PI = 3.1415926f;
	float r = 0, h = 0;
	cout << "请输入圆锥底的半径" << "  ";
	cin >> r;
	cout << endl;
	cout << "请输入圆锥的高" << "  ";
	cin >> h;
	cout << endl;
	float s = (PI * r * r * h) / 3;
	cout << "圆锥的体积为" << s << endl;
	return 0;

}