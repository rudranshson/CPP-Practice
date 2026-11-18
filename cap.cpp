#include <iostream>
using namespace std;

class Calculator
{
public:
	int a= 12,b=44;
	int add()
	{
		int sum =a+b;
	return sum;
	}


};
class Calculation:public Calculator
{
public:
	int minus()
	{
		int sub = a-b;
		return sub;
	}
	void display()
	{
		cout <<" the addition of the a and b is :"<<add()<<endl;
		cout<<"the substraction of the number is:"<<minus()<<endl;
	}
};
int main()
{
Calculation c;
c.display();
return 0;
}

