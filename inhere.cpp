#include <iostream>
using namespace std;

class Animal
{
public:
	void eat()
	{
		cout<< "the animal is eating"<<endl;
	}
};

class Dog:public Animal
{
public:
	void bark(){
		cout<<"the animal is brking"<<endl;
	}
};
int main()
{
Dog d;
d.eat();
d.bark();
return 0;
}
