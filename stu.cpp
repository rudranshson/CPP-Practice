#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	string name;
	int age;
	void input()
	{
		cout<<"enter the student name"<<endl;
		cin>>name;
		cout<<"enter the student age"<<endl;
		cin>>age;
	}
	void display()
	{
		cout<<"name of the student is:"<<name;
		cout<<"age of the student is :"<<age;
	}

};
int main()
{

Student s;
s.input();
s.display();
return 0;
}
