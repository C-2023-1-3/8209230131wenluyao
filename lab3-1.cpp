#include<iostream>
using namespace std;
class Time
{
private:
	int hour;//���ݳ�ԱӦ˽��
	int minute;
	int second;
public:
	void Input();//��Ա�������У�ʹ�ÿ��Դ��ⲿ����
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
	cout << "��ֱ�����ʱ���֣��룺" << endl;
	t1.Input();
	t1.Exput();
	return 0;
}