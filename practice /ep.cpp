#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string name = "unknown";
	double salary=0.000;
public:
	void display()
	{
		cout<<"the name of the employee is :"<<name<<"   "<<"the salary of the employee is:"<<salary;
	}
	void disp();
};
void Employee::disp()
{
	cout<<"the name of the employee is :"<<name<<"   "<<"the salary of the employee is:"<<salary;
}
int main ()
{
Employee  e;
e.display();
e.disp();
return 0;
}

