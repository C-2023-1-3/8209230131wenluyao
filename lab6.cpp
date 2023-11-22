#include<iostream>
using namespace std;
int main()
{
	char ch = 'a';
	cout << "请输入一个字母" << endl;
	cin >> ch;
	int x = int(ch);
	if (x >= 97 && x <= 122)
	{
		x -= 32;
		cout << "其对应的大写字母为" << char(x) << endl;

	}
	else {
		x += 1;
		cout << "其后继字符的ASCll码值为" << endl;
		cout << x << endl;
	}
	return 0;
}