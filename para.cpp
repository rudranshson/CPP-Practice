#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int age;
public:
	Student(int sage,string sname)
	{
		age=sage;
		name= sname;
	}
	void display()
	{
		cout<<"The name of the student is:"<<name<<"\n the age of the student is :"<<age<<endl;
	}
};
int main()
{
Student s(18,"unknown");
s.display();
return 0;
}

