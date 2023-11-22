#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	cout << "请输入一串字符串：" << endl;
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
	cout << "该字符串中字母有：" << a << "个" << endl;
	cout << "该字符串中数字有：" << b << "个" << endl;
	cout << "该字符串中空格有：" << c << "个" << endl;
	cout << "该字符串中其他字符串有：" << d << "个" << endl;
	return 0;
}