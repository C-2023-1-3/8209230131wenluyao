#include<iostream>
using namespace std;
int main()
{
	const float PI = 3.1415926f;
	float r = 0, h = 0;
	cout << "������Բ׶�׵İ뾶" << "  ";
	cin >> r;
	cout << endl;
	cout << "������Բ׶�ĸ�" << "  ";
	cin >> h;
	cout << endl;
	float s = (PI * r * r * h) / 3;
	cout << "Բ׶�����Ϊ" << s << endl;
	return 0;

}