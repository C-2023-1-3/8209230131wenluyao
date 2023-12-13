#include<iostream>
#include<string>
using namespace std;

const int MAX = 100;
int DecArr[MAX] = { 0 };

int parseHex(string hexString)
{
	long Dec = 0;
	int temp = 0;
	int count = 0;
	int DecCount = 0;
	int strlen = hexString.length();
	int StrLen = strlen;

	while (strlen--)
	{
		if (hexString[count] < '0' || (hexString[count] > '9' && hexString[count] < 'A') || (hexString[count] > 'F' && hexString[count] < 'a') || hexString[count]>'f')
		{
			cout << "����Ĳ���ʮ�����Ƹ�ʽ" << endl;
			return 0;
		}
		count++;
	}

	count = StrLen - 1;
	while (StrLen--)
	{
		if (hexString[count] >= '0' && hexString[count] <= '9')
		{
			DecArr[DecCount++] = hexString[count] - '0';
		}
		else if (hexString[count] >= 'A' && hexString[count] <= 'F')
		{
			DecArr[DecCount++] = hexString[count] - 'A' + 10;
		}
		else
		{
			DecArr[DecCount++] = hexString[count] - 'a' + 10;
		}
		count--;
	}

	int j = 0;
	for (int i = 0; i < DecCount; i++)
	{
		if (i < 1)
		{
			Dec = Dec + DecArr[i];
		}
		else
		{
			Dec = (Dec + (DecArr[i] * (16 << j)));
			j += 4;
		}
	}

	cout << Dec << endl;

	return 0;
}
int main()
{
	cout << "����ʮ����������";
	string Hex;
	cin >> Hex;
	cout << "ת��Ϊʮ���ƺ�Ϊ��";
	parseHex(Hex);

	return 0;
}