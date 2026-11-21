#include <iostream>
using namespace std;

class Book
{
public:
	int price;
	Book(){
		price=100;
		}
	void display()
	{
	cout<<"price of the book is:"<<price<<endl;
	}

};
int main ()
{
Book b;
b.display();
return 0;
}
