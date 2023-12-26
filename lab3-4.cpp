#include<iostream>
using namespace std;
class Student
{
public:
	Student(int i, int s) :id(i), score(s) {}
	friend void max(Student*);
private:
	int id, score;
};
void max(Student* p)
{
	Student* x;
	x = p;
	int i, temp;
	temp = p->score;
	for (i = 0; i < 5; i++)
	{
		if (temp < (p + i)->score)
		{
			temp = (p + i)->score;
			x = (p + i);
		}
	}
	cout << "成绩最高者的学号为： " << x->id << endl;
}
int main()
{
	Student stu[5] = { Student(2301,96),Student(2302,82),Student(2303,69),Student(2304,98),Student(2305,100) };
	Student* p = stu;
	max(p);
	return 0;
}
