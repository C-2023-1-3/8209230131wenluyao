#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float T = 0, F = 0;
	cout << "�����뻪���¶�" << endl;
	cin >> F;
	T = (F - 32) / (1.8);
	cout << "��Ӧ�������¶�Ϊ" << fixed << setprecision(2) << T  << endl;
	return 0;
}