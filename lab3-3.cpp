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
		cout << "请输入长方体的长：" << " ";
		cin >> length;
		cout << "请输入长方体的宽：" << " ";
		cin >> width;
		cout << "请输入长方体的高：" << " ";
		cin >> heigh;
		double V = length * width * heigh;
		return V;
	}
};
int main()
{
	Cuboid C1;
	cout <<"长方体的体积为：" << C1.Bulk() << endl;
	Cuboid C2;
	cout << "长方体的体积为：" << C2.Bulk() << endl;
	Cuboid C3;
	cout << "长方体的体积为：" << C3.Bulk() << endl;
	return 0;
}

