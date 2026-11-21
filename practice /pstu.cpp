#include <iostream>
using namespace std;

class Person
{
public:
	string name ="Rahul";
	int age =18;
	void display()
	{
		cout<<"name of the Person is:"<<name<<"\n Age of the person is :"<<age<<endl;
	}
};
class Student :public Person
{
public:
	void disp()
	{
		display();
	}
};
int main()
{
Student s;
s.disp();
return 0;
}

