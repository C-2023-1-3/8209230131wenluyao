#include<iostream>
using namespace std;
class Cuboid
{
private:
	double length;
	double width;
	double heigh;
public:
	double Bulk()
	{
		cout << "�����볤����ĳ���" << " ";
		cin >> length;
		cout << "�����볤����Ŀ�" << " ";
		cin >> width;
		cout << "�����볤����ĸߣ�" << " ";
		cin >> heigh;
		double V = length * width * heigh;
		return V;
	}
};
int main()
{
	Cuboid C1;
	cout <<"����������Ϊ��" << C1.Bulk() << endl;
	Cuboid C2;
	cout << "����������Ϊ��" << C2.Bulk() << endl;
	Cuboid C3;
	cout << "����������Ϊ��" << C3.Bulk() << endl;
	return 0;
}

