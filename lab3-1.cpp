#include<iostream>
using namespace std;
class Time
{
private:
	int hour;//数据成员应私有
	int minute;
	int second;
public:
	void Input();//成员函数共有，使得可以从外部调用
	void Exput()
	{
		cout << "Now time is: " << " ";
		cout << hour << ": " << minute << ": " << second << endl;
	}
};
void Time::Input()
{
	cin >> hour;
	cin >> minute;
	cin >> second;

}
int main()
{
	Time t1;
	cout << "请分别输入时，分，秒：" << endl;
	t1.Input();
	t1.Exput();
	return 0;
}