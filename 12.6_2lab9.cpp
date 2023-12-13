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
	int size1, size2;//定义变量来表示动态数组的长度
	cout << "请输入第一个数组个数：" << endl;//对数组1的长度进行初始化
	cin >> size1;
	cout << "请输入第二个数组个数：" << endl;//对数组2的长度初始化
	cin >> size2;//初始化变量

	int* list1 = new int[size1];//定义动态数组1
	int* list2 = new int[size2];//定义动态数组2
	int* list3 = new int[size1 + size2];//定义动态数组3来合并数组1和数组2

	cout << "请输入第一个数组具体元素：" << endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << endl;

	cout << "请输入第二个数组具体元素：" << endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	cout << endl;

	for (int j = 0; j < size1+size2 ; j++)//合并数组1和数组2
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