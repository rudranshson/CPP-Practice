#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	int roll=13;
	string name="unknown";
	void display();
};
void Student::display(){
	cout<<name<<roll<<endl;
}

int main()
{
Student s;
s.display();
return 0;
}



