#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		int mid;
		mid = num % i;
		if (mid == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int j = 1;
	for (int i = 2; i < 200; i++)
	{
		is_prime(i);
		if (is_prime(i) == 1)
		{
			j++;
			if (j < 12)
			{
				cout << i << " ";
			}
			else {
				cout << endl;
				j = 1;
			}
		}
	}
	return 0;
}