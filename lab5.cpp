#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float T = 0, F = 0;
	cout << "请输入华氏温度" << endl;
	cin >> F;
	T = (F - 32) / (1.8);
	cout << "对应的摄氏温度为" << fixed << setprecision(2) << T  << endl;
	return 0;
}