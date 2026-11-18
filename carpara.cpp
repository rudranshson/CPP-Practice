#include <iostream>
using namespace std;

class Circle
{
public:
	float radius;
	Circle(float r)
	{
		radius = r;
	}
	void display()
	{
		cout<<"the radius of the circle is "<<radius;
	}
};
int main()
{
Circle c(23.45);
c.display();
return 0;
}

