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
	for (int s1 = 0; s1 < 100; s1++)//ͬѧһ�򿪹���
	{
		guizi[s1] = true;
	}
	for (int s2 = 0; s2 < 100; s2 += 3)//ͬѧ���������رչ���
	{
		guizi[s2] = false;
	}
	for (int i = 2; i < 100; i++)//2Ϊs3��������ͬѧ��������ʼ�����α��������ͬѧ
	{
		for (int j = i + 2; j < 100; j++)//��3��ʼ����ı����״̬
		{
			chan(&guizi[j]);
		}
	}
	for (int x = 0; x < 100; x++)//ͳ�ƹ��ӿ������
	{
		if (guizi[x] == true)
		{
			cout << x << " ";
		}
	}
	cout << endl;
	return 0;
}