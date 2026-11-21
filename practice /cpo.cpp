#include <iostream>
using namespace std;

class Calculator
{
public:
	int a=445;
	int b=23;
	int multply();
	void display(){
	cout<<"the multiplication of the two number is :"<<multply();
}

};
int Calculator::multply(){
	return a * b;
}
int main ()
{
Calculator c;
c.display();
return 0;
}

