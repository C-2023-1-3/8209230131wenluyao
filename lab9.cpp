#include<iostream>
using namespace std;
int main()
{
	int C = 0;
	cout << "��ѡ��Ҫ���к��ּ��㣺1���ӷ���2��������3���˷���4������" << endl;
	cin >> C;
	switch(C)
	{
	case(1) :
	    {
		float a, b, c;
		cout << "��������мӷ���������" << endl;
		cin >> a >> b;
		c = a + b;
		cout << "����֮��Ϊ" << c << endl;
		break;
	    }
	case(2) :
	    {
		float d, e, f;
		cout << "���������뱻�����ͼ���" << endl;
		cin >> d >> e;
		f = d - e;
		cout << "����֮��Ϊ" << f << endl;
		break;
	    }
	case(3):
	    {
		float g, h ,i;
		cout << "�����������������г˷�" << endl;
		cin >> g >> h;
		i = g * h;
		cout << "����֮��Ϊ" << i << endl;
		break;
	    }
	case(4):
	    {
		float x, y, z;
		cout << "��������������ͱ�����" << endl;
		cin >> x >> y;
		if (x == 0) { cout << "��������Ϊ0��" << endl; }
		else
		   {
			z = y / x;
			cout << "����֮��Ϊ" << z << endl;
		   }
		break;
	    }
	}
	return 0;
}