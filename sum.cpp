#include <iostream>
using namespace std;

class Addition
{
public:
	int sum;
	Addition(int a,int b)
	{
		sum = a+b;
	}
	void display()
	{
		cout <<"the sum of the a and b is "<<sum<<endl;
	}
};
int main()
{
Addition a(12,45);
a.display();
return 0;
}


		
