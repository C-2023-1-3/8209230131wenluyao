#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout << "������һ���ַ�����" << endl;
	int n, a = 0, b = 0, c = 0, d = 0;
	while (n = getchar())
	{
		if (n == '\n')
			break;
		if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z')
			a++;
		else if (n >= '0' && n <= '9')
			b++;
		else if (n == ' ')
			c++;
		else
			d++;
	}
	cout << "���ַ�������ĸ�У�" << a << "��" << endl;
	cout << "���ַ����������У�" << b << "��" << endl;
	cout << "���ַ����пո��У�" << c << "��" << endl;
	cout << "���ַ����������ַ����У�" << d << "��" << endl;
	return 0;
}