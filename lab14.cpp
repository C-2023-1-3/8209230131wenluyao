#include<iostream>
using namespace std;
int main()
{
	int a = 2;
	int sum = 0;
	int i = 0;
	while (a < 100)
	{
		sum = sum + a;
		i++;
		a *= 2;

	}
	double avar = (sum * (0.8) )/ i;
	cout << "ƽ��ÿ�컨��" << avar << "Ԫ" << endl;
	system("pause");
	return 0;
}