#include<iostream>
using namespace std;
int arr[10] = {};
int an[10] = {1};
char dicision(int a, int b)
{
	if (a != b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	cout << "������ʮ����" << endl;
	for (int a = 0; a < 10; a++)
	{
		cin >> arr[a];
	}
	cout << "���в�ͬ����Ϊ��";
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 11; j++)
		{
			dicision(arr[i], arr[j]);
			if (dicision(arr[i], arr[j]) == true)
			{
				an[i] = 1;
			}
			else
			{
				an[i] = 0;
				break;
			}
		}
		if (an[i] == 1)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	return 0;
}