#include<iostream>
using namespace std;
void chan(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
int main()
{
	int size;//��̬���鳤��
	cout << "��������Ԫ�ظ�����" << endl;
	cin >> size;
	int* list = new int[size];
	cout << "�����������Ԫ�أ�" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> list[i];
	}
	cout << endl;
	chan(list, size);
	int* p = list;
	cout << "�Ӵ�С����Ϊ��" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << " ";
	}
	if (list != NULL)
	{
		delete[] list;
		list = NULL;
	}
	return 0;
}