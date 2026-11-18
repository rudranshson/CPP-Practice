#include <iostream>
using namespace std;

class Number
{
public:
	int number=4;
	void display ()
	{
		cout<<"the cube of the number is :"<<cube();
	}
	int cube();
};
int Number::cube()
{
	return number * number;
}
int main ()
{
Number n;
n.display();
return 0;
}
