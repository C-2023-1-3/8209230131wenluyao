#include<iostream>
using namespace std;
char guizi[100] = {};
char* p = guizi;
void chan(char* a)
{
	if (* a == true)
	{
		* a = false;
	}
	else
	{
		* a = true;
	}
}
int main()
{
	for (int s1 = 0; s1 < 100; s1++)//同学一打开柜子
	{
		guizi[s1] = true;
	}
	for (int s2 = 0; s2 < 100; s2 += 3)//同学二隔两个关闭柜子
	{
		guizi[s2] = false;
	}
	for (int i = 2; i < 100; i++)//2为s3即第三个同学，从他开始，依次遍历后面的同学
	{
		for (int j = i + 2; j < 100; j++)//从3开始间隔改变柜子状态
		{
			chan(&guizi[j]);
		}
	}
	for (int x = 0; x < 100; x++)//统计柜子开关情况
	{
		if (guizi[x] == true)
		{
			cout << x << " ";
		}
	}
	cout << endl;
	return 0;
}