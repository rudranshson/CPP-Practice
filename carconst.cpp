#include <iostream>
using namespace std;

class Car
{
public:
	int car_model;
	Car(){
		car_model=101;
	}
	void display(){
		cout<<"the car modle is :"<<car_model<<endl;
		}
};
int main()
{
Car c;
c.display();
return 0;
}
