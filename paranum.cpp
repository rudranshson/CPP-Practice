
#include <iostream>
using namespace std;

class Number
{
public:
	int num;
	Number(int val_num)
	{
		num = val_num;
	}
	void display ()
	{
		cout<<"the vaue of the number is :"<<num<<endl;

	}
};
int main ()
{
Number n(32);
n.display();
return 0;
}
