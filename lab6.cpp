#include<iostream>
using namespace std;
int main()
{
	char ch = 'a';
	cout << "������һ����ĸ" << endl;
	cin >> ch;
	int x = int(ch);
	if (x >= 97 && x <= 122)
	{
		x -= 32;
		cout << "���Ӧ�Ĵ�д��ĸΪ" << char(x) << endl;

	}
	else {
		x += 1;
		cout << "�����ַ���ASCll��ֵΪ" << endl;
		cout << x << endl;
	}
	return 0;
}