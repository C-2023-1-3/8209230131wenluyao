#include<iostream>
using namespace std;
int change(double* a,double* b)
{
	double temp;
	if (* a >* b)
	{
		temp =* b;
		* b = * a, * a = temp;
	}
	return 0;
}
double arr[10] = {};
int main()
{
	cout << "输入十个数字：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			change(&arr[i], &arr[j]);
		}
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;

}