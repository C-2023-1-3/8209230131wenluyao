#include<iostream>
using namespace std;


void chan(int* a, int* b)
{
	int temp;
	if (*a > *b)
	{
		temp = *b;
		*b = *a;
		*a = temp;
	}
}
int main()
{
	int size1, size2;//�����������ʾ��̬����ĳ���
	cout << "�������һ�����������" << endl;//������1�ĳ��Ƚ��г�ʼ��
	cin >> size1;
	cout << "������ڶ������������" << endl;//������2�ĳ��ȳ�ʼ��
	cin >> size2;//��ʼ������

	int* list1 = new int[size1];//���嶯̬����1
	int* list2 = new int[size2];//���嶯̬����2
	int* list3 = new int[size1 + size2];//���嶯̬����3���ϲ�����1������2

	cout << "�������һ���������Ԫ�أ�" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << endl;

	cout << "������ڶ����������Ԫ�أ�" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	cout << endl;

	for (int j = 0; j < size1+size2 ; j++)//�ϲ�����1������2
	{
		if (j < size1)
		{
			list3[j] = list1[j];
		}
		else
		{
			list3[j] = list2[j - size1];
		}
	}

	for (int i = 0; i < size1 + size2; i++)
	{
		for (int j = i + 1; j < size1 + size2; j++) 
		{
			chan(&list3[i], &list3[j]);
		}
		cout << list3[i] << " ";
	}
	if(list1 != NULL)
	{
		delete[] list1;
		list1 = NULL;
	}
	if (list2 != NULL)
	{
		delete[] list2;
		list2 = NULL;
	}
	if (list3 != NULL)
	{
		delete[] list3;
		list3 = NULL;
	}
	cout << endl;
	return 0;
}