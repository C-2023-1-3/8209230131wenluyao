#include<iostream>
using namespace std;
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float S = 0;
	cout << "�����������ε�����" << endl;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		S = a + b + c;
			cout << "�������ε��ܳ�Ϊ��" << S << endl;
		if (a == b || a == c || b == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
	}
	else
	{
		cout << "�����߲��ܹ���������" << endl;
	}
	return 0;

}