using namespace std;
#include<string>
class Student
{
public:
	void display();
	void set_value(int a,string str,char ch)
	{
		num = a;
		st = str;
		sex = ch;
	}
private:
	int num;
	string st;
	char sex;
};